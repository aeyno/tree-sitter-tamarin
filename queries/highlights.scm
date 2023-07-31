(security_protocol_theory (ident) @type)

(security_protocol_theory [ "theory" "begin" "end" ] @keyword)

(functions "functions" @keyword)

(equations "equations" @keyword)

(built_ins "builtins" @keyword)

(global_heuristic "heuristic" @keyword)

(tactic 
  "tactic" @keyword
  (ident) @type)

(presort "presort" @keyword)

(prio "prio" @keyword)

(deprio "deprio" @keyword)

(let_block [ "let" "in" ] @keyword)

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

(simple_rule
  "rule" @keyword
  (ident) @type)

(rule_attr ["color=" "colour="]@type.builtin (hexcolor) @constant.numeric.integer)

(tuple_term ["<" ">"] @punctuation.bracket)

(lemma
  "lemma" @keyword 
  (ident) @type)

(trace_quantifier) @type.builtin

(restriction 
  "restriction" @keyword
  (ident) @type)

(quantifier) @operator
[ "++" "%+" "*" "+" "-" "=" "~" "!" "==>" "<=>" "#" "@" "&" "$" "%" ] @operator
[ "," ] @punctuation.delimiter
(negation [ "not" "¬"] @function.builtin)
(literal [ "'" (ident)] @string)

(function_sym (ident)@function.builtin (arity) @number)

(app (ident) @function)
(app ["(" ")"] @punctuation.bracket)
(fact ["(" ")"] @punctuation.bracket)
(fact (ident) @type)

(preprocessor_block [ "#ifdef" "#endif" ] @keyword (ident) @type)
