[
  "rule"
  "let"
  "in"
  "theory"
  "begin"
  "end"
  "functions"
  "builtins"
  "restriction"
  "equations"
  "lemma"
  "tactic"
  "presort"
  "prio"
  "deprio"
] @keyword

(security_protocol_theory (ident) @type)

(function_name) @type.builtin

(not_function ["\"" (param)] @string)
(tactic (ident) @type)
[
  (standard_goal_ranking)
  (oracle_goal_ranking)
  (function_name)
  (post_ranking)
] @constant

(not_function "not" @operator)

;"In" @type.builtin
;"Out" @type.builtin
;"Fr" @type.builtin

(built_in) @type.builtin
(lemma_attr) @type.builtin

;(ident) @type
(natural) @number
(hexcolor) @number
[(comment) (multiline_comment)] @comment
(formal_comment (ident) @type) @comment

(simple_rule (ident) @type)

(lemma (ident) @type)
(restriction (ident) @type)

(quantifier) @operator
[ "*" "+" "-" "=" "~" "!" "==>" "<=>" "#" "@" "&"] @operator
(literal [ "'" (ident)] @string) 

(function_sym (ident)@function.builtin (arity) @number)

(app (ident) @function.builtin)
(fact (ident) @function)
