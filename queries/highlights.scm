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

(not_function "not" @function.builtin)


(builtin_facts) @function.builtin

(built_in) @type.builtin
(lemma_attr) @type.builtin

(natural) @constant.numeric.integer
(arity) @constant.numeric.integer
[(comment) (multiline_comment)] @comment
(formal_comment (ident) @type) @comment

(simple_rule (ident) @type)
(rule_attr ["color=" "colour="]@type.builtin (hexcolor) @constant.numeric.integer)

(tuple_term ["<" ">"] @punctuation.bracket)

(lemma (ident) @type)
(restriction (ident) @type)

(quantifier) @operator
[ "++" "%+" "*" "+" "-" "=" "~" "!" "==>" "<=>" "#" "@" "&" "$" "%" ] @operator
[ "," ] @punctuation.delimiter
(literal [ "'" (ident)] @string) 

(function_sym (ident)@function.builtin (arity) @number)

(app (ident) @function)
(app ["(" ")"] @punctuation.bracket)
(fact ["(" ")"] @punctuation.bracket)
(fact (ident) @type)
