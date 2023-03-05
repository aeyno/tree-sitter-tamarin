"rule" @keyword
"let" @keyword
"in" @keyword
"theory" @keyword
"begin" @keyword
"end" @keyword
"functions" @keyword
"builtins" @keyword
"restriction" @keyword
"equations" @keyword
"lemma" @keyword

;"In" @type.builtin
;"Out" @type.builtin
;"Fr" @type.builtin

(built_in) @type.builtin
(lemma_attr) @type.builtin

;(ident) @type
(natural) @number
(comment) @comment
(formal_comment (ident) @type) @comment

(simple_rule (ident) @type)

(lemma (ident) @type)
(restriction (ident) @type)

(quantifier) @operator
[ "*" "+" "-" "=" "~" "!" "==>" "<=>" "#" "@" "&"] @operator

(function_sym (ident)@function.builtin (arity) @number)

(app (ident) @function.builtin)
(fact (ident) @function)
; (function_declaration name: (identifier) @function)

