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
#define STATE_COUNT 727
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 244
#define ALIAS_COUNT 0
#define TOKEN_COUNT 148
#define EXTERNAL_TOKEN_COUNT 1
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
  anon_sym_C = 24,
  anon_sym_I = 25,
  anon_sym_P = 26,
  anon_sym_S = 27,
  anon_sym_c = 28,
  anon_sym_i = 29,
  anon_sym_p = 30,
  anon_sym_s = 31,
  anon_sym_o = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_oracle_goal_ranking_token1 = 34,
  anon_sym_O = 35,
  anon_sym_tactic = 36,
  anon_sym_presort = 37,
  anon_sym_prio = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_deprio = 41,
  anon_sym_smallest = 42,
  anon_sym_id = 43,
  anon_sym_PIPE = 44,
  anon_sym_AMP = 45,
  anon_sym_not = 46,
  anon_sym_regex = 47,
  anon_sym_isFactName = 48,
  anon_sym_isInFactTerms = 49,
  anon_sym_dhreNoise = 50,
  anon_sym_defaultNoise = 51,
  anon_sym_reasonableNoncesNoise = 52,
  anon_sym_nonAbsurdGoal = 53,
  anon_sym_left = 54,
  anon_sym_right = 55,
  anon_sym_rule = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_DASH_DASH_GT = 59,
  anon_sym_DASH_DASH_LBRACK = 60,
  anon_sym_RBRACK_DASH_GT = 61,
  anon_sym_variants = 62,
  anon_sym_LPAREN = 63,
  anon_sym_modulo = 64,
  anon_sym_E = 65,
  anon_sym_AC = 66,
  anon_sym_RPAREN = 67,
  anon_sym_color_EQ = 68,
  anon_sym_colour_EQ = 69,
  anon_sym_let = 70,
  anon_sym_in = 71,
  anon_sym_DOT = 72,
  anon_sym_msg = 73,
  anon_sym_restriction = 74,
  anon_sym_lemma = 75,
  anon_sym_sources = 76,
  anon_sym_reuse = 77,
  anon_sym_use_induction = 78,
  anon_sym_hide_lemma_EQ = 79,
  anon_sym_heuristic_EQ = 80,
  anon_sym_all_DASHtrace = 81,
  anon_sym_exists_DASHtrace = 82,
  anon_sym_SOLVED = 83,
  anon_sym_by = 84,
  anon_sym_case = 85,
  anon_sym_next = 86,
  anon_sym_qed = 87,
  anon_sym_sorry = 88,
  anon_sym_simplify = 89,
  anon_sym_solve = 90,
  anon_sym_contradiction = 91,
  anon_sym_induction = 92,
  anon_sym_ = 93,
  anon_sym_AT = 94,
  anon_sym_TILDE_TILDE_GT = 95,
  anon_sym_2 = 96,
  anon_sym_splitEqs = 97,
  anon_sym_POUND = 98,
  anon_sym_node = 99,
  anon_sym_3 = 100,
  anon_sym_4 = 101,
  anon_sym_5 = 102,
  anon_sym_6 = 103,
  anon_sym_7 = 104,
  anon_sym_8 = 105,
  anon_sym_9 = 106,
  anon_sym_10 = 107,
  anon_sym_11 = 108,
  anon_sym_12 = 109,
  anon_sym_LBRACE_STAR = 110,
  aux_sym_formal_comment_token1 = 111,
  anon_sym_STAR_RBRACE = 112,
  anon_sym_LT = 113,
  anon_sym_GT = 114,
  anon_sym_PLUS = 115,
  anon_sym_XOR = 116,
  anon_sym_13 = 117,
  anon_sym_STAR = 118,
  anon_sym_CARET = 119,
  anon_sym_SQUOTE = 120,
  anon_sym_TILDE_SQUOTE = 121,
  anon_sym_DOLLAR = 122,
  anon_sym_pub = 123,
  anon_sym_TILDE = 124,
  anon_sym_fresh = 125,
  anon_sym_BANG = 126,
  anon_sym_DASH = 127,
  anon_sym_no_precomp = 128,
  anon_sym_LT_EQ_GT = 129,
  anon_sym_14 = 130,
  anon_sym_EQ_EQ_GT = 131,
  anon_sym_15 = 132,
  anon_sym_16 = 133,
  anon_sym_17 = 134,
  anon_sym_18 = 135,
  anon_sym_19 = 136,
  anon_sym_F = 137,
  anon_sym_20 = 138,
  anon_sym_T = 139,
  anon_sym_last = 140,
  anon_sym_Ex = 141,
  anon_sym_21 = 142,
  anon_sym_All = 143,
  anon_sym_22 = 144,
  sym_hexcolor = 145,
  sym_comment = 146,
  sym_multiline_comment = 147,
  sym_source_file = 148,
  sym_security_protocol_theory = 149,
  sym_body = 150,
  sym__signature_spec = 151,
  sym_functions = 152,
  sym_function_sym = 153,
  sym_arity = 154,
  sym_equations = 155,
  sym_equation = 156,
  sym_built_ins = 157,
  sym_built_in = 158,
  sym_global_heuristic = 159,
  sym_goal_ranking = 160,
  sym_standard_goal_ranking = 161,
  sym_oracle_goal_ranking = 162,
  sym_tactic = 163,
  sym_presort = 164,
  sym_prio = 165,
  sym_deprio = 166,
  sym_post_ranking = 167,
  sym_function = 168,
  sym_and_function = 169,
  sym_not_function = 170,
  sym_param = 171,
  sym_function_name = 172,
  sym_rule = 173,
  sym_simple_rule = 174,
  sym_variants = 175,
  sym_modulo = 176,
  sym_rule_attrs = 177,
  sym_rule_attr = 178,
  sym_let_block = 179,
  sym_msg_var = 180,
  sym_restriction = 181,
  sym_restriction_attrs = 182,
  sym_lemma = 183,
  sym_lemma_attrs = 184,
  sym_lemma_attr = 185,
  sym_trace_quantifier = 186,
  sym_proof_skeleton = 187,
  sym_proof_method = 188,
  sym_goal = 189,
  sym_node_var = 190,
  sym_natural = 191,
  sym_natural_subscr = 192,
  sym_formal_comment = 193,
  sym_tuple_term = 194,
  sym__msetterm = 195,
  sym__xorterm = 196,
  sym__multterm = 197,
  sym__expterm = 198,
  sym_term = 199,
  sym_nested = 200,
  sym_app = 201,
  sym_literal = 202,
  sym_nonnode_var = 203,
  sym_facts = 204,
  sym_fact = 205,
  sym_fact_annotes = 206,
  sym_fact_annote = 207,
  sym_formula = 208,
  sym_imp = 209,
  sym_disjunction = 210,
  sym_conjunction = 211,
  sym_negation = 212,
  sym_atom = 213,
  sym_lvar = 214,
  sym_quantifier = 215,
  aux_sym_body_repeat1 = 216,
  aux_sym_functions_repeat1 = 217,
  aux_sym_equations_repeat1 = 218,
  aux_sym_built_ins_repeat1 = 219,
  aux_sym_global_heuristic_repeat1 = 220,
  aux_sym_tactic_repeat1 = 221,
  aux_sym_tactic_repeat2 = 222,
  aux_sym_prio_repeat1 = 223,
  aux_sym_function_repeat1 = 224,
  aux_sym_and_function_repeat1 = 225,
  aux_sym_not_function_repeat1 = 226,
  aux_sym_variants_repeat1 = 227,
  aux_sym_rule_attrs_repeat1 = 228,
  aux_sym_let_block_repeat1 = 229,
  aux_sym_lemma_attrs_repeat1 = 230,
  aux_sym_proof_skeleton_repeat1 = 231,
  aux_sym_goal_repeat1 = 232,
  aux_sym_natural_subscr_repeat1 = 233,
  aux_sym_tuple_term_repeat1 = 234,
  aux_sym__msetterm_repeat1 = 235,
  aux_sym__xorterm_repeat1 = 236,
  aux_sym__multterm_repeat1 = 237,
  aux_sym__expterm_repeat1 = 238,
  aux_sym_facts_repeat1 = 239,
  aux_sym_fact_annotes_repeat1 = 240,
  aux_sym_disjunction_repeat1 = 241,
  aux_sym_conjunction_repeat1 = 242,
  aux_sym_atom_repeat1 = 243,
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
  [anon_sym_C] = "C",
  [anon_sym_I] = "I",
  [anon_sym_P] = "P",
  [anon_sym_S] = "S",
  [anon_sym_c] = "c",
  [anon_sym_i] = "i",
  [anon_sym_p] = "p",
  [anon_sym_s] = "s",
  [anon_sym_o] = "o",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_oracle_goal_ranking_token1] = "oracle_goal_ranking_token1",
  [anon_sym_O] = "O",
  [anon_sym_tactic] = "tactic",
  [anon_sym_presort] = "presort",
  [anon_sym_prio] = "prio",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_deprio] = "deprio",
  [anon_sym_smallest] = "smallest",
  [anon_sym_id] = "id",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_not] = "not",
  [anon_sym_regex] = "regex",
  [anon_sym_isFactName] = "isFactName",
  [anon_sym_isInFactTerms] = "isInFactTerms",
  [anon_sym_dhreNoise] = "dhreNoise",
  [anon_sym_defaultNoise] = "defaultNoise",
  [anon_sym_reasonableNoncesNoise] = "reasonableNoncesNoise",
  [anon_sym_nonAbsurdGoal] = "nonAbsurdGoal",
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
  [anon_sym_16] = "∨",
  [anon_sym_17] = "∧",
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
  [sym_multiline_comment] = "multiline_comment",
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
  [sym_goal_ranking] = "goal_ranking",
  [sym_standard_goal_ranking] = "standard_goal_ranking",
  [sym_oracle_goal_ranking] = "oracle_goal_ranking",
  [sym_tactic] = "tactic",
  [sym_presort] = "presort",
  [sym_prio] = "prio",
  [sym_deprio] = "deprio",
  [sym_post_ranking] = "post_ranking",
  [sym_function] = "function",
  [sym_and_function] = "and_function",
  [sym_not_function] = "not_function",
  [sym_param] = "param",
  [sym_function_name] = "function_name",
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
  [sym__msetterm] = "_msetterm",
  [sym__xorterm] = "_xorterm",
  [sym__multterm] = "_multterm",
  [sym__expterm] = "_expterm",
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
  [aux_sym_tactic_repeat1] = "tactic_repeat1",
  [aux_sym_tactic_repeat2] = "tactic_repeat2",
  [aux_sym_prio_repeat1] = "prio_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_and_function_repeat1] = "and_function_repeat1",
  [aux_sym_not_function_repeat1] = "not_function_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_rule_attrs_repeat1] = "rule_attrs_repeat1",
  [aux_sym_let_block_repeat1] = "let_block_repeat1",
  [aux_sym_lemma_attrs_repeat1] = "lemma_attrs_repeat1",
  [aux_sym_proof_skeleton_repeat1] = "proof_skeleton_repeat1",
  [aux_sym_goal_repeat1] = "goal_repeat1",
  [aux_sym_natural_subscr_repeat1] = "natural_subscr_repeat1",
  [aux_sym_tuple_term_repeat1] = "tuple_term_repeat1",
  [aux_sym__msetterm_repeat1] = "_msetterm_repeat1",
  [aux_sym__xorterm_repeat1] = "_xorterm_repeat1",
  [aux_sym__multterm_repeat1] = "_multterm_repeat1",
  [aux_sym__expterm_repeat1] = "_expterm_repeat1",
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
  [anon_sym_C] = anon_sym_C,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_oracle_goal_ranking_token1] = aux_sym_oracle_goal_ranking_token1,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_tactic] = anon_sym_tactic,
  [anon_sym_presort] = anon_sym_presort,
  [anon_sym_prio] = anon_sym_prio,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_deprio] = anon_sym_deprio,
  [anon_sym_smallest] = anon_sym_smallest,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_isFactName] = anon_sym_isFactName,
  [anon_sym_isInFactTerms] = anon_sym_isInFactTerms,
  [anon_sym_dhreNoise] = anon_sym_dhreNoise,
  [anon_sym_defaultNoise] = anon_sym_defaultNoise,
  [anon_sym_reasonableNoncesNoise] = anon_sym_reasonableNoncesNoise,
  [anon_sym_nonAbsurdGoal] = anon_sym_nonAbsurdGoal,
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
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
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
  [sym_multiline_comment] = sym_multiline_comment,
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
  [sym_goal_ranking] = sym_goal_ranking,
  [sym_standard_goal_ranking] = sym_standard_goal_ranking,
  [sym_oracle_goal_ranking] = sym_oracle_goal_ranking,
  [sym_tactic] = sym_tactic,
  [sym_presort] = sym_presort,
  [sym_prio] = sym_prio,
  [sym_deprio] = sym_deprio,
  [sym_post_ranking] = sym_post_ranking,
  [sym_function] = sym_function,
  [sym_and_function] = sym_and_function,
  [sym_not_function] = sym_not_function,
  [sym_param] = sym_param,
  [sym_function_name] = sym_function_name,
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
  [sym__msetterm] = sym__msetterm,
  [sym__xorterm] = sym__xorterm,
  [sym__multterm] = sym__multterm,
  [sym__expterm] = sym__expterm,
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
  [aux_sym_tactic_repeat1] = aux_sym_tactic_repeat1,
  [aux_sym_tactic_repeat2] = aux_sym_tactic_repeat2,
  [aux_sym_prio_repeat1] = aux_sym_prio_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_and_function_repeat1] = aux_sym_and_function_repeat1,
  [aux_sym_not_function_repeat1] = aux_sym_not_function_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_rule_attrs_repeat1] = aux_sym_rule_attrs_repeat1,
  [aux_sym_let_block_repeat1] = aux_sym_let_block_repeat1,
  [aux_sym_lemma_attrs_repeat1] = aux_sym_lemma_attrs_repeat1,
  [aux_sym_proof_skeleton_repeat1] = aux_sym_proof_skeleton_repeat1,
  [aux_sym_goal_repeat1] = aux_sym_goal_repeat1,
  [aux_sym_natural_subscr_repeat1] = aux_sym_natural_subscr_repeat1,
  [aux_sym_tuple_term_repeat1] = aux_sym_tuple_term_repeat1,
  [aux_sym__msetterm_repeat1] = aux_sym__msetterm_repeat1,
  [aux_sym__xorterm_repeat1] = aux_sym__xorterm_repeat1,
  [aux_sym__multterm_repeat1] = aux_sym__multterm_repeat1,
  [aux_sym__expterm_repeat1] = aux_sym__expterm_repeat1,
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
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oracle_goal_ranking_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tactic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_presort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deprio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smallest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isFactName] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isInFactTerms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dhreNoise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defaultNoise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reasonableNoncesNoise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonAbsurdGoal] = {
    .visible = true,
    .named = false,
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
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
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
  [sym_multiline_comment] = {
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
  [sym_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_tactic] = {
    .visible = true,
    .named = true,
  },
  [sym_presort] = {
    .visible = true,
    .named = true,
  },
  [sym_prio] = {
    .visible = true,
    .named = true,
  },
  [sym_deprio] = {
    .visible = true,
    .named = true,
  },
  [sym_post_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_and_function] = {
    .visible = true,
    .named = true,
  },
  [sym_not_function] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
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
  [sym__msetterm] = {
    .visible = false,
    .named = true,
  },
  [sym__xorterm] = {
    .visible = false,
    .named = true,
  },
  [sym__multterm] = {
    .visible = false,
    .named = true,
  },
  [sym__expterm] = {
    .visible = false,
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
  [aux_sym_tactic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tactic_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prio_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_and_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_function_repeat1] = {
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
  [aux_sym__msetterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__xorterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expterm_repeat1] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 8,
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
  [32] = 28,
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
  [43] = 40,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 34,
  [48] = 48,
  [49] = 41,
  [50] = 50,
  [51] = 51,
  [52] = 38,
  [53] = 37,
  [54] = 36,
  [55] = 55,
  [56] = 50,
  [57] = 48,
  [58] = 42,
  [59] = 45,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 46,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 61,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 62,
  [73] = 66,
  [74] = 74,
  [75] = 75,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 85,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 87,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 113,
  [119] = 113,
  [120] = 117,
  [121] = 112,
  [122] = 122,
  [123] = 112,
  [124] = 124,
  [125] = 125,
  [126] = 117,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 35,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 55,
  [152] = 152,
  [153] = 153,
  [154] = 148,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 69,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 64,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 81,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 172,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 177,
  [191] = 191,
  [192] = 78,
  [193] = 75,
  [194] = 194,
  [195] = 74,
  [196] = 196,
  [197] = 197,
  [198] = 111,
  [199] = 199,
  [200] = 86,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 100,
  [205] = 105,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 206,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 102,
  [218] = 101,
  [219] = 98,
  [220] = 97,
  [221] = 221,
  [222] = 209,
  [223] = 212,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 95,
  [231] = 231,
  [232] = 232,
  [233] = 197,
  [234] = 215,
  [235] = 83,
  [236] = 91,
  [237] = 237,
  [238] = 109,
  [239] = 239,
  [240] = 240,
  [241] = 93,
  [242] = 239,
  [243] = 240,
  [244] = 244,
  [245] = 232,
  [246] = 110,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 172,
  [252] = 55,
  [253] = 176,
  [254] = 254,
  [255] = 174,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 172,
  [260] = 260,
  [261] = 261,
  [262] = 191,
  [263] = 263,
  [264] = 177,
  [265] = 254,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 256,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 169,
  [276] = 169,
  [277] = 174,
  [278] = 177,
  [279] = 263,
  [280] = 280,
  [281] = 267,
  [282] = 191,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 69,
  [287] = 287,
  [288] = 285,
  [289] = 289,
  [290] = 284,
  [291] = 64,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 191,
  [297] = 174,
  [298] = 298,
  [299] = 81,
  [300] = 77,
  [301] = 80,
  [302] = 169,
  [303] = 79,
  [304] = 298,
  [305] = 305,
  [306] = 95,
  [307] = 86,
  [308] = 92,
  [309] = 109,
  [310] = 98,
  [311] = 110,
  [312] = 105,
  [313] = 111,
  [314] = 90,
  [315] = 231,
  [316] = 93,
  [317] = 97,
  [318] = 91,
  [319] = 88,
  [320] = 84,
  [321] = 102,
  [322] = 83,
  [323] = 101,
  [324] = 100,
  [325] = 325,
  [326] = 114,
  [327] = 327,
  [328] = 122,
  [329] = 125,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 115,
  [334] = 64,
  [335] = 325,
  [336] = 336,
  [337] = 337,
  [338] = 213,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 97,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 142,
  [348] = 348,
  [349] = 349,
  [350] = 340,
  [351] = 344,
  [352] = 352,
  [353] = 349,
  [354] = 354,
  [355] = 355,
  [356] = 231,
  [357] = 101,
  [358] = 129,
  [359] = 359,
  [360] = 345,
  [361] = 361,
  [362] = 362,
  [363] = 339,
  [364] = 364,
  [365] = 105,
  [366] = 366,
  [367] = 81,
  [368] = 98,
  [369] = 341,
  [370] = 362,
  [371] = 95,
  [372] = 215,
  [373] = 354,
  [374] = 352,
  [375] = 361,
  [376] = 348,
  [377] = 342,
  [378] = 111,
  [379] = 355,
  [380] = 364,
  [381] = 346,
  [382] = 366,
  [383] = 383,
  [384] = 384,
  [385] = 135,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 133,
  [391] = 391,
  [392] = 336,
  [393] = 331,
  [394] = 138,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 389,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 337,
  [405] = 327,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 422,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 413,
  [438] = 434,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 419,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 431,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 441,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 453,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 453,
  [460] = 425,
  [461] = 461,
  [462] = 443,
  [463] = 463,
  [464] = 458,
  [465] = 465,
  [466] = 425,
  [467] = 467,
  [468] = 458,
  [469] = 469,
  [470] = 461,
  [471] = 469,
  [472] = 461,
  [473] = 415,
  [474] = 474,
  [475] = 474,
  [476] = 476,
  [477] = 412,
  [478] = 451,
  [479] = 479,
  [480] = 439,
  [481] = 416,
  [482] = 482,
  [483] = 432,
  [484] = 484,
  [485] = 457,
  [486] = 424,
  [487] = 449,
  [488] = 488,
  [489] = 489,
  [490] = 488,
  [491] = 469,
  [492] = 408,
  [493] = 452,
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
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 509,
  [516] = 516,
  [517] = 495,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 511,
  [524] = 524,
  [525] = 525,
  [526] = 508,
  [527] = 270,
  [528] = 511,
  [529] = 498,
  [530] = 530,
  [531] = 509,
  [532] = 505,
  [533] = 533,
  [534] = 508,
  [535] = 535,
  [536] = 407,
  [537] = 537,
  [538] = 538,
  [539] = 500,
  [540] = 250,
  [541] = 541,
  [542] = 386,
  [543] = 510,
  [544] = 524,
  [545] = 397,
  [546] = 399,
  [547] = 74,
  [548] = 548,
  [549] = 549,
  [550] = 400,
  [551] = 502,
  [552] = 403,
  [553] = 268,
  [554] = 554,
  [555] = 248,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
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
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 591,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 597,
  [609] = 609,
  [610] = 610,
  [611] = 563,
  [612] = 612,
  [613] = 564,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 584,
  [618] = 618,
  [619] = 619,
  [620] = 598,
  [621] = 621,
  [622] = 599,
  [623] = 623,
  [624] = 596,
  [625] = 621,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 587,
  [634] = 634,
  [635] = 635,
  [636] = 590,
  [637] = 637,
  [638] = 593,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 587,
  [644] = 591,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 623,
  [651] = 651,
  [652] = 586,
  [653] = 585,
  [654] = 654,
  [655] = 628,
  [656] = 566,
  [657] = 657,
  [658] = 568,
  [659] = 659,
  [660] = 588,
  [661] = 649,
  [662] = 606,
  [663] = 627,
  [664] = 664,
  [665] = 593,
  [666] = 590,
  [667] = 647,
  [668] = 664,
  [669] = 669,
  [670] = 670,
  [671] = 619,
  [672] = 672,
  [673] = 673,
  [674] = 630,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 632,
  [680] = 565,
  [681] = 681,
  [682] = 682,
  [683] = 669,
  [684] = 684,
  [685] = 557,
  [686] = 572,
  [687] = 587,
  [688] = 688,
  [689] = 579,
  [690] = 589,
  [691] = 647,
  [692] = 692,
  [693] = 614,
  [694] = 694,
  [695] = 634,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 618,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 581,
  [708] = 708,
  [709] = 558,
  [710] = 710,
  [711] = 575,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 651,
  [716] = 716,
  [717] = 610,
  [718] = 718,
  [719] = 578,
  [720] = 720,
  [721] = 721,
  [722] = 681,
  [723] = 723,
  [724] = 645,
  [725] = 725,
  [726] = 700,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(469);
      if (lookahead == '!') ADVANCE(849);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(843);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == '\'') ADVANCE(841);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '*') ADVANCE(839);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '-') ADVANCE(851);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(674);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '>') ADVANCE(833);
      if (lookahead == '@') ADVANCE(805);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(694);
      if (lookahead == 'E') ADVANCE(767);
      if (lookahead == 'F') ADVANCE(861);
      if (lookahead == 'I') ADVANCE(696);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'P') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(700);
      if (lookahead == 'T') ADVANCE(864);
      if (lookahead == 'X') ADVANCE(91);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == '\\') SKIP(468)
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '^') ADVANCE(840);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(702);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == 'p') ADVANCE(706);
      if (lookahead == 'q') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(391);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '{') ADVANCE(729);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == '}') ADVANCE(730);
      if (lookahead == '~') ADVANCE(847);
      if (lookahead == 172) ADVANCE(859);
      if (lookahead == 8320) ADVANCE(811);
      if (lookahead == 8321) ADVANCE(812);
      if (lookahead == 8322) ADVANCE(813);
      if (lookahead == 8323) ADVANCE(814);
      if (lookahead == 8324) ADVANCE(815);
      if (lookahead == 8325) ADVANCE(816);
      if (lookahead == 8326) ADVANCE(817);
      if (lookahead == 8327) ADVANCE(818);
      if (lookahead == 8328) ADVANCE(819);
      if (lookahead == 8329) ADVANCE(820);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8704) ADVANCE(873);
      if (lookahead == 8707) ADVANCE(870);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == 8853) ADVANCE(837);
      if (lookahead == 8868) ADVANCE(863);
      if (lookahead == 8869) ADVANCE(860);
      if (lookahead == 9654) ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(62)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(63)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(849);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(843);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == '\'') ADVANCE(841);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '*') ADVANCE(458);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(831);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(862);
      if (lookahead == 'T') ADVANCE(865);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == '~') ADVANCE(846);
      if (lookahead == 172) ADVANCE(859);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8704) ADVANCE(873);
      if (lookahead == 8707) ADVANCE(870);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == 8868) ADVANCE(863);
      if (lookahead == 8869) ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(849);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(843);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == '~') ADVANCE(845);
      if (lookahead == 8320) ADVANCE(811);
      if (lookahead == 8321) ADVANCE(812);
      if (lookahead == 8322) ADVANCE(813);
      if (lookahead == 8323) ADVANCE(814);
      if (lookahead == 8324) ADVANCE(815);
      if (lookahead == 8325) ADVANCE(816);
      if (lookahead == 8326) ADVANCE(817);
      if (lookahead == 8327) ADVANCE(818);
      if (lookahead == 8328) ADVANCE(819);
      if (lookahead == 8329) ADVANCE(820);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(849);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(843);
      if (lookahead == '\'') ADVANCE(841);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(831);
      if (lookahead == '=') ADVANCE(679);
      if (lookahead == 'A') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(862);
      if (lookahead == 'T') ADVANCE(865);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == '~') ADVANCE(846);
      if (lookahead == 172) ADVANCE(859);
      if (lookahead == 8704) ADVANCE(873);
      if (lookahead == 8707) ADVANCE(870);
      if (lookahead == 8868) ADVANCE(863);
      if (lookahead == 8869) ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(849);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(843);
      if (lookahead == '\'') ADVANCE(841);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(831);
      if (lookahead == 'A') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(862);
      if (lookahead == 'T') ADVANCE(865);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == '~') ADVANCE(846);
      if (lookahead == 8704) ADVANCE(873);
      if (lookahead == 8707) ADVANCE(870);
      if (lookahead == 8868) ADVANCE(863);
      if (lookahead == 8869) ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(849);
      if (lookahead == '$') ADVANCE(843);
      if (lookahead == '\'') ADVANCE(841);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(831);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '~') ADVANCE(846);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '>') ADVANCE(833);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '-') ADVANCE(850);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '>') ADVANCE(833);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'E') ADVANCE(766);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(91);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '^') ADVANCE(840);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 'q') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(391);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == 8853) ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '>') ADVANCE(833);
      if (lookahead == 'X') ADVANCE(91);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '^') ADVANCE(840);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == 8853) ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '>') ADVANCE(833);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '|') ADVANCE(735);
      if (lookahead == 8658) ADVANCE(856);
      if (lookahead == 8660) ADVANCE(854);
      if (lookahead == 8741) ADVANCE(807);
      if (lookahead == 8743) ADVANCE(858);
      if (lookahead == 8744) ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(769);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '<') ADVANCE(831);
      if (lookahead == '=') ADVANCE(679);
      if (lookahead == '@') ADVANCE(805);
      if (lookahead == 'X') ADVANCE(91);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '^') ADVANCE(840);
      if (lookahead == 8853) ADVANCE(837);
      if (lookahead == 9654) ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(834);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == 'X') ADVANCE(488);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(840);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == 8853) ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 49:
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ',') ADVANCE(673);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(821);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(875);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(697);
      if (lookahead == 'O') ADVANCE(722);
      if (lookahead == 'P') ADVANCE(699);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'o') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(487);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 's') ADVANCE(549);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'b') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 66:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(784);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(783);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(770);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(771);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(759);
      if (lookahead == '[') ADVANCE(760);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(853);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(855);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(806);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(761);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(768);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(768);
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(787);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(299);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(331);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(341);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(339);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(342);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(835);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(188);
      END_STATE();
    case 95:
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(675);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(844);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(401);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(723);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(692);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(793);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(734);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'y') ADVANCE(789);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 201:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 202:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(408);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(455);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(775);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(684);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(688);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(691);
      END_STATE();
    case 211:
      if (lookahead == 'g') ADVANCE(687);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(848);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(410);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'y') ADVANCE(789);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(871);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(751);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'q') ADVANCE(439);
      if (lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(800);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(852);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(370);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(432);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(780);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 440:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 448:
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 449:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 450:
      if (lookahead == 'x') ADVANCE(739);
      END_STATE();
    case 451:
      if (lookahead == 'x') ADVANCE(409);
      END_STATE();
    case 452:
      if (lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 453:
      if (lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 454:
      if (lookahead == 'y') ADVANCE(794);
      END_STATE();
    case 455:
      if (lookahead == 'y') ADVANCE(796);
      END_STATE();
    case 456:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 457:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 458:
      if (lookahead == '}') ADVANCE(830);
      END_STATE();
    case 459:
      if (lookahead == '~') ADVANCE(75);
      END_STATE();
    case 460:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(874);
      END_STATE();
    case 461:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      END_STATE();
    case 462:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(461);
      END_STATE();
    case 463:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      END_STATE();
    case 464:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(463);
      END_STATE();
    case 465:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(464);
      END_STATE();
    case 466:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(876);
      END_STATE();
    case 467:
      if (eof) ADVANCE(469);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 468:
      if (eof) ADVANCE(469);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(467)
      END_STATE();
    case 469:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(503);
      if (lookahead == 'I') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(532);
      if (lookahead == 's') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'h') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == 'u') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == 'u') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == 'p') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(518);
      if (lookahead == 'q') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 't') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(547);
      if (lookahead == 'y') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(875);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(784);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(716);
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(720);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(720);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '"') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(718);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(720);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(720);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(715);
      if (lookahead == '\r') ADVANCE(719);
      if (lookahead == '"') ADVANCE(875);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(715);
      if (lookahead == '"') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(718);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(821);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(868);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_all_DASHtrace);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(825);
      if (lookahead == '\r') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(829);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(829);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (lookahead == '*') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(827);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead == '\\') ADVANCE(822);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(829);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(829);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(824);
      if (lookahead == '\r') ADVANCE(828);
      if (lookahead == '*') ADVANCE(875);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(824);
      if (lookahead == '*') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(827);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(830);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(842);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(842);
      if (lookahead == '~') ADVANCE(75);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(875);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(466);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 37, .external_lex_state = 1},
  [3] = {.lex_state = 37, .external_lex_state = 1},
  [4] = {.lex_state = 39, .external_lex_state = 1},
  [5] = {.lex_state = 39, .external_lex_state = 1},
  [6] = {.lex_state = 39, .external_lex_state = 1},
  [7] = {.lex_state = 39, .external_lex_state = 1},
  [8] = {.lex_state = 39, .external_lex_state = 1},
  [9] = {.lex_state = 39, .external_lex_state = 1},
  [10] = {.lex_state = 39, .external_lex_state = 1},
  [11] = {.lex_state = 39, .external_lex_state = 1},
  [12] = {.lex_state = 39, .external_lex_state = 1},
  [13] = {.lex_state = 39, .external_lex_state = 1},
  [14] = {.lex_state = 39, .external_lex_state = 1},
  [15] = {.lex_state = 39, .external_lex_state = 1},
  [16] = {.lex_state = 39, .external_lex_state = 1},
  [17] = {.lex_state = 39, .external_lex_state = 1},
  [18] = {.lex_state = 39, .external_lex_state = 1},
  [19] = {.lex_state = 39, .external_lex_state = 1},
  [20] = {.lex_state = 39, .external_lex_state = 1},
  [21] = {.lex_state = 39, .external_lex_state = 1},
  [22] = {.lex_state = 39, .external_lex_state = 1},
  [23] = {.lex_state = 39, .external_lex_state = 1},
  [24] = {.lex_state = 39, .external_lex_state = 1},
  [25] = {.lex_state = 40, .external_lex_state = 1},
  [26] = {.lex_state = 40, .external_lex_state = 1},
  [27] = {.lex_state = 42, .external_lex_state = 1},
  [28] = {.lex_state = 42, .external_lex_state = 1},
  [29] = {.lex_state = 42, .external_lex_state = 1},
  [30] = {.lex_state = 46, .external_lex_state = 1},
  [31] = {.lex_state = 46, .external_lex_state = 1},
  [32] = {.lex_state = 46, .external_lex_state = 1},
  [33] = {.lex_state = 61, .external_lex_state = 1},
  [34] = {.lex_state = 42, .external_lex_state = 1},
  [35] = {.lex_state = 61, .external_lex_state = 1},
  [36] = {.lex_state = 42, .external_lex_state = 1},
  [37] = {.lex_state = 42, .external_lex_state = 1},
  [38] = {.lex_state = 42, .external_lex_state = 1},
  [39] = {.lex_state = 42, .external_lex_state = 1},
  [40] = {.lex_state = 42, .external_lex_state = 1},
  [41] = {.lex_state = 42, .external_lex_state = 1},
  [42] = {.lex_state = 42, .external_lex_state = 1},
  [43] = {.lex_state = 46, .external_lex_state = 1},
  [44] = {.lex_state = 46, .external_lex_state = 1},
  [45] = {.lex_state = 42, .external_lex_state = 1},
  [46] = {.lex_state = 42, .external_lex_state = 1},
  [47] = {.lex_state = 46, .external_lex_state = 1},
  [48] = {.lex_state = 42, .external_lex_state = 1},
  [49] = {.lex_state = 46, .external_lex_state = 1},
  [50] = {.lex_state = 42, .external_lex_state = 1},
  [51] = {.lex_state = 49, .external_lex_state = 1},
  [52] = {.lex_state = 46, .external_lex_state = 1},
  [53] = {.lex_state = 46, .external_lex_state = 1},
  [54] = {.lex_state = 46, .external_lex_state = 1},
  [55] = {.lex_state = 43, .external_lex_state = 1},
  [56] = {.lex_state = 46, .external_lex_state = 1},
  [57] = {.lex_state = 46, .external_lex_state = 1},
  [58] = {.lex_state = 46, .external_lex_state = 1},
  [59] = {.lex_state = 46, .external_lex_state = 1},
  [60] = {.lex_state = 49, .external_lex_state = 1},
  [61] = {.lex_state = 42, .external_lex_state = 1},
  [62] = {.lex_state = 42, .external_lex_state = 1},
  [63] = {.lex_state = 46, .external_lex_state = 1},
  [64] = {.lex_state = 44, .external_lex_state = 1},
  [65] = {.lex_state = 42, .external_lex_state = 1},
  [66] = {.lex_state = 42, .external_lex_state = 1},
  [67] = {.lex_state = 49, .external_lex_state = 1},
  [68] = {.lex_state = 46, .external_lex_state = 1},
  [69] = {.lex_state = 43, .external_lex_state = 1},
  [70] = {.lex_state = 46, .external_lex_state = 1},
  [71] = {.lex_state = 42, .external_lex_state = 1},
  [72] = {.lex_state = 46, .external_lex_state = 1},
  [73] = {.lex_state = 46, .external_lex_state = 1},
  [74] = {.lex_state = 61, .external_lex_state = 1},
  [75] = {.lex_state = 61, .external_lex_state = 1},
  [76] = {.lex_state = 46, .external_lex_state = 1},
  [77] = {.lex_state = 43, .external_lex_state = 1},
  [78] = {.lex_state = 61, .external_lex_state = 1},
  [79] = {.lex_state = 43, .external_lex_state = 1},
  [80] = {.lex_state = 43, .external_lex_state = 1},
  [81] = {.lex_state = 43, .external_lex_state = 1},
  [82] = {.lex_state = 38, .external_lex_state = 1},
  [83] = {.lex_state = 43, .external_lex_state = 1},
  [84] = {.lex_state = 43, .external_lex_state = 1},
  [85] = {.lex_state = 41, .external_lex_state = 1},
  [86] = {.lex_state = 43, .external_lex_state = 1},
  [87] = {.lex_state = 41, .external_lex_state = 1},
  [88] = {.lex_state = 43, .external_lex_state = 1},
  [89] = {.lex_state = 41, .external_lex_state = 1},
  [90] = {.lex_state = 43, .external_lex_state = 1},
  [91] = {.lex_state = 43, .external_lex_state = 1},
  [92] = {.lex_state = 43, .external_lex_state = 1},
  [93] = {.lex_state = 43, .external_lex_state = 1},
  [94] = {.lex_state = 62, .external_lex_state = 1},
  [95] = {.lex_state = 43, .external_lex_state = 1},
  [96] = {.lex_state = 62, .external_lex_state = 1},
  [97] = {.lex_state = 43, .external_lex_state = 1},
  [98] = {.lex_state = 43, .external_lex_state = 1},
  [99] = {.lex_state = 38, .external_lex_state = 1},
  [100] = {.lex_state = 43, .external_lex_state = 1},
  [101] = {.lex_state = 43, .external_lex_state = 1},
  [102] = {.lex_state = 43, .external_lex_state = 1},
  [103] = {.lex_state = 41, .external_lex_state = 1},
  [104] = {.lex_state = 41, .external_lex_state = 1},
  [105] = {.lex_state = 43, .external_lex_state = 1},
  [106] = {.lex_state = 62, .external_lex_state = 1},
  [107] = {.lex_state = 38, .external_lex_state = 1},
  [108] = {.lex_state = 62, .external_lex_state = 1},
  [109] = {.lex_state = 43, .external_lex_state = 1},
  [110] = {.lex_state = 43, .external_lex_state = 1},
  [111] = {.lex_state = 43, .external_lex_state = 1},
  [112] = {.lex_state = 41, .external_lex_state = 1},
  [113] = {.lex_state = 41, .external_lex_state = 1},
  [114] = {.lex_state = 43, .external_lex_state = 1},
  [115] = {.lex_state = 43, .external_lex_state = 1},
  [116] = {.lex_state = 41, .external_lex_state = 1},
  [117] = {.lex_state = 41, .external_lex_state = 1},
  [118] = {.lex_state = 41, .external_lex_state = 1},
  [119] = {.lex_state = 41, .external_lex_state = 1},
  [120] = {.lex_state = 41, .external_lex_state = 1},
  [121] = {.lex_state = 41, .external_lex_state = 1},
  [122] = {.lex_state = 43, .external_lex_state = 1},
  [123] = {.lex_state = 41, .external_lex_state = 1},
  [124] = {.lex_state = 41, .external_lex_state = 1},
  [125] = {.lex_state = 43, .external_lex_state = 1},
  [126] = {.lex_state = 41, .external_lex_state = 1},
  [127] = {.lex_state = 41, .external_lex_state = 1},
  [128] = {.lex_state = 41, .external_lex_state = 1},
  [129] = {.lex_state = 43, .external_lex_state = 1},
  [130] = {.lex_state = 45, .external_lex_state = 1},
  [131] = {.lex_state = 41, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 42, .external_lex_state = 1},
  [134] = {.lex_state = 63, .external_lex_state = 1},
  [135] = {.lex_state = 42, .external_lex_state = 1},
  [136] = {.lex_state = 41, .external_lex_state = 1},
  [137] = {.lex_state = 63, .external_lex_state = 1},
  [138] = {.lex_state = 42, .external_lex_state = 1},
  [139] = {.lex_state = 41, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 41, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 41, .external_lex_state = 1},
  [144] = {.lex_state = 41, .external_lex_state = 1},
  [145] = {.lex_state = 41, .external_lex_state = 1},
  [146] = {.lex_state = 43, .external_lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 41, .external_lex_state = 1},
  [149] = {.lex_state = 41, .external_lex_state = 1},
  [150] = {.lex_state = 46, .external_lex_state = 1},
  [151] = {.lex_state = 49, .external_lex_state = 1},
  [152] = {.lex_state = 63, .external_lex_state = 1},
  [153] = {.lex_state = 43, .external_lex_state = 1},
  [154] = {.lex_state = 41, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 43, .external_lex_state = 1},
  [157] = {.lex_state = 38, .external_lex_state = 1},
  [158] = {.lex_state = 49, .external_lex_state = 1},
  [159] = {.lex_state = 64, .external_lex_state = 1},
  [160] = {.lex_state = 38, .external_lex_state = 1},
  [161] = {.lex_state = 64, .external_lex_state = 1},
  [162] = {.lex_state = 49, .external_lex_state = 1},
  [163] = {.lex_state = 64, .external_lex_state = 1},
  [164] = {.lex_state = 46, .external_lex_state = 1},
  [165] = {.lex_state = 64, .external_lex_state = 1},
  [166] = {.lex_state = 43, .external_lex_state = 1},
  [167] = {.lex_state = 49, .external_lex_state = 1},
  [168] = {.lex_state = 49, .external_lex_state = 1},
  [169] = {.lex_state = 46, .external_lex_state = 1},
  [170] = {.lex_state = 49, .external_lex_state = 1},
  [171] = {.lex_state = 47, .external_lex_state = 1},
  [172] = {.lex_state = 46, .external_lex_state = 1},
  [173] = {.lex_state = 49, .external_lex_state = 1},
  [174] = {.lex_state = 46, .external_lex_state = 1},
  [175] = {.lex_state = 49, .external_lex_state = 1},
  [176] = {.lex_state = 46, .external_lex_state = 1},
  [177] = {.lex_state = 46, .external_lex_state = 1},
  [178] = {.lex_state = 49, .external_lex_state = 1},
  [179] = {.lex_state = 49, .external_lex_state = 1},
  [180] = {.lex_state = 49, .external_lex_state = 1},
  [181] = {.lex_state = 49, .external_lex_state = 1},
  [182] = {.lex_state = 49, .external_lex_state = 1},
  [183] = {.lex_state = 49, .external_lex_state = 1},
  [184] = {.lex_state = 49, .external_lex_state = 1},
  [185] = {.lex_state = 46, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 49, .external_lex_state = 1},
  [188] = {.lex_state = 65, .external_lex_state = 1},
  [189] = {.lex_state = 49, .external_lex_state = 1},
  [190] = {.lex_state = 46, .external_lex_state = 1},
  [191] = {.lex_state = 46, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 49, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 49, .external_lex_state = 1},
  [197] = {.lex_state = 65, .external_lex_state = 1},
  [198] = {.lex_state = 49, .external_lex_state = 1},
  [199] = {.lex_state = 49, .external_lex_state = 1},
  [200] = {.lex_state = 49, .external_lex_state = 1},
  [201] = {.lex_state = 49, .external_lex_state = 1},
  [202] = {.lex_state = 49, .external_lex_state = 1},
  [203] = {.lex_state = 65, .external_lex_state = 1},
  [204] = {.lex_state = 49, .external_lex_state = 1},
  [205] = {.lex_state = 49, .external_lex_state = 1},
  [206] = {.lex_state = 65, .external_lex_state = 1},
  [207] = {.lex_state = 49, .external_lex_state = 1},
  [208] = {.lex_state = 49, .external_lex_state = 1},
  [209] = {.lex_state = 65, .external_lex_state = 1},
  [210] = {.lex_state = 49, .external_lex_state = 1},
  [211] = {.lex_state = 46, .external_lex_state = 1},
  [212] = {.lex_state = 65, .external_lex_state = 1},
  [213] = {.lex_state = 47, .external_lex_state = 1},
  [214] = {.lex_state = 49, .external_lex_state = 1},
  [215] = {.lex_state = 46, .external_lex_state = 1},
  [216] = {.lex_state = 46, .external_lex_state = 1},
  [217] = {.lex_state = 49, .external_lex_state = 1},
  [218] = {.lex_state = 49, .external_lex_state = 1},
  [219] = {.lex_state = 49, .external_lex_state = 1},
  [220] = {.lex_state = 49, .external_lex_state = 1},
  [221] = {.lex_state = 47, .external_lex_state = 1},
  [222] = {.lex_state = 49, .external_lex_state = 1},
  [223] = {.lex_state = 49, .external_lex_state = 1},
  [224] = {.lex_state = 46, .external_lex_state = 1},
  [225] = {.lex_state = 46, .external_lex_state = 1},
  [226] = {.lex_state = 49, .external_lex_state = 1},
  [227] = {.lex_state = 46, .external_lex_state = 1},
  [228] = {.lex_state = 46, .external_lex_state = 1},
  [229] = {.lex_state = 46, .external_lex_state = 1},
  [230] = {.lex_state = 49, .external_lex_state = 1},
  [231] = {.lex_state = 46, .external_lex_state = 1},
  [232] = {.lex_state = 65, .external_lex_state = 1},
  [233] = {.lex_state = 49, .external_lex_state = 1},
  [234] = {.lex_state = 46, .external_lex_state = 1},
  [235] = {.lex_state = 49, .external_lex_state = 1},
  [236] = {.lex_state = 49, .external_lex_state = 1},
  [237] = {.lex_state = 47, .external_lex_state = 1},
  [238] = {.lex_state = 49, .external_lex_state = 1},
  [239] = {.lex_state = 49, .external_lex_state = 1},
  [240] = {.lex_state = 65, .external_lex_state = 1},
  [241] = {.lex_state = 49, .external_lex_state = 1},
  [242] = {.lex_state = 65, .external_lex_state = 1},
  [243] = {.lex_state = 49, .external_lex_state = 1},
  [244] = {.lex_state = 46, .external_lex_state = 1},
  [245] = {.lex_state = 49, .external_lex_state = 1},
  [246] = {.lex_state = 49, .external_lex_state = 1},
  [247] = {.lex_state = 46, .external_lex_state = 1},
  [248] = {.lex_state = 49, .external_lex_state = 1},
  [249] = {.lex_state = 49, .external_lex_state = 1},
  [250] = {.lex_state = 49, .external_lex_state = 1},
  [251] = {.lex_state = 37, .external_lex_state = 1},
  [252] = {.lex_state = 48, .external_lex_state = 1},
  [253] = {.lex_state = 37, .external_lex_state = 1},
  [254] = {.lex_state = 43, .external_lex_state = 1},
  [255] = {.lex_state = 37, .external_lex_state = 1},
  [256] = {.lex_state = 49, .external_lex_state = 1},
  [257] = {.lex_state = 49, .external_lex_state = 1},
  [258] = {.lex_state = 49, .external_lex_state = 1},
  [259] = {.lex_state = 37, .external_lex_state = 1},
  [260] = {.lex_state = 49, .external_lex_state = 1},
  [261] = {.lex_state = 43, .external_lex_state = 1},
  [262] = {.lex_state = 46, .external_lex_state = 1},
  [263] = {.lex_state = 49, .external_lex_state = 1},
  [264] = {.lex_state = 37, .external_lex_state = 1},
  [265] = {.lex_state = 43, .external_lex_state = 1},
  [266] = {.lex_state = 49, .external_lex_state = 1},
  [267] = {.lex_state = 38, .external_lex_state = 1},
  [268] = {.lex_state = 49, .external_lex_state = 1},
  [269] = {.lex_state = 43, .external_lex_state = 1},
  [270] = {.lex_state = 49, .external_lex_state = 1},
  [271] = {.lex_state = 49, .external_lex_state = 1},
  [272] = {.lex_state = 38, .external_lex_state = 1},
  [273] = {.lex_state = 46, .external_lex_state = 1},
  [274] = {.lex_state = 49, .external_lex_state = 1},
  [275] = {.lex_state = 37, .external_lex_state = 1},
  [276] = {.lex_state = 46, .external_lex_state = 1},
  [277] = {.lex_state = 46, .external_lex_state = 1},
  [278] = {.lex_state = 37, .external_lex_state = 1},
  [279] = {.lex_state = 43, .external_lex_state = 1},
  [280] = {.lex_state = 43, .external_lex_state = 1},
  [281] = {.lex_state = 38, .external_lex_state = 1},
  [282] = {.lex_state = 37, .external_lex_state = 1},
  [283] = {.lex_state = 49, .external_lex_state = 1},
  [284] = {.lex_state = 38, .external_lex_state = 1},
  [285] = {.lex_state = 43, .external_lex_state = 1},
  [286] = {.lex_state = 48, .external_lex_state = 1},
  [287] = {.lex_state = 43, .external_lex_state = 1},
  [288] = {.lex_state = 43, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 38, .external_lex_state = 1},
  [291] = {.lex_state = 48, .external_lex_state = 1},
  [292] = {.lex_state = 43, .external_lex_state = 1},
  [293] = {.lex_state = 43, .external_lex_state = 1},
  [294] = {.lex_state = 43, .external_lex_state = 1},
  [295] = {.lex_state = 43, .external_lex_state = 1},
  [296] = {.lex_state = 37, .external_lex_state = 1},
  [297] = {.lex_state = 37, .external_lex_state = 1},
  [298] = {.lex_state = 43, .external_lex_state = 1},
  [299] = {.lex_state = 48, .external_lex_state = 1},
  [300] = {.lex_state = 48, .external_lex_state = 1},
  [301] = {.lex_state = 48, .external_lex_state = 1},
  [302] = {.lex_state = 37, .external_lex_state = 1},
  [303] = {.lex_state = 48, .external_lex_state = 1},
  [304] = {.lex_state = 43, .external_lex_state = 1},
  [305] = {.lex_state = 43, .external_lex_state = 1},
  [306] = {.lex_state = 48, .external_lex_state = 1},
  [307] = {.lex_state = 48, .external_lex_state = 1},
  [308] = {.lex_state = 48, .external_lex_state = 1},
  [309] = {.lex_state = 48, .external_lex_state = 1},
  [310] = {.lex_state = 48, .external_lex_state = 1},
  [311] = {.lex_state = 48, .external_lex_state = 1},
  [312] = {.lex_state = 48, .external_lex_state = 1},
  [313] = {.lex_state = 48, .external_lex_state = 1},
  [314] = {.lex_state = 48, .external_lex_state = 1},
  [315] = {.lex_state = 46, .external_lex_state = 1},
  [316] = {.lex_state = 48, .external_lex_state = 1},
  [317] = {.lex_state = 48, .external_lex_state = 1},
  [318] = {.lex_state = 48, .external_lex_state = 1},
  [319] = {.lex_state = 48, .external_lex_state = 1},
  [320] = {.lex_state = 48, .external_lex_state = 1},
  [321] = {.lex_state = 48, .external_lex_state = 1},
  [322] = {.lex_state = 48, .external_lex_state = 1},
  [323] = {.lex_state = 48, .external_lex_state = 1},
  [324] = {.lex_state = 48, .external_lex_state = 1},
  [325] = {.lex_state = 43, .external_lex_state = 1},
  [326] = {.lex_state = 48, .external_lex_state = 1},
  [327] = {.lex_state = 0, .external_lex_state = 1},
  [328] = {.lex_state = 48, .external_lex_state = 1},
  [329] = {.lex_state = 48, .external_lex_state = 1},
  [330] = {.lex_state = 38, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 42, .external_lex_state = 1},
  [333] = {.lex_state = 48, .external_lex_state = 1},
  [334] = {.lex_state = 38, .external_lex_state = 1},
  [335] = {.lex_state = 43, .external_lex_state = 1},
  [336] = {.lex_state = 0, .external_lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 1},
  [338] = {.lex_state = 38, .external_lex_state = 1},
  [339] = {.lex_state = 38, .external_lex_state = 1},
  [340] = {.lex_state = 41, .external_lex_state = 1},
  [341] = {.lex_state = 41, .external_lex_state = 1},
  [342] = {.lex_state = 41, .external_lex_state = 1},
  [343] = {.lex_state = 38, .external_lex_state = 1},
  [344] = {.lex_state = 41, .external_lex_state = 1},
  [345] = {.lex_state = 41, .external_lex_state = 1},
  [346] = {.lex_state = 38, .external_lex_state = 1},
  [347] = {.lex_state = 38, .external_lex_state = 1},
  [348] = {.lex_state = 41, .external_lex_state = 1},
  [349] = {.lex_state = 41, .external_lex_state = 1},
  [350] = {.lex_state = 41, .external_lex_state = 1},
  [351] = {.lex_state = 41, .external_lex_state = 1},
  [352] = {.lex_state = 41, .external_lex_state = 1},
  [353] = {.lex_state = 41, .external_lex_state = 1},
  [354] = {.lex_state = 38, .external_lex_state = 1},
  [355] = {.lex_state = 41, .external_lex_state = 1},
  [356] = {.lex_state = 37, .external_lex_state = 1},
  [357] = {.lex_state = 38, .external_lex_state = 1},
  [358] = {.lex_state = 48, .external_lex_state = 1},
  [359] = {.lex_state = 38, .external_lex_state = 1},
  [360] = {.lex_state = 41, .external_lex_state = 1},
  [361] = {.lex_state = 38, .external_lex_state = 1},
  [362] = {.lex_state = 41, .external_lex_state = 1},
  [363] = {.lex_state = 38, .external_lex_state = 1},
  [364] = {.lex_state = 41, .external_lex_state = 1},
  [365] = {.lex_state = 38, .external_lex_state = 1},
  [366] = {.lex_state = 38, .external_lex_state = 1},
  [367] = {.lex_state = 38, .external_lex_state = 1},
  [368] = {.lex_state = 38, .external_lex_state = 1},
  [369] = {.lex_state = 41, .external_lex_state = 1},
  [370] = {.lex_state = 41, .external_lex_state = 1},
  [371] = {.lex_state = 38, .external_lex_state = 1},
  [372] = {.lex_state = 42, .external_lex_state = 1},
  [373] = {.lex_state = 38, .external_lex_state = 1},
  [374] = {.lex_state = 41, .external_lex_state = 1},
  [375] = {.lex_state = 38, .external_lex_state = 1},
  [376] = {.lex_state = 41, .external_lex_state = 1},
  [377] = {.lex_state = 41, .external_lex_state = 1},
  [378] = {.lex_state = 38, .external_lex_state = 1},
  [379] = {.lex_state = 41, .external_lex_state = 1},
  [380] = {.lex_state = 41, .external_lex_state = 1},
  [381] = {.lex_state = 38, .external_lex_state = 1},
  [382] = {.lex_state = 38, .external_lex_state = 1},
  [383] = {.lex_state = 45, .external_lex_state = 1},
  [384] = {.lex_state = 43, .external_lex_state = 1},
  [385] = {.lex_state = 45, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 38, .external_lex_state = 1},
  [388] = {.lex_state = 45, .external_lex_state = 1},
  [389] = {.lex_state = 43, .external_lex_state = 1},
  [390] = {.lex_state = 45, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 37, .external_lex_state = 1},
  [393] = {.lex_state = 37, .external_lex_state = 1},
  [394] = {.lex_state = 45, .external_lex_state = 1},
  [395] = {.lex_state = 0, .external_lex_state = 1},
  [396] = {.lex_state = 43, .external_lex_state = 1},
  [397] = {.lex_state = 0, .external_lex_state = 1},
  [398] = {.lex_state = 43, .external_lex_state = 1},
  [399] = {.lex_state = 0, .external_lex_state = 1},
  [400] = {.lex_state = 0, .external_lex_state = 1},
  [401] = {.lex_state = 43, .external_lex_state = 1},
  [402] = {.lex_state = 0, .external_lex_state = 1},
  [403] = {.lex_state = 0, .external_lex_state = 1},
  [404] = {.lex_state = 37, .external_lex_state = 1},
  [405] = {.lex_state = 37, .external_lex_state = 1},
  [406] = {.lex_state = 0, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 43, .external_lex_state = 1},
  [409] = {.lex_state = 0, .external_lex_state = 1},
  [410] = {.lex_state = 0, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 39, .external_lex_state = 1},
  [418] = {.lex_state = 43, .external_lex_state = 1},
  [419] = {.lex_state = 38, .external_lex_state = 1},
  [420] = {.lex_state = 43, .external_lex_state = 1},
  [421] = {.lex_state = 38, .external_lex_state = 1},
  [422] = {.lex_state = 43, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 0, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 0, .external_lex_state = 1},
  [428] = {.lex_state = 0, .external_lex_state = 1},
  [429] = {.lex_state = 43, .external_lex_state = 1},
  [430] = {.lex_state = 43, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 0, .external_lex_state = 1},
  [433] = {.lex_state = 38, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 0, .external_lex_state = 1},
  [439] = {.lex_state = 37, .external_lex_state = 1},
  [440] = {.lex_state = 38, .external_lex_state = 1},
  [441] = {.lex_state = 0, .external_lex_state = 1},
  [442] = {.lex_state = 38, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 38, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 38, .external_lex_state = 1},
  [448] = {.lex_state = 0, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 0, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 0, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 0, .external_lex_state = 1},
  [456] = {.lex_state = 38, .external_lex_state = 1},
  [457] = {.lex_state = 38, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 0, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 0, .external_lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 0, .external_lex_state = 1},
  [471] = {.lex_state = 0, .external_lex_state = 1},
  [472] = {.lex_state = 0, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 0, .external_lex_state = 1},
  [475] = {.lex_state = 0, .external_lex_state = 1},
  [476] = {.lex_state = 0, .external_lex_state = 1},
  [477] = {.lex_state = 0, .external_lex_state = 1},
  [478] = {.lex_state = 37, .external_lex_state = 1},
  [479] = {.lex_state = 38, .external_lex_state = 1},
  [480] = {.lex_state = 0, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 0, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 43, .external_lex_state = 1},
  [485] = {.lex_state = 38, .external_lex_state = 1},
  [486] = {.lex_state = 0, .external_lex_state = 1},
  [487] = {.lex_state = 37, .external_lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 0, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 43, .external_lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 37, .external_lex_state = 1},
  [496] = {.lex_state = 38, .external_lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 1},
  [498] = {.lex_state = 37, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 37, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 37, .external_lex_state = 1},
  [503] = {.lex_state = 43, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 37, .external_lex_state = 1},
  [506] = {.lex_state = 0, .external_lex_state = 1},
  [507] = {.lex_state = 38, .external_lex_state = 1},
  [508] = {.lex_state = 0, .external_lex_state = 1},
  [509] = {.lex_state = 43, .external_lex_state = 1},
  [510] = {.lex_state = 716, .external_lex_state = 1},
  [511] = {.lex_state = 43, .external_lex_state = 1},
  [512] = {.lex_state = 0, .external_lex_state = 1},
  [513] = {.lex_state = 0, .external_lex_state = 1},
  [514] = {.lex_state = 0, .external_lex_state = 1},
  [515] = {.lex_state = 43, .external_lex_state = 1},
  [516] = {.lex_state = 0, .external_lex_state = 1},
  [517] = {.lex_state = 37, .external_lex_state = 1},
  [518] = {.lex_state = 0, .external_lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 1},
  [520] = {.lex_state = 39, .external_lex_state = 1},
  [521] = {.lex_state = 0, .external_lex_state = 1},
  [522] = {.lex_state = 39, .external_lex_state = 1},
  [523] = {.lex_state = 43, .external_lex_state = 1},
  [524] = {.lex_state = 37, .external_lex_state = 1},
  [525] = {.lex_state = 0, .external_lex_state = 1},
  [526] = {.lex_state = 0, .external_lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 1},
  [528] = {.lex_state = 43, .external_lex_state = 1},
  [529] = {.lex_state = 37, .external_lex_state = 1},
  [530] = {.lex_state = 42, .external_lex_state = 1},
  [531] = {.lex_state = 43, .external_lex_state = 1},
  [532] = {.lex_state = 37, .external_lex_state = 1},
  [533] = {.lex_state = 0, .external_lex_state = 1},
  [534] = {.lex_state = 0, .external_lex_state = 1},
  [535] = {.lex_state = 0, .external_lex_state = 1},
  [536] = {.lex_state = 37, .external_lex_state = 1},
  [537] = {.lex_state = 39, .external_lex_state = 1},
  [538] = {.lex_state = 0, .external_lex_state = 1},
  [539] = {.lex_state = 37, .external_lex_state = 1},
  [540] = {.lex_state = 0, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 37, .external_lex_state = 1},
  [543] = {.lex_state = 716, .external_lex_state = 1},
  [544] = {.lex_state = 0, .external_lex_state = 1},
  [545] = {.lex_state = 37, .external_lex_state = 1},
  [546] = {.lex_state = 37, .external_lex_state = 1},
  [547] = {.lex_state = 42, .external_lex_state = 1},
  [548] = {.lex_state = 39, .external_lex_state = 1},
  [549] = {.lex_state = 45, .external_lex_state = 1},
  [550] = {.lex_state = 37, .external_lex_state = 1},
  [551] = {.lex_state = 37, .external_lex_state = 1},
  [552] = {.lex_state = 37, .external_lex_state = 1},
  [553] = {.lex_state = 0, .external_lex_state = 1},
  [554] = {.lex_state = 0, .external_lex_state = 1},
  [555] = {.lex_state = 0, .external_lex_state = 1},
  [556] = {.lex_state = 0, .external_lex_state = 1},
  [557] = {.lex_state = 0, .external_lex_state = 1},
  [558] = {.lex_state = 0, .external_lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 1},
  [560] = {.lex_state = 0, .external_lex_state = 1},
  [561] = {.lex_state = 0, .external_lex_state = 1},
  [562] = {.lex_state = 0, .external_lex_state = 1},
  [563] = {.lex_state = 0, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 37, .external_lex_state = 1},
  [566] = {.lex_state = 0, .external_lex_state = 1},
  [567] = {.lex_state = 0, .external_lex_state = 1},
  [568] = {.lex_state = 0, .external_lex_state = 1},
  [569] = {.lex_state = 0, .external_lex_state = 1},
  [570] = {.lex_state = 0, .external_lex_state = 1},
  [571] = {.lex_state = 0, .external_lex_state = 1},
  [572] = {.lex_state = 37, .external_lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 1},
  [574] = {.lex_state = 0, .external_lex_state = 1},
  [575] = {.lex_state = 0, .external_lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 38, .external_lex_state = 1},
  [580] = {.lex_state = 0, .external_lex_state = 1},
  [581] = {.lex_state = 0, .external_lex_state = 1},
  [582] = {.lex_state = 0, .external_lex_state = 1},
  [583] = {.lex_state = 0, .external_lex_state = 1},
  [584] = {.lex_state = 0, .external_lex_state = 1},
  [585] = {.lex_state = 0, .external_lex_state = 1},
  [586] = {.lex_state = 0, .external_lex_state = 1},
  [587] = {.lex_state = 38, .external_lex_state = 1},
  [588] = {.lex_state = 0, .external_lex_state = 1},
  [589] = {.lex_state = 37, .external_lex_state = 1},
  [590] = {.lex_state = 0, .external_lex_state = 1},
  [591] = {.lex_state = 0, .external_lex_state = 1},
  [592] = {.lex_state = 0, .external_lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 1},
  [594] = {.lex_state = 0, .external_lex_state = 1},
  [595] = {.lex_state = 0, .external_lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 1},
  [597] = {.lex_state = 38, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 1},
  [602] = {.lex_state = 0, .external_lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 1},
  [604] = {.lex_state = 0, .external_lex_state = 1},
  [605] = {.lex_state = 39, .external_lex_state = 1},
  [606] = {.lex_state = 0, .external_lex_state = 1},
  [607] = {.lex_state = 0, .external_lex_state = 1},
  [608] = {.lex_state = 38, .external_lex_state = 1},
  [609] = {.lex_state = 38, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 0, .external_lex_state = 1},
  [612] = {.lex_state = 0, .external_lex_state = 1},
  [613] = {.lex_state = 0, .external_lex_state = 1},
  [614] = {.lex_state = 37, .external_lex_state = 1},
  [615] = {.lex_state = 39, .external_lex_state = 1},
  [616] = {.lex_state = 0, .external_lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 1},
  [619] = {.lex_state = 38, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 0, .external_lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 0, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 38, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 0, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 38, .external_lex_state = 1},
  [632] = {.lex_state = 0, .external_lex_state = 1},
  [633] = {.lex_state = 38, .external_lex_state = 1},
  [634] = {.lex_state = 37, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 1},
  [637] = {.lex_state = 0, .external_lex_state = 1},
  [638] = {.lex_state = 0, .external_lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 1},
  [640] = {.lex_state = 0, .external_lex_state = 1},
  [641] = {.lex_state = 0, .external_lex_state = 1},
  [642] = {.lex_state = 43, .external_lex_state = 1},
  [643] = {.lex_state = 38, .external_lex_state = 1},
  [644] = {.lex_state = 0, .external_lex_state = 1},
  [645] = {.lex_state = 0, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 38, .external_lex_state = 1},
  [648] = {.lex_state = 42, .external_lex_state = 1},
  [649] = {.lex_state = 716, .external_lex_state = 1},
  [650] = {.lex_state = 0, .external_lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 1},
  [652] = {.lex_state = 0, .external_lex_state = 1},
  [653] = {.lex_state = 0, .external_lex_state = 1},
  [654] = {.lex_state = 0, .external_lex_state = 1},
  [655] = {.lex_state = 0, .external_lex_state = 1},
  [656] = {.lex_state = 0, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 0, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 0, .external_lex_state = 1},
  [661] = {.lex_state = 716, .external_lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 1},
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 0, .external_lex_state = 1},
  [666] = {.lex_state = 0, .external_lex_state = 1},
  [667] = {.lex_state = 38, .external_lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 0, .external_lex_state = 1},
  [671] = {.lex_state = 38, .external_lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 1},
  [673] = {.lex_state = 38, .external_lex_state = 1},
  [674] = {.lex_state = 0, .external_lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 1},
  [677] = {.lex_state = 42, .external_lex_state = 1},
  [678] = {.lex_state = 0, .external_lex_state = 1},
  [679] = {.lex_state = 0, .external_lex_state = 1},
  [680] = {.lex_state = 37, .external_lex_state = 1},
  [681] = {.lex_state = 0, .external_lex_state = 1},
  [682] = {.lex_state = 0, .external_lex_state = 1},
  [683] = {.lex_state = 0, .external_lex_state = 1},
  [684] = {.lex_state = 39, .external_lex_state = 1},
  [685] = {.lex_state = 0, .external_lex_state = 1},
  [686] = {.lex_state = 37, .external_lex_state = 1},
  [687] = {.lex_state = 38, .external_lex_state = 1},
  [688] = {.lex_state = 0, .external_lex_state = 1},
  [689] = {.lex_state = 38, .external_lex_state = 1},
  [690] = {.lex_state = 37, .external_lex_state = 1},
  [691] = {.lex_state = 38, .external_lex_state = 1},
  [692] = {.lex_state = 0, .external_lex_state = 1},
  [693] = {.lex_state = 37, .external_lex_state = 1},
  [694] = {.lex_state = 0, .external_lex_state = 1},
  [695] = {.lex_state = 37, .external_lex_state = 1},
  [696] = {.lex_state = 37, .external_lex_state = 1},
  [697] = {.lex_state = 0, .external_lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 1},
  [699] = {.lex_state = 38, .external_lex_state = 1},
  [700] = {.lex_state = 38, .external_lex_state = 1},
  [701] = {.lex_state = 0, .external_lex_state = 1},
  [702] = {.lex_state = 0, .external_lex_state = 1},
  [703] = {.lex_state = 38, .external_lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 1},
  [705] = {.lex_state = 825, .external_lex_state = 1},
  [706] = {.lex_state = 0, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 38, .external_lex_state = 1},
  [709] = {.lex_state = 0, .external_lex_state = 1},
  [710] = {.lex_state = 0, .external_lex_state = 1},
  [711] = {.lex_state = 0, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 1},
  [716] = {.lex_state = 0, .external_lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 1},
  [718] = {.lex_state = 37, .external_lex_state = 1},
  [719] = {.lex_state = 0, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 0, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 0, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 38, .external_lex_state = 1},
};

enum {
  ts_external_token_multiline_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_multiline_comment] = sym_multiline_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_multiline_comment] = true,
  },
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
    [anon_sym_asymmetric_DASHencryption] = ACTIONS(1),
    [anon_sym_bilinear_DASHpairing] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_multiset] = ACTIONS(1),
    [anon_sym_revealing_DASHsigning] = ACTIONS(1),
    [anon_sym_heuristic] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_tactic] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_deprio] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_dhreNoise] = ACTIONS(1),
    [anon_sym_defaultNoise] = ACTIONS(1),
    [anon_sym_reasonableNoncesNoise] = ACTIONS(1),
    [anon_sym_nonAbsurdGoal] = ACTIONS(1),
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
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_msg] = ACTIONS(1),
    [anon_sym_restriction] = ACTIONS(1),
    [anon_sym_lemma] = ACTIONS(1),
    [anon_sym_reuse] = ACTIONS(1),
    [anon_sym_use_induction] = ACTIONS(1),
    [anon_sym_hide_lemma_EQ] = ACTIONS(1),
    [anon_sym_heuristic_EQ] = ACTIONS(1),
    [anon_sym_all_DASHtrace] = ACTIONS(1),
    [anon_sym_exists_DASHtrace] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_qed] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_fresh] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_no_precomp] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
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
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(725),
    [sym_security_protocol_theory] = STATE(723),
    [anon_sym_theory] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_splitEqs,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(463), 1,
      sym_formula,
    STATE(522), 1,
      sym_node_var,
    STATE(525), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    STATE(620), 1,
      sym_goal,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [115] = 35,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_splitEqs,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(463), 1,
      sym_formula,
    STATE(522), 1,
      sym_node_var,
    STATE(525), 1,
      sym_fact,
    STATE(598), 1,
      sym_goal,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [230] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(561), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [339] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(592), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [448] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(583), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [557] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(537), 1,
      sym__msetterm,
    STATE(576), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [666] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(172), 1,
      sym_negation,
    STATE(174), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(231), 1,
      sym_disjunction,
    STATE(247), 1,
      sym_formula,
    STATE(284), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [775] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(603), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [884] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(172), 1,
      sym_negation,
    STATE(174), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(231), 1,
      sym_disjunction,
    STATE(234), 1,
      sym_imp,
    STATE(247), 1,
      sym_formula,
    STATE(284), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [993] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(574), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1102] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(522), 1,
      sym_node_var,
    STATE(601), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1211] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(512), 1,
      sym_formula,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1320] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(372), 1,
      sym_imp,
    STATE(417), 1,
      sym_node_var,
    STATE(537), 1,
      sym__msetterm,
    STATE(576), 1,
      sym_formula,
    STATE(604), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1429] = 32,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(225), 1,
      sym_atom,
    STATE(227), 1,
      sym_imp,
    STATE(259), 1,
      sym_negation,
    STATE(290), 1,
      sym_quantifier,
    STATE(297), 1,
      sym_conjunction,
    STATE(356), 1,
      sym_disjunction,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1535] = 32,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(227), 1,
      sym_imp,
    STATE(277), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(315), 1,
      sym_disjunction,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1641] = 32,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(224), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(259), 1,
      sym_negation,
    STATE(290), 1,
      sym_quantifier,
    STATE(297), 1,
      sym_conjunction,
    STATE(356), 1,
      sym_disjunction,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1747] = 32,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(224), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(231), 1,
      sym_disjunction,
    STATE(251), 1,
      sym_negation,
    STATE(255), 1,
      sym_conjunction,
    STATE(290), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1853] = 30,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(172), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(228), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1953] = 30,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(225), 1,
      sym_atom,
    STATE(228), 1,
      sym_conjunction,
    STATE(259), 1,
      sym_negation,
    STATE(290), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2053] = 30,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(225), 1,
      sym_atom,
    STATE(228), 1,
      sym_conjunction,
    STATE(251), 1,
      sym_negation,
    STATE(290), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2153] = 30,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(185), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(228), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2253] = 29,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(225), 1,
      sym_atom,
    STATE(229), 1,
      sym_negation,
    STATE(290), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2350] = 29,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(225), 1,
      sym_atom,
    STATE(229), 1,
      sym_negation,
    STATE(284), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2447] = 26,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(244), 1,
      sym_atom,
    STATE(290), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2535] = 26,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(244), 1,
      sym_atom,
    STATE(284), 1,
      sym_quantifier,
    STATE(522), 1,
      sym_node_var,
    STATE(604), 1,
      sym_fact,
    STATE(605), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2623] = 8,
    ACTIONS(47), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(45), 1,
      sym_not_function,
    STATE(61), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(49), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(45), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2667] = 8,
    ACTIONS(53), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(45), 1,
      sym_not_function,
    STATE(61), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(56), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(51), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2711] = 8,
    ACTIONS(47), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(45), 1,
      sym_not_function,
    STATE(61), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(49), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(59), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2755] = 8,
    ACTIONS(63), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(65), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(61), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2798] = 8,
    ACTIONS(63), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(65), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(67), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2841] = 8,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(72), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(51), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2884] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(78), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(77), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(75), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2923] = 5,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(81), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2960] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(78), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(89), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(87), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2999] = 5,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(95), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3036] = 5,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(102), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3073] = 5,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(106), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3110] = 7,
    ACTIONS(114), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(65), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(117), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(110), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3151] = 5,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(106), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3188] = 8,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(45), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(127), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(120), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3231] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(130), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3263] = 5,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(106), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3299] = 7,
    ACTIONS(136), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(70), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(139), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(110), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3339] = 5,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    ACTIONS(146), 1,
      anon_sym_AMP,
    STATE(48), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(142), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3375] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(148), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3407] = 5,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(81), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3443] = 5,
    ACTIONS(146), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(152), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3479] = 8,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(156), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    STATE(76), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(120), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3521] = 5,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(162), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3557] = 14,
    ACTIONS(169), 1,
      anon_sym_end,
    ACTIONS(171), 1,
      sym_ident,
    ACTIONS(173), 1,
      anon_sym_functions,
    ACTIONS(175), 1,
      anon_sym_equations,
    ACTIONS(177), 1,
      anon_sym_builtins,
    ACTIONS(179), 1,
      anon_sym_heuristic,
    ACTIONS(181), 1,
      anon_sym_tactic,
    ACTIONS(183), 1,
      anon_sym_rule,
    ACTIONS(185), 1,
      anon_sym_restriction,
    ACTIONS(187), 1,
      anon_sym_lemma,
    STATE(188), 1,
      sym_simple_rule,
    STATE(706), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(67), 11,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_tactic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [3611] = 5,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(106), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3647] = 5,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(102), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3683] = 5,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(95), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3719] = 6,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(194), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [3756] = 5,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_AMP,
    STATE(56), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(162), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3791] = 5,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_AMP,
    STATE(56), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(152), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3826] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(130), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3857] = 5,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_AMP,
    STATE(57), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(142), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3892] = 13,
    ACTIONS(207), 1,
      anon_sym_end,
    ACTIONS(209), 1,
      sym_ident,
    ACTIONS(212), 1,
      anon_sym_functions,
    ACTIONS(215), 1,
      anon_sym_equations,
    ACTIONS(218), 1,
      anon_sym_builtins,
    ACTIONS(221), 1,
      anon_sym_heuristic,
    ACTIONS(224), 1,
      anon_sym_tactic,
    ACTIONS(227), 1,
      anon_sym_rule,
    ACTIONS(230), 1,
      anon_sym_restriction,
    ACTIONS(233), 1,
      anon_sym_lemma,
    STATE(188), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(60), 11,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_tactic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [3943] = 4,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    STATE(62), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(236), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3976] = 4,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(240), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4009] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(148), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4040] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(242), 20,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
      anon_sym_16,
      anon_sym_17,
  [4071] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(162), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4102] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(246), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4135] = 13,
    ACTIONS(171), 1,
      sym_ident,
    ACTIONS(173), 1,
      anon_sym_functions,
    ACTIONS(175), 1,
      anon_sym_equations,
    ACTIONS(177), 1,
      anon_sym_builtins,
    ACTIONS(179), 1,
      anon_sym_heuristic,
    ACTIONS(181), 1,
      anon_sym_tactic,
    ACTIONS(183), 1,
      anon_sym_rule,
    ACTIONS(185), 1,
      anon_sym_restriction,
    ACTIONS(187), 1,
      anon_sym_lemma,
    ACTIONS(251), 1,
      anon_sym_end,
    STATE(188), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(60), 11,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_tactic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [4186] = 4,
    ACTIONS(253), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(236), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4218] = 5,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(257), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4252] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(162), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4282] = 3,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(246), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4312] = 4,
    ACTIONS(253), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(240), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4344] = 4,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(246), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4376] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(268), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4403] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(270), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4430] = 3,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(246), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4459] = 5,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_CARET,
    STATE(77), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4492] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(279), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4519] = 5,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(285), 1,
      anon_sym_CARET,
    STATE(77), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(281), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4552] = 5,
    ACTIONS(285), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(287), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4585] = 4,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(291), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4616] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(297), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4644] = 3,
    ACTIONS(303), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(301), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4672] = 5,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_STAR,
    STATE(84), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4704] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(431), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4758] = 3,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(318), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4786] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(488), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4840] = 5,
    ACTIONS(326), 1,
      anon_sym_EQ,
    ACTIONS(328), 1,
      anon_sym_STAR,
    STATE(92), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(324), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4872] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(446), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4926] = 3,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4954] = 3,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(332), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [4982] = 5,
    ACTIONS(328), 1,
      anon_sym_STAR,
    ACTIONS(338), 1,
      anon_sym_EQ,
    STATE(84), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(336), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5014] = 3,
    ACTIONS(342), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(340), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5042] = 8,
    ACTIONS(346), 1,
      anon_sym_SOLVED,
    ACTIONS(348), 1,
      anon_sym_by,
    ACTIONS(352), 1,
      anon_sym_solve,
    STATE(265), 1,
      sym_proof_method,
    STATE(271), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(344), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5080] = 3,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(257), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5108] = 8,
    ACTIONS(346), 1,
      anon_sym_SOLVED,
    ACTIONS(348), 1,
      anon_sym_by,
    ACTIONS(352), 1,
      anon_sym_solve,
    STATE(265), 1,
      sym_proof_method,
    STATE(283), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(354), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5146] = 3,
    ACTIONS(358), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5174] = 3,
    ACTIONS(362), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(360), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5202] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(364), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5230] = 3,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5258] = 3,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5286] = 3,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(376), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5314] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(490), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5368] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(482), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5422] = 3,
    ACTIONS(384), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5450] = 8,
    ACTIONS(346), 1,
      anon_sym_SOLVED,
    ACTIONS(348), 1,
      anon_sym_by,
    ACTIONS(352), 1,
      anon_sym_solve,
    STATE(265), 1,
      sym_proof_method,
    STATE(266), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(386), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5488] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(388), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5516] = 8,
    ACTIONS(346), 1,
      anon_sym_SOLVED,
    ACTIONS(348), 1,
      anon_sym_by,
    ACTIONS(352), 1,
      anon_sym_solve,
    STATE(265), 1,
      sym_proof_method,
    STATE(274), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(392), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5554] = 3,
    ACTIONS(396), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(394), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5582] = 3,
    ACTIONS(400), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(398), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5610] = 3,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5638] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(425), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5689] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(458), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5740] = 3,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
      anon_sym_16,
      anon_sym_17,
  [5767] = 5,
    ACTIONS(408), 1,
      anon_sym_EQ,
    STATE(122), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(406), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5798] = 15,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_TILDE,
    STATE(301), 1,
      sym_term,
    STATE(309), 1,
      sym_nonnode_var,
    STATE(313), 1,
      sym_msg_var,
    STATE(319), 1,
      sym__expterm,
    STATE(329), 1,
      sym__multterm,
    STATE(394), 1,
      sym__xorterm,
    STATE(549), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(311), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5849] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(590), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5900] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(464), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5951] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(468), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6002] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(666), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6053] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(466), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6104] = 5,
    ACTIONS(426), 1,
      anon_sym_EQ,
    STATE(122), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(424), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6135] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(460), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6186] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(216), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6237] = 5,
    ACTIONS(433), 1,
      anon_sym_EQ,
    STATE(115), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(431), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6268] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(636), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6319] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(436), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6370] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(125), 1,
      sym__multterm,
    STATE(130), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6418] = 3,
    ACTIONS(426), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(424), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6444] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(435), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(437), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6470] = 14,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_TILDE,
    STATE(130), 1,
      sym__xorterm,
    STATE(301), 1,
      sym_term,
    STATE(309), 1,
      sym_nonnode_var,
    STATE(313), 1,
      sym_msg_var,
    STATE(319), 1,
      sym__expterm,
    STATE(329), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(311), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6518] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(443), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(140), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(192), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(441), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6549] = 5,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    STATE(135), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(445), 13,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6578] = 6,
    ACTIONS(453), 1,
      anon_sym_prio,
    ACTIONS(455), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(165), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(451), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6609] = 5,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_PLUS,
    STATE(135), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(437), 13,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6638] = 13,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_TILDE,
    STATE(301), 1,
      sym_term,
    STATE(309), 1,
      sym_nonnode_var,
    STATE(313), 1,
      sym_msg_var,
    STATE(319), 1,
      sym__expterm,
    STATE(358), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(311), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6683] = 6,
    ACTIONS(453), 1,
      anon_sym_prio,
    ACTIONS(455), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(159), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(460), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6714] = 5,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(133), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(462), 13,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6743] = 13,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(88), 1,
      sym__expterm,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(129), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6788] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(471), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(140), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(192), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(468), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6819] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(207), 1,
      sym_equation,
    STATE(684), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6861] = 4,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(474), 12,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6887] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(181), 1,
      sym_equation,
    STATE(684), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6929] = 12,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_TILDE,
    STATE(301), 1,
      sym_term,
    STATE(309), 1,
      sym_nonnode_var,
    STATE(313), 1,
      sym_msg_var,
    STATE(326), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(311), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6971] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    STATE(114), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7013] = 8,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(30), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(484), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7046] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(33), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(78), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(486), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7073] = 11,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_TILDE,
    STATE(309), 1,
      sym_nonnode_var,
    STATE(313), 1,
      sym_msg_var,
    STATE(314), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(311), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7112] = 11,
    ACTIONS(490), 1,
      sym_ident,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_LT,
    ACTIONS(498), 1,
      anon_sym_DOLLAR,
    ACTIONS(500), 1,
      anon_sym_TILDE,
    STATE(198), 1,
      sym_msg_var,
    STATE(214), 1,
      sym_term,
    STATE(238), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(246), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7151] = 4,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(504), 12,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7176] = 6,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7205] = 4,
    ACTIONS(516), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(514), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7230] = 8,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(45), 1,
      sym_not_function,
    STATE(61), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(523), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7263] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(312), 1,
      sym_ident,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_term,
    STATE(109), 1,
      sym_nonnode_var,
    STATE(111), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7302] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(132), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(192), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(441), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7329] = 7,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(45), 1,
      sym_not_function,
    STATE(61), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(523), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7359] = 4,
    STATE(157), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(525), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(527), 10,
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
  [7383] = 5,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7409] = 4,
    ACTIONS(455), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(161), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(451), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7433] = 4,
    STATE(157), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(534), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(536), 10,
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
  [7457] = 4,
    ACTIONS(540), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(161), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(538), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7481] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(244), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7503] = 4,
    ACTIONS(455), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(161), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(460), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7527] = 3,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 12,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7549] = 4,
    ACTIONS(455), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(161), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(545), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7573] = 7,
    ACTIONS(482), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(31), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(484), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7603] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(547), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7626] = 4,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(552), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7649] = 4,
    STATE(169), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(557), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [7672] = 4,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7695] = 6,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(194), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7722] = 3,
    STATE(190), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(570), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7743] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(572), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7766] = 3,
    STATE(191), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(576), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7787] = 4,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(578), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7810] = 4,
    STATE(176), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(582), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [7833] = 4,
    STATE(176), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(587), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [7856] = 4,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(591), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7879] = 4,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(595), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7902] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(599), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7925] = 4,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(601), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7948] = 4,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(603), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7971] = 4,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(605), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7994] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(607), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8015] = 4,
    STATE(177), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(570), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8038] = 4,
    STATE(160), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(433), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(611), 10,
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
  [8061] = 4,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8084] = 4,
    ACTIONS(621), 1,
      anon_sym_variants,
    STATE(260), 1,
      sym_variants,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(619), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8107] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(623), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8130] = 3,
    STATE(176), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(587), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8151] = 3,
    STATE(169), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(628), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8172] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(630), 12,
      anon_sym_COMMA,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_RBRACK,
  [8191] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(632), 12,
      anon_sym_COMMA,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_RBRACK,
  [8210] = 4,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(634), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8233] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(639), 12,
      anon_sym_COMMA,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_RBRACK,
  [8252] = 3,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(641), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8272] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(645), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8290] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(404), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8310] = 3,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(634), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8330] = 3,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(320), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8350] = 3,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(649), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8370] = 3,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(653), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8390] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(653), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8408] = 3,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8428] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(384), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8448] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(657), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8466] = 3,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(623), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8486] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(552), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8506] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8524] = 3,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(657), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8544] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(667), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8562] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8580] = 5,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(257), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8604] = 3,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(673), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8624] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(677), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8644] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8662] = 3,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(378), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8682] = 3,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(374), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8702] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(362), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8722] = 3,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(358), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8742] = 5,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(386), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(318), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8766] = 3,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8786] = 3,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8806] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8824] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(693), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8842] = 3,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(547), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8862] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(697), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8880] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(557), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8898] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(582), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8916] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8936] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(699), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8954] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(701), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8972] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(645), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8992] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(677), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9010] = 3,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(303), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9030] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(334), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9050] = 5,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(399), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(376), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9074] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9094] = 3,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(707), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9114] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [9132] = 3,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(342), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9152] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(707), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [9170] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9190] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(715), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9208] = 3,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(701), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9228] = 3,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9248] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(719), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9266] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(721), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9283] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9300] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(725), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9317] = 3,
    STATE(264), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(570), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9336] = 6,
    ACTIONS(727), 1,
      anon_sym_COLON,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(194), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9361] = 4,
    STATE(253), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(582), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9382] = 8,
    ACTIONS(736), 1,
      anon_sym_SOLVED,
    ACTIONS(738), 1,
      anon_sym_by,
    ACTIONS(740), 1,
      anon_sym_case,
    ACTIONS(744), 1,
      anon_sym_solve,
    STATE(254), 1,
      sym_proof_method,
    STATE(540), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9411] = 3,
    STATE(282), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(576), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9430] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(746), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9447] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(748), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9464] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(750), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9481] = 4,
    STATE(278), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(570), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9502] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(754), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9519] = 3,
    STATE(208), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(756), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [9538] = 4,
    STATE(276), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(628), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9559] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(760), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9576] = 3,
    STATE(253), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(587), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9595] = 8,
    ACTIONS(744), 1,
      anon_sym_solve,
    ACTIONS(762), 1,
      anon_sym_SOLVED,
    ACTIONS(764), 1,
      anon_sym_by,
    ACTIONS(766), 1,
      anon_sym_case,
    STATE(250), 1,
      sym_proof_skeleton,
    STATE(265), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9624] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(344), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9641] = 8,
    ACTIONS(768), 1,
      sym_ident,
    ACTIONS(770), 1,
      anon_sym_DOT,
    ACTIONS(772), 1,
      anon_sym_POUND,
    STATE(378), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(272), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(359), 2,
      sym_node_var,
      sym_nonnode_var,
  [9670] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(776), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9687] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(778), 10,
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
  [9704] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(780), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9721] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9738] = 8,
    ACTIONS(782), 1,
      sym_ident,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_POUND,
    STATE(378), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(272), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(359), 2,
      sym_node_var,
      sym_nonnode_var,
  [9767] = 3,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9786] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(354), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9803] = 4,
    STATE(275), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(557), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [9824] = 4,
    STATE(276), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(798), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(557), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9845] = 4,
    STATE(262), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(576), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9866] = 4,
    STATE(253), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(587), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9887] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(801), 10,
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
  [9904] = 3,
    STATE(180), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(756), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [9923] = 8,
    ACTIONS(768), 1,
      sym_ident,
    ACTIONS(772), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      anon_sym_DOT,
    STATE(378), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(272), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(359), 2,
      sym_node_var,
      sym_nonnode_var,
  [9952] = 3,
    STATE(275), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(628), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9971] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(805), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9988] = 7,
    ACTIONS(768), 1,
      sym_ident,
    ACTIONS(772), 1,
      anon_sym_POUND,
    STATE(378), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(267), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(359), 2,
      sym_node_var,
      sym_nonnode_var,
  [10014] = 7,
    ACTIONS(736), 1,
      anon_sym_SOLVED,
    ACTIONS(738), 1,
      anon_sym_by,
    ACTIONS(744), 1,
      anon_sym_solve,
    STATE(254), 1,
      sym_proof_method,
    STATE(486), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10040] = 5,
    ACTIONS(807), 1,
      anon_sym_COLON,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(257), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10062] = 6,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    ACTIONS(815), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(817), 1,
      anon_sym_heuristic_EQ,
    STATE(541), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(811), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10086] = 7,
    ACTIONS(736), 1,
      anon_sym_SOLVED,
    ACTIONS(738), 1,
      anon_sym_by,
    ACTIONS(744), 1,
      anon_sym_solve,
    STATE(254), 1,
      sym_proof_method,
    STATE(424), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10112] = 3,
    STATE(530), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(819), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [10130] = 7,
    ACTIONS(768), 1,
      sym_ident,
    ACTIONS(772), 1,
      anon_sym_POUND,
    STATE(378), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(281), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(359), 2,
      sym_node_var,
      sym_nonnode_var,
  [10156] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(244), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(242), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10174] = 7,
    ACTIONS(736), 1,
      anon_sym_SOLVED,
    ACTIONS(738), 1,
      anon_sym_by,
    ACTIONS(744), 1,
      anon_sym_solve,
    STATE(254), 1,
      sym_proof_method,
    STATE(501), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10200] = 6,
    ACTIONS(815), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(817), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(541), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(811), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10224] = 5,
    ACTIONS(815), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(817), 1,
      anon_sym_heuristic_EQ,
    STATE(541), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(811), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10245] = 5,
    ACTIONS(815), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(817), 1,
      anon_sym_heuristic_EQ,
    STATE(409), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(811), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10266] = 4,
    STATE(302), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(823), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(628), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10285] = 4,
    STATE(296), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(823), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(576), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10304] = 3,
    STATE(38), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(523), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [10321] = 4,
    ACTIONS(825), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(291), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10340] = 5,
    ACTIONS(827), 1,
      anon_sym_CARET,
    STATE(300), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(274), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10361] = 5,
    ACTIONS(830), 1,
      anon_sym_CARET,
    STATE(303), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(289), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10382] = 4,
    STATE(302), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(832), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(557), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10401] = 5,
    ACTIONS(830), 1,
      anon_sym_CARET,
    STATE(300), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(283), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10422] = 3,
    STATE(52), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [10439] = 7,
    ACTIONS(835), 1,
      anon_sym_presort,
    ACTIONS(837), 1,
      anon_sym_prio,
    ACTIONS(839), 1,
      anon_sym_deprio,
    STATE(332), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(137), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(163), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [10464] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(257), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10480] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(320), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(318), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10496] = 5,
    ACTIONS(841), 1,
      anon_sym_STAR,
    STATE(320), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(338), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10516] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(394), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10532] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(362), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(360), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10548] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(398), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10564] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(384), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(382), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10580] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(404), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(402), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10596] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(272), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10612] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(699), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [10628] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(342), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(340), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10644] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(358), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(356), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10660] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(334), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(332), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10676] = 5,
    ACTIONS(841), 1,
      anon_sym_STAR,
    STATE(308), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(326), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10696] = 5,
    ACTIONS(845), 1,
      anon_sym_STAR,
    STATE(320), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(307), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10716] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(378), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(376), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10732] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(303), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(301), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10748] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(374), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(372), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10764] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(368), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10780] = 4,
    ACTIONS(850), 1,
      anon_sym_solve,
    STATE(250), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(848), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10797] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(307), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10812] = 4,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(399), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10829] = 6,
    ACTIONS(424), 1,
      anon_sym_PLUS,
    ACTIONS(852), 1,
      anon_sym_XOR,
    ACTIONS(855), 1,
      anon_sym_13,
    STATE(328), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(426), 2,
      sym_ident,
      anon_sym_in,
  [10850] = 6,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_XOR,
    ACTIONS(860), 1,
      anon_sym_13,
    STATE(333), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      sym_ident,
      anon_sym_in,
  [10871] = 3,
    ACTIONS(862), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(194), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10886] = 4,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(403), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(864), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10903] = 5,
    ACTIONS(837), 1,
      anon_sym_prio,
    ACTIONS(839), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(134), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(159), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [10922] = 6,
    ACTIONS(406), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_XOR,
    ACTIONS(860), 1,
      anon_sym_13,
    STATE(328), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(408), 2,
      sym_ident,
      anon_sym_in,
  [10943] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10956] = 4,
    ACTIONS(744), 1,
      anon_sym_solve,
    STATE(540), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10973] = 4,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(407), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(866), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10990] = 4,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(386), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11007] = 3,
    ACTIONS(868), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(257), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11022] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(872), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(874), 1,
      anon_sym_BANG,
    STATE(487), 1,
      sym_fact,
    STATE(680), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11042] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(617), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11062] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(709), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11082] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(564), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11102] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11114] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(674), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11134] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(581), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11154] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(888), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(614), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11174] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(474), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11186] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(711), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11206] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(679), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11226] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(584), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11246] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(630), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11266] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(655), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11286] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(632), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11306] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(902), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(589), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11326] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(622), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11346] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(906), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(699), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [11360] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11372] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(426), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11386] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(908), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11398] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(707), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11418] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(912), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(634), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11438] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(701), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11458] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(916), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(565), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11478] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(621), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11498] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11510] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(920), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(686), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11530] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(291), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11542] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(360), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11554] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(558), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11574] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(618), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11594] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(257), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11606] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(677), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [11620] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(928), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(690), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11640] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(628), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11660] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(932), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(695), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11680] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(934), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(575), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11700] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(613), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11720] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11732] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(599), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11752] = 6,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(940), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_fact,
    STATE(625), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11772] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(942), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(693), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11792] = 6,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    ACTIONS(944), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      sym_fact,
    STATE(572), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11812] = 5,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(948), 1,
      anon_sym_in,
    STATE(388), 1,
      aux_sym_let_block_repeat1,
    STATE(615), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11829] = 4,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
    STATE(535), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [11844] = 4,
    ACTIONS(954), 1,
      anon_sym_PLUS,
    STATE(385), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(435), 2,
      sym_ident,
      anon_sym_in,
  [11859] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11870] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(957), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [11881] = 5,
    ACTIONS(959), 1,
      sym_ident,
    ACTIONS(962), 1,
      anon_sym_in,
    STATE(388), 1,
      aux_sym_let_block_repeat1,
    STATE(615), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [11898] = 3,
    STATE(450), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(964), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [11911] = 4,
    ACTIONS(966), 1,
      anon_sym_PLUS,
    STATE(385), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(447), 2,
      sym_ident,
      anon_sym_in,
  [11926] = 4,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    STATE(571), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [11941] = 4,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    STATE(536), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [11956] = 4,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    STATE(552), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [11971] = 4,
    ACTIONS(966), 1,
      anon_sym_PLUS,
    STATE(390), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      sym_ident,
      anon_sym_in,
  [11986] = 4,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    STATE(637), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12001] = 3,
    STATE(518), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(964), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12014] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12025] = 3,
    STATE(441), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(964), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12038] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(864), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12049] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(978), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12060] = 4,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    STATE(535), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12075] = 4,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    STATE(594), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12090] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(984), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12101] = 4,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    STATE(542), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12116] = 4,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    STATE(546), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12131] = 4,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(989), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12146] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12157] = 3,
    ACTIONS(991), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(993), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12169] = 4,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12183] = 4,
    ACTIONS(999), 1,
      anon_sym_COLON,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(676), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12197] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(411), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12211] = 4,
    ACTIONS(1008), 1,
      anon_sym_LBRACK,
    ACTIONS(1010), 1,
      anon_sym_let,
    STATE(578), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12225] = 4,
    ACTIONS(1012), 1,
      anon_sym_next,
    ACTIONS(1014), 1,
      anon_sym_qed,
    STATE(445), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12239] = 4,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    ACTIONS(1018), 1,
      anon_sym_msg,
    STATE(213), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12253] = 4,
    ACTIONS(1010), 1,
      anon_sym_let,
    ACTIONS(1020), 1,
      anon_sym_LBRACK,
    STATE(651), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12267] = 4,
    ACTIONS(1022), 1,
      anon_sym_COLON,
    ACTIONS(1024), 1,
      anon_sym_LBRACK,
    STATE(681), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12281] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1028), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [12293] = 3,
    STATE(476), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12305] = 4,
    ACTIONS(1030), 1,
      sym_ident,
    ACTIONS(1032), 1,
      anon_sym_LPAREN,
    STATE(726), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12319] = 3,
    STATE(567), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1034), 2,
      anon_sym_smallest,
      anon_sym_id,
  [12331] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1036), 1,
      sym_ident,
    STATE(273), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12345] = 3,
    ACTIONS(1038), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1040), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12357] = 4,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(1044), 1,
      anon_sym_2,
    STATE(435), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12371] = 4,
    ACTIONS(1012), 1,
      anon_sym_next,
    ACTIONS(1046), 1,
      anon_sym_qed,
    STATE(437), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12385] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12399] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12413] = 4,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12427] = 4,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12441] = 3,
    ACTIONS(1038), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1061), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12453] = 3,
    STATE(569), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1034), 2,
      anon_sym_smallest,
      anon_sym_id,
  [12465] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12479] = 4,
    ACTIONS(1024), 1,
      anon_sym_LBRACK,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    STATE(645), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12493] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1036), 1,
      sym_ident,
    STATE(672), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12507] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12521] = 4,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    ACTIONS(1071), 1,
      anon_sym_2,
    STATE(435), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12535] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(989), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12545] = 4,
    ACTIONS(1012), 1,
      anon_sym_next,
    ACTIONS(1074), 1,
      anon_sym_qed,
    STATE(445), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12559] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12573] = 4,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(478), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12587] = 4,
    ACTIONS(1032), 1,
      anon_sym_LPAREN,
    ACTIONS(1080), 1,
      sym_ident,
    STATE(699), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12601] = 4,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RBRACK,
    STATE(443), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12615] = 4,
    ACTIONS(1032), 1,
      anon_sym_LPAREN,
    ACTIONS(1086), 1,
      sym_ident,
    STATE(700), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12629] = 4,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12643] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1036), 1,
      sym_ident,
    STATE(556), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12657] = 4,
    ACTIONS(1090), 1,
      anon_sym_next,
    ACTIONS(1093), 1,
      anon_sym_qed,
    STATE(445), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12671] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12685] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1036), 1,
      sym_ident,
    STATE(216), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12699] = 4,
    ACTIONS(1095), 1,
      anon_sym_COLON,
    ACTIONS(1097), 1,
      anon_sym_LBRACK,
    STATE(629), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12713] = 4,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RBRACK,
    STATE(480), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12727] = 4,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    STATE(462), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12741] = 4,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
    STATE(451), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12755] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12769] = 4,
    ACTIONS(1112), 1,
      aux_sym_arity_token1,
    ACTIONS(1114), 1,
      anon_sym_msg,
    STATE(158), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12783] = 4,
    ACTIONS(1116), 1,
      aux_sym_arity_token1,
    ACTIONS(1118), 1,
      anon_sym_msg,
    STATE(286), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12797] = 4,
    ACTIONS(1097), 1,
      anon_sym_LBRACK,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    STATE(675), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12811] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1036), 1,
      sym_ident,
    STATE(688), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12825] = 4,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(876), 1,
      sym_ident,
    STATE(544), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12839] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_GT,
    STATE(469), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12853] = 4,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    ACTIONS(1018), 1,
      anon_sym_msg,
    STATE(69), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12867] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12881] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12895] = 4,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12909] = 4,
    ACTIONS(1044), 1,
      anon_sym_2,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12923] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_GT,
    STATE(471), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12937] = 4,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(467), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12951] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12965] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RBRACK,
    STATE(467), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12979] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_GT,
    STATE(491), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12993] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_GT,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13007] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13021] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_GT,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13035] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13049] = 4,
    ACTIONS(1010), 1,
      anon_sym_let,
    ACTIONS(1153), 1,
      anon_sym_LBRACK,
    STATE(715), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13063] = 4,
    ACTIONS(1010), 1,
      anon_sym_let,
    ACTIONS(1155), 1,
      anon_sym_LBRACK,
    STATE(610), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13077] = 4,
    ACTIONS(1010), 1,
      anon_sym_let,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
    STATE(717), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13091] = 4,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RBRACK,
    STATE(428), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13105] = 4,
    ACTIONS(1010), 1,
      anon_sym_let,
    ACTIONS(1163), 1,
      anon_sym_LBRACK,
    STATE(719), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13119] = 4,
    ACTIONS(1108), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13133] = 4,
    ACTIONS(1168), 1,
      sym_ident,
    STATE(383), 1,
      aux_sym_let_block_repeat1,
    STATE(615), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13147] = 4,
    ACTIONS(1078), 1,
      anon_sym_RBRACK,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13161] = 4,
    ACTIONS(1024), 1,
      anon_sym_LBRACK,
    ACTIONS(1170), 1,
      anon_sym_COLON,
    STATE(722), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13175] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13189] = 4,
    ACTIONS(1024), 1,
      anon_sym_LBRACK,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    STATE(724), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13203] = 3,
    STATE(535), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13215] = 4,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(874), 1,
      anon_sym_BANG,
    STATE(524), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13229] = 4,
    ACTIONS(1012), 1,
      anon_sym_next,
    ACTIONS(1176), 1,
      anon_sym_qed,
    STATE(413), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13243] = 4,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(439), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13257] = 4,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13271] = 4,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    ACTIONS(1018), 1,
      anon_sym_msg,
    STATE(548), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13285] = 4,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13299] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_GT,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13313] = 3,
    ACTIONS(991), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13325] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13339] = 3,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    STATE(164), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13350] = 3,
    ACTIONS(1184), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1186), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13361] = 3,
    ACTIONS(1188), 1,
      sym_ident,
    STATE(182), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13372] = 3,
    ACTIONS(1190), 1,
      anon_sym_rule,
    STATE(179), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13383] = 3,
    ACTIONS(942), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1192), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13394] = 3,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    STATE(692), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13405] = 3,
    ACTIONS(928), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1194), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13416] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1196), 2,
      anon_sym_next,
      anon_sym_qed,
  [13425] = 3,
    ACTIONS(920), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1198), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13436] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1200), 2,
      anon_sym_E,
      anon_sym_AC,
  [13445] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1202), 2,
      anon_sym_left,
      anon_sym_right,
  [13454] = 3,
    ACTIONS(872), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1204), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13465] = 3,
    ACTIONS(1206), 1,
      aux_sym_arity_token1,
    STATE(187), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13476] = 3,
    ACTIONS(1188), 1,
      sym_ident,
    STATE(226), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13487] = 3,
    ACTIONS(1112), 1,
      aux_sym_arity_token1,
    STATE(205), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13498] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13507] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1208), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1210), 1,
      sym_comment,
    STATE(611), 1,
      sym_param,
  [13520] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1212), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13529] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1069), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [13538] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13547] = 3,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    STATE(670), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13558] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1216), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13567] = 3,
    ACTIONS(1190), 1,
      anon_sym_rule,
    STATE(199), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13578] = 3,
    ACTIONS(1218), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1220), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13589] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1057), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13598] = 3,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    STATE(635), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13609] = 3,
    ACTIONS(194), 1,
      anon_sym_EQ,
    ACTIONS(1222), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13620] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13629] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1028), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [13638] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1226), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13647] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13656] = 3,
    ACTIONS(1228), 1,
      anon_sym_,
    ACTIONS(1230), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13667] = 3,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    STATE(105), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13678] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1232), 2,
      anon_sym_next,
      anon_sym_qed,
  [13687] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1040), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13696] = 3,
    ACTIONS(888), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1234), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13707] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1236), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [13716] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1238), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13725] = 3,
    ACTIONS(916), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1240), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13736] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13745] = 3,
    ACTIONS(1116), 1,
      aux_sym_arity_token1,
    STATE(312), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13756] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13765] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13774] = 3,
    ACTIONS(1244), 1,
      anon_sym_EQ,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13785] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13794] = 3,
    ACTIONS(902), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1248), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13805] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1250), 2,
      anon_sym_next,
      anon_sym_qed,
  [13814] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13823] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13832] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1208), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1210), 1,
      sym_comment,
    STATE(563), 1,
      sym_param,
  [13845] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13854] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13863] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13872] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [13881] = 3,
    ACTIONS(257), 1,
      anon_sym_EQ,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13892] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1252), 2,
      sym_ident,
      anon_sym_in,
  [13901] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13910] = 3,
    ACTIONS(944), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1254), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13921] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13930] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1256), 2,
      anon_sym_next,
      anon_sym_qed,
  [13939] = 3,
    ACTIONS(1016), 1,
      aux_sym_arity_token1,
    STATE(107), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13950] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1258), 2,
      anon_sym_next,
      anon_sym_qed,
  [13959] = 2,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13967] = 2,
    ACTIONS(1262), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13975] = 2,
    ACTIONS(934), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13983] = 2,
    ACTIONS(1264), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13991] = 2,
    ACTIONS(1266), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13999] = 2,
    ACTIONS(1268), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14007] = 2,
    ACTIONS(1270), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14015] = 2,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14023] = 2,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14031] = 2,
    ACTIONS(944), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14039] = 2,
    ACTIONS(1274), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14047] = 2,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14055] = 2,
    ACTIONS(1278), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14063] = 2,
    ACTIONS(1280), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14071] = 2,
    ACTIONS(1282), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14079] = 2,
    ACTIONS(1284), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14087] = 2,
    ACTIONS(902), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14095] = 2,
    ACTIONS(1286), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14103] = 2,
    ACTIONS(1288), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14111] = 2,
    ACTIONS(1290), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14119] = 2,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14127] = 2,
    ACTIONS(991), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14135] = 2,
    ACTIONS(1294), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14143] = 2,
    ACTIONS(1296), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14151] = 2,
    ACTIONS(1298), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14159] = 2,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14167] = 2,
    ACTIONS(1300), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14175] = 2,
    ACTIONS(1302), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14183] = 2,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14191] = 2,
    ACTIONS(1304), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14199] = 2,
    ACTIONS(1306), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14207] = 2,
    ACTIONS(1308), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14215] = 2,
    ACTIONS(1310), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14223] = 2,
    ACTIONS(888), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14231] = 2,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14239] = 2,
    ACTIONS(1314), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14247] = 2,
    ACTIONS(1316), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14255] = 2,
    ACTIONS(1318), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14263] = 2,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14271] = 2,
    ACTIONS(1320), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14279] = 2,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14287] = 2,
    ACTIONS(1324), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14295] = 2,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14303] = 2,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14311] = 2,
    ACTIONS(1328), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14319] = 2,
    ACTIONS(1330), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14327] = 2,
    ACTIONS(1332), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14335] = 2,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14343] = 2,
    ACTIONS(1028), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14351] = 2,
    ACTIONS(1244), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14359] = 2,
    ACTIONS(1336), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14367] = 2,
    ACTIONS(1338), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14375] = 2,
    ACTIONS(1340), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14383] = 2,
    ACTIONS(1342), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14391] = 2,
    ACTIONS(1008), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14399] = 2,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14407] = 2,
    ACTIONS(1346), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14415] = 2,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14423] = 2,
    ACTIONS(912), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14431] = 2,
    ACTIONS(1348), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14439] = 2,
    ACTIONS(1038), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14447] = 2,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14455] = 2,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14463] = 2,
    ACTIONS(1350), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14471] = 2,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14479] = 2,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14487] = 2,
    ACTIONS(940), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14495] = 2,
    ACTIONS(1354), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14503] = 2,
    ACTIONS(1356), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14511] = 2,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14519] = 2,
    ACTIONS(1358), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14527] = 2,
    ACTIONS(1360), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14535] = 2,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14543] = 2,
    ACTIONS(1362), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14551] = 2,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14559] = 2,
    ACTIONS(1364), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14567] = 2,
    ACTIONS(1366), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14575] = 2,
    ACTIONS(1368), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14583] = 2,
    ACTIONS(1370), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14591] = 2,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14599] = 2,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14607] = 2,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14615] = 2,
    ACTIONS(1376), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14623] = 2,
    ACTIONS(1378), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14631] = 2,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14639] = 2,
    ACTIONS(1382), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14647] = 2,
    ACTIONS(1384), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14655] = 2,
    ACTIONS(1386), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14663] = 2,
    ACTIONS(1388), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14671] = 2,
    ACTIONS(1390), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14679] = 2,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14687] = 2,
    ACTIONS(1394), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14695] = 2,
    ACTIONS(1396), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14703] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1210), 1,
      sym_comment,
    ACTIONS(1398), 1,
      aux_sym_oracle_goal_ranking_token1,
  [14713] = 2,
    ACTIONS(1400), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14721] = 2,
    ACTIONS(1155), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14729] = 2,
    ACTIONS(1402), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14737] = 2,
    ACTIONS(1404), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14745] = 2,
    ACTIONS(1406), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14753] = 2,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14761] = 2,
    ACTIONS(1408), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14769] = 2,
    ACTIONS(1410), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14777] = 2,
    ACTIONS(1412), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14785] = 2,
    ACTIONS(1414), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14793] = 2,
    ACTIONS(1416), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14801] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1210), 1,
      sym_comment,
    ACTIONS(1418), 1,
      aux_sym_oracle_goal_ranking_token1,
  [14811] = 2,
    ACTIONS(1420), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14819] = 2,
    ACTIONS(1422), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14827] = 2,
    ACTIONS(1424), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14835] = 2,
    ACTIONS(1426), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14843] = 2,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14851] = 2,
    ACTIONS(1428), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14859] = 2,
    ACTIONS(1430), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14867] = 2,
    ACTIONS(1432), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14875] = 2,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14883] = 2,
    ACTIONS(1436), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14891] = 2,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14899] = 2,
    ACTIONS(1440), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14907] = 2,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14915] = 2,
    ACTIONS(1095), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14923] = 2,
    ACTIONS(1442), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14931] = 2,
    ACTIONS(1444), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14939] = 2,
    ACTIONS(1446), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14947] = 2,
    ACTIONS(1448), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14955] = 2,
    ACTIONS(920), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14963] = 2,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14971] = 2,
    ACTIONS(1450), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14979] = 2,
    ACTIONS(1452), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14987] = 2,
    ACTIONS(1454), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14995] = 2,
    ACTIONS(1456), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15003] = 2,
    ACTIONS(928), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15011] = 2,
    ACTIONS(1458), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15019] = 2,
    ACTIONS(1460), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15027] = 2,
    ACTIONS(1462), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15035] = 2,
    ACTIONS(942), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15043] = 2,
    ACTIONS(1464), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15051] = 2,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15059] = 2,
    ACTIONS(932), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15067] = 2,
    ACTIONS(1468), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15075] = 2,
    ACTIONS(1470), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15083] = 2,
    ACTIONS(1472), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15091] = 2,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15099] = 2,
    ACTIONS(1476), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15107] = 2,
    ACTIONS(1478), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15115] = 2,
    ACTIONS(1480), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15123] = 2,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15131] = 2,
    ACTIONS(1482), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15139] = 2,
    ACTIONS(1484), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15147] = 2,
    ACTIONS(1486), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15155] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1210), 1,
      sym_comment,
    ACTIONS(1488), 1,
      aux_sym_formal_comment_token1,
  [15165] = 2,
    ACTIONS(1490), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15173] = 2,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15181] = 2,
    ACTIONS(1492), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15189] = 2,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15197] = 2,
    ACTIONS(1494), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15205] = 2,
    ACTIONS(1496), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15213] = 2,
    ACTIONS(1498), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15221] = 2,
    ACTIONS(1500), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15229] = 2,
    ACTIONS(1502), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15237] = 2,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15245] = 2,
    ACTIONS(1504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15253] = 2,
    ACTIONS(1163), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15261] = 2,
    ACTIONS(1506), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15269] = 2,
    ACTIONS(1508), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15277] = 2,
    ACTIONS(1510), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15285] = 2,
    ACTIONS(1512), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15293] = 2,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15301] = 2,
    ACTIONS(1514), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15309] = 2,
    ACTIONS(1516), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15317] = 2,
    ACTIONS(1518), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15325] = 2,
    ACTIONS(1520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 115,
  [SMALL_STATE(4)] = 230,
  [SMALL_STATE(5)] = 339,
  [SMALL_STATE(6)] = 448,
  [SMALL_STATE(7)] = 557,
  [SMALL_STATE(8)] = 666,
  [SMALL_STATE(9)] = 775,
  [SMALL_STATE(10)] = 884,
  [SMALL_STATE(11)] = 993,
  [SMALL_STATE(12)] = 1102,
  [SMALL_STATE(13)] = 1211,
  [SMALL_STATE(14)] = 1320,
  [SMALL_STATE(15)] = 1429,
  [SMALL_STATE(16)] = 1535,
  [SMALL_STATE(17)] = 1641,
  [SMALL_STATE(18)] = 1747,
  [SMALL_STATE(19)] = 1853,
  [SMALL_STATE(20)] = 1953,
  [SMALL_STATE(21)] = 2053,
  [SMALL_STATE(22)] = 2153,
  [SMALL_STATE(23)] = 2253,
  [SMALL_STATE(24)] = 2350,
  [SMALL_STATE(25)] = 2447,
  [SMALL_STATE(26)] = 2535,
  [SMALL_STATE(27)] = 2623,
  [SMALL_STATE(28)] = 2667,
  [SMALL_STATE(29)] = 2711,
  [SMALL_STATE(30)] = 2755,
  [SMALL_STATE(31)] = 2798,
  [SMALL_STATE(32)] = 2841,
  [SMALL_STATE(33)] = 2884,
  [SMALL_STATE(34)] = 2923,
  [SMALL_STATE(35)] = 2960,
  [SMALL_STATE(36)] = 2999,
  [SMALL_STATE(37)] = 3036,
  [SMALL_STATE(38)] = 3073,
  [SMALL_STATE(39)] = 3110,
  [SMALL_STATE(40)] = 3151,
  [SMALL_STATE(41)] = 3188,
  [SMALL_STATE(42)] = 3231,
  [SMALL_STATE(43)] = 3263,
  [SMALL_STATE(44)] = 3299,
  [SMALL_STATE(45)] = 3339,
  [SMALL_STATE(46)] = 3375,
  [SMALL_STATE(47)] = 3407,
  [SMALL_STATE(48)] = 3443,
  [SMALL_STATE(49)] = 3479,
  [SMALL_STATE(50)] = 3521,
  [SMALL_STATE(51)] = 3557,
  [SMALL_STATE(52)] = 3611,
  [SMALL_STATE(53)] = 3647,
  [SMALL_STATE(54)] = 3683,
  [SMALL_STATE(55)] = 3719,
  [SMALL_STATE(56)] = 3756,
  [SMALL_STATE(57)] = 3791,
  [SMALL_STATE(58)] = 3826,
  [SMALL_STATE(59)] = 3857,
  [SMALL_STATE(60)] = 3892,
  [SMALL_STATE(61)] = 3943,
  [SMALL_STATE(62)] = 3976,
  [SMALL_STATE(63)] = 4009,
  [SMALL_STATE(64)] = 4040,
  [SMALL_STATE(65)] = 4071,
  [SMALL_STATE(66)] = 4102,
  [SMALL_STATE(67)] = 4135,
  [SMALL_STATE(68)] = 4186,
  [SMALL_STATE(69)] = 4218,
  [SMALL_STATE(70)] = 4252,
  [SMALL_STATE(71)] = 4282,
  [SMALL_STATE(72)] = 4312,
  [SMALL_STATE(73)] = 4344,
  [SMALL_STATE(74)] = 4376,
  [SMALL_STATE(75)] = 4403,
  [SMALL_STATE(76)] = 4430,
  [SMALL_STATE(77)] = 4459,
  [SMALL_STATE(78)] = 4492,
  [SMALL_STATE(79)] = 4519,
  [SMALL_STATE(80)] = 4552,
  [SMALL_STATE(81)] = 4585,
  [SMALL_STATE(82)] = 4616,
  [SMALL_STATE(83)] = 4644,
  [SMALL_STATE(84)] = 4672,
  [SMALL_STATE(85)] = 4704,
  [SMALL_STATE(86)] = 4758,
  [SMALL_STATE(87)] = 4786,
  [SMALL_STATE(88)] = 4840,
  [SMALL_STATE(89)] = 4872,
  [SMALL_STATE(90)] = 4926,
  [SMALL_STATE(91)] = 4954,
  [SMALL_STATE(92)] = 4982,
  [SMALL_STATE(93)] = 5014,
  [SMALL_STATE(94)] = 5042,
  [SMALL_STATE(95)] = 5080,
  [SMALL_STATE(96)] = 5108,
  [SMALL_STATE(97)] = 5146,
  [SMALL_STATE(98)] = 5174,
  [SMALL_STATE(99)] = 5202,
  [SMALL_STATE(100)] = 5230,
  [SMALL_STATE(101)] = 5258,
  [SMALL_STATE(102)] = 5286,
  [SMALL_STATE(103)] = 5314,
  [SMALL_STATE(104)] = 5368,
  [SMALL_STATE(105)] = 5422,
  [SMALL_STATE(106)] = 5450,
  [SMALL_STATE(107)] = 5488,
  [SMALL_STATE(108)] = 5516,
  [SMALL_STATE(109)] = 5554,
  [SMALL_STATE(110)] = 5582,
  [SMALL_STATE(111)] = 5610,
  [SMALL_STATE(112)] = 5638,
  [SMALL_STATE(113)] = 5689,
  [SMALL_STATE(114)] = 5740,
  [SMALL_STATE(115)] = 5767,
  [SMALL_STATE(116)] = 5798,
  [SMALL_STATE(117)] = 5849,
  [SMALL_STATE(118)] = 5900,
  [SMALL_STATE(119)] = 5951,
  [SMALL_STATE(120)] = 6002,
  [SMALL_STATE(121)] = 6053,
  [SMALL_STATE(122)] = 6104,
  [SMALL_STATE(123)] = 6135,
  [SMALL_STATE(124)] = 6186,
  [SMALL_STATE(125)] = 6237,
  [SMALL_STATE(126)] = 6268,
  [SMALL_STATE(127)] = 6319,
  [SMALL_STATE(128)] = 6370,
  [SMALL_STATE(129)] = 6418,
  [SMALL_STATE(130)] = 6444,
  [SMALL_STATE(131)] = 6470,
  [SMALL_STATE(132)] = 6518,
  [SMALL_STATE(133)] = 6549,
  [SMALL_STATE(134)] = 6578,
  [SMALL_STATE(135)] = 6609,
  [SMALL_STATE(136)] = 6638,
  [SMALL_STATE(137)] = 6683,
  [SMALL_STATE(138)] = 6714,
  [SMALL_STATE(139)] = 6743,
  [SMALL_STATE(140)] = 6788,
  [SMALL_STATE(141)] = 6819,
  [SMALL_STATE(142)] = 6861,
  [SMALL_STATE(143)] = 6887,
  [SMALL_STATE(144)] = 6929,
  [SMALL_STATE(145)] = 6971,
  [SMALL_STATE(146)] = 7013,
  [SMALL_STATE(147)] = 7046,
  [SMALL_STATE(148)] = 7073,
  [SMALL_STATE(149)] = 7112,
  [SMALL_STATE(150)] = 7151,
  [SMALL_STATE(151)] = 7176,
  [SMALL_STATE(152)] = 7205,
  [SMALL_STATE(153)] = 7230,
  [SMALL_STATE(154)] = 7263,
  [SMALL_STATE(155)] = 7302,
  [SMALL_STATE(156)] = 7329,
  [SMALL_STATE(157)] = 7359,
  [SMALL_STATE(158)] = 7383,
  [SMALL_STATE(159)] = 7409,
  [SMALL_STATE(160)] = 7433,
  [SMALL_STATE(161)] = 7457,
  [SMALL_STATE(162)] = 7481,
  [SMALL_STATE(163)] = 7503,
  [SMALL_STATE(164)] = 7527,
  [SMALL_STATE(165)] = 7549,
  [SMALL_STATE(166)] = 7573,
  [SMALL_STATE(167)] = 7603,
  [SMALL_STATE(168)] = 7626,
  [SMALL_STATE(169)] = 7649,
  [SMALL_STATE(170)] = 7672,
  [SMALL_STATE(171)] = 7695,
  [SMALL_STATE(172)] = 7722,
  [SMALL_STATE(173)] = 7743,
  [SMALL_STATE(174)] = 7766,
  [SMALL_STATE(175)] = 7787,
  [SMALL_STATE(176)] = 7810,
  [SMALL_STATE(177)] = 7833,
  [SMALL_STATE(178)] = 7856,
  [SMALL_STATE(179)] = 7879,
  [SMALL_STATE(180)] = 7902,
  [SMALL_STATE(181)] = 7925,
  [SMALL_STATE(182)] = 7948,
  [SMALL_STATE(183)] = 7971,
  [SMALL_STATE(184)] = 7994,
  [SMALL_STATE(185)] = 8015,
  [SMALL_STATE(186)] = 8038,
  [SMALL_STATE(187)] = 8061,
  [SMALL_STATE(188)] = 8084,
  [SMALL_STATE(189)] = 8107,
  [SMALL_STATE(190)] = 8130,
  [SMALL_STATE(191)] = 8151,
  [SMALL_STATE(192)] = 8172,
  [SMALL_STATE(193)] = 8191,
  [SMALL_STATE(194)] = 8210,
  [SMALL_STATE(195)] = 8233,
  [SMALL_STATE(196)] = 8252,
  [SMALL_STATE(197)] = 8272,
  [SMALL_STATE(198)] = 8290,
  [SMALL_STATE(199)] = 8310,
  [SMALL_STATE(200)] = 8330,
  [SMALL_STATE(201)] = 8350,
  [SMALL_STATE(202)] = 8370,
  [SMALL_STATE(203)] = 8390,
  [SMALL_STATE(204)] = 8408,
  [SMALL_STATE(205)] = 8428,
  [SMALL_STATE(206)] = 8448,
  [SMALL_STATE(207)] = 8466,
  [SMALL_STATE(208)] = 8486,
  [SMALL_STATE(209)] = 8506,
  [SMALL_STATE(210)] = 8524,
  [SMALL_STATE(211)] = 8544,
  [SMALL_STATE(212)] = 8562,
  [SMALL_STATE(213)] = 8580,
  [SMALL_STATE(214)] = 8604,
  [SMALL_STATE(215)] = 8624,
  [SMALL_STATE(216)] = 8644,
  [SMALL_STATE(217)] = 8662,
  [SMALL_STATE(218)] = 8682,
  [SMALL_STATE(219)] = 8702,
  [SMALL_STATE(220)] = 8722,
  [SMALL_STATE(221)] = 8742,
  [SMALL_STATE(222)] = 8766,
  [SMALL_STATE(223)] = 8786,
  [SMALL_STATE(224)] = 8806,
  [SMALL_STATE(225)] = 8824,
  [SMALL_STATE(226)] = 8842,
  [SMALL_STATE(227)] = 8862,
  [SMALL_STATE(228)] = 8880,
  [SMALL_STATE(229)] = 8898,
  [SMALL_STATE(230)] = 8916,
  [SMALL_STATE(231)] = 8936,
  [SMALL_STATE(232)] = 8954,
  [SMALL_STATE(233)] = 8972,
  [SMALL_STATE(234)] = 8992,
  [SMALL_STATE(235)] = 9010,
  [SMALL_STATE(236)] = 9030,
  [SMALL_STATE(237)] = 9050,
  [SMALL_STATE(238)] = 9074,
  [SMALL_STATE(239)] = 9094,
  [SMALL_STATE(240)] = 9114,
  [SMALL_STATE(241)] = 9132,
  [SMALL_STATE(242)] = 9152,
  [SMALL_STATE(243)] = 9170,
  [SMALL_STATE(244)] = 9190,
  [SMALL_STATE(245)] = 9208,
  [SMALL_STATE(246)] = 9228,
  [SMALL_STATE(247)] = 9248,
  [SMALL_STATE(248)] = 9266,
  [SMALL_STATE(249)] = 9283,
  [SMALL_STATE(250)] = 9300,
  [SMALL_STATE(251)] = 9317,
  [SMALL_STATE(252)] = 9336,
  [SMALL_STATE(253)] = 9361,
  [SMALL_STATE(254)] = 9382,
  [SMALL_STATE(255)] = 9411,
  [SMALL_STATE(256)] = 9430,
  [SMALL_STATE(257)] = 9447,
  [SMALL_STATE(258)] = 9464,
  [SMALL_STATE(259)] = 9481,
  [SMALL_STATE(260)] = 9502,
  [SMALL_STATE(261)] = 9519,
  [SMALL_STATE(262)] = 9538,
  [SMALL_STATE(263)] = 9559,
  [SMALL_STATE(264)] = 9576,
  [SMALL_STATE(265)] = 9595,
  [SMALL_STATE(266)] = 9624,
  [SMALL_STATE(267)] = 9641,
  [SMALL_STATE(268)] = 9670,
  [SMALL_STATE(269)] = 9687,
  [SMALL_STATE(270)] = 9704,
  [SMALL_STATE(271)] = 9721,
  [SMALL_STATE(272)] = 9738,
  [SMALL_STATE(273)] = 9767,
  [SMALL_STATE(274)] = 9786,
  [SMALL_STATE(275)] = 9803,
  [SMALL_STATE(276)] = 9824,
  [SMALL_STATE(277)] = 9845,
  [SMALL_STATE(278)] = 9866,
  [SMALL_STATE(279)] = 9887,
  [SMALL_STATE(280)] = 9904,
  [SMALL_STATE(281)] = 9923,
  [SMALL_STATE(282)] = 9952,
  [SMALL_STATE(283)] = 9971,
  [SMALL_STATE(284)] = 9988,
  [SMALL_STATE(285)] = 10014,
  [SMALL_STATE(286)] = 10040,
  [SMALL_STATE(287)] = 10062,
  [SMALL_STATE(288)] = 10086,
  [SMALL_STATE(289)] = 10112,
  [SMALL_STATE(290)] = 10130,
  [SMALL_STATE(291)] = 10156,
  [SMALL_STATE(292)] = 10174,
  [SMALL_STATE(293)] = 10200,
  [SMALL_STATE(294)] = 10224,
  [SMALL_STATE(295)] = 10245,
  [SMALL_STATE(296)] = 10266,
  [SMALL_STATE(297)] = 10285,
  [SMALL_STATE(298)] = 10304,
  [SMALL_STATE(299)] = 10321,
  [SMALL_STATE(300)] = 10340,
  [SMALL_STATE(301)] = 10361,
  [SMALL_STATE(302)] = 10382,
  [SMALL_STATE(303)] = 10401,
  [SMALL_STATE(304)] = 10422,
  [SMALL_STATE(305)] = 10439,
  [SMALL_STATE(306)] = 10464,
  [SMALL_STATE(307)] = 10480,
  [SMALL_STATE(308)] = 10496,
  [SMALL_STATE(309)] = 10516,
  [SMALL_STATE(310)] = 10532,
  [SMALL_STATE(311)] = 10548,
  [SMALL_STATE(312)] = 10564,
  [SMALL_STATE(313)] = 10580,
  [SMALL_STATE(314)] = 10596,
  [SMALL_STATE(315)] = 10612,
  [SMALL_STATE(316)] = 10628,
  [SMALL_STATE(317)] = 10644,
  [SMALL_STATE(318)] = 10660,
  [SMALL_STATE(319)] = 10676,
  [SMALL_STATE(320)] = 10696,
  [SMALL_STATE(321)] = 10716,
  [SMALL_STATE(322)] = 10732,
  [SMALL_STATE(323)] = 10748,
  [SMALL_STATE(324)] = 10764,
  [SMALL_STATE(325)] = 10780,
  [SMALL_STATE(326)] = 10797,
  [SMALL_STATE(327)] = 10812,
  [SMALL_STATE(328)] = 10829,
  [SMALL_STATE(329)] = 10850,
  [SMALL_STATE(330)] = 10871,
  [SMALL_STATE(331)] = 10886,
  [SMALL_STATE(332)] = 10903,
  [SMALL_STATE(333)] = 10922,
  [SMALL_STATE(334)] = 10943,
  [SMALL_STATE(335)] = 10956,
  [SMALL_STATE(336)] = 10973,
  [SMALL_STATE(337)] = 10990,
  [SMALL_STATE(338)] = 11007,
  [SMALL_STATE(339)] = 11022,
  [SMALL_STATE(340)] = 11042,
  [SMALL_STATE(341)] = 11062,
  [SMALL_STATE(342)] = 11082,
  [SMALL_STATE(343)] = 11102,
  [SMALL_STATE(344)] = 11114,
  [SMALL_STATE(345)] = 11134,
  [SMALL_STATE(346)] = 11154,
  [SMALL_STATE(347)] = 11174,
  [SMALL_STATE(348)] = 11186,
  [SMALL_STATE(349)] = 11206,
  [SMALL_STATE(350)] = 11226,
  [SMALL_STATE(351)] = 11246,
  [SMALL_STATE(352)] = 11266,
  [SMALL_STATE(353)] = 11286,
  [SMALL_STATE(354)] = 11306,
  [SMALL_STATE(355)] = 11326,
  [SMALL_STATE(356)] = 11346,
  [SMALL_STATE(357)] = 11360,
  [SMALL_STATE(358)] = 11372,
  [SMALL_STATE(359)] = 11386,
  [SMALL_STATE(360)] = 11398,
  [SMALL_STATE(361)] = 11418,
  [SMALL_STATE(362)] = 11438,
  [SMALL_STATE(363)] = 11458,
  [SMALL_STATE(364)] = 11478,
  [SMALL_STATE(365)] = 11498,
  [SMALL_STATE(366)] = 11510,
  [SMALL_STATE(367)] = 11530,
  [SMALL_STATE(368)] = 11542,
  [SMALL_STATE(369)] = 11554,
  [SMALL_STATE(370)] = 11574,
  [SMALL_STATE(371)] = 11594,
  [SMALL_STATE(372)] = 11606,
  [SMALL_STATE(373)] = 11620,
  [SMALL_STATE(374)] = 11640,
  [SMALL_STATE(375)] = 11660,
  [SMALL_STATE(376)] = 11680,
  [SMALL_STATE(377)] = 11700,
  [SMALL_STATE(378)] = 11720,
  [SMALL_STATE(379)] = 11732,
  [SMALL_STATE(380)] = 11752,
  [SMALL_STATE(381)] = 11772,
  [SMALL_STATE(382)] = 11792,
  [SMALL_STATE(383)] = 11812,
  [SMALL_STATE(384)] = 11829,
  [SMALL_STATE(385)] = 11844,
  [SMALL_STATE(386)] = 11859,
  [SMALL_STATE(387)] = 11870,
  [SMALL_STATE(388)] = 11881,
  [SMALL_STATE(389)] = 11898,
  [SMALL_STATE(390)] = 11911,
  [SMALL_STATE(391)] = 11926,
  [SMALL_STATE(392)] = 11941,
  [SMALL_STATE(393)] = 11956,
  [SMALL_STATE(394)] = 11971,
  [SMALL_STATE(395)] = 11986,
  [SMALL_STATE(396)] = 12001,
  [SMALL_STATE(397)] = 12014,
  [SMALL_STATE(398)] = 12025,
  [SMALL_STATE(399)] = 12038,
  [SMALL_STATE(400)] = 12049,
  [SMALL_STATE(401)] = 12060,
  [SMALL_STATE(402)] = 12075,
  [SMALL_STATE(403)] = 12090,
  [SMALL_STATE(404)] = 12101,
  [SMALL_STATE(405)] = 12116,
  [SMALL_STATE(406)] = 12131,
  [SMALL_STATE(407)] = 12146,
  [SMALL_STATE(408)] = 12157,
  [SMALL_STATE(409)] = 12169,
  [SMALL_STATE(410)] = 12183,
  [SMALL_STATE(411)] = 12197,
  [SMALL_STATE(412)] = 12211,
  [SMALL_STATE(413)] = 12225,
  [SMALL_STATE(414)] = 12239,
  [SMALL_STATE(415)] = 12253,
  [SMALL_STATE(416)] = 12267,
  [SMALL_STATE(417)] = 12281,
  [SMALL_STATE(418)] = 12293,
  [SMALL_STATE(419)] = 12305,
  [SMALL_STATE(420)] = 12319,
  [SMALL_STATE(421)] = 12331,
  [SMALL_STATE(422)] = 12345,
  [SMALL_STATE(423)] = 12357,
  [SMALL_STATE(424)] = 12371,
  [SMALL_STATE(425)] = 12385,
  [SMALL_STATE(426)] = 12399,
  [SMALL_STATE(427)] = 12413,
  [SMALL_STATE(428)] = 12427,
  [SMALL_STATE(429)] = 12441,
  [SMALL_STATE(430)] = 12453,
  [SMALL_STATE(431)] = 12465,
  [SMALL_STATE(432)] = 12479,
  [SMALL_STATE(433)] = 12493,
  [SMALL_STATE(434)] = 12507,
  [SMALL_STATE(435)] = 12521,
  [SMALL_STATE(436)] = 12535,
  [SMALL_STATE(437)] = 12545,
  [SMALL_STATE(438)] = 12559,
  [SMALL_STATE(439)] = 12573,
  [SMALL_STATE(440)] = 12587,
  [SMALL_STATE(441)] = 12601,
  [SMALL_STATE(442)] = 12615,
  [SMALL_STATE(443)] = 12629,
  [SMALL_STATE(444)] = 12643,
  [SMALL_STATE(445)] = 12657,
  [SMALL_STATE(446)] = 12671,
  [SMALL_STATE(447)] = 12685,
  [SMALL_STATE(448)] = 12699,
  [SMALL_STATE(449)] = 12713,
  [SMALL_STATE(450)] = 12727,
  [SMALL_STATE(451)] = 12741,
  [SMALL_STATE(452)] = 12755,
  [SMALL_STATE(453)] = 12769,
  [SMALL_STATE(454)] = 12783,
  [SMALL_STATE(455)] = 12797,
  [SMALL_STATE(456)] = 12811,
  [SMALL_STATE(457)] = 12825,
  [SMALL_STATE(458)] = 12839,
  [SMALL_STATE(459)] = 12853,
  [SMALL_STATE(460)] = 12867,
  [SMALL_STATE(461)] = 12881,
  [SMALL_STATE(462)] = 12895,
  [SMALL_STATE(463)] = 12909,
  [SMALL_STATE(464)] = 12923,
  [SMALL_STATE(465)] = 12937,
  [SMALL_STATE(466)] = 12951,
  [SMALL_STATE(467)] = 12965,
  [SMALL_STATE(468)] = 12979,
  [SMALL_STATE(469)] = 12993,
  [SMALL_STATE(470)] = 13007,
  [SMALL_STATE(471)] = 13021,
  [SMALL_STATE(472)] = 13035,
  [SMALL_STATE(473)] = 13049,
  [SMALL_STATE(474)] = 13063,
  [SMALL_STATE(475)] = 13077,
  [SMALL_STATE(476)] = 13091,
  [SMALL_STATE(477)] = 13105,
  [SMALL_STATE(478)] = 13119,
  [SMALL_STATE(479)] = 13133,
  [SMALL_STATE(480)] = 13147,
  [SMALL_STATE(481)] = 13161,
  [SMALL_STATE(482)] = 13175,
  [SMALL_STATE(483)] = 13189,
  [SMALL_STATE(484)] = 13203,
  [SMALL_STATE(485)] = 13215,
  [SMALL_STATE(486)] = 13229,
  [SMALL_STATE(487)] = 13243,
  [SMALL_STATE(488)] = 13257,
  [SMALL_STATE(489)] = 13271,
  [SMALL_STATE(490)] = 13285,
  [SMALL_STATE(491)] = 13299,
  [SMALL_STATE(492)] = 13313,
  [SMALL_STATE(493)] = 13325,
  [SMALL_STATE(494)] = 13339,
  [SMALL_STATE(495)] = 13350,
  [SMALL_STATE(496)] = 13361,
  [SMALL_STATE(497)] = 13372,
  [SMALL_STATE(498)] = 13383,
  [SMALL_STATE(499)] = 13394,
  [SMALL_STATE(500)] = 13405,
  [SMALL_STATE(501)] = 13416,
  [SMALL_STATE(502)] = 13425,
  [SMALL_STATE(503)] = 13436,
  [SMALL_STATE(504)] = 13445,
  [SMALL_STATE(505)] = 13454,
  [SMALL_STATE(506)] = 13465,
  [SMALL_STATE(507)] = 13476,
  [SMALL_STATE(508)] = 13487,
  [SMALL_STATE(509)] = 13498,
  [SMALL_STATE(510)] = 13507,
  [SMALL_STATE(511)] = 13520,
  [SMALL_STATE(512)] = 13529,
  [SMALL_STATE(513)] = 13538,
  [SMALL_STATE(514)] = 13547,
  [SMALL_STATE(515)] = 13558,
  [SMALL_STATE(516)] = 13567,
  [SMALL_STATE(517)] = 13578,
  [SMALL_STATE(518)] = 13589,
  [SMALL_STATE(519)] = 13598,
  [SMALL_STATE(520)] = 13609,
  [SMALL_STATE(521)] = 13620,
  [SMALL_STATE(522)] = 13629,
  [SMALL_STATE(523)] = 13638,
  [SMALL_STATE(524)] = 13647,
  [SMALL_STATE(525)] = 13656,
  [SMALL_STATE(526)] = 13667,
  [SMALL_STATE(527)] = 13678,
  [SMALL_STATE(528)] = 13687,
  [SMALL_STATE(529)] = 13696,
  [SMALL_STATE(530)] = 13707,
  [SMALL_STATE(531)] = 13716,
  [SMALL_STATE(532)] = 13725,
  [SMALL_STATE(533)] = 13736,
  [SMALL_STATE(534)] = 13745,
  [SMALL_STATE(535)] = 13756,
  [SMALL_STATE(536)] = 13765,
  [SMALL_STATE(537)] = 13774,
  [SMALL_STATE(538)] = 13785,
  [SMALL_STATE(539)] = 13794,
  [SMALL_STATE(540)] = 13805,
  [SMALL_STATE(541)] = 13814,
  [SMALL_STATE(542)] = 13823,
  [SMALL_STATE(543)] = 13832,
  [SMALL_STATE(544)] = 13845,
  [SMALL_STATE(545)] = 13854,
  [SMALL_STATE(546)] = 13863,
  [SMALL_STATE(547)] = 13872,
  [SMALL_STATE(548)] = 13881,
  [SMALL_STATE(549)] = 13892,
  [SMALL_STATE(550)] = 13901,
  [SMALL_STATE(551)] = 13910,
  [SMALL_STATE(552)] = 13921,
  [SMALL_STATE(553)] = 13930,
  [SMALL_STATE(554)] = 13939,
  [SMALL_STATE(555)] = 13950,
  [SMALL_STATE(556)] = 13959,
  [SMALL_STATE(557)] = 13967,
  [SMALL_STATE(558)] = 13975,
  [SMALL_STATE(559)] = 13983,
  [SMALL_STATE(560)] = 13991,
  [SMALL_STATE(561)] = 13999,
  [SMALL_STATE(562)] = 14007,
  [SMALL_STATE(563)] = 14015,
  [SMALL_STATE(564)] = 14023,
  [SMALL_STATE(565)] = 14031,
  [SMALL_STATE(566)] = 14039,
  [SMALL_STATE(567)] = 14047,
  [SMALL_STATE(568)] = 14055,
  [SMALL_STATE(569)] = 14063,
  [SMALL_STATE(570)] = 14071,
  [SMALL_STATE(571)] = 14079,
  [SMALL_STATE(572)] = 14087,
  [SMALL_STATE(573)] = 14095,
  [SMALL_STATE(574)] = 14103,
  [SMALL_STATE(575)] = 14111,
  [SMALL_STATE(576)] = 14119,
  [SMALL_STATE(577)] = 14127,
  [SMALL_STATE(578)] = 14135,
  [SMALL_STATE(579)] = 14143,
  [SMALL_STATE(580)] = 14151,
  [SMALL_STATE(581)] = 14159,
  [SMALL_STATE(582)] = 14167,
  [SMALL_STATE(583)] = 14175,
  [SMALL_STATE(584)] = 14183,
  [SMALL_STATE(585)] = 14191,
  [SMALL_STATE(586)] = 14199,
  [SMALL_STATE(587)] = 14207,
  [SMALL_STATE(588)] = 14215,
  [SMALL_STATE(589)] = 14223,
  [SMALL_STATE(590)] = 14231,
  [SMALL_STATE(591)] = 14239,
  [SMALL_STATE(592)] = 14247,
  [SMALL_STATE(593)] = 14255,
  [SMALL_STATE(594)] = 14263,
  [SMALL_STATE(595)] = 14271,
  [SMALL_STATE(596)] = 14279,
  [SMALL_STATE(597)] = 14287,
  [SMALL_STATE(598)] = 14295,
  [SMALL_STATE(599)] = 14303,
  [SMALL_STATE(600)] = 14311,
  [SMALL_STATE(601)] = 14319,
  [SMALL_STATE(602)] = 14327,
  [SMALL_STATE(603)] = 14335,
  [SMALL_STATE(604)] = 14343,
  [SMALL_STATE(605)] = 14351,
  [SMALL_STATE(606)] = 14359,
  [SMALL_STATE(607)] = 14367,
  [SMALL_STATE(608)] = 14375,
  [SMALL_STATE(609)] = 14383,
  [SMALL_STATE(610)] = 14391,
  [SMALL_STATE(611)] = 14399,
  [SMALL_STATE(612)] = 14407,
  [SMALL_STATE(613)] = 14415,
  [SMALL_STATE(614)] = 14423,
  [SMALL_STATE(615)] = 14431,
  [SMALL_STATE(616)] = 14439,
  [SMALL_STATE(617)] = 14447,
  [SMALL_STATE(618)] = 14455,
  [SMALL_STATE(619)] = 14463,
  [SMALL_STATE(620)] = 14471,
  [SMALL_STATE(621)] = 14479,
  [SMALL_STATE(622)] = 14487,
  [SMALL_STATE(623)] = 14495,
  [SMALL_STATE(624)] = 14503,
  [SMALL_STATE(625)] = 14511,
  [SMALL_STATE(626)] = 14519,
  [SMALL_STATE(627)] = 14527,
  [SMALL_STATE(628)] = 14535,
  [SMALL_STATE(629)] = 14543,
  [SMALL_STATE(630)] = 14551,
  [SMALL_STATE(631)] = 14559,
  [SMALL_STATE(632)] = 14567,
  [SMALL_STATE(633)] = 14575,
  [SMALL_STATE(634)] = 14583,
  [SMALL_STATE(635)] = 14591,
  [SMALL_STATE(636)] = 14599,
  [SMALL_STATE(637)] = 14607,
  [SMALL_STATE(638)] = 14615,
  [SMALL_STATE(639)] = 14623,
  [SMALL_STATE(640)] = 14631,
  [SMALL_STATE(641)] = 14639,
  [SMALL_STATE(642)] = 14647,
  [SMALL_STATE(643)] = 14655,
  [SMALL_STATE(644)] = 14663,
  [SMALL_STATE(645)] = 14671,
  [SMALL_STATE(646)] = 14679,
  [SMALL_STATE(647)] = 14687,
  [SMALL_STATE(648)] = 14695,
  [SMALL_STATE(649)] = 14703,
  [SMALL_STATE(650)] = 14713,
  [SMALL_STATE(651)] = 14721,
  [SMALL_STATE(652)] = 14729,
  [SMALL_STATE(653)] = 14737,
  [SMALL_STATE(654)] = 14745,
  [SMALL_STATE(655)] = 14753,
  [SMALL_STATE(656)] = 14761,
  [SMALL_STATE(657)] = 14769,
  [SMALL_STATE(658)] = 14777,
  [SMALL_STATE(659)] = 14785,
  [SMALL_STATE(660)] = 14793,
  [SMALL_STATE(661)] = 14801,
  [SMALL_STATE(662)] = 14811,
  [SMALL_STATE(663)] = 14819,
  [SMALL_STATE(664)] = 14827,
  [SMALL_STATE(665)] = 14835,
  [SMALL_STATE(666)] = 14843,
  [SMALL_STATE(667)] = 14851,
  [SMALL_STATE(668)] = 14859,
  [SMALL_STATE(669)] = 14867,
  [SMALL_STATE(670)] = 14875,
  [SMALL_STATE(671)] = 14883,
  [SMALL_STATE(672)] = 14891,
  [SMALL_STATE(673)] = 14899,
  [SMALL_STATE(674)] = 14907,
  [SMALL_STATE(675)] = 14915,
  [SMALL_STATE(676)] = 14923,
  [SMALL_STATE(677)] = 14931,
  [SMALL_STATE(678)] = 14939,
  [SMALL_STATE(679)] = 14947,
  [SMALL_STATE(680)] = 14955,
  [SMALL_STATE(681)] = 14963,
  [SMALL_STATE(682)] = 14971,
  [SMALL_STATE(683)] = 14979,
  [SMALL_STATE(684)] = 14987,
  [SMALL_STATE(685)] = 14995,
  [SMALL_STATE(686)] = 15003,
  [SMALL_STATE(687)] = 15011,
  [SMALL_STATE(688)] = 15019,
  [SMALL_STATE(689)] = 15027,
  [SMALL_STATE(690)] = 15035,
  [SMALL_STATE(691)] = 15043,
  [SMALL_STATE(692)] = 15051,
  [SMALL_STATE(693)] = 15059,
  [SMALL_STATE(694)] = 15067,
  [SMALL_STATE(695)] = 15075,
  [SMALL_STATE(696)] = 15083,
  [SMALL_STATE(697)] = 15091,
  [SMALL_STATE(698)] = 15099,
  [SMALL_STATE(699)] = 15107,
  [SMALL_STATE(700)] = 15115,
  [SMALL_STATE(701)] = 15123,
  [SMALL_STATE(702)] = 15131,
  [SMALL_STATE(703)] = 15139,
  [SMALL_STATE(704)] = 15147,
  [SMALL_STATE(705)] = 15155,
  [SMALL_STATE(706)] = 15165,
  [SMALL_STATE(707)] = 15173,
  [SMALL_STATE(708)] = 15181,
  [SMALL_STATE(709)] = 15189,
  [SMALL_STATE(710)] = 15197,
  [SMALL_STATE(711)] = 15205,
  [SMALL_STATE(712)] = 15213,
  [SMALL_STATE(713)] = 15221,
  [SMALL_STATE(714)] = 15229,
  [SMALL_STATE(715)] = 15237,
  [SMALL_STATE(716)] = 15245,
  [SMALL_STATE(717)] = 15253,
  [SMALL_STATE(718)] = 15261,
  [SMALL_STATE(719)] = 15269,
  [SMALL_STATE(720)] = 15277,
  [SMALL_STATE(721)] = 15285,
  [SMALL_STATE(722)] = 15293,
  [SMALL_STATE(723)] = 15301,
  [SMALL_STATE(724)] = 15309,
  [SMALL_STATE(725)] = 15317,
  [SMALL_STATE(726)] = 15325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(298),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(46),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(304),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(63),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(74),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(683),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(543),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(298),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(46),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(298),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(46),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(304),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(63),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(304),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(63),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(39),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(510),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(44),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(718),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(716),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(714),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(713),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(712),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(710),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(442),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(708),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(440),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(41),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(49),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(154),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(145),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(139),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(128),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(195),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(669),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(657),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(157),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(654),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(507),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(261),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(141),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(516),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(330),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(597),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(633),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(148),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(144),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(136),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(136),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(131),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(520),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(127),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(484),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(396),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(13),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(642),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(457),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(294),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(485),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1518] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_tamarin_external_scanner_create(void);
void tree_sitter_tamarin_external_scanner_destroy(void *);
bool tree_sitter_tamarin_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_tamarin_external_scanner_serialize(void *, char *);
void tree_sitter_tamarin_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_tamarin_external_scanner_create,
      tree_sitter_tamarin_external_scanner_destroy,
      tree_sitter_tamarin_external_scanner_scan,
      tree_sitter_tamarin_external_scanner_serialize,
      tree_sitter_tamarin_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
