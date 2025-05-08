(metadata) @comment
(comment) @comment
(block_comment) @comment

(mode_key) @keyword
(mode_value) @constant

[
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  ":"
  "%"
  "|"
] @punctuation.special

(ingredient
  "@" @punctuation.delimiter
  (name)? @string.special.symbol
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(recipe_ref
  "@@" @punctuation.delimiter
  (name)? @markup.link
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(ingredient_ref
  "@&" @punctuation.delimiter
  (name)? @string.special.symbol.readonly
  (step_ref)? @string.special.symbol.readonly
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(hidden_ingredient
  "@-" @punctuation.delimiter
  (name)? @string.special.symbol.dashed
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(optional_ingredient
  "@?" @punctuation.delimiter
  (name)? @string.special.symbol.faded
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(new_ingredient
  "@+" @punctuation.delimiter
  (name)? @string.special.symbol.bold
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(timer
  "~" @punctuation.delimiter
  (name)? @string.special.symbol
  (amount
    (quantity)? @number
    (units)? @constant)?
)

(cookware
  "#" @punctuation.delimiter
  (name)? @string.special.symbol
  (amount
    (quantity)? @number
    (units)? @constant)?
)
