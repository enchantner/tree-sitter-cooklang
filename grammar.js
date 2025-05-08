module.exports = grammar({
  name: "cooklang",

  extras: ($) => [$.comment, $.block_comment, $._whitespace],

  rules: {
    source_file: ($) => repeat($._block),
    _block: ($) => choice($.metadata, $.step, $.comment, $.block_comment, /\n/),

    metadata_key: ($) => choice($.mode_key, /[^:\[\]]+/),
    mode_key: ($) => seq("[", choice("mode", "define", "duplicate"), "]"),
    metadata_value: ($) => choice($.mode_value, /[^\n]+\n/),
    mode_value: ($) =>
      choice(
        // mode/define values
        seq(
          choice(
            "all",
            "default",
            "ingredients",
            "components",
            "steps",
            "text",
          ),
          /\n/,
        ),
        // duplicate values
        seq(choice("new", "default", "reference", "ref"), /\n/),
      ),
    metadata: ($) => seq(">>", $.metadata_key, ":", $.metadata_value),

    step: ($) =>
      seq(
        repeat1(
          choice(
            $.ingredient,
            $.recipe_ref,
            $.ingredient_ref,
            $.hidden_ingredient,
            $.optional_ingredient,
            $.new_ingredient,
            $._text_item,
            $.timer,
            $.cookware,
          ),
        ),
        /\n/,
      ),

    comment: ($) => token(seq("--", /.*/)),
    block_comment: ($) => token(seq("[-", /[^-]*-+(?:[^]-][^-]*-+)*/, "]")),

    _name_word: ($) => repeat1(choice($._alphabetic, $._numeric)),
    _name_multiword: ($) =>
      seq($._name_word, repeat1(seq(repeat1($._whitespace), $._name_word))),
    _alias: ($) => seq("|", choice($._name_word, $._name_multiword)),

    recipe_ref: ($) =>
      prec.left(
        4,
        choice(
          seq(
            "@@",
            $._name_word,
            optional($._alias),
            optional(seq("{", optional($.amount), "}")),
          ),
          seq(
            "@@",
            $._name_multiword,
            optional($._alias),
            seq("{", optional($.amount), "}"),
          ),
        ),
      ),
    step_ref: ($) =>
      choice(
        seq("(~", $._numeric, ")"),
        seq("(", $._numeric, ")"),
        seq("(=", $._numeric, ")"),
        seq("(=~", $._numeric, ")"),
      ),
    ingredient_ref: ($) =>
      prec.left(
        4,
        choice(
          seq(
            "@&",
            optional($.step_ref),
            $._name_word,
            optional($._alias),
            optional(seq("{", optional($.amount), "}")),
          ),
          seq(
            "@&",
            optional($.step_ref),
            $._name_multiword,
            optional($._alias),
            seq("{", optional($.amount), "}"),
          ),
        ),
      ),
    hidden_ingredient: ($) =>
      prec.left(
        4,
        choice(
          seq(
            "@-",
            $._name_word,
            optional($._alias),
            optional(seq("{", optional($.amount), "}")),
          ),
          seq(
            "@-",
            $._name_multiword,
            optional($._alias),
            seq("{", optional($.amount), "}"),
          ),
        ),
      ),
    optional_ingredient: ($) =>
      prec.left(
        4,
        choice(
          seq(
            "@?",
            $._name_word,
            optional($._alias),
            optional(seq("{", optional($.amount), "}")),
          ),
          seq(
            "@?",
            $._name_multiword,
            optional($._alias),
            seq("{", optional($.amount), "}"),
          ),
        ),
      ),
    new_ingredient: ($) =>
      prec.left(
        4,
        choice(
          seq(
            "@+",
            $._name_word,
            optional($._alias),
            optional(seq("{", optional($.amount), "}")),
          ),
          seq(
            "@+",
            $._name_multiword,
            optional($._alias),
            seq("{", optional($.amount), "}"),
          ),
        ),
      ),
    ingredient: ($) =>
      prec.left(
        3,
        choice(
          seq(
            "@",
            $._name_word,
            optional($._alias),
            optional(seq("{", optional($.amount), "}")),
          ),
          seq(
            "@",
            $._name_multiword,
            optional($._alias),
            seq("{", optional($.amount), "}"),
          ),
        ),
      ),
    cookware: ($) =>
      choice(
        seq(
          "#",
          $._name_word,
          optional($._alias),
          optional(seq("{", optional($.amount), "}")),
        ),
        seq(
          "#",
          $._name_multiword,
          optional($._alias),
          seq("{", optional($.amount), "}"),
        ),
      ),
    timer: ($) => seq("~", optional($.name), "{", optional($.amount), "}"),

    name: ($) => choice($._name_word, $._name_multiword),
    quantity: ($) => choice($._number, $._name_word, $._name_multiword),
    units: ($) => choice($._name_word, $._name_multiword, $._punctuation),
    amount: ($) =>
      choice(
        seq($.quantity, optional(seq("%", $.units))),
        seq(choice($._number, $._range), $._whitespace, $.units),
        seq($._range, optional(seq("%", $.units))),
      ),

    _number: ($) => /(?:\d+\.\d+|\d+\/\d+|\d+)/,
    _range: ($) => /(?:\d+\.\d+-\d+\.\d+|\d+-\d+)/,

    _alphabetic: ($) => /[\p{L}-]+/,
    _numeric: ($) => /[\p{Nd}]+/,
    _whitespace: ($) => /[\p{Zs}\t]/,
    _punctuation: ($) => /[\p{P}&&[^{}:@#~]]+/,

    _text_item: ($) => /[^@#~>\-{}]+/,
  },
});
