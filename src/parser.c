#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 626
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 122
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_theory = 1,
  anon_sym_begin = 2,
  anon_sym_end = 3,
  sym_ident = 4,
  anon_sym_functions = 5,
  anon_sym_COLON = 6,
  anon_sym_COMMA = 7,
  anon_sym_SLASH = 8,
  anon_sym_LBRACKprivate_RBRACK = 9,
  aux_sym_arity_token1 = 10,
  anon_sym_equations = 11,
  anon_sym_EQ = 12,
  anon_sym_builtins = 13,
  anon_sym_diffie_DASHhellman = 14,
  anon_sym_hashing = 15,
  anon_sym_symmetric_DASHencryption = 16,
  anon_sym_asymmetric_DASHencryption = 17,
  anon_sym_signing = 18,
  anon_sym_bilinear_DASHpairing = 19,
  anon_sym_xor = 20,
  anon_sym_multiset = 21,
  anon_sym_revealing_DASHsigning = 22,
  anon_sym_heuristic = 23,
  sym_goal_ranking = 24,
  anon_sym_left = 25,
  anon_sym_right = 26,
  anon_sym_rule = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_DASH_DASH_GT = 30,
  anon_sym_DASH_DASH_LBRACK = 31,
  anon_sym_RBRACK_DASH_GT = 32,
  anon_sym_variants = 33,
  anon_sym_LPAREN = 34,
  anon_sym_modulo = 35,
  anon_sym_E = 36,
  anon_sym_AC = 37,
  anon_sym_RPAREN = 38,
  anon_sym_color_EQ = 39,
  anon_sym_colour_EQ = 40,
  anon_sym_let = 41,
  anon_sym_in = 42,
  anon_sym_DOT = 43,
  anon_sym_msg = 44,
  anon_sym_restriction = 45,
  anon_sym_DQUOTE = 46,
  anon_sym_lemma = 47,
  anon_sym_sources = 48,
  anon_sym_reuse = 49,
  anon_sym_use_induction = 50,
  anon_sym_hide_lemma_EQ = 51,
  anon_sym_heuristic_EQ = 52,
  anon_sym_all_DASHtrace = 53,
  anon_sym_exists_DASHtrace = 54,
  anon_sym_SOLVED = 55,
  anon_sym_by = 56,
  anon_sym_case = 57,
  anon_sym_next = 58,
  anon_sym_qed = 59,
  anon_sym_sorry = 60,
  anon_sym_simplify = 61,
  anon_sym_solve = 62,
  anon_sym_contradiction = 63,
  anon_sym_induction = 64,
  anon_sym_ = 65,
  anon_sym_AT = 66,
  anon_sym_TILDE_TILDE_GT = 67,
  anon_sym_2 = 68,
  anon_sym_splitEqs = 69,
  anon_sym_POUND = 70,
  anon_sym_node = 71,
  anon_sym_3 = 72,
  anon_sym_4 = 73,
  anon_sym_5 = 74,
  anon_sym_6 = 75,
  anon_sym_7 = 76,
  anon_sym_8 = 77,
  anon_sym_9 = 78,
  anon_sym_10 = 79,
  anon_sym_11 = 80,
  anon_sym_12 = 81,
  anon_sym_LBRACE_STAR = 82,
  aux_sym_formal_comment_token1 = 83,
  anon_sym_STAR_RBRACE = 84,
  anon_sym_LT = 85,
  anon_sym_GT = 86,
  anon_sym_PLUS = 87,
  anon_sym_XOR = 88,
  anon_sym_13 = 89,
  anon_sym_STAR = 90,
  anon_sym_CARET = 91,
  anon_sym_SQUOTE = 92,
  anon_sym_TILDE_SQUOTE = 93,
  anon_sym_DOLLAR = 94,
  anon_sym_pub = 95,
  anon_sym_TILDE = 96,
  anon_sym_fresh = 97,
  anon_sym_BANG = 98,
  anon_sym_DASH = 99,
  anon_sym_no_precomp = 100,
  anon_sym_LT_EQ_GT = 101,
  anon_sym_14 = 102,
  anon_sym_EQ_EQ_GT = 103,
  anon_sym_15 = 104,
  anon_sym_PIPE = 105,
  anon_sym_16 = 106,
  anon_sym_AMP = 107,
  anon_sym_17 = 108,
  anon_sym_not = 109,
  anon_sym_18 = 110,
  anon_sym_19 = 111,
  anon_sym_F = 112,
  anon_sym_20 = 113,
  anon_sym_T = 114,
  anon_sym_last = 115,
  anon_sym_Ex = 116,
  anon_sym_21 = 117,
  anon_sym_All = 118,
  anon_sym_22 = 119,
  sym_hexcolor = 120,
  sym_comment = 121,
  sym_source_file = 122,
  sym_security_protocol_theory = 123,
  sym_body = 124,
  sym__signature_spec = 125,
  sym_functions = 126,
  sym_function_sym = 127,
  sym_arity = 128,
  sym_equations = 129,
  sym_equation = 130,
  sym_built_ins = 131,
  sym_built_in = 132,
  sym_global_heuristic = 133,
  sym_rule = 134,
  sym_simple_rule = 135,
  sym_variants = 136,
  sym_modulo = 137,
  sym_rule_attrs = 138,
  sym_rule_attr = 139,
  sym_let_block = 140,
  sym_msg_var = 141,
  sym_restriction = 142,
  sym_restriction_attrs = 143,
  sym_lemma = 144,
  sym_lemma_attrs = 145,
  sym_lemma_attr = 146,
  sym_trace_quantifier = 147,
  sym_proof_skeleton = 148,
  sym_proof_method = 149,
  sym_goal = 150,
  sym_node_var = 151,
  sym_natural = 152,
  sym_natural_subscr = 153,
  sym_formal_comment = 154,
  sym_tuple_term = 155,
  sym_msetterm = 156,
  sym_xorterm = 157,
  sym_multterm = 158,
  sym_expterm = 159,
  sym_term = 160,
  sym_nested = 161,
  sym_app = 162,
  sym_literal = 163,
  sym_nonnode_var = 164,
  sym_facts = 165,
  sym_fact = 166,
  sym_fact_annotes = 167,
  sym_fact_annote = 168,
  sym_formula = 169,
  sym_imp = 170,
  sym_disjunction = 171,
  sym_conjunction = 172,
  sym_negation = 173,
  sym_atom = 174,
  sym_lvar = 175,
  sym_quantifier = 176,
  aux_sym_body_repeat1 = 177,
  aux_sym_functions_repeat1 = 178,
  aux_sym_equations_repeat1 = 179,
  aux_sym_built_ins_repeat1 = 180,
  aux_sym_global_heuristic_repeat1 = 181,
  aux_sym_variants_repeat1 = 182,
  aux_sym_rule_attrs_repeat1 = 183,
  aux_sym_let_block_repeat1 = 184,
  aux_sym_lemma_attrs_repeat1 = 185,
  aux_sym_proof_skeleton_repeat1 = 186,
  aux_sym_goal_repeat1 = 187,
  aux_sym_natural_subscr_repeat1 = 188,
  aux_sym_tuple_term_repeat1 = 189,
  aux_sym_msetterm_repeat1 = 190,
  aux_sym_xorterm_repeat1 = 191,
  aux_sym_multterm_repeat1 = 192,
  aux_sym_expterm_repeat1 = 193,
  aux_sym_facts_repeat1 = 194,
  aux_sym_fact_annotes_repeat1 = 195,
  aux_sym_disjunction_repeat1 = 196,
  aux_sym_conjunction_repeat1 = 197,
  aux_sym_atom_repeat1 = 198,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_theory] = "theory",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_functions] = "functions",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACKprivate_RBRACK] = "[private]",
  [aux_sym_arity_token1] = "arity_token1",
  [anon_sym_equations] = "equations",
  [anon_sym_EQ] = "=",
  [anon_sym_builtins] = "builtins",
  [anon_sym_diffie_DASHhellman] = "diffie-hellman",
  [anon_sym_hashing] = "hashing",
  [anon_sym_symmetric_DASHencryption] = "symmetric-encryption",
  [anon_sym_asymmetric_DASHencryption] = "asymmetric-encryption",
  [anon_sym_signing] = "signing",
  [anon_sym_bilinear_DASHpairing] = "bilinear-pairing",
  [anon_sym_xor] = "xor",
  [anon_sym_multiset] = "multiset",
  [anon_sym_revealing_DASHsigning] = "revealing-signing",
  [anon_sym_heuristic] = "heuristic",
  [sym_goal_ranking] = "goal_ranking",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_rule] = "rule",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_DASH_DASH_LBRACK] = "--[",
  [anon_sym_RBRACK_DASH_GT] = "]->",
  [anon_sym_variants] = "variants",
  [anon_sym_LPAREN] = "(",
  [anon_sym_modulo] = "modulo",
  [anon_sym_E] = "E",
  [anon_sym_AC] = "AC",
  [anon_sym_RPAREN] = ")",
  [anon_sym_color_EQ] = "color=",
  [anon_sym_colour_EQ] = "colour=",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_DOT] = ".",
  [anon_sym_msg] = "msg",
  [anon_sym_restriction] = "restriction",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_lemma] = "lemma",
  [anon_sym_sources] = "sources",
  [anon_sym_reuse] = "reuse",
  [anon_sym_use_induction] = "use_induction",
  [anon_sym_hide_lemma_EQ] = "hide_lemma=",
  [anon_sym_heuristic_EQ] = "heuristic=",
  [anon_sym_all_DASHtrace] = "all-trace",
  [anon_sym_exists_DASHtrace] = "exists-trace",
  [anon_sym_SOLVED] = "SOLVED",
  [anon_sym_by] = "by",
  [anon_sym_case] = "case",
  [anon_sym_next] = "next",
  [anon_sym_qed] = "qed",
  [anon_sym_sorry] = "sorry",
  [anon_sym_simplify] = "simplify",
  [anon_sym_solve] = "solve",
  [anon_sym_contradiction] = "contradiction",
  [anon_sym_induction] = "induction",
  [anon_sym_] = "▶",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE_TILDE_GT] = "~~>",
  [anon_sym_2] = "∥",
  [anon_sym_splitEqs] = "splitEqs",
  [anon_sym_POUND] = "#",
  [anon_sym_node] = "node",
  [anon_sym_3] = "₀",
  [anon_sym_4] = "₁",
  [anon_sym_5] = "₂",
  [anon_sym_6] = "₃",
  [anon_sym_7] = "₄",
  [anon_sym_8] = "₅",
  [anon_sym_9] = "₆",
  [anon_sym_10] = "₇",
  [anon_sym_11] = "₈",
  [anon_sym_12] = "₉",
  [anon_sym_LBRACE_STAR] = "{*",
  [aux_sym_formal_comment_token1] = "formal_comment_token1",
  [anon_sym_STAR_RBRACE] = "*}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_XOR] = "XOR",
  [anon_sym_13] = "⊕",
  [anon_sym_STAR] = "*",
  [anon_sym_CARET] = "^",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_TILDE_SQUOTE] = "~'",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_pub] = "pub",
  [anon_sym_TILDE] = "~",
  [anon_sym_fresh] = "fresh",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_no_precomp] = "no_precomp",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_14] = "⇔",
  [anon_sym_EQ_EQ_GT] = "==>",
  [anon_sym_15] = "⇒",
  [anon_sym_PIPE] = "|",
  [anon_sym_16] = "∨",
  [anon_sym_AMP] = "&",
  [anon_sym_17] = "∧",
  [anon_sym_not] = "not",
  [anon_sym_18] = "¬",
  [anon_sym_19] = "⊥",
  [anon_sym_F] = "F",
  [anon_sym_20] = "⊤",
  [anon_sym_T] = "T",
  [anon_sym_last] = "last",
  [anon_sym_Ex] = "Ex",
  [anon_sym_21] = "∃",
  [anon_sym_All] = "All",
  [anon_sym_22] = "∀",
  [sym_hexcolor] = "hexcolor",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_security_protocol_theory] = "security_protocol_theory",
  [sym_body] = "body",
  [sym__signature_spec] = "_signature_spec",
  [sym_functions] = "functions",
  [sym_function_sym] = "function_sym",
  [sym_arity] = "arity",
  [sym_equations] = "equations",
  [sym_equation] = "equation",
  [sym_built_ins] = "built_ins",
  [sym_built_in] = "built_in",
  [sym_global_heuristic] = "global_heuristic",
  [sym_rule] = "rule",
  [sym_simple_rule] = "simple_rule",
  [sym_variants] = "variants",
  [sym_modulo] = "modulo",
  [sym_rule_attrs] = "rule_attrs",
  [sym_rule_attr] = "rule_attr",
  [sym_let_block] = "let_block",
  [sym_msg_var] = "msg_var",
  [sym_restriction] = "restriction",
  [sym_restriction_attrs] = "restriction_attrs",
  [sym_lemma] = "lemma",
  [sym_lemma_attrs] = "lemma_attrs",
  [sym_lemma_attr] = "lemma_attr",
  [sym_trace_quantifier] = "trace_quantifier",
  [sym_proof_skeleton] = "proof_skeleton",
  [sym_proof_method] = "proof_method",
  [sym_goal] = "goal",
  [sym_node_var] = "node_var",
  [sym_natural] = "natural",
  [sym_natural_subscr] = "natural_subscr",
  [sym_formal_comment] = "formal_comment",
  [sym_tuple_term] = "tuple_term",
  [sym_msetterm] = "msetterm",
  [sym_xorterm] = "xorterm",
  [sym_multterm] = "multterm",
  [sym_expterm] = "expterm",
  [sym_term] = "term",
  [sym_nested] = "nested",
  [sym_app] = "app",
  [sym_literal] = "literal",
  [sym_nonnode_var] = "nonnode_var",
  [sym_facts] = "facts",
  [sym_fact] = "fact",
  [sym_fact_annotes] = "fact_annotes",
  [sym_fact_annote] = "fact_annote",
  [sym_formula] = "formula",
  [sym_imp] = "imp",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_negation] = "negation",
  [sym_atom] = "atom",
  [sym_lvar] = "lvar",
  [sym_quantifier] = "quantifier",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_functions_repeat1] = "functions_repeat1",
  [aux_sym_equations_repeat1] = "equations_repeat1",
  [aux_sym_built_ins_repeat1] = "built_ins_repeat1",
  [aux_sym_global_heuristic_repeat1] = "global_heuristic_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_rule_attrs_repeat1] = "rule_attrs_repeat1",
  [aux_sym_let_block_repeat1] = "let_block_repeat1",
  [aux_sym_lemma_attrs_repeat1] = "lemma_attrs_repeat1",
  [aux_sym_proof_skeleton_repeat1] = "proof_skeleton_repeat1",
  [aux_sym_goal_repeat1] = "goal_repeat1",
  [aux_sym_natural_subscr_repeat1] = "natural_subscr_repeat1",
  [aux_sym_tuple_term_repeat1] = "tuple_term_repeat1",
  [aux_sym_msetterm_repeat1] = "msetterm_repeat1",
  [aux_sym_xorterm_repeat1] = "xorterm_repeat1",
  [aux_sym_multterm_repeat1] = "multterm_repeat1",
  [aux_sym_expterm_repeat1] = "expterm_repeat1",
  [aux_sym_facts_repeat1] = "facts_repeat1",
  [aux_sym_fact_annotes_repeat1] = "fact_annotes_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_theory] = anon_sym_theory,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACKprivate_RBRACK] = anon_sym_LBRACKprivate_RBRACK,
  [aux_sym_arity_token1] = aux_sym_arity_token1,
  [anon_sym_equations] = anon_sym_equations,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_builtins] = anon_sym_builtins,
  [anon_sym_diffie_DASHhellman] = anon_sym_diffie_DASHhellman,
  [anon_sym_hashing] = anon_sym_hashing,
  [anon_sym_symmetric_DASHencryption] = anon_sym_symmetric_DASHencryption,
  [anon_sym_asymmetric_DASHencryption] = anon_sym_asymmetric_DASHencryption,
  [anon_sym_signing] = anon_sym_signing,
  [anon_sym_bilinear_DASHpairing] = anon_sym_bilinear_DASHpairing,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_multiset] = anon_sym_multiset,
  [anon_sym_revealing_DASHsigning] = anon_sym_revealing_DASHsigning,
  [anon_sym_heuristic] = anon_sym_heuristic,
  [sym_goal_ranking] = sym_goal_ranking,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_DASH_DASH_LBRACK] = anon_sym_DASH_DASH_LBRACK,
  [anon_sym_RBRACK_DASH_GT] = anon_sym_RBRACK_DASH_GT,
  [anon_sym_variants] = anon_sym_variants,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_modulo] = anon_sym_modulo,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_AC] = anon_sym_AC,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_color_EQ] = anon_sym_color_EQ,
  [anon_sym_colour_EQ] = anon_sym_colour_EQ,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_msg] = anon_sym_msg,
  [anon_sym_restriction] = anon_sym_restriction,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_lemma] = anon_sym_lemma,
  [anon_sym_sources] = anon_sym_sources,
  [anon_sym_reuse] = anon_sym_reuse,
  [anon_sym_use_induction] = anon_sym_use_induction,
  [anon_sym_hide_lemma_EQ] = anon_sym_hide_lemma_EQ,
  [anon_sym_heuristic_EQ] = anon_sym_heuristic_EQ,
  [anon_sym_all_DASHtrace] = anon_sym_all_DASHtrace,
  [anon_sym_exists_DASHtrace] = anon_sym_exists_DASHtrace,
  [anon_sym_SOLVED] = anon_sym_SOLVED,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_qed] = anon_sym_qed,
  [anon_sym_sorry] = anon_sym_sorry,
  [anon_sym_simplify] = anon_sym_simplify,
  [anon_sym_solve] = anon_sym_solve,
  [anon_sym_contradiction] = anon_sym_contradiction,
  [anon_sym_induction] = anon_sym_induction,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_TILDE_TILDE_GT] = anon_sym_TILDE_TILDE_GT,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_splitEqs] = anon_sym_splitEqs,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_LBRACE_STAR] = anon_sym_LBRACE_STAR,
  [aux_sym_formal_comment_token1] = aux_sym_formal_comment_token1,
  [anon_sym_STAR_RBRACE] = anon_sym_STAR_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_TILDE_SQUOTE] = anon_sym_TILDE_SQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_fresh] = anon_sym_fresh,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_no_precomp] = anon_sym_no_precomp,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_EQ_EQ_GT] = anon_sym_EQ_EQ_GT,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_Ex] = anon_sym_Ex,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_All] = anon_sym_All,
  [anon_sym_22] = anon_sym_22,
  [sym_hexcolor] = sym_hexcolor,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_security_protocol_theory] = sym_security_protocol_theory,
  [sym_body] = sym_body,
  [sym__signature_spec] = sym__signature_spec,
  [sym_functions] = sym_functions,
  [sym_function_sym] = sym_function_sym,
  [sym_arity] = sym_arity,
  [sym_equations] = sym_equations,
  [sym_equation] = sym_equation,
  [sym_built_ins] = sym_built_ins,
  [sym_built_in] = sym_built_in,
  [sym_global_heuristic] = sym_global_heuristic,
  [sym_rule] = sym_rule,
  [sym_simple_rule] = sym_simple_rule,
  [sym_variants] = sym_variants,
  [sym_modulo] = sym_modulo,
  [sym_rule_attrs] = sym_rule_attrs,
  [sym_rule_attr] = sym_rule_attr,
  [sym_let_block] = sym_let_block,
  [sym_msg_var] = sym_msg_var,
  [sym_restriction] = sym_restriction,
  [sym_restriction_attrs] = sym_restriction_attrs,
  [sym_lemma] = sym_lemma,
  [sym_lemma_attrs] = sym_lemma_attrs,
  [sym_lemma_attr] = sym_lemma_attr,
  [sym_trace_quantifier] = sym_trace_quantifier,
  [sym_proof_skeleton] = sym_proof_skeleton,
  [sym_proof_method] = sym_proof_method,
  [sym_goal] = sym_goal,
  [sym_node_var] = sym_node_var,
  [sym_natural] = sym_natural,
  [sym_natural_subscr] = sym_natural_subscr,
  [sym_formal_comment] = sym_formal_comment,
  [sym_tuple_term] = sym_tuple_term,
  [sym_msetterm] = sym_msetterm,
  [sym_xorterm] = sym_xorterm,
  [sym_multterm] = sym_multterm,
  [sym_expterm] = sym_expterm,
  [sym_term] = sym_term,
  [sym_nested] = sym_nested,
  [sym_app] = sym_app,
  [sym_literal] = sym_literal,
  [sym_nonnode_var] = sym_nonnode_var,
  [sym_facts] = sym_facts,
  [sym_fact] = sym_fact,
  [sym_fact_annotes] = sym_fact_annotes,
  [sym_fact_annote] = sym_fact_annote,
  [sym_formula] = sym_formula,
  [sym_imp] = sym_imp,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_negation] = sym_negation,
  [sym_atom] = sym_atom,
  [sym_lvar] = sym_lvar,
  [sym_quantifier] = sym_quantifier,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_functions_repeat1] = aux_sym_functions_repeat1,
  [aux_sym_equations_repeat1] = aux_sym_equations_repeat1,
  [aux_sym_built_ins_repeat1] = aux_sym_built_ins_repeat1,
  [aux_sym_global_heuristic_repeat1] = aux_sym_global_heuristic_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_rule_attrs_repeat1] = aux_sym_rule_attrs_repeat1,
  [aux_sym_let_block_repeat1] = aux_sym_let_block_repeat1,
  [aux_sym_lemma_attrs_repeat1] = aux_sym_lemma_attrs_repeat1,
  [aux_sym_proof_skeleton_repeat1] = aux_sym_proof_skeleton_repeat1,
  [aux_sym_goal_repeat1] = aux_sym_goal_repeat1,
  [aux_sym_natural_subscr_repeat1] = aux_sym_natural_subscr_repeat1,
  [aux_sym_tuple_term_repeat1] = aux_sym_tuple_term_repeat1,
  [aux_sym_msetterm_repeat1] = aux_sym_msetterm_repeat1,
  [aux_sym_xorterm_repeat1] = aux_sym_xorterm_repeat1,
  [aux_sym_multterm_repeat1] = aux_sym_multterm_repeat1,
  [aux_sym_expterm_repeat1] = aux_sym_expterm_repeat1,
  [aux_sym_facts_repeat1] = aux_sym_facts_repeat1,
  [aux_sym_fact_annotes_repeat1] = aux_sym_fact_annotes_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_theory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKprivate_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_equations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtins] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diffie_DASHhellman] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hashing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symmetric_DASHencryption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asymmetric_DASHencryption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bilinear_DASHpairing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revealing_DASHsigning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heuristic] = {
    .visible = true,
    .named = false,
  },
  [sym_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colour_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restriction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lemma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sources] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_induction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide_lemma_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heuristic_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all_DASHtrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists_DASHtrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOLVED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sorry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simplify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contradiction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_induction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splitEqs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_formal_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fresh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_precomp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_All] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [sym_hexcolor] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_security_protocol_theory] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__signature_spec] = {
    .visible = false,
    .named = true,
  },
  [sym_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_function_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_arity] = {
    .visible = true,
    .named = true,
  },
  [sym_equations] = {
    .visible = true,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_built_ins] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in] = {
    .visible = true,
    .named = true,
  },
  [sym_global_heuristic] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_variants] = {
    .visible = true,
    .named = true,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_let_block] = {
    .visible = true,
    .named = true,
  },
  [sym_msg_var] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_trace_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_proof_skeleton] = {
    .visible = true,
    .named = true,
  },
  [sym_proof_method] = {
    .visible = true,
    .named = true,
  },
  [sym_goal] = {
    .visible = true,
    .named = true,
  },
  [sym_node_var] = {
    .visible = true,
    .named = true,
  },
  [sym_natural] = {
    .visible = true,
    .named = true,
  },
  [sym_natural_subscr] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_term] = {
    .visible = true,
    .named = true,
  },
  [sym_msetterm] = {
    .visible = true,
    .named = true,
  },
  [sym_xorterm] = {
    .visible = true,
    .named = true,
  },
  [sym_multterm] = {
    .visible = true,
    .named = true,
  },
  [sym_expterm] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nonnode_var] = {
    .visible = true,
    .named = true,
  },
  [sym_facts] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_annotes] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_annote] = {
    .visible = true,
    .named = true,
  },
  [sym_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_imp] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_lvar] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_equations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_built_ins_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_heuristic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lemma_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proof_skeleton_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_natural_subscr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_msetterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xorterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_facts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fact_annotes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 19,
  [22] = 19,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 40,
  [60] = 60,
  [61] = 58,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 70,
  [71] = 66,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 66,
  [77] = 64,
  [78] = 78,
  [79] = 79,
  [80] = 68,
  [81] = 81,
  [82] = 68,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 28,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 29,
  [114] = 114,
  [115] = 27,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 32,
  [147] = 147,
  [148] = 148,
  [149] = 143,
  [150] = 150,
  [151] = 151,
  [152] = 55,
  [153] = 153,
  [154] = 111,
  [155] = 107,
  [156] = 107,
  [157] = 157,
  [158] = 56,
  [159] = 57,
  [160] = 160,
  [161] = 161,
  [162] = 108,
  [163] = 114,
  [164] = 60,
  [165] = 114,
  [166] = 112,
  [167] = 39,
  [168] = 110,
  [169] = 52,
  [170] = 112,
  [171] = 38,
  [172] = 172,
  [173] = 173,
  [174] = 62,
  [175] = 175,
  [176] = 46,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 108,
  [181] = 181,
  [182] = 45,
  [183] = 183,
  [184] = 157,
  [185] = 183,
  [186] = 186,
  [187] = 187,
  [188] = 151,
  [189] = 150,
  [190] = 190,
  [191] = 191,
  [192] = 37,
  [193] = 193,
  [194] = 173,
  [195] = 28,
  [196] = 111,
  [197] = 197,
  [198] = 198,
  [199] = 190,
  [200] = 53,
  [201] = 51,
  [202] = 191,
  [203] = 50,
  [204] = 193,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 160,
  [214] = 214,
  [215] = 29,
  [216] = 216,
  [217] = 217,
  [218] = 27,
  [219] = 187,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 216,
  [225] = 205,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 31,
  [230] = 230,
  [231] = 114,
  [232] = 32,
  [233] = 36,
  [234] = 34,
  [235] = 108,
  [236] = 111,
  [237] = 60,
  [238] = 48,
  [239] = 50,
  [240] = 42,
  [241] = 37,
  [242] = 51,
  [243] = 41,
  [244] = 144,
  [245] = 46,
  [246] = 45,
  [247] = 39,
  [248] = 38,
  [249] = 62,
  [250] = 57,
  [251] = 56,
  [252] = 49,
  [253] = 55,
  [254] = 53,
  [255] = 52,
  [256] = 256,
  [257] = 79,
  [258] = 258,
  [259] = 78,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 73,
  [264] = 145,
  [265] = 265,
  [266] = 261,
  [267] = 27,
  [268] = 70,
  [269] = 62,
  [270] = 45,
  [271] = 50,
  [272] = 144,
  [273] = 143,
  [274] = 37,
  [275] = 32,
  [276] = 84,
  [277] = 277,
  [278] = 93,
  [279] = 38,
  [280] = 39,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 292,
  [294] = 294,
  [295] = 282,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 290,
  [301] = 285,
  [302] = 91,
  [303] = 283,
  [304] = 304,
  [305] = 288,
  [306] = 306,
  [307] = 265,
  [308] = 262,
  [309] = 258,
  [310] = 256,
  [311] = 311,
  [312] = 287,
  [313] = 313,
  [314] = 87,
  [315] = 315,
  [316] = 299,
  [317] = 317,
  [318] = 291,
  [319] = 88,
  [320] = 298,
  [321] = 321,
  [322] = 322,
  [323] = 294,
  [324] = 284,
  [325] = 289,
  [326] = 326,
  [327] = 127,
  [328] = 328,
  [329] = 296,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 297,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 339,
  [353] = 353,
  [354] = 354,
  [355] = 341,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 361,
  [373] = 347,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 370,
  [379] = 379,
  [380] = 351,
  [381] = 350,
  [382] = 346,
  [383] = 383,
  [384] = 345,
  [385] = 340,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 366,
  [390] = 336,
  [391] = 367,
  [392] = 368,
  [393] = 369,
  [394] = 394,
  [395] = 395,
  [396] = 369,
  [397] = 368,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 344,
  [402] = 402,
  [403] = 403,
  [404] = 388,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 406,
  [409] = 376,
  [410] = 366,
  [411] = 363,
  [412] = 403,
  [413] = 413,
  [414] = 379,
  [415] = 374,
  [416] = 336,
  [417] = 342,
  [418] = 338,
  [419] = 367,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 427,
  [430] = 426,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 423,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 431,
  [450] = 450,
  [451] = 433,
  [452] = 210,
  [453] = 450,
  [454] = 432,
  [455] = 286,
  [456] = 226,
  [457] = 281,
  [458] = 458,
  [459] = 332,
  [460] = 334,
  [461] = 461,
  [462] = 326,
  [463] = 328,
  [464] = 464,
  [465] = 212,
  [466] = 432,
  [467] = 209,
  [468] = 423,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 443,
  [475] = 475,
  [476] = 443,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 499,
  [506] = 506,
  [507] = 497,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 479,
  [524] = 524,
  [525] = 511,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 521,
  [531] = 514,
  [532] = 509,
  [533] = 504,
  [534] = 534,
  [535] = 535,
  [536] = 499,
  [537] = 478,
  [538] = 497,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 504,
  [544] = 511,
  [545] = 545,
  [546] = 504,
  [547] = 547,
  [548] = 547,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 549,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 528,
  [560] = 510,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 547,
  [565] = 565,
  [566] = 551,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 540,
  [577] = 577,
  [578] = 578,
  [579] = 570,
  [580] = 580,
  [581] = 541,
  [582] = 520,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 575,
  [596] = 596,
  [597] = 597,
  [598] = 539,
  [599] = 599,
  [600] = 600,
  [601] = 527,
  [602] = 495,
  [603] = 603,
  [604] = 506,
  [605] = 605,
  [606] = 603,
  [607] = 577,
  [608] = 593,
  [609] = 609,
  [610] = 597,
  [611] = 580,
  [612] = 526,
  [613] = 613,
  [614] = 614,
  [615] = 480,
  [616] = 616,
  [617] = 554,
  [618] = 573,
  [619] = 517,
  [620] = 578,
  [621] = 516,
  [622] = 524,
  [623] = 490,
  [624] = 624,
  [625] = 567,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(388);
      if (lookahead == '!') ADVANCE(633);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '$') ADVANCE(627);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '*') ADVANCE(623);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(512);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '=') ADVANCE(518);
      if (lookahead == '>') ADVANCE(617);
      if (lookahead == '@') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(649);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(652);
      if (lookahead == 'X') ADVANCE(76);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == '\\') SKIP(387)
      if (lookahead == ']') ADVANCE(539);
      if (lookahead == '^') ADVANCE(624);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'q') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(271);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '~') ADVANCE(631);
      if (lookahead == 172) ADVANCE(647);
      if (lookahead == 8320) ADVANCE(595);
      if (lookahead == 8321) ADVANCE(596);
      if (lookahead == 8322) ADVANCE(597);
      if (lookahead == 8323) ADVANCE(598);
      if (lookahead == 8324) ADVANCE(599);
      if (lookahead == 8325) ADVANCE(600);
      if (lookahead == 8326) ADVANCE(601);
      if (lookahead == 8327) ADVANCE(602);
      if (lookahead == 8328) ADVANCE(603);
      if (lookahead == 8329) ADVANCE(604);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8660) ADVANCE(638);
      if (lookahead == 8704) ADVANCE(661);
      if (lookahead == 8707) ADVANCE(658);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == 8853) ADVANCE(621);
      if (lookahead == 8868) ADVANCE(651);
      if (lookahead == 8869) ADVANCE(648);
      if (lookahead == 9654) ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(633);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '$') ADVANCE(627);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == 'A') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(504);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '~') ADVANCE(630);
      if (lookahead == 172) ADVANCE(647);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8704) ADVANCE(661);
      if (lookahead == 8707) ADVANCE(658);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == 8868) ADVANCE(651);
      if (lookahead == 8869) ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(633);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '$') ADVANCE(627);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == '=') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(504);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == '~') ADVANCE(630);
      if (lookahead == 172) ADVANCE(647);
      if (lookahead == 8704) ADVANCE(661);
      if (lookahead == 8707) ADVANCE(658);
      if (lookahead == 8868) ADVANCE(651);
      if (lookahead == 8869) ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(633);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '$') ADVANCE(627);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '~') ADVANCE(630);
      if (lookahead == 8320) ADVANCE(595);
      if (lookahead == 8321) ADVANCE(596);
      if (lookahead == 8322) ADVANCE(597);
      if (lookahead == 8323) ADVANCE(598);
      if (lookahead == 8324) ADVANCE(599);
      if (lookahead == 8325) ADVANCE(600);
      if (lookahead == 8326) ADVANCE(601);
      if (lookahead == 8327) ADVANCE(602);
      if (lookahead == 8328) ADVANCE(603);
      if (lookahead == 8329) ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(633);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '$') ADVANCE(627);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(504);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == '~') ADVANCE(630);
      if (lookahead == 8704) ADVANCE(661);
      if (lookahead == 8707) ADVANCE(658);
      if (lookahead == 8868) ADVANCE(651);
      if (lookahead == 8869) ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '$') ADVANCE(627);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '=') ADVANCE(518);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '~') ADVANCE(629);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8660) ADVANCE(638);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '=') ADVANCE(518);
      if (lookahead == '>') ADVANCE(617);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'X') ADVANCE(76);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(539);
      if (lookahead == '^') ADVANCE(624);
      if (lookahead == 'b') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '~') ADVANCE(378);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8660) ADVANCE(638);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == 8853) ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(518);
      if (lookahead == '>') ADVANCE(617);
      if (lookahead == 'X') ADVANCE(76);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '^') ADVANCE(624);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8660) ADVANCE(638);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == 8853) ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8660) ADVANCE(638);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '&') ADVANCE(643);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(518);
      if (lookahead == '>') ADVANCE(617);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == 8658) ADVANCE(640);
      if (lookahead == 8660) ADVANCE(638);
      if (lookahead == 8741) ADVANCE(590);
      if (lookahead == 8743) ADVANCE(644);
      if (lookahead == 8744) ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(550);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(615);
      if (lookahead == '=') ADVANCE(517);
      if (lookahead == '@') ADVANCE(588);
      if (lookahead == 'X') ADVANCE(76);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '^') ADVANCE(624);
      if (lookahead == 8853) ADVANCE(621);
      if (lookahead == 9654) ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == 'X') ADVANCE(400);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '^') ADVANCE(624);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == 8853) ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(664);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(605);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(663);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(398);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'b') ADVANCE(500);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(401);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'b') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 'v') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(551);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(552);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(567);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(566);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(540);
      if (lookahead == '[') ADVANCE(541);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(637);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(639);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(589);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(542);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(549);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(549);
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(570);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(290);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(532);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(619);
      END_STATE();
    case 79:
      if (lookahead == 'V') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(513);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(284);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(628);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(572);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 157:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 158:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(373);
      END_STATE();
    case 161:
      if (lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(557);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(525);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(526);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(529);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 171:
      if (lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(335);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 240:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'q') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(182);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 289:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 290:
      if (lookahead == 'q') ADVANCE(315);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 315:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 316:
      if (lookahead == 's') ADVANCE(543);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 360:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 361:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 362:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 363:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 364:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 365:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 366:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 367:
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 368:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 369:
      if (lookahead == 'x') ADVANCE(334);
      END_STATE();
    case 370:
      if (lookahead == 'y') ADVANCE(572);
      END_STATE();
    case 371:
      if (lookahead == 'y') ADVANCE(577);
      END_STATE();
    case 372:
      if (lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 373:
      if (lookahead == 'y') ADVANCE(579);
      END_STATE();
    case 374:
      if (lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 375:
      if (lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 376:
      if (lookahead == 'y') ADVANCE(240);
      END_STATE();
    case 377:
      if (lookahead == '}') ADVANCE(614);
      END_STATE();
    case 378:
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(665);
      END_STATE();
    case 386:
      if (eof) ADVANCE(388);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 387:
      if (eof) ADVANCE(388);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(386)
      END_STATE();
    case 388:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'q') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead == 'y') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(664);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(567);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_goal_ranking);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_goal_ranking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(656);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_all_DASHtrace);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == '\r') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(613);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(613);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(613);
      if (lookahead == '*') ADVANCE(664);
      if (lookahead == '\\') ADVANCE(611);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(608);
      if (lookahead != 0) ADVANCE(613);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(609);
      if (lookahead == '\\') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(613);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(608);
      if (lookahead == '\r') ADVANCE(612);
      if (lookahead == '*') ADVANCE(664);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(608);
      if (lookahead == '*') ADVANCE(664);
      if (lookahead == '\\') ADVANCE(611);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(614);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(626);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(664);
      if (lookahead == '\\') ADVANCE(385);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 31},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 31},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 38},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 38},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 54},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 54},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 55},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 36},
  [145] = {.lex_state = 38},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 55},
  [152] = {.lex_state = 36},
  [153] = {.lex_state = 36},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 34},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 36},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 36},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 55},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 31},
  [195] = {.lex_state = 39},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 55},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 55},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 55},
  [205] = {.lex_state = 34},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 34},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 34},
  [215] = {.lex_state = 39},
  [216] = {.lex_state = 31},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 31},
  [225] = {.lex_state = 34},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 34},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 29},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 29},
  [236] = {.lex_state = 29},
  [237] = {.lex_state = 39},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 39},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 39},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 39},
  [249] = {.lex_state = 39},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 39},
  [252] = {.lex_state = 39},
  [253] = {.lex_state = 39},
  [254] = {.lex_state = 39},
  [255] = {.lex_state = 39},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 39},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 31},
  [261] = {.lex_state = 34},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 34},
  [267] = {.lex_state = 31},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 31},
  [270] = {.lex_state = 31},
  [271] = {.lex_state = 31},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 35},
  [274] = {.lex_state = 31},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 39},
  [277] = {.lex_state = 31},
  [278] = {.lex_state = 31},
  [279] = {.lex_state = 31},
  [280] = {.lex_state = 31},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 31},
  [283] = {.lex_state = 31},
  [284] = {.lex_state = 31},
  [285] = {.lex_state = 34},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 31},
  [288] = {.lex_state = 31},
  [289] = {.lex_state = 31},
  [290] = {.lex_state = 31},
  [291] = {.lex_state = 31},
  [292] = {.lex_state = 31},
  [293] = {.lex_state = 31},
  [294] = {.lex_state = 31},
  [295] = {.lex_state = 31},
  [296] = {.lex_state = 31},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 31},
  [299] = {.lex_state = 31},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 34},
  [302] = {.lex_state = 37},
  [303] = {.lex_state = 31},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 31},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 29},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 29},
  [311] = {.lex_state = 37},
  [312] = {.lex_state = 31},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 37},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 31},
  [317] = {.lex_state = 34},
  [318] = {.lex_state = 31},
  [319] = {.lex_state = 37},
  [320] = {.lex_state = 31},
  [321] = {.lex_state = 37},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 31},
  [324] = {.lex_state = 31},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 34},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 31},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 34},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 31},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 31},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 31},
  [353] = {.lex_state = 31},
  [354] = {.lex_state = 30},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 31},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 31},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 31},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 31},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 31},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 29},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 29},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 29},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 29},
  [427] = {.lex_state = 29},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 29},
  [430] = {.lex_state = 29},
  [431] = {.lex_state = 29},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 29},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 30},
  [436] = {.lex_state = 31},
  [437] = {.lex_state = 34},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 30},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 37},
  [446] = {.lex_state = 30},
  [447] = {.lex_state = 30},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 29},
  [450] = {.lex_state = 29},
  [451] = {.lex_state = 29},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 29},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 29},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 29},
  [460] = {.lex_state = 29},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 29},
  [463] = {.lex_state = 29},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 34},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 34},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 34},
  [494] = {.lex_state = 31},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 31},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 31},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 34},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 31},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 31},
  [534] = {.lex_state = 30},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 29},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 31},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 30},
  [546] = {.lex_state = 31},
  [547] = {.lex_state = 31},
  [548] = {.lex_state = 31},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 31},
  [552] = {.lex_state = 29},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 31},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 31},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 31},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 31},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 31},
  [567] = {.lex_state = 31},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 610},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 29},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 31},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 31},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 30},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 29},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 29},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 29},
  [598] = {.lex_state = 29},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 29},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 29},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 31},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 31},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_theory] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_arity_token1] = ACTIONS(1),
    [anon_sym_equations] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_builtins] = ACTIONS(1),
    [anon_sym_diffie_DASHhellman] = ACTIONS(1),
    [anon_sym_hashing] = ACTIONS(1),
    [anon_sym_symmetric_DASHencryption] = ACTIONS(1),
    [anon_sym_asymmetric_DASHencryption] = ACTIONS(1),
    [anon_sym_signing] = ACTIONS(1),
    [anon_sym_bilinear_DASHpairing] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_multiset] = ACTIONS(1),
    [anon_sym_revealing_DASHsigning] = ACTIONS(1),
    [anon_sym_heuristic] = ACTIONS(1),
    [sym_goal_ranking] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_LBRACK] = ACTIONS(1),
    [anon_sym_variants] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_modulo] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_AC] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_color_EQ] = ACTIONS(1),
    [anon_sym_colour_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_msg] = ACTIONS(1),
    [anon_sym_restriction] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_lemma] = ACTIONS(1),
    [anon_sym_sources] = ACTIONS(1),
    [anon_sym_reuse] = ACTIONS(1),
    [anon_sym_use_induction] = ACTIONS(1),
    [anon_sym_hide_lemma_EQ] = ACTIONS(1),
    [anon_sym_heuristic_EQ] = ACTIONS(1),
    [anon_sym_all_DASHtrace] = ACTIONS(1),
    [anon_sym_exists_DASHtrace] = ACTIONS(1),
    [anon_sym_SOLVED] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_qed] = ACTIONS(1),
    [anon_sym_sorry] = ACTIONS(1),
    [anon_sym_simplify] = ACTIONS(1),
    [anon_sym_solve] = ACTIONS(1),
    [anon_sym_contradiction] = ACTIONS(1),
    [anon_sym_induction] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_splitEqs] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_LBRACE_STAR] = ACTIONS(1),
    [anon_sym_STAR_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_TILDE_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_fresh] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_no_precomp] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_Ex] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_All] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(609),
    [sym_security_protocol_theory] = STATE(600),
    [anon_sym_theory] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_splitEqs,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(343), 1,
      sym_formula,
    STATE(422), 1,
      sym_fact,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(622), 1,
      sym_goal,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [114] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_splitEqs,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(343), 1,
      sym_formula,
    STATE(422), 1,
      sym_fact,
    STATE(435), 1,
      sym_node_var,
    STATE(524), 1,
      sym_goal,
    STATE(591), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [228] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(502), 1,
      sym_formula,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [336] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(481), 1,
      sym_formula,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [444] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(563), 1,
      sym_formula,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [552] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(107), 1,
      sym_negation,
    STATE(108), 1,
      sym_conjunction,
    STATE(120), 1,
      sym_formula,
    STATE(141), 1,
      sym_atom,
    STATE(143), 1,
      sym_imp,
    STATE(144), 1,
      sym_disjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [660] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(107), 1,
      sym_negation,
    STATE(108), 1,
      sym_conjunction,
    STATE(120), 1,
      sym_formula,
    STATE(141), 1,
      sym_atom,
    STATE(144), 1,
      sym_disjunction,
    STATE(149), 1,
      sym_imp,
    STATE(216), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [768] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(565), 1,
      sym_formula,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [876] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(354), 1,
      sym_node_var,
    STATE(446), 1,
      sym_msetterm,
    STATE(529), 1,
      sym_formula,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [984] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(448), 1,
      sym_formula,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1092] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    STATE(594), 1,
      sym_formula,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1200] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    STATE(605), 1,
      sym_formula,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1308] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(273), 1,
      sym_imp,
    STATE(435), 1,
      sym_node_var,
    STATE(446), 1,
      sym_msetterm,
    STATE(529), 1,
      sym_formula,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1416] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(128), 1,
      sym_imp,
    STATE(141), 1,
      sym_atom,
    STATE(144), 1,
      sym_disjunction,
    STATE(155), 1,
      sym_negation,
    STATE(180), 1,
      sym_conjunction,
    STATE(224), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1521] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(128), 1,
      sym_imp,
    STATE(141), 1,
      sym_atom,
    STATE(156), 1,
      sym_negation,
    STATE(224), 1,
      sym_quantifier,
    STATE(235), 1,
      sym_conjunction,
    STATE(272), 1,
      sym_disjunction,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1626] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(126), 1,
      sym_imp,
    STATE(141), 1,
      sym_atom,
    STATE(156), 1,
      sym_negation,
    STATE(224), 1,
      sym_quantifier,
    STATE(235), 1,
      sym_conjunction,
    STATE(272), 1,
      sym_disjunction,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1731] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(126), 1,
      sym_imp,
    STATE(141), 1,
      sym_atom,
    STATE(162), 1,
      sym_conjunction,
    STATE(216), 1,
      sym_quantifier,
    STATE(244), 1,
      sym_disjunction,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1836] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(109), 1,
      sym_negation,
    STATE(123), 1,
      sym_conjunction,
    STATE(141), 1,
      sym_atom,
    STATE(216), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1935] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(107), 1,
      sym_negation,
    STATE(123), 1,
      sym_conjunction,
    STATE(141), 1,
      sym_atom,
    STATE(216), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2034] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(123), 1,
      sym_conjunction,
    STATE(141), 1,
      sym_atom,
    STATE(155), 1,
      sym_negation,
    STATE(224), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2133] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(123), 1,
      sym_conjunction,
    STATE(141), 1,
      sym_atom,
    STATE(156), 1,
      sym_negation,
    STATE(224), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2232] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_not,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(136), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(216), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2328] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(136), 1,
      sym_negation,
    STATE(141), 1,
      sym_atom,
    STATE(224), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2424] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(117), 1,
      sym_atom,
    STATE(224), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2511] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(117), 1,
      sym_atom,
    STATE(216), 1,
      sym_quantifier,
    STATE(435), 1,
      sym_node_var,
    STATE(591), 1,
      sym_msetterm,
    STATE(592), 1,
      sym_fact,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(45), 20,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2628] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(51), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(61), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2697] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_end,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(71), 1,
      anon_sym_functions,
    ACTIONS(73), 1,
      anon_sym_equations,
    ACTIONS(75), 1,
      anon_sym_builtins,
    ACTIONS(77), 1,
      anon_sym_heuristic,
    ACTIONS(79), 1,
      anon_sym_rule,
    ACTIONS(81), 1,
      anon_sym_restriction,
    ACTIONS(83), 1,
      anon_sym_lemma,
    STATE(137), 1,
      sym_simple_rule,
    STATE(574), 1,
      sym_body,
    STATE(33), 10,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [2746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_CARET,
    STATE(36), 1,
      aux_sym_expterm_repeat1,
    ACTIONS(85), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(91), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2808] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(71), 1,
      anon_sym_functions,
    ACTIONS(73), 1,
      anon_sym_equations,
    ACTIONS(75), 1,
      anon_sym_builtins,
    ACTIONS(77), 1,
      anon_sym_heuristic,
    ACTIONS(79), 1,
      anon_sym_rule,
    ACTIONS(81), 1,
      anon_sym_restriction,
    ACTIONS(83), 1,
      anon_sym_lemma,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(137), 1,
      sym_simple_rule,
    STATE(35), 10,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [2854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_CARET,
    STATE(34), 1,
      aux_sym_expterm_repeat1,
    ACTIONS(99), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2886] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_end,
    ACTIONS(108), 1,
      sym_ident,
    ACTIONS(111), 1,
      anon_sym_functions,
    ACTIONS(114), 1,
      anon_sym_equations,
    ACTIONS(117), 1,
      anon_sym_builtins,
    ACTIONS(120), 1,
      anon_sym_heuristic,
    ACTIONS(123), 1,
      anon_sym_rule,
    ACTIONS(126), 1,
      anon_sym_restriction,
    ACTIONS(129), 1,
      anon_sym_lemma,
    STATE(137), 1,
      sym_simple_rule,
    STATE(35), 10,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [2932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_CARET,
    ACTIONS(134), 1,
      anon_sym_EQ,
    STATE(34), 1,
      aux_sym_expterm_repeat1,
    ACTIONS(132), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(136), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(140), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(144), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3045] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(345), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(99), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(158), 1,
      anon_sym_STAR,
    STATE(42), 1,
      aux_sym_multterm_repeat1,
    ACTIONS(154), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(161), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3183] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(349), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(61), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(165), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(169), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      anon_sym_STAR,
    STATE(49), 1,
      aux_sym_multterm_repeat1,
    ACTIONS(173), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_EQ,
    STATE(42), 1,
      aux_sym_multterm_repeat1,
    ACTIONS(179), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(183), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(187), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(191), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(195), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(199), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(203), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(207), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_EQ,
    ACTIONS(211), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3595] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(380), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3648] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(384), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(219), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3728] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(351), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(225), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [3808] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SOLVED,
    ACTIONS(233), 1,
      anon_sym_by,
    ACTIONS(237), 1,
      anon_sym_solve,
    STATE(157), 1,
      sym_proof_method,
    STATE(221), 1,
      sym_proof_skeleton,
    ACTIONS(235), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(229), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3844] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(499), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3894] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(407), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3944] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(367), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [3994] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SOLVED,
    ACTIONS(233), 1,
      anon_sym_by,
    ACTIONS(237), 1,
      anon_sym_solve,
    STATE(157), 1,
      sym_proof_method,
    STATE(208), 1,
      sym_proof_skeleton,
    ACTIONS(235), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(239), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4030] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(368), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4080] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(536), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym_xorterm_repeat1,
    ACTIONS(245), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(241), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4160] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(419), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4210] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SOLVED,
    ACTIONS(233), 1,
      anon_sym_by,
    ACTIONS(237), 1,
      anon_sym_solve,
    STATE(157), 1,
      sym_proof_method,
    STATE(211), 1,
      sym_proof_skeleton,
    ACTIONS(235), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(247), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym_xorterm_repeat1,
    ACTIONS(245), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(249), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4276] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_ident,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_TILDE,
    STATE(229), 1,
      sym_term,
    STATE(238), 1,
      sym_expterm,
    STATE(239), 1,
      sym_msg_var,
    STATE(254), 1,
      sym_nonnode_var,
    STATE(263), 1,
      sym_multterm,
    STATE(302), 1,
      sym_xorterm,
    STATE(445), 1,
      sym_msetterm,
    ACTIONS(259), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(242), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4326] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SOLVED,
    ACTIONS(233), 1,
      anon_sym_by,
    ACTIONS(237), 1,
      anon_sym_solve,
    STATE(157), 1,
      sym_proof_method,
    STATE(206), 1,
      sym_proof_skeleton,
    ACTIONS(235), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(265), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4362] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(391), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4412] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(505), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(154), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym_xorterm_repeat1,
    ACTIONS(271), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(267), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4518] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(392), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4568] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(125), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4618] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(91), 1,
      sym_xorterm,
    STATE(397), 1,
      sym_msetterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(276), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_EQ,
    ACTIONS(267), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4718] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_ident,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_TILDE,
    STATE(83), 1,
      sym_xorterm,
    STATE(229), 1,
      sym_term,
    STATE(238), 1,
      sym_expterm,
    STATE(239), 1,
      sym_msg_var,
    STATE(254), 1,
      sym_nonnode_var,
    STATE(263), 1,
      sym_multterm,
    ACTIONS(259), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(242), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4765] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(73), 1,
      sym_multterm,
    STATE(83), 1,
      sym_xorterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_msetterm_repeat1,
    ACTIONS(276), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_msetterm_repeat1,
    ACTIONS(281), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4868] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(48), 1,
      sym_expterm,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(84), 1,
      sym_multterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4912] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_ident,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_TILDE,
    STATE(229), 1,
      sym_term,
    STATE(238), 1,
      sym_expterm,
    STATE(239), 1,
      sym_msg_var,
    STATE(254), 1,
      sym_nonnode_var,
    STATE(276), 1,
      sym_multterm,
    ACTIONS(259), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(242), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(88), 1,
      aux_sym_msetterm_repeat1,
    ACTIONS(287), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [4984] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(135), 1,
      sym_equation,
    STATE(545), 1,
      sym_term,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(293), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(291), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5050] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_ident,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_TILDE,
    STATE(229), 1,
      sym_term,
    STATE(239), 1,
      sym_msg_var,
    STATE(254), 1,
      sym_nonnode_var,
    STATE(259), 1,
      sym_expterm,
    ACTIONS(259), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(242), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5091] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(181), 1,
      sym_equation,
    STATE(545), 1,
      sym_term,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_term,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    STATE(78), 1,
      sym_expterm,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5173] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_term,
    STATE(50), 1,
      sym_msg_var,
    STATE(53), 1,
      sym_nonnode_var,
    ACTIONS(17), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(51), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5211] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_ident,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_TILDE,
    STATE(239), 1,
      sym_msg_var,
    STATE(243), 1,
      sym_term,
    STATE(254), 1,
      sym_nonnode_var,
    ACTIONS(259), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(242), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(299), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5273] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    STATE(153), 1,
      sym_term,
    STATE(200), 1,
      sym_nonnode_var,
    STATE(203), 1,
      sym_msg_var,
    ACTIONS(309), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(201), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(53), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(321), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(323), 10,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
  [5361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(326), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(328), 10,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
  [5384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(169), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(371), 1,
      sym_natural_subscr,
    ACTIONS(332), 10,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
  [5427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(51), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [5453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(340), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(342), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(344), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(340), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
  [5515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(348), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(346), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
  [5537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(351), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(353), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      anon_sym_DOT,
    ACTIONS(63), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(361), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(359), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_AMP,
      anon_sym_17,
  [5623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(47), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(344), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(353), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(334), 1,
      sym_fact_annotes,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(191), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [5705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_equations_repeat1,
    ACTIONS(370), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(281), 1,
      sym_fact_annotes,
    ACTIONS(376), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(203), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [5766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_functions_repeat1,
    ACTIONS(378), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_variants_repeat1,
    ACTIONS(382), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_goal_ranking,
    STATE(127), 1,
      aux_sym_global_heuristic_repeat1,
    ACTIONS(390), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [5897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_goal_ranking,
    STATE(127), 1,
      aux_sym_global_heuristic_repeat1,
    ACTIONS(397), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_equations_repeat1,
    ACTIONS(401), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_variants_repeat1,
    ACTIONS(406), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(411), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(415), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(420), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_equations_repeat1,
    ACTIONS(422), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_variants,
    STATE(227), 1,
      sym_variants,
    ACTIONS(424), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_functions_repeat1,
    ACTIONS(428), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(433), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(439), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_variants_repeat1,
    ACTIONS(445), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_COLON,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(61), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [6238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_DOT,
    ACTIONS(93), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 11,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_functions_repeat1,
    ACTIONS(457), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(447), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [6332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [6348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(465), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(351), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(340), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(340), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
  [6440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SOLVED,
    ACTIONS(473), 1,
      anon_sym_by,
    ACTIONS(475), 1,
      anon_sym_case,
    ACTIONS(479), 1,
      anon_sym_solve,
    STATE(157), 1,
      sym_proof_method,
    STATE(226), 1,
      sym_proof_skeleton,
    ACTIONS(477), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [6468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 10,
      anon_sym_SOLVED,
      anon_sym_by,
      anon_sym_case,
      anon_sym_next,
      anon_sym_qed,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_solve,
      anon_sym_contradiction,
      anon_sym_induction,
  [6520] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_ident,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_msg_var,
    ACTIONS(491), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(161), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(277), 2,
      sym_node_var,
      sym_nonnode_var,
  [6548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(196), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(494), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(342), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [6568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(496), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(359), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_AMP,
      anon_sym_17,
  [6588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(499), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(359), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [6626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(353), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(502), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(346), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
  [6682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(353), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
  [6720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(132), 1,
      sym_built_in,
    ACTIONS(505), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [6756] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_ident,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_msg_var,
    ACTIONS(513), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(161), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(277), 2,
      sym_node_var,
      sym_nonnode_var,
  [6784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(515), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(406), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(415), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(523), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(342), 9,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [6910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(401), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [6962] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_solve,
    ACTIONS(531), 1,
      anon_sym_SOLVED,
    ACTIONS(533), 1,
      anon_sym_by,
    ACTIONS(535), 1,
      anon_sym_case,
    STATE(184), 1,
      sym_proof_method,
    STATE(456), 1,
      sym_proof_skeleton,
    ACTIONS(477), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [6990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(529), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(428), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 10,
      anon_sym_SOLVED,
      anon_sym_by,
      anon_sym_case,
      anon_sym_next,
      anon_sym_qed,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_solve,
      anon_sym_contradiction,
      anon_sym_induction,
  [7042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(463), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(461), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(547), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(551), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(555), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7150] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_ident,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_DOT,
    STATE(271), 1,
      sym_msg_var,
    ACTIONS(513), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(161), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(277), 2,
      sym_node_var,
      sym_nonnode_var,
  [7178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      anon_sym_DOT,
    ACTIONS(53), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(51), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(494), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(351), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [7222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      sym_built_in,
    ACTIONS(505), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [7240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 9,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_PIPE,
      anon_sym_16,
      anon_sym_AMP,
      anon_sym_17,
  [7258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [7274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [7326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [7360] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_solve,
    ACTIONS(531), 1,
      anon_sym_SOLVED,
    ACTIONS(533), 1,
      anon_sym_by,
    STATE(184), 1,
      sym_proof_method,
    STATE(361), 1,
      sym_proof_skeleton,
    ACTIONS(477), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [7385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_solve,
    ACTIONS(531), 1,
      anon_sym_SOLVED,
    ACTIONS(533), 1,
      anon_sym_by,
    STATE(184), 1,
      sym_proof_method,
    STATE(469), 1,
      sym_proof_skeleton,
    ACTIONS(477), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [7425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7515] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    ACTIONS(581), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(583), 1,
      anon_sym_heuristic_EQ,
    STATE(424), 1,
      sym_lemma_attr,
    ACTIONS(577), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [7538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(63), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7559] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_ident,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_msg_var,
    ACTIONS(513), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(194), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(277), 2,
      sym_node_var,
      sym_nonnode_var,
  [7584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(45), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(583), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      sym_lemma_attr,
    ACTIONS(577), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [7699] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_ident,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_msg_var,
    ACTIONS(513), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(173), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(277), 2,
      sym_node_var,
      sym_nonnode_var,
  [7724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_solve,
    ACTIONS(531), 1,
      anon_sym_SOLVED,
    ACTIONS(533), 1,
      anon_sym_by,
    STATE(184), 1,
      sym_proof_method,
    STATE(372), 1,
      sym_proof_skeleton,
    ACTIONS(477), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [7749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 9,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(583), 1,
      anon_sym_heuristic_EQ,
    STATE(424), 1,
      sym_lemma_attr,
    ACTIONS(577), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [7799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_CARET,
    STATE(233), 1,
      aux_sym_expterm_repeat1,
    ACTIONS(85), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(87), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [7819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(583), 1,
      anon_sym_heuristic_EQ,
    STATE(405), 1,
      sym_lemma_attr,
    ACTIONS(577), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [7839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(607), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(359), 5,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [7857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(93), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_CARET,
    STATE(234), 1,
      aux_sym_expterm_repeat1,
    ACTIONS(132), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(134), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [7895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_CARET,
    STATE(234), 1,
      aux_sym_expterm_repeat1,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(101), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [7915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(615), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(342), 5,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [7933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(615), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(351), 5,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [7951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(219), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_STAR,
    STATE(252), 1,
      aux_sym_multterm_repeat1,
    ACTIONS(173), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(175), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [7985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(183), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_STAR,
    STATE(240), 1,
      aux_sym_multterm_repeat1,
    ACTIONS(154), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(156), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [8019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(136), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(187), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(99), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(449), 5,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [8079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(165), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(144), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(140), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(225), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(211), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(207), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_STAR,
    STATE(240), 1,
      aux_sym_multterm_repeat1,
    ACTIONS(179), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(181), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [8203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(203), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(195), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(191), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_fact_annotes,
    ACTIONS(624), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [8264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_XOR,
    ACTIONS(629), 1,
      anon_sym_13,
    STATE(257), 1,
      aux_sym_xorterm_repeat1,
    ACTIONS(269), 2,
      sym_ident,
      anon_sym_in,
  [8284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(281), 1,
      sym_fact_annotes,
    ACTIONS(376), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [8300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(156), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [8314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COLON,
    ACTIONS(51), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_solve,
    STATE(456), 1,
      sym_proof_method,
    ACTIONS(477), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [8344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(334), 1,
      sym_fact_annotes,
    ACTIONS(368), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [8360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_PLUS,
    ACTIONS(634), 1,
      anon_sym_XOR,
    ACTIONS(636), 1,
      anon_sym_13,
    STATE(268), 1,
      aux_sym_xorterm_repeat1,
    ACTIONS(251), 2,
      sym_ident,
      anon_sym_in,
  [8380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(61), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(328), 1,
      sym_fact_annotes,
    ACTIONS(640), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [8410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_solve,
    STATE(226), 1,
      sym_proof_method,
    ACTIONS(642), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [8426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_PLUS,
    ACTIONS(634), 1,
      anon_sym_XOR,
    ACTIONS(636), 1,
      anon_sym_13,
    STATE(257), 1,
      aux_sym_xorterm_repeat1,
    ACTIONS(243), 2,
      sym_ident,
      anon_sym_in,
  [8458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(449), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
  [8504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(447), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_2,
  [8517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(269), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [8552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [8596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [8606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(509), 1,
      sym_facts,
  [8622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(606), 1,
      sym_facts,
  [8638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(604), 1,
      sym_facts,
  [8654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(409), 1,
      sym_fact_annote,
    ACTIONS(654), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [8666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [8676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(602), 1,
      sym_facts,
  [8692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(601), 1,
      sym_facts,
  [8708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(598), 1,
      sym_facts,
  [8724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(537), 1,
      sym_facts,
  [8740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(597), 1,
      sym_facts,
  [8756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(595), 1,
      sym_facts,
  [8772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(575), 1,
      sym_facts,
  [8788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(593), 1,
      sym_facts,
  [8804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(532), 1,
      sym_facts,
  [8820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(531), 1,
      sym_facts,
  [8836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(530), 1,
      sym_facts,
  [8852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(528), 1,
      sym_facts,
  [8868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(526), 1,
      sym_facts,
  [8884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(478), 1,
      sym_facts,
  [8900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(376), 1,
      sym_fact_annote,
    ACTIONS(654), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [8912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    STATE(319), 1,
      aux_sym_msetterm_repeat1,
    ACTIONS(289), 2,
      sym_ident,
      anon_sym_in,
  [8926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(603), 1,
      sym_facts,
  [8942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym_trace_quantifier,
    ACTIONS(664), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [8956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(527), 1,
      sym_facts,
  [8972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
    STATE(614), 1,
      sym_trace_quantifier,
    ACTIONS(664), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [8986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    STATE(463), 1,
      sym_fact_annotes,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [9000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    STATE(460), 1,
      sym_fact_annotes,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [9014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    STATE(457), 1,
      sym_fact_annotes,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [9028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    STATE(455), 1,
      sym_fact_annotes,
    ACTIONS(624), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [9042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_ident,
    ACTIONS(672), 1,
      anon_sym_in,
    STATE(321), 1,
      aux_sym_let_block_repeat1,
    STATE(534), 1,
      sym_msg_var,
  [9058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(495), 1,
      sym_facts,
  [9074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    STATE(461), 1,
      sym_rule_attr,
    ACTIONS(676), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [9088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_PLUS,
    STATE(314), 1,
      aux_sym_msetterm_repeat1,
    ACTIONS(274), 2,
      sym_ident,
      anon_sym_in,
  [9102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [9112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(612), 1,
      sym_facts,
  [9128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_goal_ranking,
    STATE(327), 1,
      aux_sym_global_heuristic_repeat1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(610), 1,
      sym_facts,
  [9158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    STATE(314), 1,
      aux_sym_msetterm_repeat1,
    ACTIONS(283), 2,
      sym_ident,
      anon_sym_in,
  [9172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(559), 1,
      sym_facts,
  [9188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_ident,
    ACTIONS(690), 1,
      anon_sym_in,
    STATE(321), 1,
      aux_sym_let_block_repeat1,
    STATE(534), 1,
      sym_msg_var,
  [9204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
    STATE(461), 1,
      sym_rule_attr,
    ACTIONS(676), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [9218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(608), 1,
      sym_facts,
  [9234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(506), 1,
      sym_facts,
  [9250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(406), 1,
      sym_fact,
    STATE(539), 1,
      sym_facts,
  [9266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [9276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_goal_ranking,
    STATE(327), 1,
      aux_sym_global_heuristic_repeat1,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [9300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(514), 1,
      sym_facts,
  [9316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(706), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [9330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(438), 1,
      sym_fact_annote,
    ACTIONS(654), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [9342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [9352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(408), 1,
      sym_fact,
    STATE(521), 1,
      sym_facts,
  [9368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [9378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
    STATE(616), 1,
      sym_trace_quantifier,
    ACTIONS(664), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [9392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_GT,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [9405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_rule_attrs_repeat1,
  [9418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      aux_sym_facts_repeat1,
  [9431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_ident,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(625), 1,
      sym_modulo,
  [9444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_COLON,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    STATE(623), 1,
      sym_rule_attrs,
  [9457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(731), 1,
      anon_sym_COLON,
    STATE(621), 1,
      sym_rule_attrs,
  [9470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 1,
      anon_sym_let,
    STATE(619), 1,
      sym_let_block,
  [9483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(739), 1,
      anon_sym_2,
    STATE(360), 1,
      aux_sym_goal_repeat1,
  [9496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_let,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    STATE(617), 1,
      sym_let_block,
  [9509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_tuple_term_repeat1,
  [9522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_let,
    ACTIONS(743), 1,
      anon_sym_LBRACK,
    STATE(615), 1,
      sym_let_block,
  [9535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_fact_annotes_repeat1,
  [9548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_lemma_attrs_repeat1,
  [9561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_tuple_term_repeat1,
  [9574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [9587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_tuple_term_repeat1,
  [9600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    ACTIONS(758), 1,
      sym_ident,
    STATE(567), 1,
      sym_modulo,
  [9613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_ident,
    STATE(562), 1,
      sym_modulo,
  [9626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [9637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(766), 1,
      anon_sym_COLON,
    STATE(516), 1,
      sym_rule_attrs,
  [9650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_COLON,
    ACTIONS(770), 1,
      anon_sym_LBRACK,
    STATE(503), 1,
      sym_restriction_attrs,
  [9663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    STATE(501), 1,
      sym_lemma_attrs,
  [9676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym_ident,
    STATE(198), 1,
      sym_node_var,
  [9689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_2,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_goal_repeat1,
  [9715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_next,
    ACTIONS(784), 1,
      anon_sym_qed,
    STATE(378), 1,
      aux_sym_proof_skeleton_repeat1,
  [9728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym_ident,
    STATE(125), 1,
      sym_node_var,
  [9741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_node,
    ACTIONS(788), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [9752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_fact_annotes_repeat1,
  [9765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym_ident,
    STATE(561), 1,
      sym_node_var,
  [9778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [9791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [9804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_GT,
    STATE(336), 1,
      aux_sym_tuple_term_repeat1,
  [9817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_arity_token1,
    ACTIONS(803), 1,
      anon_sym_msg,
    STATE(215), 1,
      sym_natural,
  [9830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_next,
    ACTIONS(805), 1,
      anon_sym_qed,
    STATE(386), 1,
      aux_sym_proof_skeleton_repeat1,
  [9843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym_ident,
    STATE(518), 1,
      sym_node_var,
  [9856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_next,
    ACTIONS(807), 1,
      anon_sym_qed,
    STATE(370), 1,
      aux_sym_proof_skeleton_repeat1,
  [9869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_fact_annotes_repeat1,
  [9882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [9895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_2,
    STATE(375), 1,
      aux_sym_goal_repeat1,
  [9908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(373), 1,
      aux_sym_fact_annotes_repeat1,
  [9921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    ACTIONS(822), 1,
      anon_sym_msg,
    STATE(145), 1,
      sym_natural,
  [9934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_next,
    ACTIONS(824), 1,
      anon_sym_qed,
    STATE(386), 1,
      aux_sym_proof_skeleton_repeat1,
  [9947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_node,
    ACTIONS(828), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [9958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_tuple_term_repeat1,
  [9971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [9984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_let,
    ACTIONS(832), 1,
      anon_sym_LBRACK,
    STATE(480), 1,
      sym_let_block,
  [9997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(400), 1,
      sym_rule_attr,
    ACTIONS(676), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [10008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_tuple_term_repeat1,
  [10021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(834), 1,
      anon_sym_COLON,
    STATE(490), 1,
      sym_rule_attrs,
  [10034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_next,
    ACTIONS(839), 1,
      anon_sym_qed,
    STATE(386), 1,
      aux_sym_proof_skeleton_repeat1,
  [10047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      aux_sym_rule_attrs_repeat1,
  [10060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(658), 1,
      anon_sym_BANG,
    STATE(450), 1,
      sym_fact,
  [10073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [10086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_GT,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [10099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_tuple_term_repeat1,
  [10112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_GT,
    STATE(390), 1,
      aux_sym_tuple_term_repeat1,
  [10125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym_arity_token1,
    ACTIONS(856), 1,
      anon_sym_msg,
    STATE(113), 1,
      sym_natural,
  [10138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    ACTIONS(858), 1,
      anon_sym_COLON,
    STATE(482), 1,
      sym_lemma_attrs,
  [10151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym_ident,
    STATE(500), 1,
      sym_node_var,
  [10164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    ACTIONS(822), 1,
      anon_sym_msg,
    STATE(29), 1,
      sym_natural,
  [10177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_GT,
    STATE(416), 1,
      aux_sym_tuple_term_repeat1,
  [10190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(461), 1,
      sym_rule_attr,
    ACTIONS(676), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [10201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym_ident,
    STATE(311), 1,
      aux_sym_let_block_repeat1,
    STATE(534), 1,
      sym_msg_var,
  [10214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    STATE(337), 1,
      aux_sym_rule_attrs_repeat1,
  [10227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_let,
    ACTIONS(868), 1,
      anon_sym_LBRACK,
    STATE(554), 1,
      sym_let_block,
  [10240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    ACTIONS(822), 1,
      anon_sym_msg,
    STATE(440), 1,
      sym_natural,
  [10253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      aux_sym_facts_repeat1,
  [10266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(652), 1,
      sym_ident,
    STATE(453), 1,
      sym_fact,
  [10279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_RBRACK,
    STATE(413), 1,
      aux_sym_lemma_attrs_repeat1,
  [10292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(412), 1,
      aux_sym_facts_repeat1,
  [10305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [10314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    STATE(403), 1,
      aux_sym_facts_repeat1,
  [10327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_fact_annotes_repeat1,
  [10340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [10353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_node,
    ACTIONS(886), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_facts_repeat1,
  [10377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_lemma_attrs_repeat1,
  [10390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_node,
    ACTIONS(890), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [10414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_GT,
    STATE(330), 1,
      aux_sym_tuple_term_repeat1,
  [10427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_let,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    STATE(517), 1,
      sym_let_block,
  [10440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_facts_repeat1,
  [10453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_tuple_term_repeat1,
  [10466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    STATE(104), 1,
      sym_natural,
  [10476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      aux_sym_arity_token1,
    STATE(139), 1,
      sym_arity,
  [10486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_,
    ACTIONS(907), 1,
      anon_sym_AT,
  [10496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    STATE(43), 1,
      sym_natural,
  [10522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(911), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(915), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(919), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(923), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(927), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym_arity_token1,
    STATE(167), 1,
      sym_natural,
  [10590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(931), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    STATE(535), 1,
      sym_natural,
  [10610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [10618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_ident,
    STATE(148), 1,
      sym_function_sym,
  [10628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_goal_ranking,
    STATE(129), 1,
      aux_sym_global_heuristic_repeat1,
  [10638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_rule,
    STATE(124), 1,
      sym_simple_rule,
  [10656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      anon_sym_DOT,
  [10666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    STATE(519), 1,
      sym_natural,
  [10684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 2,
      sym_ident,
      anon_sym_in,
  [10708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [10718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_EQ,
    ACTIONS(951), 1,
      anon_sym_DOT,
  [10728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [10736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(955), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(959), 1,
      anon_sym_DASH_DASH_LBRACK,
  [10764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 2,
      anon_sym_next,
      anon_sym_qed,
  [10772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    STATE(39), 1,
      sym_natural,
  [10790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 2,
      anon_sym_next,
      anon_sym_qed,
  [10806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_rule,
    STATE(177), 1,
      sym_simple_rule,
  [10872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 2,
      anon_sym_next,
      anon_sym_qed,
  [10880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_arity_token1,
    STATE(247), 1,
      sym_natural,
  [10890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 2,
      anon_sym_next,
      anon_sym_qed,
  [10898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_next,
      anon_sym_qed,
  [10914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_goal_ranking,
    STATE(317), 1,
      aux_sym_global_heuristic_repeat1,
  [10924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_left,
      anon_sym_right,
  [10932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_E,
      anon_sym_AC,
  [10948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_arity_token1,
    STATE(498), 1,
      sym_natural,
  [10966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [10974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_ident,
    STATE(186), 1,
      sym_function_sym,
  [10984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_RBRACK,
  [10991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LPAREN,
  [10998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_LBRACK,
  [11005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
  [11012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_COLON,
  [11019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COLON,
  [11026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_COLON,
  [11033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_ident,
  [11040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
  [11047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
  [11054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
  [11061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_RBRACK,
  [11068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COLON,
  [11075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
  [11082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LBRACK,
  [11089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym_hexcolor,
  [11096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_ident,
  [11103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
  [11110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
  [11117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
  [11124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [11131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [11138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
  [11145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COLON,
  [11152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
  [11159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_COLON,
  [11166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_ident,
  [11173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [11180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
  [11187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_SQUOTE,
  [11194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
  [11201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
  [11208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym_ident,
  [11215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_msg,
  [11222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
  [11229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_TILDE_TILDE_GT,
  [11236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
  [11243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_ident,
  [11250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COLON,
  [11257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_LBRACK,
  [11264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [11271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [11278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
  [11285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
  [11292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_case,
  [11299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
  [11306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
  [11313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_msg,
  [11320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_RBRACK,
  [11327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
  [11334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
  [11341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [11348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RBRACK,
  [11355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
  [11362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_RBRACK,
  [11369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_ident,
  [11376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_EQ,
  [11383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [11390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
  [11397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_RBRACK,
  [11404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_SQUOTE,
  [11411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RBRACK_DASH_GT,
  [11418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
  [11425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LBRACK,
  [11432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_COLON,
  [11439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym_ident,
  [11446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_msg,
  [11453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_EQ,
  [11460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      sym_ident,
  [11467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      sym_ident,
  [11474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym_ident,
  [11481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
  [11488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_SLASH,
  [11495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym_ident,
  [11502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_STAR_RBRACE,
  [11509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
  [11516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
  [11523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      sym_ident,
  [11530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_node,
  [11537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      ts_builtin_sym_end,
  [11544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_COLON,
  [11551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_RBRACK,
  [11558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      sym_ident,
  [11565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
  [11572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      sym_ident,
  [11579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_DQUOTE,
  [11586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_ident,
  [11593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_DQUOTE,
  [11600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_ident,
  [11607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym_ident,
  [11614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_modulo,
  [11621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COLON,
  [11628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LBRACK,
  [11635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
  [11642] = 2,
    ACTIONS(1159), 1,
      aux_sym_formal_comment_token1,
    ACTIONS(1161), 1,
      sym_comment,
  [11649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_LBRACK,
  [11656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_end,
  [11663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACK_DASH_GT,
  [11670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_LPAREN,
  [11677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_LBRACK,
  [11684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_ident,
  [11691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LBRACK,
  [11698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_LBRACK,
  [11705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_LBRACK,
  [11712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LBRACK,
  [11719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_ident,
  [11726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_node,
  [11733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COLON,
  [11740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COLON,
  [11747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COLON,
  [11754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_COLON,
  [11761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_STAR,
  [11768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      ts_builtin_sym_end,
  [11775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_EQ,
  [11782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_AT,
  [11789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_RBRACK_DASH_GT,
  [11796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_DQUOTE,
  [11803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RBRACK_DASH_GT,
  [11810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_COLON,
  [11817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_RBRACK_DASH_GT,
  [11824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_RBRACK_DASH_GT,
  [11831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_begin,
  [11838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      ts_builtin_sym_end,
  [11845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_RBRACK,
  [11852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_RBRACK,
  [11859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
  [11866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_RBRACK,
  [11873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_DQUOTE,
  [11880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_RBRACK,
  [11887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LBRACK,
  [11894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RBRACK_DASH_GT,
  [11901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      ts_builtin_sym_end,
  [11908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_RBRACK_DASH_GT,
  [11915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_LBRACK,
  [11922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_RBRACK,
  [11929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_COLON,
  [11936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
  [11943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
  [11950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
  [11957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
  [11964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LBRACK,
  [11971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_LBRACK,
  [11978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_ident,
  [11985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_COLON,
  [11992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
  [11999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_COLON,
  [12006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LPAREN,
  [12013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 114,
  [SMALL_STATE(4)] = 228,
  [SMALL_STATE(5)] = 336,
  [SMALL_STATE(6)] = 444,
  [SMALL_STATE(7)] = 552,
  [SMALL_STATE(8)] = 660,
  [SMALL_STATE(9)] = 768,
  [SMALL_STATE(10)] = 876,
  [SMALL_STATE(11)] = 984,
  [SMALL_STATE(12)] = 1092,
  [SMALL_STATE(13)] = 1200,
  [SMALL_STATE(14)] = 1308,
  [SMALL_STATE(15)] = 1416,
  [SMALL_STATE(16)] = 1521,
  [SMALL_STATE(17)] = 1626,
  [SMALL_STATE(18)] = 1731,
  [SMALL_STATE(19)] = 1836,
  [SMALL_STATE(20)] = 1935,
  [SMALL_STATE(21)] = 2034,
  [SMALL_STATE(22)] = 2133,
  [SMALL_STATE(23)] = 2232,
  [SMALL_STATE(24)] = 2328,
  [SMALL_STATE(25)] = 2424,
  [SMALL_STATE(26)] = 2511,
  [SMALL_STATE(27)] = 2598,
  [SMALL_STATE(28)] = 2628,
  [SMALL_STATE(29)] = 2664,
  [SMALL_STATE(30)] = 2697,
  [SMALL_STATE(31)] = 2746,
  [SMALL_STATE(32)] = 2778,
  [SMALL_STATE(33)] = 2808,
  [SMALL_STATE(34)] = 2854,
  [SMALL_STATE(35)] = 2886,
  [SMALL_STATE(36)] = 2932,
  [SMALL_STATE(37)] = 2964,
  [SMALL_STATE(38)] = 2991,
  [SMALL_STATE(39)] = 3018,
  [SMALL_STATE(40)] = 3045,
  [SMALL_STATE(41)] = 3098,
  [SMALL_STATE(42)] = 3125,
  [SMALL_STATE(43)] = 3156,
  [SMALL_STATE(44)] = 3183,
  [SMALL_STATE(45)] = 3236,
  [SMALL_STATE(46)] = 3263,
  [SMALL_STATE(47)] = 3290,
  [SMALL_STATE(48)] = 3317,
  [SMALL_STATE(49)] = 3348,
  [SMALL_STATE(50)] = 3379,
  [SMALL_STATE(51)] = 3406,
  [SMALL_STATE(52)] = 3433,
  [SMALL_STATE(53)] = 3460,
  [SMALL_STATE(54)] = 3487,
  [SMALL_STATE(55)] = 3514,
  [SMALL_STATE(56)] = 3541,
  [SMALL_STATE(57)] = 3568,
  [SMALL_STATE(58)] = 3595,
  [SMALL_STATE(59)] = 3648,
  [SMALL_STATE(60)] = 3701,
  [SMALL_STATE(61)] = 3728,
  [SMALL_STATE(62)] = 3781,
  [SMALL_STATE(63)] = 3808,
  [SMALL_STATE(64)] = 3844,
  [SMALL_STATE(65)] = 3894,
  [SMALL_STATE(66)] = 3944,
  [SMALL_STATE(67)] = 3994,
  [SMALL_STATE(68)] = 4030,
  [SMALL_STATE(69)] = 4080,
  [SMALL_STATE(70)] = 4130,
  [SMALL_STATE(71)] = 4160,
  [SMALL_STATE(72)] = 4210,
  [SMALL_STATE(73)] = 4246,
  [SMALL_STATE(74)] = 4276,
  [SMALL_STATE(75)] = 4326,
  [SMALL_STATE(76)] = 4362,
  [SMALL_STATE(77)] = 4412,
  [SMALL_STATE(78)] = 4462,
  [SMALL_STATE(79)] = 4488,
  [SMALL_STATE(80)] = 4518,
  [SMALL_STATE(81)] = 4568,
  [SMALL_STATE(82)] = 4618,
  [SMALL_STATE(83)] = 4668,
  [SMALL_STATE(84)] = 4693,
  [SMALL_STATE(85)] = 4718,
  [SMALL_STATE(86)] = 4765,
  [SMALL_STATE(87)] = 4812,
  [SMALL_STATE(88)] = 4840,
  [SMALL_STATE(89)] = 4868,
  [SMALL_STATE(90)] = 4912,
  [SMALL_STATE(91)] = 4956,
  [SMALL_STATE(92)] = 4984,
  [SMALL_STATE(93)] = 5025,
  [SMALL_STATE(94)] = 5050,
  [SMALL_STATE(95)] = 5091,
  [SMALL_STATE(96)] = 5132,
  [SMALL_STATE(97)] = 5173,
  [SMALL_STATE(98)] = 5211,
  [SMALL_STATE(99)] = 5249,
  [SMALL_STATE(100)] = 5273,
  [SMALL_STATE(101)] = 5311,
  [SMALL_STATE(102)] = 5338,
  [SMALL_STATE(103)] = 5361,
  [SMALL_STATE(104)] = 5384,
  [SMALL_STATE(105)] = 5405,
  [SMALL_STATE(106)] = 5427,
  [SMALL_STATE(107)] = 5453,
  [SMALL_STATE(108)] = 5473,
  [SMALL_STATE(109)] = 5493,
  [SMALL_STATE(110)] = 5515,
  [SMALL_STATE(111)] = 5537,
  [SMALL_STATE(112)] = 5557,
  [SMALL_STATE(113)] = 5577,
  [SMALL_STATE(114)] = 5601,
  [SMALL_STATE(115)] = 5623,
  [SMALL_STATE(116)] = 5643,
  [SMALL_STATE(117)] = 5665,
  [SMALL_STATE(118)] = 5682,
  [SMALL_STATE(119)] = 5705,
  [SMALL_STATE(120)] = 5726,
  [SMALL_STATE(121)] = 5743,
  [SMALL_STATE(122)] = 5766,
  [SMALL_STATE(123)] = 5787,
  [SMALL_STATE(124)] = 5804,
  [SMALL_STATE(125)] = 5825,
  [SMALL_STATE(126)] = 5842,
  [SMALL_STATE(127)] = 5859,
  [SMALL_STATE(128)] = 5880,
  [SMALL_STATE(129)] = 5897,
  [SMALL_STATE(130)] = 5918,
  [SMALL_STATE(131)] = 5939,
  [SMALL_STATE(132)] = 5960,
  [SMALL_STATE(133)] = 5981,
  [SMALL_STATE(134)] = 6002,
  [SMALL_STATE(135)] = 6023,
  [SMALL_STATE(136)] = 6044,
  [SMALL_STATE(137)] = 6061,
  [SMALL_STATE(138)] = 6082,
  [SMALL_STATE(139)] = 6103,
  [SMALL_STATE(140)] = 6124,
  [SMALL_STATE(141)] = 6143,
  [SMALL_STATE(142)] = 6160,
  [SMALL_STATE(143)] = 6181,
  [SMALL_STATE(144)] = 6198,
  [SMALL_STATE(145)] = 6215,
  [SMALL_STATE(146)] = 6238,
  [SMALL_STATE(147)] = 6259,
  [SMALL_STATE(148)] = 6276,
  [SMALL_STATE(149)] = 6297,
  [SMALL_STATE(150)] = 6316,
  [SMALL_STATE(151)] = 6332,
  [SMALL_STATE(152)] = 6348,
  [SMALL_STATE(153)] = 6366,
  [SMALL_STATE(154)] = 6384,
  [SMALL_STATE(155)] = 6402,
  [SMALL_STATE(156)] = 6420,
  [SMALL_STATE(157)] = 6440,
  [SMALL_STATE(158)] = 6468,
  [SMALL_STATE(159)] = 6486,
  [SMALL_STATE(160)] = 6504,
  [SMALL_STATE(161)] = 6520,
  [SMALL_STATE(162)] = 6548,
  [SMALL_STATE(163)] = 6568,
  [SMALL_STATE(164)] = 6588,
  [SMALL_STATE(165)] = 6606,
  [SMALL_STATE(166)] = 6626,
  [SMALL_STATE(167)] = 6644,
  [SMALL_STATE(168)] = 6662,
  [SMALL_STATE(169)] = 6682,
  [SMALL_STATE(170)] = 6700,
  [SMALL_STATE(171)] = 6720,
  [SMALL_STATE(172)] = 6738,
  [SMALL_STATE(173)] = 6756,
  [SMALL_STATE(174)] = 6784,
  [SMALL_STATE(175)] = 6802,
  [SMALL_STATE(176)] = 6820,
  [SMALL_STATE(177)] = 6838,
  [SMALL_STATE(178)] = 6856,
  [SMALL_STATE(179)] = 6874,
  [SMALL_STATE(180)] = 6892,
  [SMALL_STATE(181)] = 6910,
  [SMALL_STATE(182)] = 6928,
  [SMALL_STATE(183)] = 6946,
  [SMALL_STATE(184)] = 6962,
  [SMALL_STATE(185)] = 6990,
  [SMALL_STATE(186)] = 7008,
  [SMALL_STATE(187)] = 7026,
  [SMALL_STATE(188)] = 7042,
  [SMALL_STATE(189)] = 7060,
  [SMALL_STATE(190)] = 7078,
  [SMALL_STATE(191)] = 7096,
  [SMALL_STATE(192)] = 7114,
  [SMALL_STATE(193)] = 7132,
  [SMALL_STATE(194)] = 7150,
  [SMALL_STATE(195)] = 7178,
  [SMALL_STATE(196)] = 7202,
  [SMALL_STATE(197)] = 7222,
  [SMALL_STATE(198)] = 7240,
  [SMALL_STATE(199)] = 7258,
  [SMALL_STATE(200)] = 7274,
  [SMALL_STATE(201)] = 7292,
  [SMALL_STATE(202)] = 7310,
  [SMALL_STATE(203)] = 7326,
  [SMALL_STATE(204)] = 7344,
  [SMALL_STATE(205)] = 7360,
  [SMALL_STATE(206)] = 7385,
  [SMALL_STATE(207)] = 7400,
  [SMALL_STATE(208)] = 7425,
  [SMALL_STATE(209)] = 7440,
  [SMALL_STATE(210)] = 7455,
  [SMALL_STATE(211)] = 7470,
  [SMALL_STATE(212)] = 7485,
  [SMALL_STATE(213)] = 7500,
  [SMALL_STATE(214)] = 7515,
  [SMALL_STATE(215)] = 7538,
  [SMALL_STATE(216)] = 7559,
  [SMALL_STATE(217)] = 7584,
  [SMALL_STATE(218)] = 7599,
  [SMALL_STATE(219)] = 7616,
  [SMALL_STATE(220)] = 7631,
  [SMALL_STATE(221)] = 7646,
  [SMALL_STATE(222)] = 7661,
  [SMALL_STATE(223)] = 7676,
  [SMALL_STATE(224)] = 7699,
  [SMALL_STATE(225)] = 7724,
  [SMALL_STATE(226)] = 7749,
  [SMALL_STATE(227)] = 7764,
  [SMALL_STATE(228)] = 7779,
  [SMALL_STATE(229)] = 7799,
  [SMALL_STATE(230)] = 7819,
  [SMALL_STATE(231)] = 7839,
  [SMALL_STATE(232)] = 7857,
  [SMALL_STATE(233)] = 7875,
  [SMALL_STATE(234)] = 7895,
  [SMALL_STATE(235)] = 7915,
  [SMALL_STATE(236)] = 7933,
  [SMALL_STATE(237)] = 7951,
  [SMALL_STATE(238)] = 7966,
  [SMALL_STATE(239)] = 7985,
  [SMALL_STATE(240)] = 8000,
  [SMALL_STATE(241)] = 8019,
  [SMALL_STATE(242)] = 8034,
  [SMALL_STATE(243)] = 8049,
  [SMALL_STATE(244)] = 8064,
  [SMALL_STATE(245)] = 8079,
  [SMALL_STATE(246)] = 8094,
  [SMALL_STATE(247)] = 8109,
  [SMALL_STATE(248)] = 8124,
  [SMALL_STATE(249)] = 8139,
  [SMALL_STATE(250)] = 8154,
  [SMALL_STATE(251)] = 8169,
  [SMALL_STATE(252)] = 8184,
  [SMALL_STATE(253)] = 8203,
  [SMALL_STATE(254)] = 8218,
  [SMALL_STATE(255)] = 8233,
  [SMALL_STATE(256)] = 8248,
  [SMALL_STATE(257)] = 8264,
  [SMALL_STATE(258)] = 8284,
  [SMALL_STATE(259)] = 8300,
  [SMALL_STATE(260)] = 8314,
  [SMALL_STATE(261)] = 8328,
  [SMALL_STATE(262)] = 8344,
  [SMALL_STATE(263)] = 8360,
  [SMALL_STATE(264)] = 8380,
  [SMALL_STATE(265)] = 8394,
  [SMALL_STATE(266)] = 8410,
  [SMALL_STATE(267)] = 8426,
  [SMALL_STATE(268)] = 8438,
  [SMALL_STATE(269)] = 8458,
  [SMALL_STATE(270)] = 8469,
  [SMALL_STATE(271)] = 8480,
  [SMALL_STATE(272)] = 8491,
  [SMALL_STATE(273)] = 8504,
  [SMALL_STATE(274)] = 8517,
  [SMALL_STATE(275)] = 8528,
  [SMALL_STATE(276)] = 8539,
  [SMALL_STATE(277)] = 8552,
  [SMALL_STATE(278)] = 8563,
  [SMALL_STATE(279)] = 8574,
  [SMALL_STATE(280)] = 8585,
  [SMALL_STATE(281)] = 8596,
  [SMALL_STATE(282)] = 8606,
  [SMALL_STATE(283)] = 8622,
  [SMALL_STATE(284)] = 8638,
  [SMALL_STATE(285)] = 8654,
  [SMALL_STATE(286)] = 8666,
  [SMALL_STATE(287)] = 8676,
  [SMALL_STATE(288)] = 8692,
  [SMALL_STATE(289)] = 8708,
  [SMALL_STATE(290)] = 8724,
  [SMALL_STATE(291)] = 8740,
  [SMALL_STATE(292)] = 8756,
  [SMALL_STATE(293)] = 8772,
  [SMALL_STATE(294)] = 8788,
  [SMALL_STATE(295)] = 8804,
  [SMALL_STATE(296)] = 8820,
  [SMALL_STATE(297)] = 8836,
  [SMALL_STATE(298)] = 8852,
  [SMALL_STATE(299)] = 8868,
  [SMALL_STATE(300)] = 8884,
  [SMALL_STATE(301)] = 8900,
  [SMALL_STATE(302)] = 8912,
  [SMALL_STATE(303)] = 8926,
  [SMALL_STATE(304)] = 8942,
  [SMALL_STATE(305)] = 8956,
  [SMALL_STATE(306)] = 8972,
  [SMALL_STATE(307)] = 8986,
  [SMALL_STATE(308)] = 9000,
  [SMALL_STATE(309)] = 9014,
  [SMALL_STATE(310)] = 9028,
  [SMALL_STATE(311)] = 9042,
  [SMALL_STATE(312)] = 9058,
  [SMALL_STATE(313)] = 9074,
  [SMALL_STATE(314)] = 9088,
  [SMALL_STATE(315)] = 9102,
  [SMALL_STATE(316)] = 9112,
  [SMALL_STATE(317)] = 9128,
  [SMALL_STATE(318)] = 9142,
  [SMALL_STATE(319)] = 9158,
  [SMALL_STATE(320)] = 9172,
  [SMALL_STATE(321)] = 9188,
  [SMALL_STATE(322)] = 9204,
  [SMALL_STATE(323)] = 9218,
  [SMALL_STATE(324)] = 9234,
  [SMALL_STATE(325)] = 9250,
  [SMALL_STATE(326)] = 9266,
  [SMALL_STATE(327)] = 9276,
  [SMALL_STATE(328)] = 9290,
  [SMALL_STATE(329)] = 9300,
  [SMALL_STATE(330)] = 9316,
  [SMALL_STATE(331)] = 9330,
  [SMALL_STATE(332)] = 9342,
  [SMALL_STATE(333)] = 9352,
  [SMALL_STATE(334)] = 9368,
  [SMALL_STATE(335)] = 9378,
  [SMALL_STATE(336)] = 9392,
  [SMALL_STATE(337)] = 9405,
  [SMALL_STATE(338)] = 9418,
  [SMALL_STATE(339)] = 9431,
  [SMALL_STATE(340)] = 9444,
  [SMALL_STATE(341)] = 9457,
  [SMALL_STATE(342)] = 9470,
  [SMALL_STATE(343)] = 9483,
  [SMALL_STATE(344)] = 9496,
  [SMALL_STATE(345)] = 9509,
  [SMALL_STATE(346)] = 9522,
  [SMALL_STATE(347)] = 9535,
  [SMALL_STATE(348)] = 9548,
  [SMALL_STATE(349)] = 9561,
  [SMALL_STATE(350)] = 9574,
  [SMALL_STATE(351)] = 9587,
  [SMALL_STATE(352)] = 9600,
  [SMALL_STATE(353)] = 9613,
  [SMALL_STATE(354)] = 9626,
  [SMALL_STATE(355)] = 9637,
  [SMALL_STATE(356)] = 9650,
  [SMALL_STATE(357)] = 9663,
  [SMALL_STATE(358)] = 9676,
  [SMALL_STATE(359)] = 9689,
  [SMALL_STATE(360)] = 9702,
  [SMALL_STATE(361)] = 9715,
  [SMALL_STATE(362)] = 9728,
  [SMALL_STATE(363)] = 9741,
  [SMALL_STATE(364)] = 9752,
  [SMALL_STATE(365)] = 9765,
  [SMALL_STATE(366)] = 9778,
  [SMALL_STATE(367)] = 9791,
  [SMALL_STATE(368)] = 9804,
  [SMALL_STATE(369)] = 9817,
  [SMALL_STATE(370)] = 9830,
  [SMALL_STATE(371)] = 9843,
  [SMALL_STATE(372)] = 9856,
  [SMALL_STATE(373)] = 9869,
  [SMALL_STATE(374)] = 9882,
  [SMALL_STATE(375)] = 9895,
  [SMALL_STATE(376)] = 9908,
  [SMALL_STATE(377)] = 9921,
  [SMALL_STATE(378)] = 9934,
  [SMALL_STATE(379)] = 9947,
  [SMALL_STATE(380)] = 9958,
  [SMALL_STATE(381)] = 9971,
  [SMALL_STATE(382)] = 9984,
  [SMALL_STATE(383)] = 9997,
  [SMALL_STATE(384)] = 10008,
  [SMALL_STATE(385)] = 10021,
  [SMALL_STATE(386)] = 10034,
  [SMALL_STATE(387)] = 10047,
  [SMALL_STATE(388)] = 10060,
  [SMALL_STATE(389)] = 10073,
  [SMALL_STATE(390)] = 10086,
  [SMALL_STATE(391)] = 10099,
  [SMALL_STATE(392)] = 10112,
  [SMALL_STATE(393)] = 10125,
  [SMALL_STATE(394)] = 10138,
  [SMALL_STATE(395)] = 10151,
  [SMALL_STATE(396)] = 10164,
  [SMALL_STATE(397)] = 10177,
  [SMALL_STATE(398)] = 10190,
  [SMALL_STATE(399)] = 10201,
  [SMALL_STATE(400)] = 10214,
  [SMALL_STATE(401)] = 10227,
  [SMALL_STATE(402)] = 10240,
  [SMALL_STATE(403)] = 10253,
  [SMALL_STATE(404)] = 10266,
  [SMALL_STATE(405)] = 10279,
  [SMALL_STATE(406)] = 10292,
  [SMALL_STATE(407)] = 10305,
  [SMALL_STATE(408)] = 10314,
  [SMALL_STATE(409)] = 10327,
  [SMALL_STATE(410)] = 10340,
  [SMALL_STATE(411)] = 10353,
  [SMALL_STATE(412)] = 10364,
  [SMALL_STATE(413)] = 10377,
  [SMALL_STATE(414)] = 10390,
  [SMALL_STATE(415)] = 10401,
  [SMALL_STATE(416)] = 10414,
  [SMALL_STATE(417)] = 10427,
  [SMALL_STATE(418)] = 10440,
  [SMALL_STATE(419)] = 10453,
  [SMALL_STATE(420)] = 10466,
  [SMALL_STATE(421)] = 10476,
  [SMALL_STATE(422)] = 10486,
  [SMALL_STATE(423)] = 10496,
  [SMALL_STATE(424)] = 10504,
  [SMALL_STATE(425)] = 10512,
  [SMALL_STATE(426)] = 10522,
  [SMALL_STATE(427)] = 10532,
  [SMALL_STATE(428)] = 10542,
  [SMALL_STATE(429)] = 10550,
  [SMALL_STATE(430)] = 10560,
  [SMALL_STATE(431)] = 10570,
  [SMALL_STATE(432)] = 10580,
  [SMALL_STATE(433)] = 10590,
  [SMALL_STATE(434)] = 10600,
  [SMALL_STATE(435)] = 10610,
  [SMALL_STATE(436)] = 10618,
  [SMALL_STATE(437)] = 10628,
  [SMALL_STATE(438)] = 10638,
  [SMALL_STATE(439)] = 10646,
  [SMALL_STATE(440)] = 10656,
  [SMALL_STATE(441)] = 10666,
  [SMALL_STATE(442)] = 10674,
  [SMALL_STATE(443)] = 10684,
  [SMALL_STATE(444)] = 10692,
  [SMALL_STATE(445)] = 10700,
  [SMALL_STATE(446)] = 10708,
  [SMALL_STATE(447)] = 10718,
  [SMALL_STATE(448)] = 10728,
  [SMALL_STATE(449)] = 10736,
  [SMALL_STATE(450)] = 10746,
  [SMALL_STATE(451)] = 10754,
  [SMALL_STATE(452)] = 10764,
  [SMALL_STATE(453)] = 10772,
  [SMALL_STATE(454)] = 10780,
  [SMALL_STATE(455)] = 10790,
  [SMALL_STATE(456)] = 10798,
  [SMALL_STATE(457)] = 10806,
  [SMALL_STATE(458)] = 10814,
  [SMALL_STATE(459)] = 10822,
  [SMALL_STATE(460)] = 10830,
  [SMALL_STATE(461)] = 10838,
  [SMALL_STATE(462)] = 10846,
  [SMALL_STATE(463)] = 10854,
  [SMALL_STATE(464)] = 10862,
  [SMALL_STATE(465)] = 10872,
  [SMALL_STATE(466)] = 10880,
  [SMALL_STATE(467)] = 10890,
  [SMALL_STATE(468)] = 10898,
  [SMALL_STATE(469)] = 10906,
  [SMALL_STATE(470)] = 10914,
  [SMALL_STATE(471)] = 10924,
  [SMALL_STATE(472)] = 10932,
  [SMALL_STATE(473)] = 10940,
  [SMALL_STATE(474)] = 10948,
  [SMALL_STATE(475)] = 10956,
  [SMALL_STATE(476)] = 10966,
  [SMALL_STATE(477)] = 10974,
  [SMALL_STATE(478)] = 10984,
  [SMALL_STATE(479)] = 10991,
  [SMALL_STATE(480)] = 10998,
  [SMALL_STATE(481)] = 11005,
  [SMALL_STATE(482)] = 11012,
  [SMALL_STATE(483)] = 11019,
  [SMALL_STATE(484)] = 11026,
  [SMALL_STATE(485)] = 11033,
  [SMALL_STATE(486)] = 11040,
  [SMALL_STATE(487)] = 11047,
  [SMALL_STATE(488)] = 11054,
  [SMALL_STATE(489)] = 11061,
  [SMALL_STATE(490)] = 11068,
  [SMALL_STATE(491)] = 11075,
  [SMALL_STATE(492)] = 11082,
  [SMALL_STATE(493)] = 11089,
  [SMALL_STATE(494)] = 11096,
  [SMALL_STATE(495)] = 11103,
  [SMALL_STATE(496)] = 11110,
  [SMALL_STATE(497)] = 11117,
  [SMALL_STATE(498)] = 11124,
  [SMALL_STATE(499)] = 11131,
  [SMALL_STATE(500)] = 11138,
  [SMALL_STATE(501)] = 11145,
  [SMALL_STATE(502)] = 11152,
  [SMALL_STATE(503)] = 11159,
  [SMALL_STATE(504)] = 11166,
  [SMALL_STATE(505)] = 11173,
  [SMALL_STATE(506)] = 11180,
  [SMALL_STATE(507)] = 11187,
  [SMALL_STATE(508)] = 11194,
  [SMALL_STATE(509)] = 11201,
  [SMALL_STATE(510)] = 11208,
  [SMALL_STATE(511)] = 11215,
  [SMALL_STATE(512)] = 11222,
  [SMALL_STATE(513)] = 11229,
  [SMALL_STATE(514)] = 11236,
  [SMALL_STATE(515)] = 11243,
  [SMALL_STATE(516)] = 11250,
  [SMALL_STATE(517)] = 11257,
  [SMALL_STATE(518)] = 11264,
  [SMALL_STATE(519)] = 11271,
  [SMALL_STATE(520)] = 11278,
  [SMALL_STATE(521)] = 11285,
  [SMALL_STATE(522)] = 11292,
  [SMALL_STATE(523)] = 11299,
  [SMALL_STATE(524)] = 11306,
  [SMALL_STATE(525)] = 11313,
  [SMALL_STATE(526)] = 11320,
  [SMALL_STATE(527)] = 11327,
  [SMALL_STATE(528)] = 11334,
  [SMALL_STATE(529)] = 11341,
  [SMALL_STATE(530)] = 11348,
  [SMALL_STATE(531)] = 11355,
  [SMALL_STATE(532)] = 11362,
  [SMALL_STATE(533)] = 11369,
  [SMALL_STATE(534)] = 11376,
  [SMALL_STATE(535)] = 11383,
  [SMALL_STATE(536)] = 11390,
  [SMALL_STATE(537)] = 11397,
  [SMALL_STATE(538)] = 11404,
  [SMALL_STATE(539)] = 11411,
  [SMALL_STATE(540)] = 11418,
  [SMALL_STATE(541)] = 11425,
  [SMALL_STATE(542)] = 11432,
  [SMALL_STATE(543)] = 11439,
  [SMALL_STATE(544)] = 11446,
  [SMALL_STATE(545)] = 11453,
  [SMALL_STATE(546)] = 11460,
  [SMALL_STATE(547)] = 11467,
  [SMALL_STATE(548)] = 11474,
  [SMALL_STATE(549)] = 11481,
  [SMALL_STATE(550)] = 11488,
  [SMALL_STATE(551)] = 11495,
  [SMALL_STATE(552)] = 11502,
  [SMALL_STATE(553)] = 11509,
  [SMALL_STATE(554)] = 11516,
  [SMALL_STATE(555)] = 11523,
  [SMALL_STATE(556)] = 11530,
  [SMALL_STATE(557)] = 11537,
  [SMALL_STATE(558)] = 11544,
  [SMALL_STATE(559)] = 11551,
  [SMALL_STATE(560)] = 11558,
  [SMALL_STATE(561)] = 11565,
  [SMALL_STATE(562)] = 11572,
  [SMALL_STATE(563)] = 11579,
  [SMALL_STATE(564)] = 11586,
  [SMALL_STATE(565)] = 11593,
  [SMALL_STATE(566)] = 11600,
  [SMALL_STATE(567)] = 11607,
  [SMALL_STATE(568)] = 11614,
  [SMALL_STATE(569)] = 11621,
  [SMALL_STATE(570)] = 11628,
  [SMALL_STATE(571)] = 11635,
  [SMALL_STATE(572)] = 11642,
  [SMALL_STATE(573)] = 11649,
  [SMALL_STATE(574)] = 11656,
  [SMALL_STATE(575)] = 11663,
  [SMALL_STATE(576)] = 11670,
  [SMALL_STATE(577)] = 11677,
  [SMALL_STATE(578)] = 11684,
  [SMALL_STATE(579)] = 11691,
  [SMALL_STATE(580)] = 11698,
  [SMALL_STATE(581)] = 11705,
  [SMALL_STATE(582)] = 11712,
  [SMALL_STATE(583)] = 11719,
  [SMALL_STATE(584)] = 11726,
  [SMALL_STATE(585)] = 11733,
  [SMALL_STATE(586)] = 11740,
  [SMALL_STATE(587)] = 11747,
  [SMALL_STATE(588)] = 11754,
  [SMALL_STATE(589)] = 11761,
  [SMALL_STATE(590)] = 11768,
  [SMALL_STATE(591)] = 11775,
  [SMALL_STATE(592)] = 11782,
  [SMALL_STATE(593)] = 11789,
  [SMALL_STATE(594)] = 11796,
  [SMALL_STATE(595)] = 11803,
  [SMALL_STATE(596)] = 11810,
  [SMALL_STATE(597)] = 11817,
  [SMALL_STATE(598)] = 11824,
  [SMALL_STATE(599)] = 11831,
  [SMALL_STATE(600)] = 11838,
  [SMALL_STATE(601)] = 11845,
  [SMALL_STATE(602)] = 11852,
  [SMALL_STATE(603)] = 11859,
  [SMALL_STATE(604)] = 11866,
  [SMALL_STATE(605)] = 11873,
  [SMALL_STATE(606)] = 11880,
  [SMALL_STATE(607)] = 11887,
  [SMALL_STATE(608)] = 11894,
  [SMALL_STATE(609)] = 11901,
  [SMALL_STATE(610)] = 11908,
  [SMALL_STATE(611)] = 11915,
  [SMALL_STATE(612)] = 11922,
  [SMALL_STATE(613)] = 11929,
  [SMALL_STATE(614)] = 11936,
  [SMALL_STATE(615)] = 11943,
  [SMALL_STATE(616)] = 11950,
  [SMALL_STATE(617)] = 11957,
  [SMALL_STATE(618)] = 11964,
  [SMALL_STATE(619)] = 11971,
  [SMALL_STATE(620)] = 11978,
  [SMALL_STATE(621)] = 11985,
  [SMALL_STATE(622)] = 11992,
  [SMALL_STATE(623)] = 11999,
  [SMALL_STATE(624)] = 12006,
  [SMALL_STATE(625)] = 12013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expterm, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expterm, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expterm_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expterm_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expterm_repeat1, 2), SHIFT_REPEAT(97),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(589),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(588),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(587),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(586),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(585),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(352),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(583),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(353),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expterm, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expterm, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multterm_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multterm_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multterm_repeat1, 2), SHIFT_REPEAT(96),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multterm, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multterm, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multterm, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multterm, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xorterm, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xorterm, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xorterm, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xorterm, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xorterm_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xorterm_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xorterm_repeat1, 2), SHIFT_REPEAT(89),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msetterm_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msetterm_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msetterm_repeat1, 2), SHIFT_REPEAT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msetterm, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msetterm, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msetterm, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msetterm, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(102),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(127),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(95),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(464),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(197),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(477),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(260),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(510),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(533),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expterm_repeat1, 2), SHIFT_REPEAT(98),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multterm_repeat1, 2), SHIFT_REPEAT(94),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xorterm_repeat1, 2), SHIFT_REPEAT(90),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xorterm_repeat1, 2), SHIFT_REPEAT(90),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msetterm_repeat1, 2), SHIFT_REPEAT(85),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(447),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(327),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(65),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(404),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(228),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(331),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(11),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(522),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(398),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(388),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tamarin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
