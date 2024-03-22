const PREC = {
  step: 2,
  modifier: 3,
  amount: 4,
  multiword: 10,
  quantity: 11,
}

module.exports = grammar({
  name: 'cooklang',

  extras: ($) => [
    $.comment,
    $.block_comment,
    $._whitespace,
  ],

  rules: {
    source_file: $ => repeat($._block),
    _block: $ => choice(
      $.metadata,
      $.step,
      $.comment,
      $.block_comment,
      /\n/
    ),

    metadata_key: $ => repeat1(/[^:]/),
    metadata_value: $ => repeat1(/[^\n]/),
    metadata: $ => seq(
      ">>",
      field("metadata_key", $.metadata_key),
      ":",
      $._whitespace,
      field("metadata_value", $.metadata_value) 
    ),

    step: $ => seq(repeat1(choice(
      $.ingredient,
      $._text_item, 
      $.timer,
      $.cookware)),
      /\n/
    ),

    comment:            $ => token(seq("--", /.*/)),
    block_comment:      $ => token(seq("[-", /[^-]*-+(?:[^]-][^-]*-+)*/, "]")),

    _name_word:         $ => /[^@{}#~%]+/,
    _name_multiword:    $ => seq($._name_word, repeat1(seq(repeat1($._whitespace), $._name_word))),

    ingredient:         $ => choice(
      seq("@", $._name_word),
      seq("@", choice($._name_word, $._name_multiword), seq("{", optional($.amount), "}")),
    ),
    cookware:           $ => choice(
      seq("#", $._name_word),
      seq("#", choice($._name_word, $._name_multiword), seq("{", optional($.amount), "}")),
    ),
    timer:              $ => seq("~", optional($.name), "{", optional($.amount), "}"),

    name:               $ => choice($._name_word, $._name_multiword),
    quantity:           $ => choice($._number, $._name_word, $._name_multiword),
    units:              $ => choice($._name_word, $._name_multiword, $._punctuation),
    amount:             $ => seq($.quantity, optional(seq("%", $.units))),

    _number:            $ => /(?:\d+\.\d+|\d+\/\d+|\d+)/,

    _alphabetic:        $ => /\p{L}/,
    _whitespace:        $ => /[\p{Zs}\t]/,
    _punctuation:       $ => /[\p{P}&&[^{}:@#~]]+/,
  
    _text_item:         $ => /[^@#~>\-{}]+/,
  }
});