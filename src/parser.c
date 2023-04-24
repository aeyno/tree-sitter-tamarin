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
#define STATE_COUNT 777
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 257
#define ALIAS_COUNT 0
#define TOKEN_COUNT 158
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
  anon_sym_natural_DASHnumbers = 23,
  anon_sym_heuristic = 24,
  anon_sym_C = 25,
  anon_sym_I = 26,
  anon_sym_P = 27,
  anon_sym_S = 28,
  anon_sym_c = 29,
  anon_sym_i = 30,
  anon_sym_p = 31,
  anon_sym_s = 32,
  anon_sym_o = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_oracle_goal_ranking_token1 = 35,
  anon_sym_O = 36,
  anon_sym_tactic = 37,
  anon_sym_presort = 38,
  anon_sym_prio = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  anon_sym_deprio = 42,
  anon_sym_smallest = 43,
  anon_sym_id = 44,
  anon_sym_PIPE = 45,
  anon_sym_AMP = 46,
  anon_sym_not = 47,
  anon_sym_regex = 48,
  anon_sym_isFactName = 49,
  anon_sym_isInFactTerms = 50,
  anon_sym_dhreNoise = 51,
  anon_sym_defaultNoise = 52,
  anon_sym_reasonableNoncesNoise = 53,
  anon_sym_nonAbsurdGoal = 54,
  anon_sym_left = 55,
  anon_sym_right = 56,
  anon_sym_rule = 57,
  anon_sym_LBRACK = 58,
  anon_sym_RBRACK = 59,
  anon_sym_DASH_DASH_GT = 60,
  anon_sym_DASH_DASH_LBRACK = 61,
  anon_sym_RBRACK_DASH_GT = 62,
  anon_sym_variants = 63,
  anon_sym_LPAREN = 64,
  anon_sym_modulo = 65,
  anon_sym_E = 66,
  anon_sym_AC = 67,
  anon_sym_RPAREN = 68,
  anon_sym_color_EQ = 69,
  anon_sym_colour_EQ = 70,
  anon_sym_let = 71,
  anon_sym_in = 72,
  anon_sym_PERCENT = 73,
  anon_sym_DOT = 74,
  anon_sym_msg = 75,
  anon_sym_restriction = 76,
  anon_sym_lemma = 77,
  anon_sym_sources = 78,
  anon_sym_reuse = 79,
  anon_sym_use_induction = 80,
  anon_sym_hide_lemma_EQ = 81,
  anon_sym_heuristic_EQ = 82,
  anon_sym_all_DASHtrace = 83,
  anon_sym_exists_DASHtrace = 84,
  anon_sym_SOLVED = 85,
  anon_sym_by = 86,
  anon_sym_case = 87,
  anon_sym_next = 88,
  anon_sym_qed = 89,
  anon_sym_sorry = 90,
  anon_sym_simplify = 91,
  anon_sym_solve = 92,
  anon_sym_contradiction = 93,
  anon_sym_induction = 94,
  anon_sym_ = 95,
  anon_sym_AT = 96,
  anon_sym_TILDE_TILDE_GT = 97,
  anon_sym_2 = 98,
  anon_sym_splitEqs = 99,
  anon_sym_POUND = 100,
  anon_sym_node = 101,
  anon_sym_3 = 102,
  anon_sym_4 = 103,
  anon_sym_5 = 104,
  anon_sym_6 = 105,
  anon_sym_7 = 106,
  anon_sym_8 = 107,
  anon_sym_9 = 108,
  anon_sym_10 = 109,
  anon_sym_11 = 110,
  anon_sym_12 = 111,
  anon_sym_LBRACE_STAR = 112,
  aux_sym_formal_comment_token1 = 113,
  anon_sym_STAR_RBRACE = 114,
  anon_sym_LT = 115,
  anon_sym_GT = 116,
  anon_sym_PLUS = 117,
  anon_sym_PLUS_PLUS = 118,
  anon_sym_PERCENT_PLUS = 119,
  anon_sym_XOR = 120,
  anon_sym_13 = 121,
  anon_sym_STAR = 122,
  anon_sym_CARET = 123,
  anon_sym_SQUOTE = 124,
  anon_sym_TILDE_SQUOTE = 125,
  anon_sym_DOLLAR = 126,
  anon_sym_pub = 127,
  anon_sym_TILDE = 128,
  anon_sym_fresh = 129,
  anon_sym_nat = 130,
  anon_sym_In = 131,
  anon_sym_Out = 132,
  anon_sym_Fr = 133,
  anon_sym_BANG = 134,
  anon_sym_DASH = 135,
  anon_sym_no_precomp = 136,
  anon_sym_LT_EQ_GT = 137,
  anon_sym_14 = 138,
  anon_sym_EQ_EQ_GT = 139,
  anon_sym_15 = 140,
  anon_sym_16 = 141,
  anon_sym_17 = 142,
  anon_sym_18 = 143,
  anon_sym_19 = 144,
  anon_sym_F = 145,
  anon_sym_20 = 146,
  anon_sym_T = 147,
  anon_sym_last = 148,
  anon_sym_LT_LT = 149,
  anon_sym_21 = 150,
  anon_sym_Ex = 151,
  anon_sym_22 = 152,
  anon_sym_All = 153,
  anon_sym_23 = 154,
  sym_hexcolor = 155,
  sym_comment = 156,
  sym_multiline_comment = 157,
  sym_source_file = 158,
  sym_security_protocol_theory = 159,
  sym_body = 160,
  sym__signature_spec = 161,
  sym_functions = 162,
  sym_function_sym = 163,
  sym_arity = 164,
  sym_equations = 165,
  sym_equation = 166,
  sym_built_ins = 167,
  sym_built_in = 168,
  sym_global_heuristic = 169,
  sym_goal_ranking = 170,
  sym_standard_goal_ranking = 171,
  sym_oracle_goal_ranking = 172,
  sym_tactic = 173,
  sym_presort = 174,
  sym_prio = 175,
  sym_deprio = 176,
  sym_post_ranking = 177,
  sym_function = 178,
  sym_and_function = 179,
  sym_not_function = 180,
  sym_param = 181,
  sym_function_name = 182,
  sym_rule = 183,
  sym_simple_rule = 184,
  sym_variants = 185,
  sym_modulo = 186,
  sym_rule_attrs = 187,
  sym_rule_attr = 188,
  sym_let_block = 189,
  sym_msg_var = 190,
  sym_restriction = 191,
  sym_restriction_attrs = 192,
  sym_lemma = 193,
  sym_lemma_attrs = 194,
  sym_lemma_attr = 195,
  sym_trace_quantifier = 196,
  sym_proof_skeleton = 197,
  sym_proof_method = 198,
  sym_goal = 199,
  sym_node_var = 200,
  sym_natural = 201,
  sym_natural_subscr = 202,
  sym_formal_comment = 203,
  sym_tuple_term = 204,
  sym__msetterm = 205,
  sym__natterm = 206,
  sym__xorterm = 207,
  sym__multterm = 208,
  sym__expterm = 209,
  sym_term = 210,
  sym_nested = 211,
  sym_app = 212,
  sym_literal = 213,
  sym_nonnode_var = 214,
  sym_facts = 215,
  sym_builtin_facts = 216,
  sym_fact = 217,
  sym_fact_annotes = 218,
  sym_fact_annote = 219,
  sym_formula = 220,
  sym_imp = 221,
  sym_disjunction = 222,
  sym_conjunction = 223,
  sym_negation = 224,
  sym_atom = 225,
  sym_lvar = 226,
  sym_quantifier = 227,
  aux_sym_body_repeat1 = 228,
  aux_sym_functions_repeat1 = 229,
  aux_sym_equations_repeat1 = 230,
  aux_sym_built_ins_repeat1 = 231,
  aux_sym_global_heuristic_repeat1 = 232,
  aux_sym_tactic_repeat1 = 233,
  aux_sym_tactic_repeat2 = 234,
  aux_sym_prio_repeat1 = 235,
  aux_sym_function_repeat1 = 236,
  aux_sym_and_function_repeat1 = 237,
  aux_sym_not_function_repeat1 = 238,
  aux_sym_variants_repeat1 = 239,
  aux_sym_rule_attrs_repeat1 = 240,
  aux_sym_let_block_repeat1 = 241,
  aux_sym_lemma_attrs_repeat1 = 242,
  aux_sym_proof_skeleton_repeat1 = 243,
  aux_sym_goal_repeat1 = 244,
  aux_sym_natural_subscr_repeat1 = 245,
  aux_sym_tuple_term_repeat1 = 246,
  aux_sym__msetterm_repeat1 = 247,
  aux_sym__natterm_repeat1 = 248,
  aux_sym__xorterm_repeat1 = 249,
  aux_sym__multterm_repeat1 = 250,
  aux_sym__expterm_repeat1 = 251,
  aux_sym_facts_repeat1 = 252,
  aux_sym_fact_annotes_repeat1 = 253,
  aux_sym_disjunction_repeat1 = 254,
  aux_sym_conjunction_repeat1 = 255,
  aux_sym_atom_repeat1 = 256,
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
  [anon_sym_natural_DASHnumbers] = "natural-numbers",
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
  [anon_sym_PERCENT] = "%",
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
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PERCENT_PLUS] = "%+",
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
  [anon_sym_nat] = "nat",
  [anon_sym_In] = "In",
  [anon_sym_Out] = "Out",
  [anon_sym_Fr] = "Fr",
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
  [anon_sym_LT_LT] = "<<",
  [anon_sym_21] = "⊏",
  [anon_sym_Ex] = "Ex",
  [anon_sym_22] = "∃",
  [anon_sym_All] = "All",
  [anon_sym_23] = "∀",
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
  [sym__natterm] = "_natterm",
  [sym__xorterm] = "_xorterm",
  [sym__multterm] = "_multterm",
  [sym__expterm] = "_expterm",
  [sym_term] = "term",
  [sym_nested] = "nested",
  [sym_app] = "app",
  [sym_literal] = "literal",
  [sym_nonnode_var] = "nonnode_var",
  [sym_facts] = "facts",
  [sym_builtin_facts] = "builtin_facts",
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
  [aux_sym__natterm_repeat1] = "_natterm_repeat1",
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
  [anon_sym_natural_DASHnumbers] = anon_sym_natural_DASHnumbers,
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
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PERCENT_PLUS] = anon_sym_PERCENT_PLUS,
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
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_In] = anon_sym_In,
  [anon_sym_Out] = anon_sym_Out,
  [anon_sym_Fr] = anon_sym_Fr,
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
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_Ex] = anon_sym_Ex,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_All] = anon_sym_All,
  [anon_sym_23] = anon_sym_23,
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
  [sym__natterm] = sym__natterm,
  [sym__xorterm] = sym__xorterm,
  [sym__multterm] = sym__multterm,
  [sym__expterm] = sym__expterm,
  [sym_term] = sym_term,
  [sym_nested] = sym_nested,
  [sym_app] = sym_app,
  [sym_literal] = sym_literal,
  [sym_nonnode_var] = sym_nonnode_var,
  [sym_facts] = sym_facts,
  [sym_builtin_facts] = sym_builtin_facts,
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
  [aux_sym__natterm_repeat1] = aux_sym__natterm_repeat1,
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
  [anon_sym_natural_DASHnumbers] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PLUS] = {
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
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_In] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fr] = {
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_All] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
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
  [sym__natterm] = {
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
  [sym_builtin_facts] = {
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
  [aux_sym__natterm_repeat1] = {
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
  [10] = 10,
  [11] = 4,
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
  [39] = 32,
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
  [59] = 59,
  [60] = 60,
  [61] = 48,
  [62] = 46,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 37,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 47,
  [71] = 71,
  [72] = 42,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 45,
  [77] = 34,
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
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 51,
  [93] = 67,
  [94] = 94,
  [95] = 57,
  [96] = 59,
  [97] = 97,
  [98] = 98,
  [99] = 58,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 90,
  [105] = 105,
  [106] = 91,
  [107] = 94,
  [108] = 98,
  [109] = 109,
  [110] = 110,
  [111] = 105,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 117,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 123,
  [126] = 122,
  [127] = 127,
  [128] = 117,
  [129] = 123,
  [130] = 130,
  [131] = 131,
  [132] = 103,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 148,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 40,
  [156] = 156,
  [157] = 28,
  [158] = 158,
  [159] = 158,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 27,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 29,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 27,
  [182] = 182,
  [183] = 183,
  [184] = 115,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 36,
  [189] = 189,
  [190] = 29,
  [191] = 43,
  [192] = 192,
  [193] = 28,
  [194] = 50,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 189,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 114,
  [212] = 130,
  [213] = 213,
  [214] = 201,
  [215] = 215,
  [216] = 216,
  [217] = 53,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 56,
  [223] = 38,
  [224] = 74,
  [225] = 84,
  [226] = 83,
  [227] = 227,
  [228] = 55,
  [229] = 71,
  [230] = 230,
  [231] = 75,
  [232] = 80,
  [233] = 33,
  [234] = 68,
  [235] = 235,
  [236] = 69,
  [237] = 215,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 82,
  [243] = 60,
  [244] = 244,
  [245] = 245,
  [246] = 52,
  [247] = 81,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 44,
  [253] = 73,
  [254] = 254,
  [255] = 79,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 238,
  [261] = 261,
  [262] = 239,
  [263] = 263,
  [264] = 264,
  [265] = 240,
  [266] = 264,
  [267] = 241,
  [268] = 50,
  [269] = 43,
  [270] = 36,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 216,
  [275] = 256,
  [276] = 257,
  [277] = 220,
  [278] = 278,
  [279] = 54,
  [280] = 213,
  [281] = 68,
  [282] = 71,
  [283] = 84,
  [284] = 56,
  [285] = 213,
  [286] = 52,
  [287] = 81,
  [288] = 288,
  [289] = 60,
  [290] = 290,
  [291] = 82,
  [292] = 55,
  [293] = 53,
  [294] = 294,
  [295] = 295,
  [296] = 206,
  [297] = 201,
  [298] = 298,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 206,
  [303] = 303,
  [304] = 304,
  [305] = 288,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 201,
  [311] = 189,
  [312] = 78,
  [313] = 203,
  [314] = 303,
  [315] = 315,
  [316] = 79,
  [317] = 74,
  [318] = 64,
  [319] = 63,
  [320] = 304,
  [321] = 321,
  [322] = 322,
  [323] = 75,
  [324] = 80,
  [325] = 69,
  [326] = 186,
  [327] = 186,
  [328] = 189,
  [329] = 73,
  [330] = 83,
  [331] = 88,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 337,
  [340] = 340,
  [341] = 86,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 100,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 333,
  [350] = 350,
  [351] = 340,
  [352] = 352,
  [353] = 353,
  [354] = 87,
  [355] = 336,
  [356] = 343,
  [357] = 357,
  [358] = 358,
  [359] = 352,
  [360] = 360,
  [361] = 353,
  [362] = 350,
  [363] = 335,
  [364] = 364,
  [365] = 357,
  [366] = 360,
  [367] = 332,
  [368] = 348,
  [369] = 364,
  [370] = 342,
  [371] = 338,
  [372] = 347,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 213,
  [378] = 186,
  [379] = 379,
  [380] = 380,
  [381] = 375,
  [382] = 379,
  [383] = 206,
  [384] = 374,
  [385] = 109,
  [386] = 160,
  [387] = 134,
  [388] = 388,
  [389] = 28,
  [390] = 390,
  [391] = 388,
  [392] = 131,
  [393] = 133,
  [394] = 221,
  [395] = 140,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 69,
  [400] = 43,
  [401] = 401,
  [402] = 80,
  [403] = 75,
  [404] = 83,
  [405] = 74,
  [406] = 406,
  [407] = 50,
  [408] = 79,
  [409] = 73,
  [410] = 68,
  [411] = 137,
  [412] = 135,
  [413] = 398,
  [414] = 36,
  [415] = 415,
  [416] = 182,
  [417] = 417,
  [418] = 221,
  [419] = 220,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 422,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 406,
  [429] = 429,
  [430] = 425,
  [431] = 431,
  [432] = 401,
  [433] = 433,
  [434] = 434,
  [435] = 396,
  [436] = 436,
  [437] = 437,
  [438] = 417,
  [439] = 439,
  [440] = 429,
  [441] = 182,
  [442] = 442,
  [443] = 427,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 459,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 453,
  [467] = 467,
  [468] = 468,
  [469] = 463,
  [470] = 470,
  [471] = 470,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 467,
  [476] = 462,
  [477] = 477,
  [478] = 457,
  [479] = 455,
  [480] = 457,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 462,
  [485] = 485,
  [486] = 473,
  [487] = 482,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 489,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 488,
  [499] = 499,
  [500] = 473,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 482,
  [505] = 456,
  [506] = 506,
  [507] = 494,
  [508] = 499,
  [509] = 509,
  [510] = 451,
  [511] = 511,
  [512] = 512,
  [513] = 506,
  [514] = 491,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 464,
  [522] = 522,
  [523] = 458,
  [524] = 524,
  [525] = 496,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 468,
  [530] = 485,
  [531] = 531,
  [532] = 451,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 535,
  [538] = 512,
  [539] = 539,
  [540] = 477,
  [541] = 489,
  [542] = 494,
  [543] = 496,
  [544] = 499,
  [545] = 439,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 548,
  [551] = 551,
  [552] = 552,
  [553] = 321,
  [554] = 554,
  [555] = 555,
  [556] = 546,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 426,
  [561] = 561,
  [562] = 552,
  [563] = 442,
  [564] = 295,
  [565] = 565,
  [566] = 449,
  [567] = 557,
  [568] = 434,
  [569] = 448,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 307,
  [577] = 577,
  [578] = 309,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 115,
  [583] = 546,
  [584] = 549,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 558,
  [592] = 592,
  [593] = 593,
  [594] = 579,
  [595] = 570,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 581,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 607,
  [632] = 632,
  [633] = 633,
  [634] = 620,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 613,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 672,
  [674] = 642,
  [675] = 662,
  [676] = 676,
  [677] = 653,
  [678] = 678,
  [679] = 621,
  [680] = 680,
  [681] = 607,
  [682] = 682,
  [683] = 669,
  [684] = 620,
  [685] = 667,
  [686] = 613,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 607,
  [692] = 645,
  [693] = 650,
  [694] = 694,
  [695] = 695,
  [696] = 608,
  [697] = 664,
  [698] = 611,
  [699] = 633,
  [700] = 642,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 602,
  [711] = 711,
  [712] = 682,
  [713] = 671,
  [714] = 661,
  [715] = 715,
  [716] = 716,
  [717] = 608,
  [718] = 718,
  [719] = 605,
  [720] = 720,
  [721] = 721,
  [722] = 641,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 708,
  [728] = 728,
  [729] = 659,
  [730] = 730,
  [731] = 657,
  [732] = 732,
  [733] = 645,
  [734] = 702,
  [735] = 735,
  [736] = 724,
  [737] = 737,
  [738] = 738,
  [739] = 711,
  [740] = 690,
  [741] = 735,
  [742] = 703,
  [743] = 680,
  [744] = 744,
  [745] = 670,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 636,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 730,
  [757] = 749,
  [758] = 706,
  [759] = 752,
  [760] = 760,
  [761] = 723,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 622,
  [766] = 650,
  [767] = 663,
  [768] = 768,
  [769] = 762,
  [770] = 770,
  [771] = 771,
  [772] = 603,
  [773] = 773,
  [774] = 625,
  [775] = 775,
  [776] = 648,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(500);
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$') ADVANCE(887);
      if (lookahead == '%') ADVANCE(813);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '*') ADVANCE(883);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(901);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(710);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(873);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(875);
      if (lookahead == '@') ADVANCE(845);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(805);
      if (lookahead == 'F') ADVANCE(911);
      if (lookahead == 'I') ADVANCE(733);
      if (lookahead == 'O') ADVANCE(759);
      if (lookahead == 'P') ADVANCE(735);
      if (lookahead == 'S') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(914);
      if (lookahead == 'X') ADVANCE(101);
      if (lookahead == '[') ADVANCE(795);
      if (lookahead == '\\') SKIP(499)
      if (lookahead == ']') ADVANCE(796);
      if (lookahead == '^') ADVANCE(884);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(743);
      if (lookahead == 'q') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(346);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == '}') ADVANCE(768);
      if (lookahead == '~') ADVANCE(891);
      if (lookahead == 172) ADVANCE(909);
      if (lookahead == 8320) ADVANCE(851);
      if (lookahead == 8321) ADVANCE(852);
      if (lookahead == 8322) ADVANCE(853);
      if (lookahead == 8323) ADVANCE(854);
      if (lookahead == 8324) ADVANCE(855);
      if (lookahead == 8325) ADVANCE(856);
      if (lookahead == 8326) ADVANCE(857);
      if (lookahead == 8327) ADVANCE(858);
      if (lookahead == 8328) ADVANCE(859);
      if (lookahead == 8329) ADVANCE(860);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8660) ADVANCE(904);
      if (lookahead == 8704) ADVANCE(925);
      if (lookahead == 8707) ADVANCE(922);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == 8847) ADVANCE(919);
      if (lookahead == 8853) ADVANCE(881);
      if (lookahead == 8868) ADVANCE(913);
      if (lookahead == 8869) ADVANCE(910);
      if (lookahead == 9654) ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$') ADVANCE(887);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == 'A') ADVANCE(597);
      if (lookahead == 'E') ADVANCE(700);
      if (lookahead == 'F') ADVANCE(912);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(690);
      if (lookahead == 'T') ADVANCE(915);
      if (lookahead == '[') ADVANCE(795);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == '~') ADVANCE(890);
      if (lookahead == 172) ADVANCE(909);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8704) ADVANCE(925);
      if (lookahead == 8707) ADVANCE(922);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == 8868) ADVANCE(913);
      if (lookahead == 8869) ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$') ADVANCE(887);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '=') ADVANCE(715);
      if (lookahead == 'A') ADVANCE(597);
      if (lookahead == 'E') ADVANCE(700);
      if (lookahead == 'F') ADVANCE(912);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(690);
      if (lookahead == 'T') ADVANCE(915);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == '~') ADVANCE(890);
      if (lookahead == 172) ADVANCE(909);
      if (lookahead == 8704) ADVANCE(925);
      if (lookahead == 8707) ADVANCE(922);
      if (lookahead == 8868) ADVANCE(913);
      if (lookahead == 8869) ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$') ADVANCE(887);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == 'A') ADVANCE(597);
      if (lookahead == 'E') ADVANCE(700);
      if (lookahead == 'F') ADVANCE(912);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(690);
      if (lookahead == 'T') ADVANCE(915);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '~') ADVANCE(890);
      if (lookahead == 8704) ADVANCE(925);
      if (lookahead == 8707) ADVANCE(922);
      if (lookahead == 8868) ADVANCE(913);
      if (lookahead == 8869) ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(690);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(690);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$') ADVANCE(887);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(874);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == '~') ADVANCE(889);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8660) ADVANCE(904);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '*') ADVANCE(882);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '-') ADVANCE(900);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(875);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'C') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(804);
      if (lookahead == 'I') ADVANCE(733);
      if (lookahead == 'O') ADVANCE(758);
      if (lookahead == 'P') ADVANCE(735);
      if (lookahead == 'S') ADVANCE(737);
      if (lookahead == 'X') ADVANCE(101);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(796);
      if (lookahead == '^') ADVANCE(884);
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(743);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == '~') ADVANCE(490);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8660) ADVANCE(904);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == 8847) ADVANCE(919);
      if (lookahead == 8853) ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '%') ADVANCE(813);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(875);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8660) ADVANCE(904);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == 8847) ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '*') ADVANCE(882);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(873);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(875);
      if (lookahead == 'S') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(101);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(796);
      if (lookahead == '^') ADVANCE(884);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(377);
      if (lookahead == 'q') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == 'x') ADVANCE(346);
      if (lookahead == '{') ADVANCE(766);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8660) ADVANCE(904);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == 8847) ADVANCE(919);
      if (lookahead == 8853) ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == 8658) ADVANCE(906);
      if (lookahead == 8660) ADVANCE(904);
      if (lookahead == 8741) ADVANCE(847);
      if (lookahead == 8743) ADVANCE(908);
      if (lookahead == 8744) ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '&') ADVANCE(774);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(715);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '|') ADVANCE(773);
      if (lookahead == 8847) ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '$') ADVANCE(887);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '~') ADVANCE(890);
      if (lookahead == 8320) ADVANCE(851);
      if (lookahead == 8321) ADVANCE(852);
      if (lookahead == 8322) ADVANCE(853);
      if (lookahead == 8323) ADVANCE(854);
      if (lookahead == 8324) ADVANCE(855);
      if (lookahead == 8325) ADVANCE(856);
      if (lookahead == 8326) ADVANCE(857);
      if (lookahead == 8327) ADVANCE(858);
      if (lookahead == 8328) ADVANCE(859);
      if (lookahead == 8329) ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 53:
      if (lookahead == '%') ADVANCE(813);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == '*') ADVANCE(882);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == 'X') ADVANCE(519);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '^') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 8853) ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 54:
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ')') ADVANCE(807);
      if (lookahead == '*') ADVANCE(882);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(715);
      if (lookahead == '@') ADVANCE(845);
      if (lookahead == 'X') ADVANCE(101);
      if (lookahead == '[') ADVANCE(795);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '^') ADVANCE(884);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 8847) ADVANCE(919);
      if (lookahead == 8853) ADVANCE(881);
      if (lookahead == 9654) ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(802);
      if (lookahead == ',') ADVANCE(709);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '=') ADVANCE(715);
      if (lookahead == '[') ADVANCE(370);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(861);
      END_STATE();
    case 57:
      if (lookahead == '+') ADVANCE(878);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(444);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(457);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(927);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'C') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(734);
      if (lookahead == 'O') ADVANCE(760);
      if (lookahead == 'P') ADVANCE(736);
      if (lookahead == 'S') ADVANCE(738);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == 'p') ADVANCE(744);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 's') ADVANCE(746);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(518);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'b') ADVANCE(692);
      if (lookahead == 'c') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'd') ADVANCE(564);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'd') ADVANCE(564);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == 'v') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 74:
      if (lookahead == '<') ADVANCE(918);
      END_STATE();
    case 75:
      if (lookahead == '<') ADVANCE(918);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(824);
      END_STATE();
    case 78:
      if (lookahead == '=') ADVANCE(823);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(808);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(809);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(797);
      if (lookahead == '[') ADVANCE(798);
      END_STATE();
    case 83:
      if (lookahead == '>') ADVANCE(903);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(905);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(846);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(799);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(806);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(806);
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(827);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(319);
      END_STATE();
    case 93:
      if (lookahead == 'F') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(353);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(363);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(365);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(879);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 105:
      if (lookahead == 'V') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(711);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(368);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(250);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(418);
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(418);
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(888);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(426);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(829);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(435);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(486);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(255);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(815);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(720);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(724);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(727);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(723);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(892);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(437);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'y') ADVANCE(829);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(366);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 304:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 306:
      if (lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 307:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'q') ADVANCE(467);
      if (lookahead == 'x') ADVANCE(260);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(803);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(764);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(902);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(800);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(895);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(916);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(791);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 479:
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 480:
      if (lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 481:
      if (lookahead == 'x') ADVANCE(777);
      END_STATE();
    case 482:
      if (lookahead == 'x') ADVANCE(436);
      END_STATE();
    case 483:
      if (lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 484:
      if (lookahead == 'y') ADVANCE(501);
      END_STATE();
    case 485:
      if (lookahead == 'y') ADVANCE(834);
      END_STATE();
    case 486:
      if (lookahead == 'y') ADVANCE(836);
      END_STATE();
    case 487:
      if (lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 488:
      if (lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 489:
      if (lookahead == '}') ADVANCE(870);
      END_STATE();
    case 490:
      if (lookahead == '~') ADVANCE(85);
      END_STATE();
    case 491:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(926);
      END_STATE();
    case 492:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      END_STATE();
    case 493:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      END_STATE();
    case 494:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 495:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      END_STATE();
    case 496:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      END_STATE();
    case 497:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(927);
      if (lookahead == '\r') ADVANCE(928);
      END_STATE();
    case 498:
      if (eof) ADVANCE(500);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 499:
      if (eof) ADVANCE(500);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(498)
      END_STATE();
    case 500:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(534);
      if (lookahead == 'I') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead == 's') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'h') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == 'u') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(530);
      if (lookahead == 'p') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(699);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == 'q') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == 'y') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(927);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_natural_DASHnumbers);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(824);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(753);
      if (lookahead == '\r') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(757);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(757);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(757);
      if (lookahead == '"') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(755);
      if (lookahead != 0) ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(754);
      if (lookahead == '\\') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(757);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(757);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(752);
      if (lookahead == '\r') ADVANCE(756);
      if (lookahead == '"') ADVANCE(927);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(752);
      if (lookahead == '"') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(861);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(920);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '+') ADVANCE(878);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_all_DASHtrace);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(865);
      if (lookahead == '\r') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(869);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(869);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(869);
      if (lookahead == '*') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(867);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(862);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(869);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(869);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(864);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '*') ADVANCE(927);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(864);
      if (lookahead == '*') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(867);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(869);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(918);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(918);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(877);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_PERCENT_PLUS);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(870);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(886);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(886);
      if (lookahead == '~') ADVANCE(85);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_In);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_Out);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_Out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_Fr);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_Fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(497);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 41, .external_lex_state = 1},
  [3] = {.lex_state = 41, .external_lex_state = 1},
  [4] = {.lex_state = 42, .external_lex_state = 1},
  [5] = {.lex_state = 42, .external_lex_state = 1},
  [6] = {.lex_state = 42, .external_lex_state = 1},
  [7] = {.lex_state = 42, .external_lex_state = 1},
  [8] = {.lex_state = 42, .external_lex_state = 1},
  [9] = {.lex_state = 42, .external_lex_state = 1},
  [10] = {.lex_state = 42, .external_lex_state = 1},
  [11] = {.lex_state = 42, .external_lex_state = 1},
  [12] = {.lex_state = 42, .external_lex_state = 1},
  [13] = {.lex_state = 42, .external_lex_state = 1},
  [14] = {.lex_state = 42, .external_lex_state = 1},
  [15] = {.lex_state = 42, .external_lex_state = 1},
  [16] = {.lex_state = 42, .external_lex_state = 1},
  [17] = {.lex_state = 42, .external_lex_state = 1},
  [18] = {.lex_state = 42, .external_lex_state = 1},
  [19] = {.lex_state = 42, .external_lex_state = 1},
  [20] = {.lex_state = 42, .external_lex_state = 1},
  [21] = {.lex_state = 42, .external_lex_state = 1},
  [22] = {.lex_state = 42, .external_lex_state = 1},
  [23] = {.lex_state = 42, .external_lex_state = 1},
  [24] = {.lex_state = 42, .external_lex_state = 1},
  [25] = {.lex_state = 43, .external_lex_state = 1},
  [26] = {.lex_state = 43, .external_lex_state = 1},
  [27] = {.lex_state = 47, .external_lex_state = 1},
  [28] = {.lex_state = 49, .external_lex_state = 1},
  [29] = {.lex_state = 47, .external_lex_state = 1},
  [30] = {.lex_state = 50, .external_lex_state = 1},
  [31] = {.lex_state = 50, .external_lex_state = 1},
  [32] = {.lex_state = 50, .external_lex_state = 1},
  [33] = {.lex_state = 47, .external_lex_state = 1},
  [34] = {.lex_state = 50, .external_lex_state = 1},
  [35] = {.lex_state = 51, .external_lex_state = 1},
  [36] = {.lex_state = 47, .external_lex_state = 1},
  [37] = {.lex_state = 50, .external_lex_state = 1},
  [38] = {.lex_state = 47, .external_lex_state = 1},
  [39] = {.lex_state = 51, .external_lex_state = 1},
  [40] = {.lex_state = 69, .external_lex_state = 1},
  [41] = {.lex_state = 51, .external_lex_state = 1},
  [42] = {.lex_state = 50, .external_lex_state = 1},
  [43] = {.lex_state = 47, .external_lex_state = 1},
  [44] = {.lex_state = 47, .external_lex_state = 1},
  [45] = {.lex_state = 50, .external_lex_state = 1},
  [46] = {.lex_state = 50, .external_lex_state = 1},
  [47] = {.lex_state = 50, .external_lex_state = 1},
  [48] = {.lex_state = 50, .external_lex_state = 1},
  [49] = {.lex_state = 69, .external_lex_state = 1},
  [50] = {.lex_state = 47, .external_lex_state = 1},
  [51] = {.lex_state = 50, .external_lex_state = 1},
  [52] = {.lex_state = 47, .external_lex_state = 1},
  [53] = {.lex_state = 47, .external_lex_state = 1},
  [54] = {.lex_state = 47, .external_lex_state = 1},
  [55] = {.lex_state = 47, .external_lex_state = 1},
  [56] = {.lex_state = 47, .external_lex_state = 1},
  [57] = {.lex_state = 50, .external_lex_state = 1},
  [58] = {.lex_state = 50, .external_lex_state = 1},
  [59] = {.lex_state = 50, .external_lex_state = 1},
  [60] = {.lex_state = 47, .external_lex_state = 1},
  [61] = {.lex_state = 51, .external_lex_state = 1},
  [62] = {.lex_state = 51, .external_lex_state = 1},
  [63] = {.lex_state = 47, .external_lex_state = 1},
  [64] = {.lex_state = 47, .external_lex_state = 1},
  [65] = {.lex_state = 55, .external_lex_state = 1},
  [66] = {.lex_state = 51, .external_lex_state = 1},
  [67] = {.lex_state = 50, .external_lex_state = 1},
  [68] = {.lex_state = 47, .external_lex_state = 1},
  [69] = {.lex_state = 47, .external_lex_state = 1},
  [70] = {.lex_state = 51, .external_lex_state = 1},
  [71] = {.lex_state = 47, .external_lex_state = 1},
  [72] = {.lex_state = 51, .external_lex_state = 1},
  [73] = {.lex_state = 47, .external_lex_state = 1},
  [74] = {.lex_state = 47, .external_lex_state = 1},
  [75] = {.lex_state = 47, .external_lex_state = 1},
  [76] = {.lex_state = 51, .external_lex_state = 1},
  [77] = {.lex_state = 51, .external_lex_state = 1},
  [78] = {.lex_state = 47, .external_lex_state = 1},
  [79] = {.lex_state = 47, .external_lex_state = 1},
  [80] = {.lex_state = 47, .external_lex_state = 1},
  [81] = {.lex_state = 47, .external_lex_state = 1},
  [82] = {.lex_state = 47, .external_lex_state = 1},
  [83] = {.lex_state = 47, .external_lex_state = 1},
  [84] = {.lex_state = 47, .external_lex_state = 1},
  [85] = {.lex_state = 55, .external_lex_state = 1},
  [86] = {.lex_state = 47, .external_lex_state = 1},
  [87] = {.lex_state = 47, .external_lex_state = 1},
  [88] = {.lex_state = 47, .external_lex_state = 1},
  [89] = {.lex_state = 55, .external_lex_state = 1},
  [90] = {.lex_state = 50, .external_lex_state = 1},
  [91] = {.lex_state = 50, .external_lex_state = 1},
  [92] = {.lex_state = 51, .external_lex_state = 1},
  [93] = {.lex_state = 51, .external_lex_state = 1},
  [94] = {.lex_state = 50, .external_lex_state = 1},
  [95] = {.lex_state = 51, .external_lex_state = 1},
  [96] = {.lex_state = 51, .external_lex_state = 1},
  [97] = {.lex_state = 48, .external_lex_state = 1},
  [98] = {.lex_state = 50, .external_lex_state = 1},
  [99] = {.lex_state = 51, .external_lex_state = 1},
  [100] = {.lex_state = 47, .external_lex_state = 1},
  [101] = {.lex_state = 52, .external_lex_state = 1},
  [102] = {.lex_state = 52, .external_lex_state = 1},
  [103] = {.lex_state = 50, .external_lex_state = 1},
  [104] = {.lex_state = 51, .external_lex_state = 1},
  [105] = {.lex_state = 52, .external_lex_state = 1},
  [106] = {.lex_state = 51, .external_lex_state = 1},
  [107] = {.lex_state = 51, .external_lex_state = 1},
  [108] = {.lex_state = 51, .external_lex_state = 1},
  [109] = {.lex_state = 47, .external_lex_state = 1},
  [110] = {.lex_state = 52, .external_lex_state = 1},
  [111] = {.lex_state = 52, .external_lex_state = 1},
  [112] = {.lex_state = 48, .external_lex_state = 1},
  [113] = {.lex_state = 46, .external_lex_state = 1},
  [114] = {.lex_state = 69, .external_lex_state = 1},
  [115] = {.lex_state = 69, .external_lex_state = 1},
  [116] = {.lex_state = 46, .external_lex_state = 1},
  [117] = {.lex_state = 52, .external_lex_state = 1},
  [118] = {.lex_state = 52, .external_lex_state = 1},
  [119] = {.lex_state = 46, .external_lex_state = 1},
  [120] = {.lex_state = 52, .external_lex_state = 1},
  [121] = {.lex_state = 52, .external_lex_state = 1},
  [122] = {.lex_state = 52, .external_lex_state = 1},
  [123] = {.lex_state = 52, .external_lex_state = 1},
  [124] = {.lex_state = 52, .external_lex_state = 1},
  [125] = {.lex_state = 52, .external_lex_state = 1},
  [126] = {.lex_state = 52, .external_lex_state = 1},
  [127] = {.lex_state = 52, .external_lex_state = 1},
  [128] = {.lex_state = 52, .external_lex_state = 1},
  [129] = {.lex_state = 52, .external_lex_state = 1},
  [130] = {.lex_state = 69, .external_lex_state = 1},
  [131] = {.lex_state = 47, .external_lex_state = 1},
  [132] = {.lex_state = 51, .external_lex_state = 1},
  [133] = {.lex_state = 47, .external_lex_state = 1},
  [134] = {.lex_state = 47, .external_lex_state = 1},
  [135] = {.lex_state = 47, .external_lex_state = 1},
  [136] = {.lex_state = 52, .external_lex_state = 1},
  [137] = {.lex_state = 47, .external_lex_state = 1},
  [138] = {.lex_state = 70, .external_lex_state = 1},
  [139] = {.lex_state = 70, .external_lex_state = 1},
  [140] = {.lex_state = 47, .external_lex_state = 1},
  [141] = {.lex_state = 52, .external_lex_state = 1},
  [142] = {.lex_state = 70, .external_lex_state = 1},
  [143] = {.lex_state = 70, .external_lex_state = 1},
  [144] = {.lex_state = 52, .external_lex_state = 1},
  [145] = {.lex_state = 52, .external_lex_state = 1},
  [146] = {.lex_state = 52, .external_lex_state = 1},
  [147] = {.lex_state = 52, .external_lex_state = 1},
  [148] = {.lex_state = 52, .external_lex_state = 1},
  [149] = {.lex_state = 52, .external_lex_state = 1},
  [150] = {.lex_state = 54, .external_lex_state = 1},
  [151] = {.lex_state = 52, .external_lex_state = 1},
  [152] = {.lex_state = 71, .external_lex_state = 1},
  [153] = {.lex_state = 47, .external_lex_state = 1},
  [154] = {.lex_state = 71, .external_lex_state = 1},
  [155] = {.lex_state = 47, .external_lex_state = 1},
  [156] = {.lex_state = 52, .external_lex_state = 1},
  [157] = {.lex_state = 55, .external_lex_state = 1},
  [158] = {.lex_state = 52, .external_lex_state = 1},
  [159] = {.lex_state = 52, .external_lex_state = 1},
  [160] = {.lex_state = 54, .external_lex_state = 1},
  [161] = {.lex_state = 54, .external_lex_state = 1},
  [162] = {.lex_state = 54, .external_lex_state = 1},
  [163] = {.lex_state = 52, .external_lex_state = 1},
  [164] = {.lex_state = 49, .external_lex_state = 1},
  [165] = {.lex_state = 47, .external_lex_state = 1},
  [166] = {.lex_state = 55, .external_lex_state = 1},
  [167] = {.lex_state = 71, .external_lex_state = 1},
  [168] = {.lex_state = 49, .external_lex_state = 1},
  [169] = {.lex_state = 50, .external_lex_state = 1},
  [170] = {.lex_state = 47, .external_lex_state = 1},
  [171] = {.lex_state = 55, .external_lex_state = 1},
  [172] = {.lex_state = 49, .external_lex_state = 1},
  [173] = {.lex_state = 72, .external_lex_state = 1},
  [174] = {.lex_state = 72, .external_lex_state = 1},
  [175] = {.lex_state = 49, .external_lex_state = 1},
  [176] = {.lex_state = 72, .external_lex_state = 1},
  [177] = {.lex_state = 50, .external_lex_state = 1},
  [178] = {.lex_state = 52, .external_lex_state = 1},
  [179] = {.lex_state = 52, .external_lex_state = 1},
  [180] = {.lex_state = 72, .external_lex_state = 1},
  [181] = {.lex_state = 53, .external_lex_state = 1},
  [182] = {.lex_state = 50, .external_lex_state = 1},
  [183] = {.lex_state = 55, .external_lex_state = 1},
  [184] = {.lex_state = 47, .external_lex_state = 1},
  [185] = {.lex_state = 73, .external_lex_state = 1},
  [186] = {.lex_state = 50, .external_lex_state = 1},
  [187] = {.lex_state = 55, .external_lex_state = 1},
  [188] = {.lex_state = 55, .external_lex_state = 1},
  [189] = {.lex_state = 50, .external_lex_state = 1},
  [190] = {.lex_state = 53, .external_lex_state = 1},
  [191] = {.lex_state = 55, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 53, .external_lex_state = 1},
  [194] = {.lex_state = 55, .external_lex_state = 1},
  [195] = {.lex_state = 55, .external_lex_state = 1},
  [196] = {.lex_state = 55, .external_lex_state = 1},
  [197] = {.lex_state = 55, .external_lex_state = 1},
  [198] = {.lex_state = 55, .external_lex_state = 1},
  [199] = {.lex_state = 55, .external_lex_state = 1},
  [200] = {.lex_state = 55, .external_lex_state = 1},
  [201] = {.lex_state = 50, .external_lex_state = 1},
  [202] = {.lex_state = 55, .external_lex_state = 1},
  [203] = {.lex_state = 50, .external_lex_state = 1},
  [204] = {.lex_state = 55, .external_lex_state = 1},
  [205] = {.lex_state = 55, .external_lex_state = 1},
  [206] = {.lex_state = 50, .external_lex_state = 1},
  [207] = {.lex_state = 50, .external_lex_state = 1},
  [208] = {.lex_state = 55, .external_lex_state = 1},
  [209] = {.lex_state = 55, .external_lex_state = 1},
  [210] = {.lex_state = 55, .external_lex_state = 1},
  [211] = {.lex_state = 47, .external_lex_state = 1},
  [212] = {.lex_state = 47, .external_lex_state = 1},
  [213] = {.lex_state = 50, .external_lex_state = 1},
  [214] = {.lex_state = 50, .external_lex_state = 1},
  [215] = {.lex_state = 73, .external_lex_state = 1},
  [216] = {.lex_state = 55, .external_lex_state = 1},
  [217] = {.lex_state = 55, .external_lex_state = 1},
  [218] = {.lex_state = 55, .external_lex_state = 1},
  [219] = {.lex_state = 55, .external_lex_state = 1},
  [220] = {.lex_state = 50, .external_lex_state = 1},
  [221] = {.lex_state = 50, .external_lex_state = 1},
  [222] = {.lex_state = 55, .external_lex_state = 1},
  [223] = {.lex_state = 53, .external_lex_state = 1},
  [224] = {.lex_state = 55, .external_lex_state = 1},
  [225] = {.lex_state = 55, .external_lex_state = 1},
  [226] = {.lex_state = 55, .external_lex_state = 1},
  [227] = {.lex_state = 55, .external_lex_state = 1},
  [228] = {.lex_state = 55, .external_lex_state = 1},
  [229] = {.lex_state = 55, .external_lex_state = 1},
  [230] = {.lex_state = 49, .external_lex_state = 1},
  [231] = {.lex_state = 55, .external_lex_state = 1},
  [232] = {.lex_state = 55, .external_lex_state = 1},
  [233] = {.lex_state = 53, .external_lex_state = 1},
  [234] = {.lex_state = 55, .external_lex_state = 1},
  [235] = {.lex_state = 50, .external_lex_state = 1},
  [236] = {.lex_state = 55, .external_lex_state = 1},
  [237] = {.lex_state = 55, .external_lex_state = 1},
  [238] = {.lex_state = 55, .external_lex_state = 1},
  [239] = {.lex_state = 55, .external_lex_state = 1},
  [240] = {.lex_state = 55, .external_lex_state = 1},
  [241] = {.lex_state = 55, .external_lex_state = 1},
  [242] = {.lex_state = 55, .external_lex_state = 1},
  [243] = {.lex_state = 55, .external_lex_state = 1},
  [244] = {.lex_state = 55, .external_lex_state = 1},
  [245] = {.lex_state = 52, .external_lex_state = 1},
  [246] = {.lex_state = 55, .external_lex_state = 1},
  [247] = {.lex_state = 55, .external_lex_state = 1},
  [248] = {.lex_state = 50, .external_lex_state = 1},
  [249] = {.lex_state = 50, .external_lex_state = 1},
  [250] = {.lex_state = 50, .external_lex_state = 1},
  [251] = {.lex_state = 50, .external_lex_state = 1},
  [252] = {.lex_state = 53, .external_lex_state = 1},
  [253] = {.lex_state = 55, .external_lex_state = 1},
  [254] = {.lex_state = 50, .external_lex_state = 1},
  [255] = {.lex_state = 55, .external_lex_state = 1},
  [256] = {.lex_state = 55, .external_lex_state = 1},
  [257] = {.lex_state = 55, .external_lex_state = 1},
  [258] = {.lex_state = 50, .external_lex_state = 1},
  [259] = {.lex_state = 50, .external_lex_state = 1},
  [260] = {.lex_state = 73, .external_lex_state = 1},
  [261] = {.lex_state = 55, .external_lex_state = 1},
  [262] = {.lex_state = 73, .external_lex_state = 1},
  [263] = {.lex_state = 50, .external_lex_state = 1},
  [264] = {.lex_state = 52, .external_lex_state = 1},
  [265] = {.lex_state = 73, .external_lex_state = 1},
  [266] = {.lex_state = 52, .external_lex_state = 1},
  [267] = {.lex_state = 73, .external_lex_state = 1},
  [268] = {.lex_state = 53, .external_lex_state = 1},
  [269] = {.lex_state = 53, .external_lex_state = 1},
  [270] = {.lex_state = 53, .external_lex_state = 1},
  [271] = {.lex_state = 55, .external_lex_state = 1},
  [272] = {.lex_state = 55, .external_lex_state = 1},
  [273] = {.lex_state = 49, .external_lex_state = 1},
  [274] = {.lex_state = 73, .external_lex_state = 1},
  [275] = {.lex_state = 73, .external_lex_state = 1},
  [276] = {.lex_state = 73, .external_lex_state = 1},
  [277] = {.lex_state = 50, .external_lex_state = 1},
  [278] = {.lex_state = 55, .external_lex_state = 1},
  [279] = {.lex_state = 53, .external_lex_state = 1},
  [280] = {.lex_state = 50, .external_lex_state = 1},
  [281] = {.lex_state = 53, .external_lex_state = 1},
  [282] = {.lex_state = 53, .external_lex_state = 1},
  [283] = {.lex_state = 53, .external_lex_state = 1},
  [284] = {.lex_state = 53, .external_lex_state = 1},
  [285] = {.lex_state = 41, .external_lex_state = 1},
  [286] = {.lex_state = 53, .external_lex_state = 1},
  [287] = {.lex_state = 53, .external_lex_state = 1},
  [288] = {.lex_state = 52, .external_lex_state = 1},
  [289] = {.lex_state = 53, .external_lex_state = 1},
  [290] = {.lex_state = 55, .external_lex_state = 1},
  [291] = {.lex_state = 53, .external_lex_state = 1},
  [292] = {.lex_state = 53, .external_lex_state = 1},
  [293] = {.lex_state = 53, .external_lex_state = 1},
  [294] = {.lex_state = 55, .external_lex_state = 1},
  [295] = {.lex_state = 55, .external_lex_state = 1},
  [296] = {.lex_state = 41, .external_lex_state = 1},
  [297] = {.lex_state = 41, .external_lex_state = 1},
  [298] = {.lex_state = 55, .external_lex_state = 1},
  [299] = {.lex_state = 49, .external_lex_state = 1},
  [300] = {.lex_state = 55, .external_lex_state = 1},
  [301] = {.lex_state = 55, .external_lex_state = 1},
  [302] = {.lex_state = 50, .external_lex_state = 1},
  [303] = {.lex_state = 49, .external_lex_state = 1},
  [304] = {.lex_state = 55, .external_lex_state = 1},
  [305] = {.lex_state = 52, .external_lex_state = 1},
  [306] = {.lex_state = 50, .external_lex_state = 1},
  [307] = {.lex_state = 55, .external_lex_state = 1},
  [308] = {.lex_state = 55, .external_lex_state = 1},
  [309] = {.lex_state = 55, .external_lex_state = 1},
  [310] = {.lex_state = 41, .external_lex_state = 1},
  [311] = {.lex_state = 41, .external_lex_state = 1},
  [312] = {.lex_state = 53, .external_lex_state = 1},
  [313] = {.lex_state = 41, .external_lex_state = 1},
  [314] = {.lex_state = 49, .external_lex_state = 1},
  [315] = {.lex_state = 55, .external_lex_state = 1},
  [316] = {.lex_state = 53, .external_lex_state = 1},
  [317] = {.lex_state = 53, .external_lex_state = 1},
  [318] = {.lex_state = 53, .external_lex_state = 1},
  [319] = {.lex_state = 53, .external_lex_state = 1},
  [320] = {.lex_state = 49, .external_lex_state = 1},
  [321] = {.lex_state = 55, .external_lex_state = 1},
  [322] = {.lex_state = 55, .external_lex_state = 1},
  [323] = {.lex_state = 53, .external_lex_state = 1},
  [324] = {.lex_state = 53, .external_lex_state = 1},
  [325] = {.lex_state = 53, .external_lex_state = 1},
  [326] = {.lex_state = 50, .external_lex_state = 1},
  [327] = {.lex_state = 41, .external_lex_state = 1},
  [328] = {.lex_state = 41, .external_lex_state = 1},
  [329] = {.lex_state = 53, .external_lex_state = 1},
  [330] = {.lex_state = 53, .external_lex_state = 1},
  [331] = {.lex_state = 53, .external_lex_state = 1},
  [332] = {.lex_state = 44, .external_lex_state = 1},
  [333] = {.lex_state = 44, .external_lex_state = 1},
  [334] = {.lex_state = 49, .external_lex_state = 1},
  [335] = {.lex_state = 44, .external_lex_state = 1},
  [336] = {.lex_state = 45, .external_lex_state = 1},
  [337] = {.lex_state = 45, .external_lex_state = 1},
  [338] = {.lex_state = 44, .external_lex_state = 1},
  [339] = {.lex_state = 45, .external_lex_state = 1},
  [340] = {.lex_state = 49, .external_lex_state = 1},
  [341] = {.lex_state = 53, .external_lex_state = 1},
  [342] = {.lex_state = 44, .external_lex_state = 1},
  [343] = {.lex_state = 44, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 53, .external_lex_state = 1},
  [346] = {.lex_state = 49, .external_lex_state = 1},
  [347] = {.lex_state = 45, .external_lex_state = 1},
  [348] = {.lex_state = 45, .external_lex_state = 1},
  [349] = {.lex_state = 44, .external_lex_state = 1},
  [350] = {.lex_state = 44, .external_lex_state = 1},
  [351] = {.lex_state = 49, .external_lex_state = 1},
  [352] = {.lex_state = 45, .external_lex_state = 1},
  [353] = {.lex_state = 44, .external_lex_state = 1},
  [354] = {.lex_state = 53, .external_lex_state = 1},
  [355] = {.lex_state = 45, .external_lex_state = 1},
  [356] = {.lex_state = 44, .external_lex_state = 1},
  [357] = {.lex_state = 44, .external_lex_state = 1},
  [358] = {.lex_state = 49, .external_lex_state = 1},
  [359] = {.lex_state = 45, .external_lex_state = 1},
  [360] = {.lex_state = 44, .external_lex_state = 1},
  [361] = {.lex_state = 44, .external_lex_state = 1},
  [362] = {.lex_state = 44, .external_lex_state = 1},
  [363] = {.lex_state = 44, .external_lex_state = 1},
  [364] = {.lex_state = 44, .external_lex_state = 1},
  [365] = {.lex_state = 44, .external_lex_state = 1},
  [366] = {.lex_state = 44, .external_lex_state = 1},
  [367] = {.lex_state = 44, .external_lex_state = 1},
  [368] = {.lex_state = 45, .external_lex_state = 1},
  [369] = {.lex_state = 44, .external_lex_state = 1},
  [370] = {.lex_state = 44, .external_lex_state = 1},
  [371] = {.lex_state = 44, .external_lex_state = 1},
  [372] = {.lex_state = 45, .external_lex_state = 1},
  [373] = {.lex_state = 49, .external_lex_state = 1},
  [374] = {.lex_state = 44, .external_lex_state = 1},
  [375] = {.lex_state = 49, .external_lex_state = 1},
  [376] = {.lex_state = 49, .external_lex_state = 1},
  [377] = {.lex_state = 41, .external_lex_state = 1},
  [378] = {.lex_state = 41, .external_lex_state = 1},
  [379] = {.lex_state = 45, .external_lex_state = 1},
  [380] = {.lex_state = 49, .external_lex_state = 1},
  [381] = {.lex_state = 49, .external_lex_state = 1},
  [382] = {.lex_state = 44, .external_lex_state = 1},
  [383] = {.lex_state = 41, .external_lex_state = 1},
  [384] = {.lex_state = 45, .external_lex_state = 1},
  [385] = {.lex_state = 53, .external_lex_state = 1},
  [386] = {.lex_state = 52, .external_lex_state = 1},
  [387] = {.lex_state = 48, .external_lex_state = 1},
  [388] = {.lex_state = 44, .external_lex_state = 1},
  [389] = {.lex_state = 52, .external_lex_state = 1},
  [390] = {.lex_state = 52, .external_lex_state = 1},
  [391] = {.lex_state = 44, .external_lex_state = 1},
  [392] = {.lex_state = 48, .external_lex_state = 1},
  [393] = {.lex_state = 48, .external_lex_state = 1},
  [394] = {.lex_state = 50, .external_lex_state = 1},
  [395] = {.lex_state = 48, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 52, .external_lex_state = 1},
  [398] = {.lex_state = 49, .external_lex_state = 1},
  [399] = {.lex_state = 52, .external_lex_state = 1},
  [400] = {.lex_state = 52, .external_lex_state = 1},
  [401] = {.lex_state = 0, .external_lex_state = 1},
  [402] = {.lex_state = 52, .external_lex_state = 1},
  [403] = {.lex_state = 52, .external_lex_state = 1},
  [404] = {.lex_state = 52, .external_lex_state = 1},
  [405] = {.lex_state = 52, .external_lex_state = 1},
  [406] = {.lex_state = 0, .external_lex_state = 1},
  [407] = {.lex_state = 52, .external_lex_state = 1},
  [408] = {.lex_state = 52, .external_lex_state = 1},
  [409] = {.lex_state = 52, .external_lex_state = 1},
  [410] = {.lex_state = 52, .external_lex_state = 1},
  [411] = {.lex_state = 48, .external_lex_state = 1},
  [412] = {.lex_state = 48, .external_lex_state = 1},
  [413] = {.lex_state = 49, .external_lex_state = 1},
  [414] = {.lex_state = 52, .external_lex_state = 1},
  [415] = {.lex_state = 49, .external_lex_state = 1},
  [416] = {.lex_state = 52, .external_lex_state = 1},
  [417] = {.lex_state = 0, .external_lex_state = 1},
  [418] = {.lex_state = 41, .external_lex_state = 1},
  [419] = {.lex_state = 47, .external_lex_state = 1},
  [420] = {.lex_state = 48, .external_lex_state = 1},
  [421] = {.lex_state = 52, .external_lex_state = 1},
  [422] = {.lex_state = 44, .external_lex_state = 1},
  [423] = {.lex_state = 44, .external_lex_state = 1},
  [424] = {.lex_state = 48, .external_lex_state = 1},
  [425] = {.lex_state = 54, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 47, .external_lex_state = 1},
  [428] = {.lex_state = 41, .external_lex_state = 1},
  [429] = {.lex_state = 54, .external_lex_state = 1},
  [430] = {.lex_state = 54, .external_lex_state = 1},
  [431] = {.lex_state = 52, .external_lex_state = 1},
  [432] = {.lex_state = 41, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 41, .external_lex_state = 1},
  [436] = {.lex_state = 49, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 41, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 54, .external_lex_state = 1},
  [441] = {.lex_state = 42, .external_lex_state = 1},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 47, .external_lex_state = 1},
  [444] = {.lex_state = 0, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 49, .external_lex_state = 1},
  [447] = {.lex_state = 47, .external_lex_state = 1},
  [448] = {.lex_state = 0, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 51, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 0, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 0, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 54, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 52, .external_lex_state = 1},
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
  [478] = {.lex_state = 54, .external_lex_state = 1},
  [479] = {.lex_state = 0, .external_lex_state = 1},
  [480] = {.lex_state = 54, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 0, .external_lex_state = 1},
  [483] = {.lex_state = 52, .external_lex_state = 1},
  [484] = {.lex_state = 0, .external_lex_state = 1},
  [485] = {.lex_state = 0, .external_lex_state = 1},
  [486] = {.lex_state = 0, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 52, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 51, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 0, .external_lex_state = 1},
  [493] = {.lex_state = 49, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 52, .external_lex_state = 1},
  [496] = {.lex_state = 54, .external_lex_state = 1},
  [497] = {.lex_state = 49, .external_lex_state = 1},
  [498] = {.lex_state = 52, .external_lex_state = 1},
  [499] = {.lex_state = 52, .external_lex_state = 1},
  [500] = {.lex_state = 0, .external_lex_state = 1},
  [501] = {.lex_state = 52, .external_lex_state = 1},
  [502] = {.lex_state = 0, .external_lex_state = 1},
  [503] = {.lex_state = 52, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 0, .external_lex_state = 1},
  [507] = {.lex_state = 0, .external_lex_state = 1},
  [508] = {.lex_state = 52, .external_lex_state = 1},
  [509] = {.lex_state = 0, .external_lex_state = 1},
  [510] = {.lex_state = 0, .external_lex_state = 1},
  [511] = {.lex_state = 0, .external_lex_state = 1},
  [512] = {.lex_state = 0, .external_lex_state = 1},
  [513] = {.lex_state = 0, .external_lex_state = 1},
  [514] = {.lex_state = 41, .external_lex_state = 1},
  [515] = {.lex_state = 0, .external_lex_state = 1},
  [516] = {.lex_state = 0, .external_lex_state = 1},
  [517] = {.lex_state = 0, .external_lex_state = 1},
  [518] = {.lex_state = 49, .external_lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 1},
  [520] = {.lex_state = 52, .external_lex_state = 1},
  [521] = {.lex_state = 0, .external_lex_state = 1},
  [522] = {.lex_state = 0, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 49, .external_lex_state = 1},
  [525] = {.lex_state = 54, .external_lex_state = 1},
  [526] = {.lex_state = 48, .external_lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 1},
  [528] = {.lex_state = 0, .external_lex_state = 1},
  [529] = {.lex_state = 0, .external_lex_state = 1},
  [530] = {.lex_state = 0, .external_lex_state = 1},
  [531] = {.lex_state = 0, .external_lex_state = 1},
  [532] = {.lex_state = 0, .external_lex_state = 1},
  [533] = {.lex_state = 0, .external_lex_state = 1},
  [534] = {.lex_state = 0, .external_lex_state = 1},
  [535] = {.lex_state = 0, .external_lex_state = 1},
  [536] = {.lex_state = 0, .external_lex_state = 1},
  [537] = {.lex_state = 41, .external_lex_state = 1},
  [538] = {.lex_state = 41, .external_lex_state = 1},
  [539] = {.lex_state = 42, .external_lex_state = 1},
  [540] = {.lex_state = 0, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 0, .external_lex_state = 1},
  [543] = {.lex_state = 54, .external_lex_state = 1},
  [544] = {.lex_state = 52, .external_lex_state = 1},
  [545] = {.lex_state = 41, .external_lex_state = 1},
  [546] = {.lex_state = 0, .external_lex_state = 1},
  [547] = {.lex_state = 52, .external_lex_state = 1},
  [548] = {.lex_state = 41, .external_lex_state = 1},
  [549] = {.lex_state = 41, .external_lex_state = 1},
  [550] = {.lex_state = 0, .external_lex_state = 1},
  [551] = {.lex_state = 0, .external_lex_state = 1},
  [552] = {.lex_state = 0, .external_lex_state = 1},
  [553] = {.lex_state = 0, .external_lex_state = 1},
  [554] = {.lex_state = 0, .external_lex_state = 1},
  [555] = {.lex_state = 42, .external_lex_state = 1},
  [556] = {.lex_state = 0, .external_lex_state = 1},
  [557] = {.lex_state = 753, .external_lex_state = 1},
  [558] = {.lex_state = 41, .external_lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 1},
  [560] = {.lex_state = 41, .external_lex_state = 1},
  [561] = {.lex_state = 0, .external_lex_state = 1},
  [562] = {.lex_state = 0, .external_lex_state = 1},
  [563] = {.lex_state = 41, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 47, .external_lex_state = 1},
  [566] = {.lex_state = 41, .external_lex_state = 1},
  [567] = {.lex_state = 753, .external_lex_state = 1},
  [568] = {.lex_state = 41, .external_lex_state = 1},
  [569] = {.lex_state = 41, .external_lex_state = 1},
  [570] = {.lex_state = 41, .external_lex_state = 1},
  [571] = {.lex_state = 42, .external_lex_state = 1},
  [572] = {.lex_state = 0, .external_lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 1},
  [574] = {.lex_state = 0, .external_lex_state = 1},
  [575] = {.lex_state = 42, .external_lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 41, .external_lex_state = 1},
  [580] = {.lex_state = 0, .external_lex_state = 1},
  [581] = {.lex_state = 41, .external_lex_state = 1},
  [582] = {.lex_state = 49, .external_lex_state = 1},
  [583] = {.lex_state = 0, .external_lex_state = 1},
  [584] = {.lex_state = 41, .external_lex_state = 1},
  [585] = {.lex_state = 49, .external_lex_state = 1},
  [586] = {.lex_state = 42, .external_lex_state = 1},
  [587] = {.lex_state = 0, .external_lex_state = 1},
  [588] = {.lex_state = 0, .external_lex_state = 1},
  [589] = {.lex_state = 0, .external_lex_state = 1},
  [590] = {.lex_state = 0, .external_lex_state = 1},
  [591] = {.lex_state = 41, .external_lex_state = 1},
  [592] = {.lex_state = 52, .external_lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 1},
  [594] = {.lex_state = 41, .external_lex_state = 1},
  [595] = {.lex_state = 41, .external_lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 1},
  [597] = {.lex_state = 42, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 41, .external_lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 1},
  [602] = {.lex_state = 0, .external_lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 1},
  [604] = {.lex_state = 0, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 42, .external_lex_state = 1},
  [607] = {.lex_state = 52, .external_lex_state = 1},
  [608] = {.lex_state = 52, .external_lex_state = 1},
  [609] = {.lex_state = 0, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 753, .external_lex_state = 1},
  [612] = {.lex_state = 0, .external_lex_state = 1},
  [613] = {.lex_state = 0, .external_lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 1},
  [615] = {.lex_state = 0, .external_lex_state = 1},
  [616] = {.lex_state = 41, .external_lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 1},
  [619] = {.lex_state = 52, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 0, .external_lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 47, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 0, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 52, .external_lex_state = 1},
  [631] = {.lex_state = 52, .external_lex_state = 1},
  [632] = {.lex_state = 0, .external_lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 1},
  [634] = {.lex_state = 0, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 1},
  [637] = {.lex_state = 52, .external_lex_state = 1},
  [638] = {.lex_state = 0, .external_lex_state = 1},
  [639] = {.lex_state = 42, .external_lex_state = 1},
  [640] = {.lex_state = 0, .external_lex_state = 1},
  [641] = {.lex_state = 0, .external_lex_state = 1},
  [642] = {.lex_state = 52, .external_lex_state = 1},
  [643] = {.lex_state = 0, .external_lex_state = 1},
  [644] = {.lex_state = 0, .external_lex_state = 1},
  [645] = {.lex_state = 0, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 52, .external_lex_state = 1},
  [648] = {.lex_state = 52, .external_lex_state = 1},
  [649] = {.lex_state = 0, .external_lex_state = 1},
  [650] = {.lex_state = 0, .external_lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 1},
  [652] = {.lex_state = 47, .external_lex_state = 1},
  [653] = {.lex_state = 0, .external_lex_state = 1},
  [654] = {.lex_state = 52, .external_lex_state = 1},
  [655] = {.lex_state = 0, .external_lex_state = 1},
  [656] = {.lex_state = 52, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 0, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 0, .external_lex_state = 1},
  [661] = {.lex_state = 0, .external_lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 1},
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 49, .external_lex_state = 1},
  [666] = {.lex_state = 52, .external_lex_state = 1},
  [667] = {.lex_state = 0, .external_lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 41, .external_lex_state = 1},
  [671] = {.lex_state = 0, .external_lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 1},
  [673] = {.lex_state = 0, .external_lex_state = 1},
  [674] = {.lex_state = 52, .external_lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 1},
  [677] = {.lex_state = 0, .external_lex_state = 1},
  [678] = {.lex_state = 0, .external_lex_state = 1},
  [679] = {.lex_state = 0, .external_lex_state = 1},
  [680] = {.lex_state = 41, .external_lex_state = 1},
  [681] = {.lex_state = 52, .external_lex_state = 1},
  [682] = {.lex_state = 0, .external_lex_state = 1},
  [683] = {.lex_state = 0, .external_lex_state = 1},
  [684] = {.lex_state = 0, .external_lex_state = 1},
  [685] = {.lex_state = 0, .external_lex_state = 1},
  [686] = {.lex_state = 0, .external_lex_state = 1},
  [687] = {.lex_state = 0, .external_lex_state = 1},
  [688] = {.lex_state = 52, .external_lex_state = 1},
  [689] = {.lex_state = 0, .external_lex_state = 1},
  [690] = {.lex_state = 41, .external_lex_state = 1},
  [691] = {.lex_state = 52, .external_lex_state = 1},
  [692] = {.lex_state = 0, .external_lex_state = 1},
  [693] = {.lex_state = 0, .external_lex_state = 1},
  [694] = {.lex_state = 865, .external_lex_state = 1},
  [695] = {.lex_state = 0, .external_lex_state = 1},
  [696] = {.lex_state = 52, .external_lex_state = 1},
  [697] = {.lex_state = 0, .external_lex_state = 1},
  [698] = {.lex_state = 753, .external_lex_state = 1},
  [699] = {.lex_state = 0, .external_lex_state = 1},
  [700] = {.lex_state = 52, .external_lex_state = 1},
  [701] = {.lex_state = 52, .external_lex_state = 1},
  [702] = {.lex_state = 0, .external_lex_state = 1},
  [703] = {.lex_state = 0, .external_lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 1},
  [705] = {.lex_state = 0, .external_lex_state = 1},
  [706] = {.lex_state = 0, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 1},
  [709] = {.lex_state = 0, .external_lex_state = 1},
  [710] = {.lex_state = 0, .external_lex_state = 1},
  [711] = {.lex_state = 52, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 1},
  [716] = {.lex_state = 0, .external_lex_state = 1},
  [717] = {.lex_state = 52, .external_lex_state = 1},
  [718] = {.lex_state = 0, .external_lex_state = 1},
  [719] = {.lex_state = 0, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 0, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 41, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 41, .external_lex_state = 1},
  [727] = {.lex_state = 0, .external_lex_state = 1},
  [728] = {.lex_state = 0, .external_lex_state = 1},
  [729] = {.lex_state = 0, .external_lex_state = 1},
  [730] = {.lex_state = 41, .external_lex_state = 1},
  [731] = {.lex_state = 0, .external_lex_state = 1},
  [732] = {.lex_state = 0, .external_lex_state = 1},
  [733] = {.lex_state = 0, .external_lex_state = 1},
  [734] = {.lex_state = 0, .external_lex_state = 1},
  [735] = {.lex_state = 0, .external_lex_state = 1},
  [736] = {.lex_state = 41, .external_lex_state = 1},
  [737] = {.lex_state = 0, .external_lex_state = 1},
  [738] = {.lex_state = 0, .external_lex_state = 1},
  [739] = {.lex_state = 52, .external_lex_state = 1},
  [740] = {.lex_state = 41, .external_lex_state = 1},
  [741] = {.lex_state = 0, .external_lex_state = 1},
  [742] = {.lex_state = 0, .external_lex_state = 1},
  [743] = {.lex_state = 41, .external_lex_state = 1},
  [744] = {.lex_state = 0, .external_lex_state = 1},
  [745] = {.lex_state = 41, .external_lex_state = 1},
  [746] = {.lex_state = 0, .external_lex_state = 1},
  [747] = {.lex_state = 0, .external_lex_state = 1},
  [748] = {.lex_state = 0, .external_lex_state = 1},
  [749] = {.lex_state = 0, .external_lex_state = 1},
  [750] = {.lex_state = 0, .external_lex_state = 1},
  [751] = {.lex_state = 0, .external_lex_state = 1},
  [752] = {.lex_state = 0, .external_lex_state = 1},
  [753] = {.lex_state = 0, .external_lex_state = 1},
  [754] = {.lex_state = 0, .external_lex_state = 1},
  [755] = {.lex_state = 0, .external_lex_state = 1},
  [756] = {.lex_state = 41, .external_lex_state = 1},
  [757] = {.lex_state = 0, .external_lex_state = 1},
  [758] = {.lex_state = 0, .external_lex_state = 1},
  [759] = {.lex_state = 0, .external_lex_state = 1},
  [760] = {.lex_state = 0, .external_lex_state = 1},
  [761] = {.lex_state = 0, .external_lex_state = 1},
  [762] = {.lex_state = 0, .external_lex_state = 1},
  [763] = {.lex_state = 0, .external_lex_state = 1},
  [764] = {.lex_state = 0, .external_lex_state = 1},
  [765] = {.lex_state = 0, .external_lex_state = 1},
  [766] = {.lex_state = 0, .external_lex_state = 1},
  [767] = {.lex_state = 0, .external_lex_state = 1},
  [768] = {.lex_state = 0, .external_lex_state = 1},
  [769] = {.lex_state = 0, .external_lex_state = 1},
  [770] = {.lex_state = 0, .external_lex_state = 1},
  [771] = {.lex_state = 0, .external_lex_state = 1},
  [772] = {.lex_state = 0, .external_lex_state = 1},
  [773] = {.lex_state = 0, .external_lex_state = 1},
  [774] = {.lex_state = 0, .external_lex_state = 1},
  [775] = {.lex_state = 0, .external_lex_state = 1},
  [776] = {.lex_state = 52, .external_lex_state = 1},
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
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PERCENT_PLUS] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_TILDE_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_fresh] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_Out] = ACTIONS(1),
    [anon_sym_Fr] = ACTIONS(1),
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
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_Ex] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_All] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(753),
    [sym_security_protocol_theory] = STATE(748),
    [anon_sym_theory] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_splitEqs,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(515), 1,
      sym_formula,
    STATE(575), 1,
      sym_node_var,
    STATE(577), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(667), 1,
      sym_goal,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [129] = 39,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_splitEqs,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(515), 1,
      sym_formula,
    STATE(575), 1,
      sym_node_var,
    STATE(577), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(685), 1,
      sym_goal,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [258] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(213), 1,
      sym_conjunction,
    STATE(214), 1,
      sym_negation,
    STATE(221), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_formula,
    STATE(258), 1,
      sym_atom,
    STATE(277), 1,
      sym_imp,
    STATE(288), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [381] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(450), 1,
      sym__msetterm,
    STATE(539), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(773), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [504] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(775), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [627] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(689), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [750] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(705), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [873] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(596), 1,
      sym_formula,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [996] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(707), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1119] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(213), 1,
      sym_conjunction,
    STATE(214), 1,
      sym_negation,
    STATE(220), 1,
      sym_imp,
    STATE(221), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_formula,
    STATE(258), 1,
      sym_atom,
    STATE(288), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1242] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(771), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1365] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(737), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1488] = 37,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(419), 1,
      sym_imp,
    STATE(450), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    STATE(773), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1611] = 36,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      anon_sym_18,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(221), 1,
      sym_disjunction,
    STATE(251), 1,
      sym_imp,
    STATE(258), 1,
      sym_atom,
    STATE(285), 1,
      sym_conjunction,
    STATE(297), 1,
      sym_negation,
    STATE(305), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1731] = 36,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      anon_sym_18,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(251), 1,
      sym_imp,
    STATE(258), 1,
      sym_atom,
    STATE(305), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_negation,
    STATE(377), 1,
      sym_conjunction,
    STATE(418), 1,
      sym_disjunction,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1851] = 36,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(250), 1,
      sym_imp,
    STATE(258), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_quantifier,
    STATE(394), 1,
      sym_disjunction,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1971] = 36,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      anon_sym_18,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(250), 1,
      sym_imp,
    STATE(258), 1,
      sym_atom,
    STATE(305), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_negation,
    STATE(377), 1,
      sym_conjunction,
    STATE(418), 1,
      sym_disjunction,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2091] = 34,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      anon_sym_18,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(249), 1,
      sym_conjunction,
    STATE(258), 1,
      sym_atom,
    STATE(305), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_negation,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2205] = 34,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(201), 1,
      sym_negation,
    STATE(249), 1,
      sym_conjunction,
    STATE(258), 1,
      sym_atom,
    STATE(288), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2319] = 34,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(214), 1,
      sym_negation,
    STATE(249), 1,
      sym_conjunction,
    STATE(258), 1,
      sym_atom,
    STATE(288), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2433] = 34,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      anon_sym_18,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(249), 1,
      sym_conjunction,
    STATE(258), 1,
      sym_atom,
    STATE(297), 1,
      sym_negation,
    STATE(305), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2547] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_18,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(248), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(288), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2658] = 33,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      anon_sym_18,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(248), 1,
      sym_negation,
    STATE(258), 1,
      sym_atom,
    STATE(305), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2769] = 30,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(259), 1,
      sym_atom,
    STATE(288), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2871] = 30,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_last,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(259), 1,
      sym_atom,
    STATE(305), 1,
      sym_quantifier,
    STATE(490), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_node_var,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(651), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(33), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(35), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(39), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(41), 2,
      anon_sym_22,
      anon_sym_23,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2973] = 6,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(51), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3014] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_PLUS,
    ACTIONS(59), 23,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3049] = 5,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(65), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3087] = 8,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(58), 1,
      sym_not_function,
    STATE(98), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(75), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(71), 12,
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
  [3131] = 8,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(58), 1,
      sym_not_function,
    STATE(98), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(75), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(77), 12,
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
  [3175] = 8,
    ACTIONS(81), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(58), 1,
      sym_not_function,
    STATE(98), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(84), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(79), 12,
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
  [3219] = 5,
    ACTIONS(91), 1,
      anon_sym_CARET,
    STATE(44), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(87), 20,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [3256] = 5,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 20,
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
  [3293] = 8,
    ACTIONS(101), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(99), 1,
      sym_not_function,
    STATE(108), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(103), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(99), 11,
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
  [3336] = 4,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(105), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3371] = 5,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(111), 20,
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
  [3408] = 5,
    ACTIONS(119), 1,
      anon_sym_CARET,
    STATE(38), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(115), 20,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [3445] = 8,
    ACTIONS(122), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(99), 1,
      sym_not_function,
    STATE(108), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(125), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(79), 11,
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
  [3488] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(40), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(130), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(130), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(128), 10,
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
  [3527] = 8,
    ACTIONS(101), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(99), 1,
      sym_not_function,
    STATE(108), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(103), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(136), 11,
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
  [3570] = 7,
    ACTIONS(142), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(94), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(145), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(138), 12,
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
  [3611] = 4,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(148), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3646] = 5,
    ACTIONS(91), 1,
      anon_sym_CARET,
    STATE(38), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(154), 20,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [3683] = 8,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    ACTIONS(162), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(58), 1,
      sym_not_function,
    STATE(103), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(165), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(158), 12,
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
  [3726] = 5,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(168), 20,
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
  [3763] = 5,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 20,
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
  [3800] = 5,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(172), 20,
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
  [3837] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(40), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(130), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(181), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(179), 10,
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
  [3876] = 4,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(185), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3911] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(191), 20,
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
  [3943] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(195), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [3975] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(199), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4007] = 5,
    ACTIONS(207), 1,
      anon_sym_STAR,
    STATE(63), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(203), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [4043] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(209), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4075] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(213), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4107] = 5,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    ACTIONS(221), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(217), 20,
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
  [4143] = 5,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(225), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(223), 20,
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
  [4179] = 5,
    ACTIONS(229), 1,
      anon_sym_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(227), 20,
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
  [4215] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(234), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4247] = 5,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(172), 19,
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
  [4283] = 5,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(168), 19,
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
  [4319] = 5,
    ACTIONS(247), 1,
      anon_sym_STAR,
    STATE(63), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(243), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [4355] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(115), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4387] = 14,
    ACTIONS(250), 1,
      anon_sym_end,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(254), 1,
      anon_sym_functions,
    ACTIONS(256), 1,
      anon_sym_equations,
    ACTIONS(258), 1,
      anon_sym_builtins,
    ACTIONS(260), 1,
      anon_sym_heuristic,
    ACTIONS(262), 1,
      anon_sym_tactic,
    ACTIONS(264), 1,
      anon_sym_rule,
    ACTIONS(266), 1,
      anon_sym_restriction,
    ACTIONS(268), 1,
      anon_sym_lemma,
    STATE(185), 1,
      sym_simple_rule,
    STATE(695), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(89), 11,
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
  [4441] = 5,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(111), 19,
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
  [4477] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(270), 20,
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
  [4509] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(274), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4541] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(278), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4573] = 5,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 19,
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
  [4609] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(282), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4641] = 7,
    ACTIONS(286), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(107), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(289), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(138), 11,
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
  [4681] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(292), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4713] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(105), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4745] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(296), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4777] = 8,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(99), 1,
      sym_not_function,
    STATE(132), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(303), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(158), 11,
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
  [4819] = 5,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 19,
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
  [4855] = 5,
    ACTIONS(207), 1,
      anon_sym_STAR,
    STATE(54), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(306), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [4891] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(65), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4923] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(310), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4955] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(314), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [4987] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(318), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [5019] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(322), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [5051] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(326), 21,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [5083] = 13,
    ACTIONS(330), 1,
      anon_sym_end,
    ACTIONS(332), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_functions,
    ACTIONS(338), 1,
      anon_sym_equations,
    ACTIONS(341), 1,
      anon_sym_builtins,
    ACTIONS(344), 1,
      anon_sym_heuristic,
    ACTIONS(347), 1,
      anon_sym_tactic,
    ACTIONS(350), 1,
      anon_sym_rule,
    ACTIONS(353), 1,
      anon_sym_restriction,
    ACTIONS(356), 1,
      anon_sym_lemma,
    STATE(185), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(85), 11,
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
  [5134] = 5,
    STATE(86), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(363), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(359), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [5169] = 5,
    STATE(88), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(370), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(366), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [5204] = 5,
    STATE(86), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(374), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(372), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [5239] = 13,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(254), 1,
      anon_sym_functions,
    ACTIONS(256), 1,
      anon_sym_equations,
    ACTIONS(258), 1,
      anon_sym_builtins,
    ACTIONS(260), 1,
      anon_sym_heuristic,
    ACTIONS(262), 1,
      anon_sym_tactic,
    ACTIONS(264), 1,
      anon_sym_rule,
    ACTIONS(266), 1,
      anon_sym_restriction,
    ACTIONS(268), 1,
      anon_sym_lemma,
    ACTIONS(376), 1,
      anon_sym_end,
    STATE(185), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(85), 11,
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
  [5290] = 4,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(378), 20,
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
  [5323] = 4,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 20,
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
  [5356] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(191), 19,
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
  [5387] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(270), 19,
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
  [5418] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(227), 20,
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
  [5449] = 5,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_AMP,
    STATE(96), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(217), 19,
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
  [5484] = 5,
    ACTIONS(229), 1,
      anon_sym_PIPE,
    ACTIONS(389), 1,
      anon_sym_AMP,
    STATE(96), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(227), 19,
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
  [5519] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 5,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
    ACTIONS(394), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [5550] = 4,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 20,
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
  [5583] = 5,
    ACTIONS(225), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_AMP,
    STATE(95), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(223), 19,
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
  [5618] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(243), 20,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [5649] = 18,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(477), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5709] = 18,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(540), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5769] = 3,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 20,
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
  [5799] = 4,
    ACTIONS(408), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(378), 19,
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
  [5831] = 18,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(469), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5891] = 4,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 19,
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
  [5923] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(227), 19,
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
  [5953] = 4,
    ACTIONS(408), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 19,
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
  [5985] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(359), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [6015] = 18,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(522), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6075] = 18,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(463), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6135] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(417), 4,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_PLUS,
    ACTIONS(419), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [6165] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(421), 18,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
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
  [6194] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(425), 20,
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
  [6221] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 20,
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
  [6248] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(429), 18,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
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
  [6277] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(492), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6334] = 17,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_PERCENT,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_TILDE,
    STATE(233), 1,
      sym_term,
    STATE(281), 1,
      sym_msg_var,
    STATE(292), 1,
      sym_nonnode_var,
    STATE(312), 1,
      sym__expterm,
    STATE(354), 1,
      sym__multterm,
    STATE(393), 1,
      sym__xorterm,
    STATE(411), 1,
      sym__natterm,
    STATE(526), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(293), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6391] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(447), 18,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
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
  [6420] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(517), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6477] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(541), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6534] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(504), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6591] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(620), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6648] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(482), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6705] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(684), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6762] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(487), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6819] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(254), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6876] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(489), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6933] = 17,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(133), 1,
      sym__xorterm,
    STATE(137), 1,
      sym__natterm,
    STATE(634), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6990] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 20,
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
  [7017] = 5,
    ACTIONS(453), 1,
      anon_sym_PERCENT_PLUS,
    STATE(131), 1,
      aux_sym__natterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(394), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [7050] = 3,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 19,
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
  [7079] = 5,
    ACTIONS(460), 1,
      anon_sym_PERCENT_PLUS,
    STATE(134), 1,
      aux_sym__natterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(456), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [7112] = 5,
    ACTIONS(460), 1,
      anon_sym_PERCENT_PLUS,
    STATE(131), 1,
      aux_sym__natterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(462), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_LT_LT,
      anon_sym_21,
  [7145] = 6,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(470), 1,
      anon_sym_PLUS,
    ACTIONS(472), 1,
      anon_sym_PLUS_PLUS,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(466), 15,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [7179] = 16,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(112), 1,
      sym__natterm,
    STATE(133), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7233] = 6,
    ACTIONS(470), 1,
      anon_sym_PLUS,
    ACTIONS(472), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(476), 1,
      anon_sym_EQ,
    STATE(135), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(474), 15,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [7267] = 8,
    ACTIONS(480), 1,
      anon_sym_SOLVED,
    ACTIONS(482), 1,
      anon_sym_by,
    ACTIONS(486), 1,
      anon_sym_solve,
    STATE(314), 1,
      sym_proof_method,
    STATE(315), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(478), 10,
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
  [7305] = 8,
    ACTIONS(480), 1,
      anon_sym_SOLVED,
    ACTIONS(482), 1,
      anon_sym_by,
    ACTIONS(486), 1,
      anon_sym_solve,
    STATE(301), 1,
      sym_proof_skeleton,
    STATE(314), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(488), 10,
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
  [7343] = 6,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(493), 1,
      anon_sym_PLUS_PLUS,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(419), 15,
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
      anon_sym_LT_LT,
      anon_sym_21,
  [7377] = 16,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_PERCENT,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_TILDE,
    STATE(112), 1,
      sym__natterm,
    STATE(233), 1,
      sym_term,
    STATE(281), 1,
      sym_msg_var,
    STATE(292), 1,
      sym_nonnode_var,
    STATE(312), 1,
      sym__expterm,
    STATE(354), 1,
      sym__multterm,
    STATE(393), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(293), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7431] = 8,
    ACTIONS(480), 1,
      anon_sym_SOLVED,
    ACTIONS(482), 1,
      anon_sym_by,
    ACTIONS(486), 1,
      anon_sym_solve,
    STATE(294), 1,
      sym_proof_skeleton,
    STATE(314), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(496), 10,
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
  [7469] = 8,
    ACTIONS(480), 1,
      anon_sym_SOLVED,
    ACTIONS(482), 1,
      anon_sym_by,
    ACTIONS(486), 1,
      anon_sym_solve,
    STATE(278), 1,
      sym_proof_skeleton,
    STATE(314), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(498), 10,
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
  [7507] = 15,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(87), 1,
      sym__multterm,
    STATE(97), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7558] = 15,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_PERCENT,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_TILDE,
    STATE(97), 1,
      sym__xorterm,
    STATE(233), 1,
      sym_term,
    STATE(281), 1,
      sym_msg_var,
    STATE(292), 1,
      sym_nonnode_var,
    STATE(312), 1,
      sym__expterm,
    STATE(354), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(293), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7609] = 14,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(78), 1,
      sym__expterm,
    STATE(109), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7657] = 14,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_PERCENT,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_TILDE,
    STATE(233), 1,
      sym_term,
    STATE(281), 1,
      sym_msg_var,
    STATE(292), 1,
      sym_nonnode_var,
    STATE(312), 1,
      sym__expterm,
    STATE(385), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(293), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7705] = 13,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(100), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7750] = 13,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(202), 1,
      sym_equation,
    STATE(606), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7795] = 8,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(500), 1,
      anon_sym_COLON,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(51), 10,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_21,
  [7830] = 13,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_PERCENT,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_TILDE,
    STATE(233), 1,
      sym_term,
    STATE(281), 1,
      sym_msg_var,
    STATE(292), 1,
      sym_nonnode_var,
    STATE(345), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(293), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7875] = 6,
    ACTIONS(512), 1,
      anon_sym_prio,
    ACTIONS(514), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(167), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(180), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(510), 10,
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
  [7906] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(520), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(155), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(212), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(518), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7937] = 6,
    ACTIONS(512), 1,
      anon_sym_prio,
    ACTIONS(514), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(167), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(176), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(522), 10,
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
  [7968] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(529), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(155), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(212), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(526), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7999] = 13,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(68), 1,
      sym_msg_var,
    STATE(227), 1,
      sym_equation,
    STATE(606), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [8044] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
    ACTIONS(61), 10,
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
  [8068] = 12,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_PERCENT,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_TILDE,
    STATE(281), 1,
      sym_msg_var,
    STATE(292), 1,
      sym_nonnode_var,
    STATE(318), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(293), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [8110] = 12,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_nonnode_var,
    STATE(64), 1,
      sym_term,
    STATE(68), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(53), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [8152] = 7,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 10,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_21,
  [8184] = 6,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(448), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(282), 10,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_21,
  [8214] = 6,
    ACTIONS(215), 1,
      anon_sym_PLUS,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(449), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(213), 10,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_21,
  [8244] = 12,
    ACTIONS(540), 1,
      sym_ident,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_PERCENT,
    ACTIONS(546), 1,
      anon_sym_LT,
    ACTIONS(550), 1,
      anon_sym_DOLLAR,
    ACTIONS(552), 1,
      anon_sym_TILDE,
    STATE(228), 1,
      sym_nonnode_var,
    STATE(234), 1,
      sym_msg_var,
    STATE(272), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(217), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [8286] = 8,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(58), 1,
      sym_not_function,
    STATE(98), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(31), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(558), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8319] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(153), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(212), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(518), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8346] = 6,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(53), 10,
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
  [8375] = 4,
    ACTIONS(568), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(167), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(566), 11,
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
  [8400] = 8,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    ACTIONS(573), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(99), 1,
      sym_not_function,
    STATE(108), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(35), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(575), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8433] = 4,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(502), 12,
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
  [8458] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(49), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(130), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(581), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8485] = 5,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 10,
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
  [8511] = 7,
    ACTIONS(556), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(58), 1,
      sym_not_function,
    STATE(98), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(30), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(558), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8541] = 4,
    ACTIONS(591), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(173), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(589), 10,
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
  [8565] = 4,
    ACTIONS(514), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(173), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(522), 10,
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
  [8589] = 7,
    ACTIONS(573), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_function_name,
    STATE(99), 1,
      sym_not_function,
    STATE(108), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(41), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(575), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8619] = 4,
    ACTIONS(514), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(173), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(510), 10,
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
  [8643] = 3,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(447), 12,
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
  [8665] = 4,
    STATE(178), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(596), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(598), 10,
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
  [8689] = 4,
    STATE(178), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(601), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(603), 10,
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
  [8713] = 4,
    ACTIONS(514), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(173), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
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
  [8737] = 6,
    ACTIONS(607), 1,
      anon_sym_COLON,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(51), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(53), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [8765] = 3,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 12,
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
  [8787] = 4,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(617), 10,
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
  [8810] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(621), 12,
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
  [8829] = 4,
    ACTIONS(625), 1,
      anon_sym_variants,
    STATE(290), 1,
      sym_variants,
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
  [8852] = 4,
    STATE(186), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(627), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [8875] = 4,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(632), 10,
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
  [8898] = 4,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(107), 10,
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
  [8921] = 4,
    STATE(203), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(639), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8944] = 5,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(645), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(67), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [8969] = 4,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(150), 10,
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
  [8992] = 4,
    STATE(179), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(461), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(649), 10,
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
  [9015] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(61), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
    ACTIONS(59), 7,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9036] = 4,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(187), 10,
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
  [9059] = 4,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_functions_repeat1,
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
  [9082] = 4,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(658), 10,
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
  [9105] = 4,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(662), 10,
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
  [9128] = 4,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(668), 10,
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
  [9151] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
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
  [9172] = 4,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(677), 10,
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
  [9195] = 4,
    STATE(189), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(681), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9218] = 4,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(683), 10,
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
  [9241] = 4,
    STATE(203), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(687), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9264] = 4,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(692), 10,
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
  [9287] = 4,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(694), 10,
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
  [9310] = 3,
    STATE(186), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(696), 11,
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
  [9331] = 3,
    STATE(203), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(639), 11,
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
  [9352] = 4,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(698), 10,
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
  [9375] = 4,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(700), 10,
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
  [9398] = 4,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 10,
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
  [9421] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(707), 12,
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
  [9440] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(709), 12,
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
  [9459] = 3,
    STATE(206), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 11,
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
  [9480] = 3,
    STATE(207), 1,
      aux_sym_conjunction_repeat1,
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
  [9501] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(713), 11,
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
  [9519] = 3,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(715), 10,
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
  [9539] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(201), 10,
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
  [9559] = 3,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(700), 10,
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
  [9579] = 3,
    ACTIONS(723), 1,
      anon_sym_COMMA,
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
  [9599] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(725), 11,
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
  [9617] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(727), 11,
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
  [9635] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(215), 10,
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
  [9655] = 5,
    ACTIONS(729), 1,
      anon_sym_CARET,
    STATE(223), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(117), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [9679] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(107), 10,
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
  [9699] = 3,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(328), 10,
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
  [9719] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(324), 10,
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
  [9739] = 3,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(632), 10,
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
  [9759] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(211), 10,
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
  [9779] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 10,
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
  [9799] = 3,
    STATE(271), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(734), 10,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
      anon_sym_natural_DASHnumbers,
  [9819] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(298), 10,
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
  [9839] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(312), 10,
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
  [9859] = 5,
    ACTIONS(736), 1,
      anon_sym_CARET,
    STATE(252), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(89), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [9883] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(276), 10,
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
  [9903] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(738), 11,
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
  [9921] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 10,
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
  [9941] = 3,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(713), 10,
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
  [9961] = 3,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 10,
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
  [9981] = 3,
    ACTIONS(748), 1,
      anon_sym_COMMA,
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
  [10001] = 3,
    ACTIONS(752), 1,
      anon_sym_COMMA,
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
  [10021] = 3,
    ACTIONS(756), 1,
      anon_sym_COMMA,
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
  [10041] = 3,
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
  [10061] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(236), 10,
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
  [10081] = 3,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(758), 10,
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
  [10101] = 9,
    ACTIONS(762), 1,
      sym_ident,
    ACTIONS(765), 1,
      anon_sym_PERCENT,
    ACTIONS(768), 1,
      anon_sym_DOT,
    ACTIONS(770), 1,
      anon_sym_POUND,
    STATE(410), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(245), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(397), 2,
      sym_node_var,
      sym_nonnode_var,
  [10133] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(197), 10,
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
  [10153] = 3,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(316), 10,
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
  [10173] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(687), 11,
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
  [10191] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(627), 11,
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
  [10209] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(776), 11,
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
  [10227] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(778), 11,
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
  [10245] = 5,
    ACTIONS(736), 1,
      anon_sym_CARET,
    STATE(223), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(156), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10269] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(294), 10,
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
  [10289] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(780), 11,
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
  [10307] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 10,
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
  [10327] = 3,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(782), 10,
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
  [10347] = 3,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 10,
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
  [10367] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(790), 11,
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
  [10385] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(792), 11,
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
  [10403] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(742), 11,
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
  [10421] = 3,
    ACTIONS(794), 1,
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
  [10441] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(746), 11,
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
  [10459] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(796), 11,
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
  [10477] = 9,
    ACTIONS(798), 1,
      sym_ident,
    ACTIONS(800), 1,
      anon_sym_PERCENT,
    ACTIONS(802), 1,
      anon_sym_DOT,
    ACTIONS(804), 1,
      anon_sym_POUND,
    STATE(410), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(245), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(397), 2,
      sym_node_var,
      sym_nonnode_var,
  [10509] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(750), 11,
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
  [10527] = 9,
    ACTIONS(798), 1,
      sym_ident,
    ACTIONS(800), 1,
      anon_sym_PERCENT,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      anon_sym_DOT,
    STATE(410), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(245), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(397), 2,
      sym_node_var,
      sym_nonnode_var,
  [10559] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(754), 11,
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
  [10577] = 4,
    ACTIONS(810), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(187), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10599] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(150), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10621] = 4,
    ACTIONS(814), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(105), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(107), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10643] = 3,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(668), 10,
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
  [10663] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(818), 10,
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
  [10683] = 3,
    STATE(183), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(734), 10,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
      anon_sym_natural_DASHnumbers,
  [10703] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(715), 11,
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
  [10721] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(782), 11,
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
  [10739] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 11,
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
  [10757] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(725), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10777] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(496), 10,
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
  [10794] = 5,
    ACTIONS(824), 1,
      anon_sym_STAR,
    STATE(319), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
    ACTIONS(205), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10817] = 4,
    STATE(302), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(711), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10838] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(276), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10857] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(284), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10876] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(328), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10895] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(213), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(215), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10914] = 3,
    STATE(296), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10933] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(197), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10952] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(316), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [10971] = 8,
    ACTIONS(798), 1,
      sym_ident,
    ACTIONS(800), 1,
      anon_sym_PERCENT,
    ACTIONS(804), 1,
      anon_sym_POUND,
    STATE(410), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(266), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(397), 2,
      sym_node_var,
      sym_nonnode_var,
  [11000] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(236), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11019] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(828), 10,
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
  [11036] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(320), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11055] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(211), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11074] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(201), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11093] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(488), 10,
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
  [11110] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(830), 10,
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
  [11127] = 3,
    STATE(327), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(696), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [11146] = 3,
    STATE(328), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [11165] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(832), 10,
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
  [11182] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(834), 10,
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
  [11199] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(836), 10,
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
  [11216] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(838), 10,
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
  [11233] = 4,
    STATE(326), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(696), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11254] = 8,
    ACTIONS(840), 1,
      anon_sym_SOLVED,
    ACTIONS(842), 1,
      anon_sym_by,
    ACTIONS(844), 1,
      anon_sym_case,
    ACTIONS(848), 1,
      anon_sym_solve,
    STATE(303), 1,
      sym_proof_method,
    STATE(564), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11283] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(850), 10,
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
  [11300] = 8,
    ACTIONS(798), 1,
      sym_ident,
    ACTIONS(800), 1,
      anon_sym_PERCENT,
    ACTIONS(804), 1,
      anon_sym_POUND,
    STATE(410), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(264), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(397), 2,
      sym_node_var,
      sym_nonnode_var,
  [11329] = 3,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(780), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [11348] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(854), 10,
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
  [11365] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(856), 10,
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
  [11382] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(858), 10,
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
  [11399] = 4,
    STATE(311), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(860), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(681), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [11420] = 4,
    STATE(313), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(860), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(639), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [11441] = 5,
    ACTIONS(824), 1,
      anon_sym_STAR,
    STATE(279), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
    ACTIONS(308), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11464] = 4,
    STATE(313), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(687), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [11485] = 8,
    ACTIONS(848), 1,
      anon_sym_solve,
    ACTIONS(865), 1,
      anon_sym_SOLVED,
    ACTIONS(867), 1,
      anon_sym_by,
    ACTIONS(869), 1,
      anon_sym_case,
    STATE(295), 1,
      sym_proof_skeleton,
    STATE(314), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11514] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(498), 10,
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
  [11531] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(67), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11550] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(105), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(107), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11569] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(115), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(117), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11588] = 5,
    ACTIONS(871), 1,
      anon_sym_STAR,
    STATE(319), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
    ACTIONS(245), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11611] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(874), 10,
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
  [11628] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(876), 10,
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
  [11645] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(878), 10,
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
  [11662] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(296), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(298), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11681] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(312), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11700] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(280), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11719] = 4,
    STATE(326), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(880), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(627), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11740] = 4,
    STATE(327), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(627), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [11761] = 3,
    STATE(313), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(639), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [11780] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(292), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(294), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11799] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
    ACTIONS(324), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [11818] = 6,
    ACTIONS(886), 1,
      anon_sym_XOR,
    ACTIONS(888), 1,
      anon_sym_13,
    STATE(341), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
    ACTIONS(374), 4,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [11842] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(659), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11870] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(723), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11898] = 6,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    ACTIONS(900), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(902), 1,
      anon_sym_heuristic_EQ,
    STATE(590), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(896), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11922] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(752), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11950] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(908), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(910), 1,
      anon_sym_BANG,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(745), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11978] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(912), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(680), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12006] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(683), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12034] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(916), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(743), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12062] = 7,
    ACTIONS(840), 1,
      anon_sym_SOLVED,
    ACTIONS(842), 1,
      anon_sym_by,
    ACTIONS(848), 1,
      anon_sym_solve,
    STATE(303), 1,
      sym_proof_method,
    STATE(505), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12088] = 6,
    ACTIONS(918), 1,
      anon_sym_XOR,
    ACTIONS(921), 1,
      anon_sym_13,
    STATE(341), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
    ACTIONS(361), 4,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [12112] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(673), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12140] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(757), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12168] = 3,
    STATE(585), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(928), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [12186] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(245), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [12204] = 6,
    ACTIONS(900), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(902), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    STATE(590), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(896), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12228] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(932), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(756), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12256] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(934), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(740), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12284] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(761), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12312] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(636), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12340] = 7,
    ACTIONS(840), 1,
      anon_sym_SOLVED,
    ACTIONS(842), 1,
      anon_sym_by,
    ACTIONS(848), 1,
      anon_sym_solve,
    STATE(303), 1,
      sym_proof_method,
    STATE(456), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12366] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(940), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(724), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12394] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(679), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12422] = 6,
    ACTIONS(886), 1,
      anon_sym_XOR,
    ACTIONS(888), 1,
      anon_sym_13,
    STATE(331), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
    ACTIONS(368), 4,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [12446] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(944), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(670), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12474] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(749), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12502] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(948), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(677), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12530] = 7,
    ACTIONS(840), 1,
      anon_sym_SOLVED,
    ACTIONS(842), 1,
      anon_sym_by,
    ACTIONS(848), 1,
      anon_sym_solve,
    STATE(303), 1,
      sym_proof_method,
    STATE(589), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12556] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(950), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(736), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12584] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(675), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12612] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(621), 1,
      sym_facts,
    STATE(633), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12640] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(751), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12668] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(759), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12696] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(960), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(664), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12724] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(653), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12752] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(964), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12780] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(729), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12808] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(968), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(690), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12836] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(697), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12864] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(672), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12892] = 8,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    STATE(669), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12920] = 8,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(976), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(514), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(730), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12948] = 7,
    ACTIONS(978), 1,
      anon_sym_presort,
    ACTIONS(980), 1,
      anon_sym_prio,
    ACTIONS(982), 1,
      anon_sym_deprio,
    STATE(415), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(154), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(174), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12973] = 7,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    STATE(550), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12998] = 3,
    STATE(34), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(558), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [13015] = 5,
    ACTIONS(900), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(902), 1,
      anon_sym_heuristic_EQ,
    STATE(590), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(896), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [13036] = 4,
    STATE(383), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(986), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(711), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [13055] = 4,
    STATE(378), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(627), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [13074] = 7,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(991), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(548), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13099] = 5,
    ACTIONS(900), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(902), 1,
      anon_sym_heuristic_EQ,
    STATE(511), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(896), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [13120] = 3,
    STATE(77), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(575), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [13137] = 7,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    STATE(550), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13162] = 4,
    STATE(378), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(986), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(696), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [13181] = 7,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    ACTIONS(984), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(548), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13206] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PERCENT_PLUS,
      anon_sym_13,
    ACTIONS(361), 5,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_XOR,
  [13223] = 3,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13239] = 5,
    ACTIONS(462), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(995), 1,
      anon_sym_PERCENT_PLUS,
    STATE(392), 1,
      aux_sym__natterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 4,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [13259] = 6,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      sym_ident,
    STATE(550), 1,
      sym_fact,
    STATE(633), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13281] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(59), 7,
      sym_ident,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13295] = 3,
    ACTIONS(997), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(51), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13311] = 6,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_BANG,
    STATE(548), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13333] = 5,
    ACTIONS(394), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(999), 1,
      anon_sym_PERCENT_PLUS,
    STATE(392), 1,
      aux_sym__natterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 4,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [13353] = 5,
    ACTIONS(456), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(995), 1,
      anon_sym_PERCENT_PLUS,
    STATE(387), 1,
      aux_sym__natterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(458), 4,
      sym_ident,
      anon_sym_in,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [13373] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1002), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(727), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [13389] = 6,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(1004), 1,
      anon_sym_PLUS,
    ACTIONS(1007), 1,
      anon_sym_PLUS_PLUS,
    STATE(395), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(417), 2,
      sym_ident,
      anon_sym_in,
  [13410] = 4,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(442), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1010), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13427] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1012), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13440] = 4,
    ACTIONS(848), 1,
      anon_sym_solve,
    STATE(564), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [13457] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13470] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(148), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13483] = 4,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(448), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13500] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(310), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13513] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(296), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13526] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(322), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13539] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(105), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13552] = 4,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(449), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13569] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(185), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13582] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13595] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(292), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13608] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13621] = 6,
    ACTIONS(474), 1,
      anon_sym_PERCENT,
    ACTIONS(1014), 1,
      anon_sym_PLUS,
    ACTIONS(1016), 1,
      anon_sym_PLUS_PLUS,
    STATE(412), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(476), 2,
      sym_ident,
      anon_sym_in,
  [13642] = 6,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(1014), 1,
      anon_sym_PLUS,
    ACTIONS(1016), 1,
      anon_sym_PLUS_PLUS,
    STATE(395), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(468), 2,
      sym_ident,
      anon_sym_in,
  [13663] = 4,
    ACTIONS(1020), 1,
      anon_sym_solve,
    STATE(295), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1018), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [13680] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(105), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13693] = 5,
    ACTIONS(980), 1,
      anon_sym_prio,
    ACTIONS(982), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(176), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [13712] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 6,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13725] = 4,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(426), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1022), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13742] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1024), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(727), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13756] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(725), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13770] = 6,
    ACTIONS(1028), 1,
      sym_ident,
    ACTIONS(1030), 1,
      anon_sym_in,
    ACTIONS(1032), 1,
      anon_sym_PERCENT,
    STATE(424), 1,
      aux_sym_let_block_repeat1,
    STATE(639), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13790] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1034), 5,
      sym_ident,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13802] = 4,
    ACTIONS(1036), 1,
      sym_ident,
    STATE(742), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13818] = 4,
    ACTIONS(1038), 1,
      sym_ident,
    STATE(703), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13834] = 6,
    ACTIONS(1040), 1,
      sym_ident,
    ACTIONS(1043), 1,
      anon_sym_in,
    ACTIONS(1045), 1,
      anon_sym_PERCENT,
    STATE(424), 1,
      aux_sym_let_block_repeat1,
    STATE(639), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13854] = 3,
    ACTIONS(1048), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1050), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [13867] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13878] = 3,
    STATE(466), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1052), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13891] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    STATE(566), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13906] = 3,
    ACTIONS(1056), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1058), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [13919] = 3,
    ACTIONS(1048), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1060), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [13932] = 5,
    ACTIONS(1032), 1,
      anon_sym_PERCENT,
    ACTIONS(1062), 1,
      sym_ident,
    STATE(420), 1,
      aux_sym_let_block_repeat1,
    STATE(639), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13949] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    STATE(569), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13964] = 4,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    STATE(755), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1066), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [13979] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1068), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13990] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    STATE(563), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14005] = 4,
    ACTIONS(1070), 1,
      anon_sym_RBRACK,
    STATE(561), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1072), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14020] = 4,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1077), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [14035] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    STATE(560), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1022), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14050] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1079), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [14061] = 3,
    ACTIONS(1056), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1081), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [14074] = 3,
    ACTIONS(1083), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT,
  [14087] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1085), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [14098] = 3,
    STATE(453), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1052), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [14111] = 4,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
    STATE(629), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1066), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [14126] = 4,
    ACTIONS(1089), 1,
      anon_sym_DQUOTE,
    STATE(768), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1066), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [14141] = 4,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(561), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1072), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14156] = 3,
    STATE(600), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1052), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [14169] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1010), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [14180] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [14191] = 3,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1093), 3,
      anon_sym_EQ,
      anon_sym_LT_LT,
      anon_sym_21,
  [14204] = 4,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    ACTIONS(1099), 1,
      anon_sym_msg,
    STATE(36), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14218] = 4,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    ACTIONS(1099), 1,
      anon_sym_msg,
    STATE(597), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14232] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    STATE(523), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14246] = 4,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14260] = 4,
    ACTIONS(1110), 1,
      anon_sym_LBRACK,
    ACTIONS(1112), 1,
      anon_sym_let,
    STATE(762), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14274] = 4,
    ACTIONS(1114), 1,
      anon_sym_next,
    ACTIONS(1116), 1,
      anon_sym_qed,
    STATE(529), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14288] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1118), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [14298] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14312] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14326] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14340] = 4,
    ACTIONS(1128), 1,
      sym_ident,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    STATE(658), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14354] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14368] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14382] = 4,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(1138), 1,
      anon_sym_LBRACK,
    STATE(774), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14396] = 4,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(1142), 1,
      anon_sym_2,
    STATE(465), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14410] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14424] = 4,
    ACTIONS(1138), 1,
      anon_sym_LBRACK,
    ACTIONS(1147), 1,
      anon_sym_COLON,
    STATE(772), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14438] = 4,
    ACTIONS(1114), 1,
      anon_sym_next,
    ACTIONS(1149), 1,
      anon_sym_qed,
    STATE(474), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14452] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14466] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14480] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14494] = 4,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(536), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14508] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_GT,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14522] = 4,
    ACTIONS(1157), 1,
      anon_sym_next,
    ACTIONS(1160), 1,
      anon_sym_qed,
    STATE(474), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14536] = 4,
    ACTIONS(1138), 1,
      anon_sym_LBRACK,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    STATE(603), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14550] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14564] = 4,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(471), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14578] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1050), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [14588] = 4,
    ACTIONS(1112), 1,
      anon_sym_let,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    STATE(769), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14602] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1168), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [14612] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_RBRACK,
    STATE(481), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14626] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14640] = 4,
    ACTIONS(1128), 1,
      sym_ident,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    STATE(644), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14654] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14668] = 4,
    ACTIONS(1112), 1,
      anon_sym_let,
    ACTIONS(1179), 1,
      anon_sym_LBRACK,
    STATE(767), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14682] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_GT,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14696] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14710] = 4,
    ACTIONS(1185), 1,
      sym_ident,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    STATE(776), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14724] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_GT,
    STATE(486), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14738] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1093), 3,
      anon_sym_EQ,
      anon_sym_LT_LT,
      anon_sym_21,
  [14748] = 4,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14762] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_GT,
    STATE(473), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14776] = 3,
    STATE(763), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1197), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14788] = 4,
    ACTIONS(1199), 1,
      aux_sym_arity_token1,
    ACTIONS(1201), 1,
      anon_sym_msg,
    STATE(171), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14802] = 4,
    ACTIONS(1128), 1,
      sym_ident,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    STATE(746), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14816] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1203), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [14826] = 3,
    STATE(760), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1197), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14838] = 4,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    ACTIONS(1205), 1,
      sym_ident,
    STATE(648), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14852] = 4,
    ACTIONS(1207), 1,
      sym_ident,
    ACTIONS(1209), 1,
      aux_sym_arity_token1,
    STATE(82), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14866] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1211), 1,
      anon_sym_GT,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14880] = 4,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    ACTIONS(1213), 1,
      sym_ident,
    STATE(619), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14894] = 4,
    ACTIONS(1215), 1,
      anon_sym_COLON,
    ACTIONS(1217), 1,
      anon_sym_LBRACK,
    STATE(618), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14908] = 4,
    ACTIONS(1128), 1,
      sym_ident,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14922] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14936] = 4,
    ACTIONS(1114), 1,
      anon_sym_next,
    ACTIONS(1221), 1,
      anon_sym_qed,
    STATE(468), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14950] = 4,
    ACTIONS(1112), 1,
      anon_sym_let,
    ACTIONS(1223), 1,
      anon_sym_LBRACK,
    STATE(765), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14964] = 4,
    ACTIONS(1225), 1,
      aux_sym_arity_token1,
    ACTIONS(1227), 1,
      anon_sym_msg,
    STATE(190), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14978] = 4,
    ACTIONS(1229), 1,
      sym_ident,
    ACTIONS(1231), 1,
      aux_sym_arity_token1,
    STATE(242), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14992] = 4,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    ACTIONS(1235), 1,
      anon_sym_2,
    STATE(465), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15006] = 4,
    ACTIONS(1199), 1,
      aux_sym_arity_token1,
    ACTIONS(1237), 1,
      anon_sym_msg,
    STATE(188), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15020] = 4,
    ACTIONS(1239), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RBRACK,
    STATE(534), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15034] = 4,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(535), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15048] = 4,
    ACTIONS(1112), 1,
      anon_sym_let,
    ACTIONS(1245), 1,
      anon_sym_LBRACK,
    STATE(622), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15062] = 4,
    ACTIONS(1193), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15076] = 4,
    ACTIONS(1235), 1,
      anon_sym_2,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15090] = 4,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    ACTIONS(1251), 1,
      anon_sym_msg,
    STATE(555), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15104] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1077), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [15114] = 3,
    STATE(531), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1072), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [15126] = 4,
    ACTIONS(1253), 1,
      anon_sym_COLON,
    ACTIONS(1255), 1,
      anon_sym_LBRACK,
    STATE(612), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15140] = 4,
    ACTIONS(1128), 1,
      sym_ident,
    ACTIONS(1130), 1,
      anon_sym_POUND,
    STATE(306), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15154] = 4,
    ACTIONS(1138), 1,
      anon_sym_LBRACK,
    ACTIONS(1257), 1,
      anon_sym_COLON,
    STATE(625), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15168] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15182] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15196] = 3,
    STATE(561), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1072), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [15208] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1263), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [15218] = 3,
    ACTIONS(1267), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1265), 2,
      sym_ident,
      anon_sym_in,
  [15230] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15244] = 4,
    ACTIONS(1255), 1,
      anon_sym_LBRACK,
    ACTIONS(1271), 1,
      anon_sym_COLON,
    STATE(632), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15258] = 4,
    ACTIONS(1114), 1,
      anon_sym_next,
    ACTIONS(1273), 1,
      anon_sym_qed,
    STATE(474), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15272] = 4,
    ACTIONS(1112), 1,
      anon_sym_let,
    ACTIONS(1275), 1,
      anon_sym_LBRACK,
    STATE(663), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15286] = 4,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RBRACK,
    STATE(472), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15300] = 4,
    ACTIONS(1225), 1,
      aux_sym_arity_token1,
    ACTIONS(1281), 1,
      anon_sym_msg,
    STATE(270), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15314] = 4,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    ACTIONS(1251), 1,
      anon_sym_msg,
    STATE(160), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15328] = 4,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15342] = 4,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RBRACK,
    STATE(535), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15356] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RBRACK,
    STATE(536), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15370] = 4,
    ACTIONS(1288), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(537), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15384] = 4,
    ACTIONS(991), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    STATE(537), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15398] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1302), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [15410] = 4,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15424] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1304), 1,
      anon_sym_GT,
    STATE(500), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15438] = 4,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    ACTIONS(1251), 1,
      anon_sym_msg,
    STATE(29), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15452] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1081), 3,
      anon_sym_pub,
      anon_sym_fresh,
      anon_sym_nat,
  [15462] = 4,
    ACTIONS(1306), 1,
      sym_ident,
    ACTIONS(1308), 1,
      aux_sym_arity_token1,
    STATE(291), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15476] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1079), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15485] = 3,
    ACTIONS(1199), 1,
      aux_sym_arity_token1,
    STATE(226), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15496] = 3,
    ACTIONS(1310), 1,
      sym_ident,
    STATE(261), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15507] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15516] = 3,
    ACTIONS(1312), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1314), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15527] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15536] = 3,
    ACTIONS(1316), 1,
      aux_sym_arity_token1,
    STATE(197), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15547] = 3,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    STATE(116), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15558] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1318), 2,
      anon_sym_next,
      anon_sym_qed,
  [15567] = 3,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    STATE(668), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15578] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15589] = 3,
    ACTIONS(1225), 1,
      aux_sym_arity_token1,
    STATE(330), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15600] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1320), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1322), 1,
      sym_comment,
    STATE(731), 1,
      sym_param,
  [15613] = 3,
    ACTIONS(940), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1324), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15624] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1326), 2,
      anon_sym_left,
      anon_sym_right,
  [15633] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15642] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15651] = 3,
    ACTIONS(1199), 1,
      aux_sym_arity_token1,
    STATE(116), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15662] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15671] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1328), 2,
      anon_sym_next,
      anon_sym_qed,
  [15680] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1330), 2,
      anon_sym_E,
      anon_sym_AC,
  [15689] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15698] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1320), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1322), 1,
      sym_comment,
    STATE(657), 1,
      sym_param,
  [15711] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1068), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15720] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15729] = 3,
    ACTIONS(916), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1332), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15740] = 3,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(1334), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15751] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15760] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15769] = 3,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    STATE(177), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15780] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1302), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [15789] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1338), 2,
      anon_sym_next,
      anon_sym_qed,
  [15798] = 3,
    ACTIONS(1340), 1,
      anon_sym_,
    ACTIONS(1342), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15809] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1344), 2,
      anon_sym_next,
      anon_sym_qed,
  [15818] = 3,
    ACTIONS(932), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1346), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15829] = 3,
    ACTIONS(1348), 1,
      anon_sym_rule,
    STATE(218), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15840] = 3,
    ACTIONS(934), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1350), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15851] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15860] = 3,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    STATE(83), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15871] = 3,
    ACTIONS(1352), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1354), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15882] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1356), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15891] = 3,
    ACTIONS(51), 1,
      anon_sym_EQ,
    ACTIONS(1358), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15902] = 3,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    STATE(643), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15913] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15922] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1362), 2,
      anon_sym_next,
      anon_sym_qed,
  [15931] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15940] = 3,
    ACTIONS(950), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1364), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15951] = 3,
    ACTIONS(1310), 1,
      sym_ident,
    STATE(196), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15962] = 3,
    ACTIONS(1348), 1,
      anon_sym_rule,
    STATE(204), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15973] = 3,
    ACTIONS(976), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1366), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15984] = 3,
    ACTIONS(912), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1368), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15995] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1140), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [16004] = 3,
    ACTIONS(105), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16015] = 3,
    ACTIONS(1097), 1,
      aux_sym_arity_token1,
    STATE(660), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16026] = 3,
    ACTIONS(968), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1370), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16037] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16046] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16055] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16063] = 2,
    ACTIONS(1257), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16071] = 2,
    ACTIONS(1376), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16079] = 2,
    ACTIONS(1378), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16087] = 2,
    ACTIONS(1380), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16095] = 2,
    ACTIONS(1382), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16103] = 2,
    ACTIONS(1384), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16111] = 2,
    ACTIONS(1386), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16119] = 2,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16127] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1322), 1,
      sym_comment,
    ACTIONS(1390), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16137] = 2,
    ACTIONS(1271), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16145] = 2,
    ACTIONS(1392), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16153] = 2,
    ACTIONS(1394), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16161] = 2,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16169] = 2,
    ACTIONS(1398), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16177] = 2,
    ACTIONS(1400), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16185] = 2,
    ACTIONS(1402), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16193] = 2,
    ACTIONS(1404), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16201] = 2,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16209] = 2,
    ACTIONS(1406), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16217] = 2,
    ACTIONS(1275), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16225] = 2,
    ACTIONS(1408), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16233] = 2,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16241] = 2,
    ACTIONS(1412), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16249] = 2,
    ACTIONS(1414), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16257] = 2,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16265] = 2,
    ACTIONS(1418), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16273] = 2,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16281] = 2,
    ACTIONS(1420), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16289] = 2,
    ACTIONS(1422), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16297] = 2,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16305] = 2,
    ACTIONS(1426), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16313] = 2,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16321] = 2,
    ACTIONS(1430), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16329] = 2,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16337] = 2,
    ACTIONS(1432), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16345] = 2,
    ACTIONS(1434), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16353] = 2,
    ACTIONS(1436), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16361] = 2,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16369] = 2,
    ACTIONS(1440), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16377] = 2,
    ACTIONS(1442), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16385] = 2,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16393] = 2,
    ACTIONS(1446), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16401] = 2,
    ACTIONS(1448), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16409] = 2,
    ACTIONS(1450), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16417] = 2,
    ACTIONS(1452), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16425] = 2,
    ACTIONS(1454), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16433] = 2,
    ACTIONS(1456), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16441] = 2,
    ACTIONS(1458), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16449] = 2,
    ACTIONS(1302), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16457] = 2,
    ACTIONS(1460), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16465] = 2,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16473] = 2,
    ACTIONS(1462), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16481] = 2,
    ACTIONS(1464), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16489] = 2,
    ACTIONS(1466), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16497] = 2,
    ACTIONS(1468), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16505] = 2,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16513] = 2,
    ACTIONS(960), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16521] = 2,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16529] = 2,
    ACTIONS(1474), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16537] = 2,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16545] = 2,
    ACTIONS(1110), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16553] = 2,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16561] = 2,
    ACTIONS(1476), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16569] = 2,
    ACTIONS(1478), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16577] = 2,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16585] = 2,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16593] = 2,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16601] = 2,
    ACTIONS(1484), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16609] = 2,
    ACTIONS(1486), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16617] = 2,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16625] = 2,
    ACTIONS(964), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16633] = 2,
    ACTIONS(1488), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16641] = 2,
    ACTIONS(948), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16649] = 2,
    ACTIONS(1490), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16657] = 2,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16665] = 2,
    ACTIONS(1048), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16673] = 2,
    ACTIONS(1492), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16681] = 2,
    ACTIONS(944), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16689] = 2,
    ACTIONS(1494), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16697] = 2,
    ACTIONS(1496), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16705] = 2,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16713] = 2,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16721] = 2,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16729] = 2,
    ACTIONS(1502), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16737] = 2,
    ACTIONS(1504), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16745] = 2,
    ACTIONS(1506), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16753] = 2,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16761] = 2,
    ACTIONS(912), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16769] = 2,
    ACTIONS(1510), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16777] = 2,
    ACTIONS(1512), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16785] = 2,
    ACTIONS(1514), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16793] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1322), 1,
      sym_comment,
    ACTIONS(1516), 1,
      aux_sym_formal_comment_token1,
  [16803] = 2,
    ACTIONS(1518), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16811] = 2,
    ACTIONS(1520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16819] = 2,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16827] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1322), 1,
      sym_comment,
    ACTIONS(1522), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16837] = 2,
    ACTIONS(1524), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16845] = 2,
    ACTIONS(1526), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16853] = 2,
    ACTIONS(1528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16861] = 2,
    ACTIONS(1530), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16869] = 2,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16877] = 2,
    ACTIONS(1534), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16885] = 2,
    ACTIONS(1536), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16893] = 2,
    ACTIONS(1538), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16901] = 2,
    ACTIONS(1540), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16909] = 2,
    ACTIONS(1542), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16917] = 2,
    ACTIONS(1544), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16925] = 2,
    ACTIONS(1546), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16933] = 2,
    ACTIONS(1548), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16941] = 2,
    ACTIONS(1550), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16949] = 2,
    ACTIONS(1552), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16957] = 2,
    ACTIONS(1554), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16965] = 2,
    ACTIONS(1556), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16973] = 2,
    ACTIONS(1558), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16981] = 2,
    ACTIONS(1560), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16989] = 2,
    ACTIONS(1562), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16997] = 2,
    ACTIONS(1564), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17005] = 2,
    ACTIONS(1566), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17013] = 2,
    ACTIONS(1056), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17021] = 2,
    ACTIONS(1568), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17029] = 2,
    ACTIONS(1570), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17037] = 2,
    ACTIONS(968), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17045] = 2,
    ACTIONS(1572), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17053] = 2,
    ACTIONS(1574), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17061] = 2,
    ACTIONS(1576), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17069] = 2,
    ACTIONS(1578), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17077] = 2,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17085] = 2,
    ACTIONS(950), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17093] = 2,
    ACTIONS(1580), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17101] = 2,
    ACTIONS(1582), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17109] = 2,
    ACTIONS(1584), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17117] = 2,
    ACTIONS(1586), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17125] = 2,
    ACTIONS(1588), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17133] = 2,
    ACTIONS(934), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17141] = 2,
    ACTIONS(1590), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17149] = 2,
    ACTIONS(1592), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17157] = 2,
    ACTIONS(1594), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17165] = 2,
    ACTIONS(916), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17173] = 2,
    ACTIONS(1596), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17181] = 2,
    ACTIONS(1598), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17189] = 2,
    ACTIONS(908), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17197] = 2,
    ACTIONS(1600), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17205] = 2,
    ACTIONS(1602), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17213] = 2,
    ACTIONS(1604), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17221] = 2,
    ACTIONS(1606), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17229] = 2,
    ACTIONS(1608), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17237] = 2,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17245] = 2,
    ACTIONS(1610), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17253] = 2,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17261] = 2,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17269] = 2,
    ACTIONS(1612), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17277] = 2,
    ACTIONS(1614), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17285] = 2,
    ACTIONS(1089), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17293] = 2,
    ACTIONS(940), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17301] = 2,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17309] = 2,
    ACTIONS(1616), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17317] = 2,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17325] = 2,
    ACTIONS(1618), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17333] = 2,
    ACTIONS(1620), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17341] = 2,
    ACTIONS(1622), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17349] = 2,
    ACTIONS(1624), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17357] = 2,
    ACTIONS(1626), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17365] = 2,
    ACTIONS(1179), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17373] = 2,
    ACTIONS(1628), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17381] = 2,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17389] = 2,
    ACTIONS(1630), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17397] = 2,
    ACTIONS(1632), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17405] = 2,
    ACTIONS(1634), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17413] = 2,
    ACTIONS(1636), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17421] = 2,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17429] = 2,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17437] = 2,
    ACTIONS(1640), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17445] = 2,
    ACTIONS(1642), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [17453] = 2,
    ACTIONS(1644), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 129,
  [SMALL_STATE(4)] = 258,
  [SMALL_STATE(5)] = 381,
  [SMALL_STATE(6)] = 504,
  [SMALL_STATE(7)] = 627,
  [SMALL_STATE(8)] = 750,
  [SMALL_STATE(9)] = 873,
  [SMALL_STATE(10)] = 996,
  [SMALL_STATE(11)] = 1119,
  [SMALL_STATE(12)] = 1242,
  [SMALL_STATE(13)] = 1365,
  [SMALL_STATE(14)] = 1488,
  [SMALL_STATE(15)] = 1611,
  [SMALL_STATE(16)] = 1731,
  [SMALL_STATE(17)] = 1851,
  [SMALL_STATE(18)] = 1971,
  [SMALL_STATE(19)] = 2091,
  [SMALL_STATE(20)] = 2205,
  [SMALL_STATE(21)] = 2319,
  [SMALL_STATE(22)] = 2433,
  [SMALL_STATE(23)] = 2547,
  [SMALL_STATE(24)] = 2658,
  [SMALL_STATE(25)] = 2769,
  [SMALL_STATE(26)] = 2871,
  [SMALL_STATE(27)] = 2973,
  [SMALL_STATE(28)] = 3014,
  [SMALL_STATE(29)] = 3049,
  [SMALL_STATE(30)] = 3087,
  [SMALL_STATE(31)] = 3131,
  [SMALL_STATE(32)] = 3175,
  [SMALL_STATE(33)] = 3219,
  [SMALL_STATE(34)] = 3256,
  [SMALL_STATE(35)] = 3293,
  [SMALL_STATE(36)] = 3336,
  [SMALL_STATE(37)] = 3371,
  [SMALL_STATE(38)] = 3408,
  [SMALL_STATE(39)] = 3445,
  [SMALL_STATE(40)] = 3488,
  [SMALL_STATE(41)] = 3527,
  [SMALL_STATE(42)] = 3570,
  [SMALL_STATE(43)] = 3611,
  [SMALL_STATE(44)] = 3646,
  [SMALL_STATE(45)] = 3683,
  [SMALL_STATE(46)] = 3726,
  [SMALL_STATE(47)] = 3763,
  [SMALL_STATE(48)] = 3800,
  [SMALL_STATE(49)] = 3837,
  [SMALL_STATE(50)] = 3876,
  [SMALL_STATE(51)] = 3911,
  [SMALL_STATE(52)] = 3943,
  [SMALL_STATE(53)] = 3975,
  [SMALL_STATE(54)] = 4007,
  [SMALL_STATE(55)] = 4043,
  [SMALL_STATE(56)] = 4075,
  [SMALL_STATE(57)] = 4107,
  [SMALL_STATE(58)] = 4143,
  [SMALL_STATE(59)] = 4179,
  [SMALL_STATE(60)] = 4215,
  [SMALL_STATE(61)] = 4247,
  [SMALL_STATE(62)] = 4283,
  [SMALL_STATE(63)] = 4319,
  [SMALL_STATE(64)] = 4355,
  [SMALL_STATE(65)] = 4387,
  [SMALL_STATE(66)] = 4441,
  [SMALL_STATE(67)] = 4477,
  [SMALL_STATE(68)] = 4509,
  [SMALL_STATE(69)] = 4541,
  [SMALL_STATE(70)] = 4573,
  [SMALL_STATE(71)] = 4609,
  [SMALL_STATE(72)] = 4641,
  [SMALL_STATE(73)] = 4681,
  [SMALL_STATE(74)] = 4713,
  [SMALL_STATE(75)] = 4745,
  [SMALL_STATE(76)] = 4777,
  [SMALL_STATE(77)] = 4819,
  [SMALL_STATE(78)] = 4855,
  [SMALL_STATE(79)] = 4891,
  [SMALL_STATE(80)] = 4923,
  [SMALL_STATE(81)] = 4955,
  [SMALL_STATE(82)] = 4987,
  [SMALL_STATE(83)] = 5019,
  [SMALL_STATE(84)] = 5051,
  [SMALL_STATE(85)] = 5083,
  [SMALL_STATE(86)] = 5134,
  [SMALL_STATE(87)] = 5169,
  [SMALL_STATE(88)] = 5204,
  [SMALL_STATE(89)] = 5239,
  [SMALL_STATE(90)] = 5290,
  [SMALL_STATE(91)] = 5323,
  [SMALL_STATE(92)] = 5356,
  [SMALL_STATE(93)] = 5387,
  [SMALL_STATE(94)] = 5418,
  [SMALL_STATE(95)] = 5449,
  [SMALL_STATE(96)] = 5484,
  [SMALL_STATE(97)] = 5519,
  [SMALL_STATE(98)] = 5550,
  [SMALL_STATE(99)] = 5583,
  [SMALL_STATE(100)] = 5618,
  [SMALL_STATE(101)] = 5649,
  [SMALL_STATE(102)] = 5709,
  [SMALL_STATE(103)] = 5769,
  [SMALL_STATE(104)] = 5799,
  [SMALL_STATE(105)] = 5831,
  [SMALL_STATE(106)] = 5891,
  [SMALL_STATE(107)] = 5923,
  [SMALL_STATE(108)] = 5953,
  [SMALL_STATE(109)] = 5985,
  [SMALL_STATE(110)] = 6015,
  [SMALL_STATE(111)] = 6075,
  [SMALL_STATE(112)] = 6135,
  [SMALL_STATE(113)] = 6165,
  [SMALL_STATE(114)] = 6194,
  [SMALL_STATE(115)] = 6221,
  [SMALL_STATE(116)] = 6248,
  [SMALL_STATE(117)] = 6277,
  [SMALL_STATE(118)] = 6334,
  [SMALL_STATE(119)] = 6391,
  [SMALL_STATE(120)] = 6420,
  [SMALL_STATE(121)] = 6477,
  [SMALL_STATE(122)] = 6534,
  [SMALL_STATE(123)] = 6591,
  [SMALL_STATE(124)] = 6648,
  [SMALL_STATE(125)] = 6705,
  [SMALL_STATE(126)] = 6762,
  [SMALL_STATE(127)] = 6819,
  [SMALL_STATE(128)] = 6876,
  [SMALL_STATE(129)] = 6933,
  [SMALL_STATE(130)] = 6990,
  [SMALL_STATE(131)] = 7017,
  [SMALL_STATE(132)] = 7050,
  [SMALL_STATE(133)] = 7079,
  [SMALL_STATE(134)] = 7112,
  [SMALL_STATE(135)] = 7145,
  [SMALL_STATE(136)] = 7179,
  [SMALL_STATE(137)] = 7233,
  [SMALL_STATE(138)] = 7267,
  [SMALL_STATE(139)] = 7305,
  [SMALL_STATE(140)] = 7343,
  [SMALL_STATE(141)] = 7377,
  [SMALL_STATE(142)] = 7431,
  [SMALL_STATE(143)] = 7469,
  [SMALL_STATE(144)] = 7507,
  [SMALL_STATE(145)] = 7558,
  [SMALL_STATE(146)] = 7609,
  [SMALL_STATE(147)] = 7657,
  [SMALL_STATE(148)] = 7705,
  [SMALL_STATE(149)] = 7750,
  [SMALL_STATE(150)] = 7795,
  [SMALL_STATE(151)] = 7830,
  [SMALL_STATE(152)] = 7875,
  [SMALL_STATE(153)] = 7906,
  [SMALL_STATE(154)] = 7937,
  [SMALL_STATE(155)] = 7968,
  [SMALL_STATE(156)] = 7999,
  [SMALL_STATE(157)] = 8044,
  [SMALL_STATE(158)] = 8068,
  [SMALL_STATE(159)] = 8110,
  [SMALL_STATE(160)] = 8152,
  [SMALL_STATE(161)] = 8184,
  [SMALL_STATE(162)] = 8214,
  [SMALL_STATE(163)] = 8244,
  [SMALL_STATE(164)] = 8286,
  [SMALL_STATE(165)] = 8319,
  [SMALL_STATE(166)] = 8346,
  [SMALL_STATE(167)] = 8375,
  [SMALL_STATE(168)] = 8400,
  [SMALL_STATE(169)] = 8433,
  [SMALL_STATE(170)] = 8458,
  [SMALL_STATE(171)] = 8485,
  [SMALL_STATE(172)] = 8511,
  [SMALL_STATE(173)] = 8541,
  [SMALL_STATE(174)] = 8565,
  [SMALL_STATE(175)] = 8589,
  [SMALL_STATE(176)] = 8619,
  [SMALL_STATE(177)] = 8643,
  [SMALL_STATE(178)] = 8665,
  [SMALL_STATE(179)] = 8689,
  [SMALL_STATE(180)] = 8713,
  [SMALL_STATE(181)] = 8737,
  [SMALL_STATE(182)] = 8765,
  [SMALL_STATE(183)] = 8787,
  [SMALL_STATE(184)] = 8810,
  [SMALL_STATE(185)] = 8829,
  [SMALL_STATE(186)] = 8852,
  [SMALL_STATE(187)] = 8875,
  [SMALL_STATE(188)] = 8898,
  [SMALL_STATE(189)] = 8921,
  [SMALL_STATE(190)] = 8944,
  [SMALL_STATE(191)] = 8969,
  [SMALL_STATE(192)] = 8992,
  [SMALL_STATE(193)] = 9015,
  [SMALL_STATE(194)] = 9036,
  [SMALL_STATE(195)] = 9059,
  [SMALL_STATE(196)] = 9082,
  [SMALL_STATE(197)] = 9105,
  [SMALL_STATE(198)] = 9128,
  [SMALL_STATE(199)] = 9151,
  [SMALL_STATE(200)] = 9172,
  [SMALL_STATE(201)] = 9195,
  [SMALL_STATE(202)] = 9218,
  [SMALL_STATE(203)] = 9241,
  [SMALL_STATE(204)] = 9264,
  [SMALL_STATE(205)] = 9287,
  [SMALL_STATE(206)] = 9310,
  [SMALL_STATE(207)] = 9331,
  [SMALL_STATE(208)] = 9352,
  [SMALL_STATE(209)] = 9375,
  [SMALL_STATE(210)] = 9398,
  [SMALL_STATE(211)] = 9421,
  [SMALL_STATE(212)] = 9440,
  [SMALL_STATE(213)] = 9459,
  [SMALL_STATE(214)] = 9480,
  [SMALL_STATE(215)] = 9501,
  [SMALL_STATE(216)] = 9519,
  [SMALL_STATE(217)] = 9539,
  [SMALL_STATE(218)] = 9559,
  [SMALL_STATE(219)] = 9579,
  [SMALL_STATE(220)] = 9599,
  [SMALL_STATE(221)] = 9617,
  [SMALL_STATE(222)] = 9635,
  [SMALL_STATE(223)] = 9655,
  [SMALL_STATE(224)] = 9679,
  [SMALL_STATE(225)] = 9699,
  [SMALL_STATE(226)] = 9719,
  [SMALL_STATE(227)] = 9739,
  [SMALL_STATE(228)] = 9759,
  [SMALL_STATE(229)] = 9779,
  [SMALL_STATE(230)] = 9799,
  [SMALL_STATE(231)] = 9819,
  [SMALL_STATE(232)] = 9839,
  [SMALL_STATE(233)] = 9859,
  [SMALL_STATE(234)] = 9883,
  [SMALL_STATE(235)] = 9903,
  [SMALL_STATE(236)] = 9921,
  [SMALL_STATE(237)] = 9941,
  [SMALL_STATE(238)] = 9961,
  [SMALL_STATE(239)] = 9981,
  [SMALL_STATE(240)] = 10001,
  [SMALL_STATE(241)] = 10021,
  [SMALL_STATE(242)] = 10041,
  [SMALL_STATE(243)] = 10061,
  [SMALL_STATE(244)] = 10081,
  [SMALL_STATE(245)] = 10101,
  [SMALL_STATE(246)] = 10133,
  [SMALL_STATE(247)] = 10153,
  [SMALL_STATE(248)] = 10173,
  [SMALL_STATE(249)] = 10191,
  [SMALL_STATE(250)] = 10209,
  [SMALL_STATE(251)] = 10227,
  [SMALL_STATE(252)] = 10245,
  [SMALL_STATE(253)] = 10269,
  [SMALL_STATE(254)] = 10289,
  [SMALL_STATE(255)] = 10307,
  [SMALL_STATE(256)] = 10327,
  [SMALL_STATE(257)] = 10347,
  [SMALL_STATE(258)] = 10367,
  [SMALL_STATE(259)] = 10385,
  [SMALL_STATE(260)] = 10403,
  [SMALL_STATE(261)] = 10421,
  [SMALL_STATE(262)] = 10441,
  [SMALL_STATE(263)] = 10459,
  [SMALL_STATE(264)] = 10477,
  [SMALL_STATE(265)] = 10509,
  [SMALL_STATE(266)] = 10527,
  [SMALL_STATE(267)] = 10559,
  [SMALL_STATE(268)] = 10577,
  [SMALL_STATE(269)] = 10599,
  [SMALL_STATE(270)] = 10621,
  [SMALL_STATE(271)] = 10643,
  [SMALL_STATE(272)] = 10663,
  [SMALL_STATE(273)] = 10683,
  [SMALL_STATE(274)] = 10703,
  [SMALL_STATE(275)] = 10721,
  [SMALL_STATE(276)] = 10739,
  [SMALL_STATE(277)] = 10757,
  [SMALL_STATE(278)] = 10777,
  [SMALL_STATE(279)] = 10794,
  [SMALL_STATE(280)] = 10817,
  [SMALL_STATE(281)] = 10838,
  [SMALL_STATE(282)] = 10857,
  [SMALL_STATE(283)] = 10876,
  [SMALL_STATE(284)] = 10895,
  [SMALL_STATE(285)] = 10914,
  [SMALL_STATE(286)] = 10933,
  [SMALL_STATE(287)] = 10952,
  [SMALL_STATE(288)] = 10971,
  [SMALL_STATE(289)] = 11000,
  [SMALL_STATE(290)] = 11019,
  [SMALL_STATE(291)] = 11036,
  [SMALL_STATE(292)] = 11055,
  [SMALL_STATE(293)] = 11074,
  [SMALL_STATE(294)] = 11093,
  [SMALL_STATE(295)] = 11110,
  [SMALL_STATE(296)] = 11127,
  [SMALL_STATE(297)] = 11146,
  [SMALL_STATE(298)] = 11165,
  [SMALL_STATE(299)] = 11182,
  [SMALL_STATE(300)] = 11199,
  [SMALL_STATE(301)] = 11216,
  [SMALL_STATE(302)] = 11233,
  [SMALL_STATE(303)] = 11254,
  [SMALL_STATE(304)] = 11283,
  [SMALL_STATE(305)] = 11300,
  [SMALL_STATE(306)] = 11329,
  [SMALL_STATE(307)] = 11348,
  [SMALL_STATE(308)] = 11365,
  [SMALL_STATE(309)] = 11382,
  [SMALL_STATE(310)] = 11399,
  [SMALL_STATE(311)] = 11420,
  [SMALL_STATE(312)] = 11441,
  [SMALL_STATE(313)] = 11464,
  [SMALL_STATE(314)] = 11485,
  [SMALL_STATE(315)] = 11514,
  [SMALL_STATE(316)] = 11531,
  [SMALL_STATE(317)] = 11550,
  [SMALL_STATE(318)] = 11569,
  [SMALL_STATE(319)] = 11588,
  [SMALL_STATE(320)] = 11611,
  [SMALL_STATE(321)] = 11628,
  [SMALL_STATE(322)] = 11645,
  [SMALL_STATE(323)] = 11662,
  [SMALL_STATE(324)] = 11681,
  [SMALL_STATE(325)] = 11700,
  [SMALL_STATE(326)] = 11719,
  [SMALL_STATE(327)] = 11740,
  [SMALL_STATE(328)] = 11761,
  [SMALL_STATE(329)] = 11780,
  [SMALL_STATE(330)] = 11799,
  [SMALL_STATE(331)] = 11818,
  [SMALL_STATE(332)] = 11842,
  [SMALL_STATE(333)] = 11870,
  [SMALL_STATE(334)] = 11898,
  [SMALL_STATE(335)] = 11922,
  [SMALL_STATE(336)] = 11950,
  [SMALL_STATE(337)] = 11978,
  [SMALL_STATE(338)] = 12006,
  [SMALL_STATE(339)] = 12034,
  [SMALL_STATE(340)] = 12062,
  [SMALL_STATE(341)] = 12088,
  [SMALL_STATE(342)] = 12112,
  [SMALL_STATE(343)] = 12140,
  [SMALL_STATE(344)] = 12168,
  [SMALL_STATE(345)] = 12186,
  [SMALL_STATE(346)] = 12204,
  [SMALL_STATE(347)] = 12228,
  [SMALL_STATE(348)] = 12256,
  [SMALL_STATE(349)] = 12284,
  [SMALL_STATE(350)] = 12312,
  [SMALL_STATE(351)] = 12340,
  [SMALL_STATE(352)] = 12366,
  [SMALL_STATE(353)] = 12394,
  [SMALL_STATE(354)] = 12422,
  [SMALL_STATE(355)] = 12446,
  [SMALL_STATE(356)] = 12474,
  [SMALL_STATE(357)] = 12502,
  [SMALL_STATE(358)] = 12530,
  [SMALL_STATE(359)] = 12556,
  [SMALL_STATE(360)] = 12584,
  [SMALL_STATE(361)] = 12612,
  [SMALL_STATE(362)] = 12640,
  [SMALL_STATE(363)] = 12668,
  [SMALL_STATE(364)] = 12696,
  [SMALL_STATE(365)] = 12724,
  [SMALL_STATE(366)] = 12752,
  [SMALL_STATE(367)] = 12780,
  [SMALL_STATE(368)] = 12808,
  [SMALL_STATE(369)] = 12836,
  [SMALL_STATE(370)] = 12864,
  [SMALL_STATE(371)] = 12892,
  [SMALL_STATE(372)] = 12920,
  [SMALL_STATE(373)] = 12948,
  [SMALL_STATE(374)] = 12973,
  [SMALL_STATE(375)] = 12998,
  [SMALL_STATE(376)] = 13015,
  [SMALL_STATE(377)] = 13036,
  [SMALL_STATE(378)] = 13055,
  [SMALL_STATE(379)] = 13074,
  [SMALL_STATE(380)] = 13099,
  [SMALL_STATE(381)] = 13120,
  [SMALL_STATE(382)] = 13137,
  [SMALL_STATE(383)] = 13162,
  [SMALL_STATE(384)] = 13181,
  [SMALL_STATE(385)] = 13206,
  [SMALL_STATE(386)] = 13223,
  [SMALL_STATE(387)] = 13239,
  [SMALL_STATE(388)] = 13259,
  [SMALL_STATE(389)] = 13281,
  [SMALL_STATE(390)] = 13295,
  [SMALL_STATE(391)] = 13311,
  [SMALL_STATE(392)] = 13333,
  [SMALL_STATE(393)] = 13353,
  [SMALL_STATE(394)] = 13373,
  [SMALL_STATE(395)] = 13389,
  [SMALL_STATE(396)] = 13410,
  [SMALL_STATE(397)] = 13427,
  [SMALL_STATE(398)] = 13440,
  [SMALL_STATE(399)] = 13457,
  [SMALL_STATE(400)] = 13470,
  [SMALL_STATE(401)] = 13483,
  [SMALL_STATE(402)] = 13500,
  [SMALL_STATE(403)] = 13513,
  [SMALL_STATE(404)] = 13526,
  [SMALL_STATE(405)] = 13539,
  [SMALL_STATE(406)] = 13552,
  [SMALL_STATE(407)] = 13569,
  [SMALL_STATE(408)] = 13582,
  [SMALL_STATE(409)] = 13595,
  [SMALL_STATE(410)] = 13608,
  [SMALL_STATE(411)] = 13621,
  [SMALL_STATE(412)] = 13642,
  [SMALL_STATE(413)] = 13663,
  [SMALL_STATE(414)] = 13680,
  [SMALL_STATE(415)] = 13693,
  [SMALL_STATE(416)] = 13712,
  [SMALL_STATE(417)] = 13725,
  [SMALL_STATE(418)] = 13742,
  [SMALL_STATE(419)] = 13756,
  [SMALL_STATE(420)] = 13770,
  [SMALL_STATE(421)] = 13790,
  [SMALL_STATE(422)] = 13802,
  [SMALL_STATE(423)] = 13818,
  [SMALL_STATE(424)] = 13834,
  [SMALL_STATE(425)] = 13854,
  [SMALL_STATE(426)] = 13867,
  [SMALL_STATE(427)] = 13878,
  [SMALL_STATE(428)] = 13891,
  [SMALL_STATE(429)] = 13906,
  [SMALL_STATE(430)] = 13919,
  [SMALL_STATE(431)] = 13932,
  [SMALL_STATE(432)] = 13949,
  [SMALL_STATE(433)] = 13964,
  [SMALL_STATE(434)] = 13979,
  [SMALL_STATE(435)] = 13990,
  [SMALL_STATE(436)] = 14005,
  [SMALL_STATE(437)] = 14020,
  [SMALL_STATE(438)] = 14035,
  [SMALL_STATE(439)] = 14050,
  [SMALL_STATE(440)] = 14061,
  [SMALL_STATE(441)] = 14074,
  [SMALL_STATE(442)] = 14087,
  [SMALL_STATE(443)] = 14098,
  [SMALL_STATE(444)] = 14111,
  [SMALL_STATE(445)] = 14126,
  [SMALL_STATE(446)] = 14141,
  [SMALL_STATE(447)] = 14156,
  [SMALL_STATE(448)] = 14169,
  [SMALL_STATE(449)] = 14180,
  [SMALL_STATE(450)] = 14191,
  [SMALL_STATE(451)] = 14204,
  [SMALL_STATE(452)] = 14218,
  [SMALL_STATE(453)] = 14232,
  [SMALL_STATE(454)] = 14246,
  [SMALL_STATE(455)] = 14260,
  [SMALL_STATE(456)] = 14274,
  [SMALL_STATE(457)] = 14288,
  [SMALL_STATE(458)] = 14298,
  [SMALL_STATE(459)] = 14312,
  [SMALL_STATE(460)] = 14326,
  [SMALL_STATE(461)] = 14340,
  [SMALL_STATE(462)] = 14354,
  [SMALL_STATE(463)] = 14368,
  [SMALL_STATE(464)] = 14382,
  [SMALL_STATE(465)] = 14396,
  [SMALL_STATE(466)] = 14410,
  [SMALL_STATE(467)] = 14424,
  [SMALL_STATE(468)] = 14438,
  [SMALL_STATE(469)] = 14452,
  [SMALL_STATE(470)] = 14466,
  [SMALL_STATE(471)] = 14480,
  [SMALL_STATE(472)] = 14494,
  [SMALL_STATE(473)] = 14508,
  [SMALL_STATE(474)] = 14522,
  [SMALL_STATE(475)] = 14536,
  [SMALL_STATE(476)] = 14550,
  [SMALL_STATE(477)] = 14564,
  [SMALL_STATE(478)] = 14578,
  [SMALL_STATE(479)] = 14588,
  [SMALL_STATE(480)] = 14602,
  [SMALL_STATE(481)] = 14612,
  [SMALL_STATE(482)] = 14626,
  [SMALL_STATE(483)] = 14640,
  [SMALL_STATE(484)] = 14654,
  [SMALL_STATE(485)] = 14668,
  [SMALL_STATE(486)] = 14682,
  [SMALL_STATE(487)] = 14696,
  [SMALL_STATE(488)] = 14710,
  [SMALL_STATE(489)] = 14724,
  [SMALL_STATE(490)] = 14738,
  [SMALL_STATE(491)] = 14748,
  [SMALL_STATE(492)] = 14762,
  [SMALL_STATE(493)] = 14776,
  [SMALL_STATE(494)] = 14788,
  [SMALL_STATE(495)] = 14802,
  [SMALL_STATE(496)] = 14816,
  [SMALL_STATE(497)] = 14826,
  [SMALL_STATE(498)] = 14838,
  [SMALL_STATE(499)] = 14852,
  [SMALL_STATE(500)] = 14866,
  [SMALL_STATE(501)] = 14880,
  [SMALL_STATE(502)] = 14894,
  [SMALL_STATE(503)] = 14908,
  [SMALL_STATE(504)] = 14922,
  [SMALL_STATE(505)] = 14936,
  [SMALL_STATE(506)] = 14950,
  [SMALL_STATE(507)] = 14964,
  [SMALL_STATE(508)] = 14978,
  [SMALL_STATE(509)] = 14992,
  [SMALL_STATE(510)] = 15006,
  [SMALL_STATE(511)] = 15020,
  [SMALL_STATE(512)] = 15034,
  [SMALL_STATE(513)] = 15048,
  [SMALL_STATE(514)] = 15062,
  [SMALL_STATE(515)] = 15076,
  [SMALL_STATE(516)] = 15090,
  [SMALL_STATE(517)] = 15104,
  [SMALL_STATE(518)] = 15114,
  [SMALL_STATE(519)] = 15126,
  [SMALL_STATE(520)] = 15140,
  [SMALL_STATE(521)] = 15154,
  [SMALL_STATE(522)] = 15168,
  [SMALL_STATE(523)] = 15182,
  [SMALL_STATE(524)] = 15196,
  [SMALL_STATE(525)] = 15208,
  [SMALL_STATE(526)] = 15218,
  [SMALL_STATE(527)] = 15230,
  [SMALL_STATE(528)] = 15244,
  [SMALL_STATE(529)] = 15258,
  [SMALL_STATE(530)] = 15272,
  [SMALL_STATE(531)] = 15286,
  [SMALL_STATE(532)] = 15300,
  [SMALL_STATE(533)] = 15314,
  [SMALL_STATE(534)] = 15328,
  [SMALL_STATE(535)] = 15342,
  [SMALL_STATE(536)] = 15356,
  [SMALL_STATE(537)] = 15370,
  [SMALL_STATE(538)] = 15384,
  [SMALL_STATE(539)] = 15398,
  [SMALL_STATE(540)] = 15410,
  [SMALL_STATE(541)] = 15424,
  [SMALL_STATE(542)] = 15438,
  [SMALL_STATE(543)] = 15452,
  [SMALL_STATE(544)] = 15462,
  [SMALL_STATE(545)] = 15476,
  [SMALL_STATE(546)] = 15485,
  [SMALL_STATE(547)] = 15496,
  [SMALL_STATE(548)] = 15507,
  [SMALL_STATE(549)] = 15516,
  [SMALL_STATE(550)] = 15527,
  [SMALL_STATE(551)] = 15536,
  [SMALL_STATE(552)] = 15547,
  [SMALL_STATE(553)] = 15558,
  [SMALL_STATE(554)] = 15567,
  [SMALL_STATE(555)] = 15578,
  [SMALL_STATE(556)] = 15589,
  [SMALL_STATE(557)] = 15600,
  [SMALL_STATE(558)] = 15613,
  [SMALL_STATE(559)] = 15624,
  [SMALL_STATE(560)] = 15633,
  [SMALL_STATE(561)] = 15642,
  [SMALL_STATE(562)] = 15651,
  [SMALL_STATE(563)] = 15662,
  [SMALL_STATE(564)] = 15671,
  [SMALL_STATE(565)] = 15680,
  [SMALL_STATE(566)] = 15689,
  [SMALL_STATE(567)] = 15698,
  [SMALL_STATE(568)] = 15711,
  [SMALL_STATE(569)] = 15720,
  [SMALL_STATE(570)] = 15729,
  [SMALL_STATE(571)] = 15740,
  [SMALL_STATE(572)] = 15751,
  [SMALL_STATE(573)] = 15760,
  [SMALL_STATE(574)] = 15769,
  [SMALL_STATE(575)] = 15780,
  [SMALL_STATE(576)] = 15789,
  [SMALL_STATE(577)] = 15798,
  [SMALL_STATE(578)] = 15809,
  [SMALL_STATE(579)] = 15818,
  [SMALL_STATE(580)] = 15829,
  [SMALL_STATE(581)] = 15840,
  [SMALL_STATE(582)] = 15851,
  [SMALL_STATE(583)] = 15860,
  [SMALL_STATE(584)] = 15871,
  [SMALL_STATE(585)] = 15882,
  [SMALL_STATE(586)] = 15891,
  [SMALL_STATE(587)] = 15902,
  [SMALL_STATE(588)] = 15913,
  [SMALL_STATE(589)] = 15922,
  [SMALL_STATE(590)] = 15931,
  [SMALL_STATE(591)] = 15940,
  [SMALL_STATE(592)] = 15951,
  [SMALL_STATE(593)] = 15962,
  [SMALL_STATE(594)] = 15973,
  [SMALL_STATE(595)] = 15984,
  [SMALL_STATE(596)] = 15995,
  [SMALL_STATE(597)] = 16004,
  [SMALL_STATE(598)] = 16015,
  [SMALL_STATE(599)] = 16026,
  [SMALL_STATE(600)] = 16037,
  [SMALL_STATE(601)] = 16046,
  [SMALL_STATE(602)] = 16055,
  [SMALL_STATE(603)] = 16063,
  [SMALL_STATE(604)] = 16071,
  [SMALL_STATE(605)] = 16079,
  [SMALL_STATE(606)] = 16087,
  [SMALL_STATE(607)] = 16095,
  [SMALL_STATE(608)] = 16103,
  [SMALL_STATE(609)] = 16111,
  [SMALL_STATE(610)] = 16119,
  [SMALL_STATE(611)] = 16127,
  [SMALL_STATE(612)] = 16137,
  [SMALL_STATE(613)] = 16145,
  [SMALL_STATE(614)] = 16153,
  [SMALL_STATE(615)] = 16161,
  [SMALL_STATE(616)] = 16169,
  [SMALL_STATE(617)] = 16177,
  [SMALL_STATE(618)] = 16185,
  [SMALL_STATE(619)] = 16193,
  [SMALL_STATE(620)] = 16201,
  [SMALL_STATE(621)] = 16209,
  [SMALL_STATE(622)] = 16217,
  [SMALL_STATE(623)] = 16225,
  [SMALL_STATE(624)] = 16233,
  [SMALL_STATE(625)] = 16241,
  [SMALL_STATE(626)] = 16249,
  [SMALL_STATE(627)] = 16257,
  [SMALL_STATE(628)] = 16265,
  [SMALL_STATE(629)] = 16273,
  [SMALL_STATE(630)] = 16281,
  [SMALL_STATE(631)] = 16289,
  [SMALL_STATE(632)] = 16297,
  [SMALL_STATE(633)] = 16305,
  [SMALL_STATE(634)] = 16313,
  [SMALL_STATE(635)] = 16321,
  [SMALL_STATE(636)] = 16329,
  [SMALL_STATE(637)] = 16337,
  [SMALL_STATE(638)] = 16345,
  [SMALL_STATE(639)] = 16353,
  [SMALL_STATE(640)] = 16361,
  [SMALL_STATE(641)] = 16369,
  [SMALL_STATE(642)] = 16377,
  [SMALL_STATE(643)] = 16385,
  [SMALL_STATE(644)] = 16393,
  [SMALL_STATE(645)] = 16401,
  [SMALL_STATE(646)] = 16409,
  [SMALL_STATE(647)] = 16417,
  [SMALL_STATE(648)] = 16425,
  [SMALL_STATE(649)] = 16433,
  [SMALL_STATE(650)] = 16441,
  [SMALL_STATE(651)] = 16449,
  [SMALL_STATE(652)] = 16457,
  [SMALL_STATE(653)] = 16465,
  [SMALL_STATE(654)] = 16473,
  [SMALL_STATE(655)] = 16481,
  [SMALL_STATE(656)] = 16489,
  [SMALL_STATE(657)] = 16497,
  [SMALL_STATE(658)] = 16505,
  [SMALL_STATE(659)] = 16513,
  [SMALL_STATE(660)] = 16521,
  [SMALL_STATE(661)] = 16529,
  [SMALL_STATE(662)] = 16537,
  [SMALL_STATE(663)] = 16545,
  [SMALL_STATE(664)] = 16553,
  [SMALL_STATE(665)] = 16561,
  [SMALL_STATE(666)] = 16569,
  [SMALL_STATE(667)] = 16577,
  [SMALL_STATE(668)] = 16585,
  [SMALL_STATE(669)] = 16593,
  [SMALL_STATE(670)] = 16601,
  [SMALL_STATE(671)] = 16609,
  [SMALL_STATE(672)] = 16617,
  [SMALL_STATE(673)] = 16625,
  [SMALL_STATE(674)] = 16633,
  [SMALL_STATE(675)] = 16641,
  [SMALL_STATE(676)] = 16649,
  [SMALL_STATE(677)] = 16657,
  [SMALL_STATE(678)] = 16665,
  [SMALL_STATE(679)] = 16673,
  [SMALL_STATE(680)] = 16681,
  [SMALL_STATE(681)] = 16689,
  [SMALL_STATE(682)] = 16697,
  [SMALL_STATE(683)] = 16705,
  [SMALL_STATE(684)] = 16713,
  [SMALL_STATE(685)] = 16721,
  [SMALL_STATE(686)] = 16729,
  [SMALL_STATE(687)] = 16737,
  [SMALL_STATE(688)] = 16745,
  [SMALL_STATE(689)] = 16753,
  [SMALL_STATE(690)] = 16761,
  [SMALL_STATE(691)] = 16769,
  [SMALL_STATE(692)] = 16777,
  [SMALL_STATE(693)] = 16785,
  [SMALL_STATE(694)] = 16793,
  [SMALL_STATE(695)] = 16803,
  [SMALL_STATE(696)] = 16811,
  [SMALL_STATE(697)] = 16819,
  [SMALL_STATE(698)] = 16827,
  [SMALL_STATE(699)] = 16837,
  [SMALL_STATE(700)] = 16845,
  [SMALL_STATE(701)] = 16853,
  [SMALL_STATE(702)] = 16861,
  [SMALL_STATE(703)] = 16869,
  [SMALL_STATE(704)] = 16877,
  [SMALL_STATE(705)] = 16885,
  [SMALL_STATE(706)] = 16893,
  [SMALL_STATE(707)] = 16901,
  [SMALL_STATE(708)] = 16909,
  [SMALL_STATE(709)] = 16917,
  [SMALL_STATE(710)] = 16925,
  [SMALL_STATE(711)] = 16933,
  [SMALL_STATE(712)] = 16941,
  [SMALL_STATE(713)] = 16949,
  [SMALL_STATE(714)] = 16957,
  [SMALL_STATE(715)] = 16965,
  [SMALL_STATE(716)] = 16973,
  [SMALL_STATE(717)] = 16981,
  [SMALL_STATE(718)] = 16989,
  [SMALL_STATE(719)] = 16997,
  [SMALL_STATE(720)] = 17005,
  [SMALL_STATE(721)] = 17013,
  [SMALL_STATE(722)] = 17021,
  [SMALL_STATE(723)] = 17029,
  [SMALL_STATE(724)] = 17037,
  [SMALL_STATE(725)] = 17045,
  [SMALL_STATE(726)] = 17053,
  [SMALL_STATE(727)] = 17061,
  [SMALL_STATE(728)] = 17069,
  [SMALL_STATE(729)] = 17077,
  [SMALL_STATE(730)] = 17085,
  [SMALL_STATE(731)] = 17093,
  [SMALL_STATE(732)] = 17101,
  [SMALL_STATE(733)] = 17109,
  [SMALL_STATE(734)] = 17117,
  [SMALL_STATE(735)] = 17125,
  [SMALL_STATE(736)] = 17133,
  [SMALL_STATE(737)] = 17141,
  [SMALL_STATE(738)] = 17149,
  [SMALL_STATE(739)] = 17157,
  [SMALL_STATE(740)] = 17165,
  [SMALL_STATE(741)] = 17173,
  [SMALL_STATE(742)] = 17181,
  [SMALL_STATE(743)] = 17189,
  [SMALL_STATE(744)] = 17197,
  [SMALL_STATE(745)] = 17205,
  [SMALL_STATE(746)] = 17213,
  [SMALL_STATE(747)] = 17221,
  [SMALL_STATE(748)] = 17229,
  [SMALL_STATE(749)] = 17237,
  [SMALL_STATE(750)] = 17245,
  [SMALL_STATE(751)] = 17253,
  [SMALL_STATE(752)] = 17261,
  [SMALL_STATE(753)] = 17269,
  [SMALL_STATE(754)] = 17277,
  [SMALL_STATE(755)] = 17285,
  [SMALL_STATE(756)] = 17293,
  [SMALL_STATE(757)] = 17301,
  [SMALL_STATE(758)] = 17309,
  [SMALL_STATE(759)] = 17317,
  [SMALL_STATE(760)] = 17325,
  [SMALL_STATE(761)] = 17333,
  [SMALL_STATE(762)] = 17341,
  [SMALL_STATE(763)] = 17349,
  [SMALL_STATE(764)] = 17357,
  [SMALL_STATE(765)] = 17365,
  [SMALL_STATE(766)] = 17373,
  [SMALL_STATE(767)] = 17381,
  [SMALL_STATE(768)] = 17389,
  [SMALL_STATE(769)] = 17397,
  [SMALL_STATE(770)] = 17405,
  [SMALL_STATE(771)] = 17413,
  [SMALL_STATE(772)] = 17421,
  [SMALL_STATE(773)] = 17429,
  [SMALL_STATE(774)] = 17437,
  [SMALL_STATE(775)] = 17445,
  [SMALL_STATE(776)] = 17453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(375),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(159),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(381),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(93),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(115),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(605),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(375),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(67),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(375),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(67),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(557),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(42),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(567),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(148),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(381),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(93),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(381),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(93),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(726),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(725),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(718),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(716),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(715),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(709),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(498),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(701),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(501),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(146),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(45),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(72),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__natterm_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__natterm_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(76),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__natterm_repeat1, 2), SHIFT_REPEAT(144),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__natterm, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__natterm, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__natterm, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__natterm, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(136),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(136),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(184),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(719),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(609),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(615),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(178),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(156),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(547),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(230),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(580),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(158),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(390),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(688),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(642),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(681),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(151),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [918] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(147),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(147),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__natterm_repeat1, 2), SHIFT_REPEAT(145),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(141),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(141),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [1040] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(586),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(637),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(120),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(447),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(9),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(665),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(376),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(388),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(524),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(391),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1612] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
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
