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
#define STATE_COUNT 752
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 251
#define ALIAS_COUNT 0
#define TOKEN_COUNT 152
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
  anon_sym_all_DASHtraces = 81,
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
  aux_sym_node_var_token1 = 99,
  anon_sym_node = 100,
  anon_sym_3 = 101,
  anon_sym_4 = 102,
  anon_sym_5 = 103,
  anon_sym_6 = 104,
  anon_sym_7 = 105,
  anon_sym_8 = 106,
  anon_sym_9 = 107,
  anon_sym_10 = 108,
  anon_sym_11 = 109,
  anon_sym_12 = 110,
  anon_sym_LBRACE_STAR = 111,
  aux_sym_formal_comment_token1 = 112,
  anon_sym_STAR_RBRACE = 113,
  anon_sym_LT = 114,
  anon_sym_GT = 115,
  anon_sym_PLUS = 116,
  anon_sym_XOR = 117,
  anon_sym_13 = 118,
  anon_sym_STAR = 119,
  anon_sym_CARET = 120,
  anon_sym_SQUOTE = 121,
  anon_sym_TILDE_SQUOTE = 122,
  anon_sym_DOLLAR = 123,
  anon_sym_pub = 124,
  anon_sym_TILDE = 125,
  anon_sym_fresh = 126,
  anon_sym_In = 127,
  anon_sym_Out = 128,
  anon_sym_Fr = 129,
  anon_sym_BANG = 130,
  anon_sym_DASH = 131,
  anon_sym_no_precomp = 132,
  anon_sym_LT_EQ_GT = 133,
  anon_sym_14 = 134,
  anon_sym_EQ_EQ_GT = 135,
  anon_sym_15 = 136,
  anon_sym_16 = 137,
  anon_sym_17 = 138,
  anon_sym_18 = 139,
  anon_sym_19 = 140,
  anon_sym_F = 141,
  anon_sym_20 = 142,
  anon_sym_T = 143,
  anon_sym_last = 144,
  anon_sym_Ex = 145,
  anon_sym_21 = 146,
  anon_sym_All = 147,
  anon_sym_22 = 148,
  aux_sym_hexcolor_token1 = 149,
  sym_comment = 150,
  sym_multiline_comment = 151,
  sym_source_file = 152,
  sym_security_protocol_theory = 153,
  sym_body = 154,
  sym__signature_spec = 155,
  sym_functions = 156,
  sym_function_sym = 157,
  sym_arity = 158,
  sym_equations = 159,
  sym_equation = 160,
  sym_built_ins = 161,
  sym_built_in = 162,
  sym_global_heuristic = 163,
  sym_goal_ranking = 164,
  sym_standard_goal_ranking = 165,
  sym_oracle_goal_ranking = 166,
  sym_tactic = 167,
  sym_presort = 168,
  sym_prio = 169,
  sym_deprio = 170,
  sym_post_ranking = 171,
  sym_function = 172,
  sym_and_function = 173,
  sym_not_function = 174,
  sym_param = 175,
  sym_function_name = 176,
  sym_rule = 177,
  sym_simple_rule = 178,
  sym_variants = 179,
  sym_modulo = 180,
  sym_rule_attrs = 181,
  sym_rule_attr = 182,
  sym_let_block = 183,
  sym_msg_var = 184,
  sym_restriction = 185,
  sym_restriction_attrs = 186,
  sym_lemma = 187,
  sym_lemma_attrs = 188,
  sym_lemma_attr = 189,
  sym_trace_quantifier = 190,
  sym_proof_skeleton = 191,
  sym_proof_method = 192,
  sym_goal = 193,
  sym_node_var = 194,
  sym_natural = 195,
  sym_natural_subscr = 196,
  sym_formal_comment = 197,
  sym_tuple_term = 198,
  sym__msetterm = 199,
  sym__xorterm = 200,
  sym__multterm = 201,
  sym__expterm = 202,
  sym_term = 203,
  sym_binary_app = 204,
  sym_nested = 205,
  sym_app = 206,
  sym_literal = 207,
  sym_nonnode_var = 208,
  sym_facts = 209,
  sym_builtin_facts = 210,
  sym_fact = 211,
  sym_fact_annotes = 212,
  sym_fact_annote = 213,
  sym_formula = 214,
  sym_imp = 215,
  sym_disjunction = 216,
  sym_conjunction = 217,
  sym_negation = 218,
  sym_atom = 219,
  sym_lvar = 220,
  sym_quantifier = 221,
  sym_hexcolor = 222,
  aux_sym_body_repeat1 = 223,
  aux_sym_functions_repeat1 = 224,
  aux_sym_equations_repeat1 = 225,
  aux_sym_built_ins_repeat1 = 226,
  aux_sym_global_heuristic_repeat1 = 227,
  aux_sym_tactic_repeat1 = 228,
  aux_sym_tactic_repeat2 = 229,
  aux_sym_prio_repeat1 = 230,
  aux_sym_function_repeat1 = 231,
  aux_sym_and_function_repeat1 = 232,
  aux_sym_not_function_repeat1 = 233,
  aux_sym_variants_repeat1 = 234,
  aux_sym_rule_attrs_repeat1 = 235,
  aux_sym_let_block_repeat1 = 236,
  aux_sym_lemma_attrs_repeat1 = 237,
  aux_sym_proof_skeleton_repeat1 = 238,
  aux_sym_goal_repeat1 = 239,
  aux_sym_natural_subscr_repeat1 = 240,
  aux_sym_tuple_term_repeat1 = 241,
  aux_sym__msetterm_repeat1 = 242,
  aux_sym__xorterm_repeat1 = 243,
  aux_sym__multterm_repeat1 = 244,
  aux_sym__expterm_repeat1 = 245,
  aux_sym_facts_repeat1 = 246,
  aux_sym_fact_annotes_repeat1 = 247,
  aux_sym_disjunction_repeat1 = 248,
  aux_sym_conjunction_repeat1 = 249,
  aux_sym_atom_repeat1 = 250,
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
  [anon_sym_all_DASHtraces] = "all-traces",
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
  [aux_sym_node_var_token1] = "node_var_token1",
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
  [anon_sym_Ex] = "Ex",
  [anon_sym_21] = "∃",
  [anon_sym_All] = "All",
  [anon_sym_22] = "∀",
  [aux_sym_hexcolor_token1] = "hexcolor_token1",
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
  [sym_binary_app] = "binary_app",
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
  [sym_hexcolor] = "hexcolor",
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
  [anon_sym_all_DASHtraces] = anon_sym_all_DASHtraces,
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
  [aux_sym_node_var_token1] = aux_sym_node_var_token1,
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
  [anon_sym_Ex] = anon_sym_Ex,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_All] = anon_sym_All,
  [anon_sym_22] = anon_sym_22,
  [aux_sym_hexcolor_token1] = aux_sym_hexcolor_token1,
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
  [sym_binary_app] = sym_binary_app,
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
  [sym_hexcolor] = sym_hexcolor,
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
  [anon_sym_all_DASHtraces] = {
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
  [aux_sym_node_var_token1] = {
    .visible = false,
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
  [aux_sym_hexcolor_token1] = {
    .visible = false,
    .named = false,
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
  [sym_binary_app] = {
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
  [sym_hexcolor] = {
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
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
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
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 32,
  [44] = 40,
  [45] = 45,
  [46] = 31,
  [47] = 47,
  [48] = 34,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 41,
  [53] = 53,
  [54] = 33,
  [55] = 38,
  [56] = 56,
  [57] = 51,
  [58] = 49,
  [59] = 59,
  [60] = 50,
  [61] = 61,
  [62] = 62,
  [63] = 53,
  [64] = 64,
  [65] = 45,
  [66] = 66,
  [67] = 59,
  [68] = 68,
  [69] = 62,
  [70] = 64,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 61,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 76,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 86,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 98,
  [99] = 80,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 86,
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
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 118,
  [127] = 127,
  [128] = 128,
  [129] = 115,
  [130] = 130,
  [131] = 118,
  [132] = 119,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 134,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 37,
  [149] = 144,
  [150] = 30,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 155,
  [156] = 152,
  [157] = 155,
  [158] = 154,
  [159] = 159,
  [160] = 154,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
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
  [181] = 30,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 179,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 78,
  [195] = 74,
  [196] = 71,
  [197] = 75,
  [198] = 198,
  [199] = 199,
  [200] = 94,
  [201] = 93,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 204,
  [207] = 207,
  [208] = 90,
  [209] = 100,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 212,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 88,
  [223] = 98,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 82,
  [230] = 230,
  [231] = 215,
  [232] = 210,
  [233] = 92,
  [234] = 219,
  [235] = 79,
  [236] = 101,
  [237] = 237,
  [238] = 238,
  [239] = 218,
  [240] = 81,
  [241] = 87,
  [242] = 85,
  [243] = 243,
  [244] = 111,
  [245] = 83,
  [246] = 246,
  [247] = 247,
  [248] = 109,
  [249] = 106,
  [250] = 250,
  [251] = 251,
  [252] = 217,
  [253] = 105,
  [254] = 254,
  [255] = 221,
  [256] = 256,
  [257] = 108,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 227,
  [262] = 220,
  [263] = 263,
  [264] = 204,
  [265] = 205,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 205,
  [272] = 272,
  [273] = 263,
  [274] = 274,
  [275] = 179,
  [276] = 266,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 179,
  [285] = 182,
  [286] = 278,
  [287] = 204,
  [288] = 288,
  [289] = 188,
  [290] = 187,
  [291] = 291,
  [292] = 292,
  [293] = 291,
  [294] = 187,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 182,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 301,
  [310] = 310,
  [311] = 304,
  [312] = 312,
  [313] = 313,
  [314] = 302,
  [315] = 306,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 310,
  [320] = 320,
  [321] = 300,
  [322] = 308,
  [323] = 323,
  [324] = 320,
  [325] = 299,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 318,
  [330] = 307,
  [331] = 312,
  [332] = 305,
  [333] = 333,
  [334] = 328,
  [335] = 316,
  [336] = 303,
  [337] = 317,
  [338] = 326,
  [339] = 339,
  [340] = 340,
  [341] = 68,
  [342] = 342,
  [343] = 339,
  [344] = 342,
  [345] = 71,
  [346] = 75,
  [347] = 347,
  [348] = 78,
  [349] = 74,
  [350] = 205,
  [351] = 351,
  [352] = 182,
  [353] = 187,
  [354] = 73,
  [355] = 347,
  [356] = 356,
  [357] = 72,
  [358] = 81,
  [359] = 111,
  [360] = 89,
  [361] = 102,
  [362] = 87,
  [363] = 363,
  [364] = 100,
  [365] = 224,
  [366] = 366,
  [367] = 366,
  [368] = 79,
  [369] = 92,
  [370] = 109,
  [371] = 106,
  [372] = 105,
  [373] = 88,
  [374] = 98,
  [375] = 103,
  [376] = 85,
  [377] = 83,
  [378] = 108,
  [379] = 96,
  [380] = 82,
  [381] = 101,
  [382] = 71,
  [383] = 113,
  [384] = 133,
  [385] = 75,
  [386] = 386,
  [387] = 122,
  [388] = 388,
  [389] = 389,
  [390] = 128,
  [391] = 391,
  [392] = 269,
  [393] = 74,
  [394] = 394,
  [395] = 388,
  [396] = 396,
  [397] = 397,
  [398] = 88,
  [399] = 227,
  [400] = 87,
  [401] = 401,
  [402] = 397,
  [403] = 136,
  [404] = 224,
  [405] = 105,
  [406] = 406,
  [407] = 106,
  [408] = 81,
  [409] = 396,
  [410] = 410,
  [411] = 411,
  [412] = 410,
  [413] = 413,
  [414] = 414,
  [415] = 142,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 386,
  [421] = 394,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 423,
  [426] = 138,
  [427] = 427,
  [428] = 428,
  [429] = 391,
  [430] = 140,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 437,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
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
  [455] = 444,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 449,
  [462] = 462,
  [463] = 447,
  [464] = 459,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 451,
  [471] = 471,
  [472] = 472,
  [473] = 452,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 462,
  [482] = 446,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 484,
  [488] = 459,
  [489] = 489,
  [490] = 460,
  [491] = 462,
  [492] = 480,
  [493] = 485,
  [494] = 494,
  [495] = 477,
  [496] = 496,
  [497] = 497,
  [498] = 436,
  [499] = 460,
  [500] = 500,
  [501] = 489,
  [502] = 502,
  [503] = 456,
  [504] = 504,
  [505] = 505,
  [506] = 440,
  [507] = 484,
  [508] = 436,
  [509] = 509,
  [510] = 458,
  [511] = 445,
  [512] = 512,
  [513] = 505,
  [514] = 477,
  [515] = 466,
  [516] = 504,
  [517] = 517,
  [518] = 518,
  [519] = 483,
  [520] = 480,
  [521] = 486,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 524,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 534,
  [539] = 539,
  [540] = 524,
  [541] = 525,
  [542] = 280,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 528,
  [547] = 525,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 435,
  [553] = 529,
  [554] = 531,
  [555] = 288,
  [556] = 556,
  [557] = 411,
  [558] = 558,
  [559] = 559,
  [560] = 434,
  [561] = 413,
  [562] = 537,
  [563] = 563,
  [564] = 564,
  [565] = 428,
  [566] = 544,
  [567] = 431,
  [568] = 268,
  [569] = 550,
  [570] = 295,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 93,
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
  [618] = 587,
  [619] = 619,
  [620] = 620,
  [621] = 616,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 613,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 610,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 581,
  [639] = 639,
  [640] = 640,
  [641] = 593,
  [642] = 642,
  [643] = 597,
  [644] = 644,
  [645] = 645,
  [646] = 623,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 606,
  [655] = 655,
  [656] = 656,
  [657] = 610,
  [658] = 658,
  [659] = 613,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 616,
  [667] = 606,
  [668] = 631,
  [669] = 616,
  [670] = 670,
  [671] = 633,
  [672] = 672,
  [673] = 673,
  [674] = 628,
  [675] = 586,
  [676] = 676,
  [677] = 617,
  [678] = 619,
  [679] = 679,
  [680] = 680,
  [681] = 648,
  [682] = 682,
  [683] = 676,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 594,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 672,
  [693] = 693,
  [694] = 691,
  [695] = 695,
  [696] = 606,
  [697] = 672,
  [698] = 698,
  [699] = 653,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 650,
  [706] = 706,
  [707] = 580,
  [708] = 708,
  [709] = 709,
  [710] = 661,
  [711] = 679,
  [712] = 712,
  [713] = 713,
  [714] = 706,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 611,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 689,
  [724] = 724,
  [725] = 649,
  [726] = 583,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 625,
  [733] = 733,
  [734] = 658,
  [735] = 735,
  [736] = 690,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 589,
  [741] = 715,
  [742] = 590,
  [743] = 685,
  [744] = 635,
  [745] = 745,
  [746] = 746,
  [747] = 684,
  [748] = 720,
  [749] = 602,
  [750] = 688,
  [751] = 708,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(486);
      if (lookahead == '!') ADVANCE(878);
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(865);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '*') ADVANCE(863);
      if (lookahead == '+') ADVANCE(858);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '-') ADVANCE(880);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(856);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '>') ADVANCE(857);
      if (lookahead == '@') ADVANCE(828);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(715);
      if (lookahead == 'E') ADVANCE(789);
      if (lookahead == 'F') ADVANCE(890);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'O') ADVANCE(743);
      if (lookahead == 'P') ADVANCE(719);
      if (lookahead == 'S') ADVANCE(721);
      if (lookahead == 'T') ADVANCE(893);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(779);
      if (lookahead == '\\') SKIP(485)
      if (lookahead == ']') ADVANCE(780);
      if (lookahead == '^') ADVANCE(864);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead == 'q') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(337);
      if (lookahead == '{') ADVANCE(751);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '}') ADVANCE(752);
      if (lookahead == '~') ADVANCE(871);
      if (lookahead == 172) ADVANCE(888);
      if (lookahead == 8320) ADVANCE(835);
      if (lookahead == 8321) ADVANCE(836);
      if (lookahead == 8322) ADVANCE(837);
      if (lookahead == 8323) ADVANCE(838);
      if (lookahead == 8324) ADVANCE(839);
      if (lookahead == 8325) ADVANCE(840);
      if (lookahead == 8326) ADVANCE(841);
      if (lookahead == 8327) ADVANCE(842);
      if (lookahead == 8328) ADVANCE(843);
      if (lookahead == 8329) ADVANCE(844);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8704) ADVANCE(902);
      if (lookahead == 8707) ADVANCE(899);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == 8853) ADVANCE(861);
      if (lookahead == 8868) ADVANCE(892);
      if (lookahead == 8869) ADVANCE(889);
      if (lookahead == 9654) ADVANCE(827);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
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
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(56)
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
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(55)
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
      if (lookahead == '!') ADVANCE(878);
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(865);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(855);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'A') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(891);
      if (lookahead == 'I') ADVANCE(594);
      if (lookahead == 'O') ADVANCE(676);
      if (lookahead == 'T') ADVANCE(894);
      if (lookahead == '[') ADVANCE(779);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '~') ADVANCE(870);
      if (lookahead == 172) ADVANCE(888);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8704) ADVANCE(902);
      if (lookahead == 8707) ADVANCE(899);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == 8868) ADVANCE(892);
      if (lookahead == 8869) ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(878);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(865);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '.') ADVANCE(796);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(855);
      if (lookahead == '=') ADVANCE(700);
      if (lookahead == 'A') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(891);
      if (lookahead == 'I') ADVANCE(594);
      if (lookahead == 'O') ADVANCE(676);
      if (lookahead == 'T') ADVANCE(894);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead == '~') ADVANCE(870);
      if (lookahead == 172) ADVANCE(888);
      if (lookahead == 8704) ADVANCE(902);
      if (lookahead == 8707) ADVANCE(899);
      if (lookahead == 8868) ADVANCE(892);
      if (lookahead == 8869) ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(878);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(865);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(855);
      if (lookahead == 'A') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(891);
      if (lookahead == 'I') ADVANCE(594);
      if (lookahead == 'O') ADVANCE(676);
      if (lookahead == 'T') ADVANCE(894);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == '~') ADVANCE(870);
      if (lookahead == 8704) ADVANCE(902);
      if (lookahead == 8707) ADVANCE(899);
      if (lookahead == 8868) ADVANCE(892);
      if (lookahead == 8869) ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(878);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(594);
      if (lookahead == 'O') ADVANCE(676);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(878);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'I') ADVANCE(594);
      if (lookahead == 'O') ADVANCE(676);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(856);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '~') ADVANCE(869);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '.') ADVANCE(796);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(856);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '~') ADVANCE(869);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '*') ADVANCE(862);
      if (lookahead == '+') ADVANCE(858);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '-') ADVANCE(879);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '>') ADVANCE(857);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(715);
      if (lookahead == 'E') ADVANCE(788);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'O') ADVANCE(742);
      if (lookahead == 'P') ADVANCE(719);
      if (lookahead == 'S') ADVANCE(721);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(780);
      if (lookahead == '^') ADVANCE(864);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead == '{') ADVANCE(750);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '}') ADVANCE(752);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == 8853) ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '+') ADVANCE(858);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '>') ADVANCE(857);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '}') ADVANCE(752);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '+') ADVANCE(858);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '>') ADVANCE(857);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '}') ADVANCE(752);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(718);
      if (lookahead == 'O') ADVANCE(744);
      if (lookahead == 'P') ADVANCE(720);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'c') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == 8658) ADVANCE(885);
      if (lookahead == 8660) ADVANCE(883);
      if (lookahead == 8741) ADVANCE(830);
      if (lookahead == 8743) ADVANCE(887);
      if (lookahead == 8744) ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '&') ADVANCE(758);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '|') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '$') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(865);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '.') ADVANCE(796);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(855);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '~') ADVANCE(870);
      if (lookahead == 8320) ADVANCE(835);
      if (lookahead == 8321) ADVANCE(836);
      if (lookahead == 8322) ADVANCE(837);
      if (lookahead == 8323) ADVANCE(838);
      if (lookahead == 8324) ADVANCE(839);
      if (lookahead == 8325) ADVANCE(840);
      if (lookahead == 8326) ADVANCE(841);
      if (lookahead == 8327) ADVANCE(842);
      if (lookahead == 8328) ADVANCE(843);
      if (lookahead == 8329) ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(482);
      if (lookahead == '\'') ADVANCE(865);
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '*') ADVANCE(862);
      if (lookahead == '+') ADVANCE(858);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '<') ADVANCE(855);
      if (lookahead == '=') ADVANCE(700);
      if (lookahead == '@') ADVANCE(828);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(779);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == ']') ADVANCE(780);
      if (lookahead == '^') ADVANCE(864);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'x') ADVANCE(337);
      if (lookahead == '{') ADVANCE(750);
      if (lookahead == 8853) ADVANCE(861);
      if (lookahead == 9654) ADVANCE(827);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == '*') ADVANCE(862);
      if (lookahead == '+') ADVANCE(858);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == 'X') ADVANCE(505);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(864);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '{') ADVANCE(750);
      if (lookahead == 8853) ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(786);
      if (lookahead == ',') ADVANCE(694);
      if (lookahead == '.') ADVANCE(797);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '[') ADVANCE(361);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '{') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(845);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(904);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'b') ADVANCE(678);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == 'v') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(807);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(806);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(792);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(793);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(781);
      if (lookahead == '[') ADVANCE(782);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(882);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(884);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(829);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(783);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(790);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(790);
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(810);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(311);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(133);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(345);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(354);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(355);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(356);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(859);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(199);
      END_STATE();
    case 101:
      if (lookahead == 'V') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(696);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(246);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(801);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(868);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(816);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(756);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead == 'y') ADVANCE(812);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'h') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(479);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(424);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(471);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(798);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(705);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(709);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(712);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(708);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(872);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'y') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(900);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(401);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 304:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'q') ADVANCE(455);
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(805);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(881);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(451);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(808);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(765);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(895);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(711);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 464:
      if (lookahead == 'v') ADVANCE(186);
      END_STATE();
    case 465:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 466:
      if (lookahead == 'x') ADVANCE(761);
      END_STATE();
    case 467:
      if (lookahead == 'x') ADVANCE(425);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 469:
      if (lookahead == 'y') ADVANCE(487);
      END_STATE();
    case 470:
      if (lookahead == 'y') ADVANCE(817);
      END_STATE();
    case 471:
      if (lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 472:
      if (lookahead == 'y') ADVANCE(362);
      END_STATE();
    case 473:
      if (lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 474:
      if (lookahead == '}') ADVANCE(854);
      END_STATE();
    case 475:
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 477:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(903);
      END_STATE();
    case 478:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      END_STATE();
    case 479:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 480:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 481:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 482:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      END_STATE();
    case 483:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(904);
      if (lookahead == '\r') ADVANCE(905);
      END_STATE();
    case 484:
      if (eof) ADVANCE(486);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 485:
      if (eof) ADVANCE(486);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(484)
      END_STATE();
    case 486:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(520);
      if (lookahead == 'I') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(549);
      if (lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'h') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(516);
      if (lookahead == 'p') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead == 'q') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == 't') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead == 'y') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(904);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(807);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '\r') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(741);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(741);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '"') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(739);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '\\') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(741);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(741);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(740);
      if (lookahead == '"') ADVANCE(904);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(736);
      if (lookahead == '"') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(739);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(845);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(897);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_all_DASHtraces);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_node_var_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(849);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(853);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(853);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(853);
      if (lookahead == '*') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(851);
      if (lookahead != 0) ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(846);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(853);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(853);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(848);
      if (lookahead == '\r') ADVANCE(852);
      if (lookahead == '*') ADVANCE(904);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(848);
      if (lookahead == '*') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(853);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(854);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(866);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_In);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_Out);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_Out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_Fr);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_Fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_hexcolor_token1);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(483);
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
  [27] = {.lex_state = 49, .external_lex_state = 1},
  [28] = {.lex_state = 49, .external_lex_state = 1},
  [29] = {.lex_state = 49, .external_lex_state = 1},
  [30] = {.lex_state = 48, .external_lex_state = 1},
  [31] = {.lex_state = 49, .external_lex_state = 1},
  [32] = {.lex_state = 49, .external_lex_state = 1},
  [33] = {.lex_state = 49, .external_lex_state = 1},
  [34] = {.lex_state = 49, .external_lex_state = 1},
  [35] = {.lex_state = 51, .external_lex_state = 1},
  [36] = {.lex_state = 52, .external_lex_state = 1},
  [37] = {.lex_state = 51, .external_lex_state = 1},
  [38] = {.lex_state = 49, .external_lex_state = 1},
  [39] = {.lex_state = 52, .external_lex_state = 1},
  [40] = {.lex_state = 49, .external_lex_state = 1},
  [41] = {.lex_state = 49, .external_lex_state = 1},
  [42] = {.lex_state = 52, .external_lex_state = 1},
  [43] = {.lex_state = 52, .external_lex_state = 1},
  [44] = {.lex_state = 52, .external_lex_state = 1},
  [45] = {.lex_state = 49, .external_lex_state = 1},
  [46] = {.lex_state = 52, .external_lex_state = 1},
  [47] = {.lex_state = 56, .external_lex_state = 1},
  [48] = {.lex_state = 52, .external_lex_state = 1},
  [49] = {.lex_state = 49, .external_lex_state = 1},
  [50] = {.lex_state = 49, .external_lex_state = 1},
  [51] = {.lex_state = 49, .external_lex_state = 1},
  [52] = {.lex_state = 52, .external_lex_state = 1},
  [53] = {.lex_state = 49, .external_lex_state = 1},
  [54] = {.lex_state = 52, .external_lex_state = 1},
  [55] = {.lex_state = 52, .external_lex_state = 1},
  [56] = {.lex_state = 56, .external_lex_state = 1},
  [57] = {.lex_state = 52, .external_lex_state = 1},
  [58] = {.lex_state = 52, .external_lex_state = 1},
  [59] = {.lex_state = 49, .external_lex_state = 1},
  [60] = {.lex_state = 52, .external_lex_state = 1},
  [61] = {.lex_state = 49, .external_lex_state = 1},
  [62] = {.lex_state = 49, .external_lex_state = 1},
  [63] = {.lex_state = 52, .external_lex_state = 1},
  [64] = {.lex_state = 49, .external_lex_state = 1},
  [65] = {.lex_state = 52, .external_lex_state = 1},
  [66] = {.lex_state = 56, .external_lex_state = 1},
  [67] = {.lex_state = 52, .external_lex_state = 1},
  [68] = {.lex_state = 48, .external_lex_state = 1},
  [69] = {.lex_state = 52, .external_lex_state = 1},
  [70] = {.lex_state = 52, .external_lex_state = 1},
  [71] = {.lex_state = 48, .external_lex_state = 1},
  [72] = {.lex_state = 48, .external_lex_state = 1},
  [73] = {.lex_state = 48, .external_lex_state = 1},
  [74] = {.lex_state = 48, .external_lex_state = 1},
  [75] = {.lex_state = 48, .external_lex_state = 1},
  [76] = {.lex_state = 49, .external_lex_state = 1},
  [77] = {.lex_state = 52, .external_lex_state = 1},
  [78] = {.lex_state = 48, .external_lex_state = 1},
  [79] = {.lex_state = 48, .external_lex_state = 1},
  [80] = {.lex_state = 53, .external_lex_state = 1},
  [81] = {.lex_state = 48, .external_lex_state = 1},
  [82] = {.lex_state = 48, .external_lex_state = 1},
  [83] = {.lex_state = 48, .external_lex_state = 1},
  [84] = {.lex_state = 52, .external_lex_state = 1},
  [85] = {.lex_state = 48, .external_lex_state = 1},
  [86] = {.lex_state = 53, .external_lex_state = 1},
  [87] = {.lex_state = 48, .external_lex_state = 1},
  [88] = {.lex_state = 48, .external_lex_state = 1},
  [89] = {.lex_state = 48, .external_lex_state = 1},
  [90] = {.lex_state = 51, .external_lex_state = 1},
  [91] = {.lex_state = 53, .external_lex_state = 1},
  [92] = {.lex_state = 48, .external_lex_state = 1},
  [93] = {.lex_state = 51, .external_lex_state = 1},
  [94] = {.lex_state = 51, .external_lex_state = 1},
  [95] = {.lex_state = 53, .external_lex_state = 1},
  [96] = {.lex_state = 48, .external_lex_state = 1},
  [97] = {.lex_state = 53, .external_lex_state = 1},
  [98] = {.lex_state = 48, .external_lex_state = 1},
  [99] = {.lex_state = 53, .external_lex_state = 1},
  [100] = {.lex_state = 48, .external_lex_state = 1},
  [101] = {.lex_state = 48, .external_lex_state = 1},
  [102] = {.lex_state = 48, .external_lex_state = 1},
  [103] = {.lex_state = 48, .external_lex_state = 1},
  [104] = {.lex_state = 53, .external_lex_state = 1},
  [105] = {.lex_state = 48, .external_lex_state = 1},
  [106] = {.lex_state = 48, .external_lex_state = 1},
  [107] = {.lex_state = 53, .external_lex_state = 1},
  [108] = {.lex_state = 48, .external_lex_state = 1},
  [109] = {.lex_state = 48, .external_lex_state = 1},
  [110] = {.lex_state = 46, .external_lex_state = 1},
  [111] = {.lex_state = 48, .external_lex_state = 1},
  [112] = {.lex_state = 68, .external_lex_state = 1},
  [113] = {.lex_state = 48, .external_lex_state = 1},
  [114] = {.lex_state = 53, .external_lex_state = 1},
  [115] = {.lex_state = 53, .external_lex_state = 1},
  [116] = {.lex_state = 53, .external_lex_state = 1},
  [117] = {.lex_state = 68, .external_lex_state = 1},
  [118] = {.lex_state = 53, .external_lex_state = 1},
  [119] = {.lex_state = 53, .external_lex_state = 1},
  [120] = {.lex_state = 53, .external_lex_state = 1},
  [121] = {.lex_state = 53, .external_lex_state = 1},
  [122] = {.lex_state = 48, .external_lex_state = 1},
  [123] = {.lex_state = 47, .external_lex_state = 1},
  [124] = {.lex_state = 53, .external_lex_state = 1},
  [125] = {.lex_state = 47, .external_lex_state = 1},
  [126] = {.lex_state = 53, .external_lex_state = 1},
  [127] = {.lex_state = 68, .external_lex_state = 1},
  [128] = {.lex_state = 48, .external_lex_state = 1},
  [129] = {.lex_state = 53, .external_lex_state = 1},
  [130] = {.lex_state = 68, .external_lex_state = 1},
  [131] = {.lex_state = 53, .external_lex_state = 1},
  [132] = {.lex_state = 53, .external_lex_state = 1},
  [133] = {.lex_state = 48, .external_lex_state = 1},
  [134] = {.lex_state = 53, .external_lex_state = 1},
  [135] = {.lex_state = 50, .external_lex_state = 1},
  [136] = {.lex_state = 48, .external_lex_state = 1},
  [137] = {.lex_state = 53, .external_lex_state = 1},
  [138] = {.lex_state = 49, .external_lex_state = 1},
  [139] = {.lex_state = 53, .external_lex_state = 1},
  [140] = {.lex_state = 49, .external_lex_state = 1},
  [141] = {.lex_state = 53, .external_lex_state = 1},
  [142] = {.lex_state = 49, .external_lex_state = 1},
  [143] = {.lex_state = 69, .external_lex_state = 1},
  [144] = {.lex_state = 53, .external_lex_state = 1},
  [145] = {.lex_state = 48, .external_lex_state = 1},
  [146] = {.lex_state = 53, .external_lex_state = 1},
  [147] = {.lex_state = 53, .external_lex_state = 1},
  [148] = {.lex_state = 48, .external_lex_state = 1},
  [149] = {.lex_state = 53, .external_lex_state = 1},
  [150] = {.lex_state = 56, .external_lex_state = 1},
  [151] = {.lex_state = 69, .external_lex_state = 1},
  [152] = {.lex_state = 53, .external_lex_state = 1},
  [153] = {.lex_state = 53, .external_lex_state = 1},
  [154] = {.lex_state = 53, .external_lex_state = 1},
  [155] = {.lex_state = 53, .external_lex_state = 1},
  [156] = {.lex_state = 53, .external_lex_state = 1},
  [157] = {.lex_state = 53, .external_lex_state = 1},
  [158] = {.lex_state = 53, .external_lex_state = 1},
  [159] = {.lex_state = 53, .external_lex_state = 1},
  [160] = {.lex_state = 53, .external_lex_state = 1},
  [161] = {.lex_state = 54, .external_lex_state = 1},
  [162] = {.lex_state = 54, .external_lex_state = 1},
  [163] = {.lex_state = 51, .external_lex_state = 1},
  [164] = {.lex_state = 69, .external_lex_state = 1},
  [165] = {.lex_state = 48, .external_lex_state = 1},
  [166] = {.lex_state = 48, .external_lex_state = 1},
  [167] = {.lex_state = 54, .external_lex_state = 1},
  [168] = {.lex_state = 70, .external_lex_state = 1},
  [169] = {.lex_state = 53, .external_lex_state = 1},
  [170] = {.lex_state = 54, .external_lex_state = 1},
  [171] = {.lex_state = 51, .external_lex_state = 1},
  [172] = {.lex_state = 54, .external_lex_state = 1},
  [173] = {.lex_state = 70, .external_lex_state = 1},
  [174] = {.lex_state = 53, .external_lex_state = 1},
  [175] = {.lex_state = 70, .external_lex_state = 1},
  [176] = {.lex_state = 70, .external_lex_state = 1},
  [177] = {.lex_state = 56, .external_lex_state = 1},
  [178] = {.lex_state = 71, .external_lex_state = 1},
  [179] = {.lex_state = 51, .external_lex_state = 1},
  [180] = {.lex_state = 56, .external_lex_state = 1},
  [181] = {.lex_state = 55, .external_lex_state = 1},
  [182] = {.lex_state = 51, .external_lex_state = 1},
  [183] = {.lex_state = 56, .external_lex_state = 1},
  [184] = {.lex_state = 56, .external_lex_state = 1},
  [185] = {.lex_state = 56, .external_lex_state = 1},
  [186] = {.lex_state = 56, .external_lex_state = 1},
  [187] = {.lex_state = 51, .external_lex_state = 1},
  [188] = {.lex_state = 51, .external_lex_state = 1},
  [189] = {.lex_state = 56, .external_lex_state = 1},
  [190] = {.lex_state = 51, .external_lex_state = 1},
  [191] = {.lex_state = 56, .external_lex_state = 1},
  [192] = {.lex_state = 56, .external_lex_state = 1},
  [193] = {.lex_state = 56, .external_lex_state = 1},
  [194] = {.lex_state = 56, .external_lex_state = 1},
  [195] = {.lex_state = 56, .external_lex_state = 1},
  [196] = {.lex_state = 56, .external_lex_state = 1},
  [197] = {.lex_state = 56, .external_lex_state = 1},
  [198] = {.lex_state = 56, .external_lex_state = 1},
  [199] = {.lex_state = 56, .external_lex_state = 1},
  [200] = {.lex_state = 48, .external_lex_state = 1},
  [201] = {.lex_state = 48, .external_lex_state = 1},
  [202] = {.lex_state = 56, .external_lex_state = 1},
  [203] = {.lex_state = 56, .external_lex_state = 1},
  [204] = {.lex_state = 51, .external_lex_state = 1},
  [205] = {.lex_state = 51, .external_lex_state = 1},
  [206] = {.lex_state = 51, .external_lex_state = 1},
  [207] = {.lex_state = 0, .external_lex_state = 1},
  [208] = {.lex_state = 48, .external_lex_state = 1},
  [209] = {.lex_state = 56, .external_lex_state = 1},
  [210] = {.lex_state = 71, .external_lex_state = 1},
  [211] = {.lex_state = 51, .external_lex_state = 1},
  [212] = {.lex_state = 71, .external_lex_state = 1},
  [213] = {.lex_state = 54, .external_lex_state = 1},
  [214] = {.lex_state = 56, .external_lex_state = 1},
  [215] = {.lex_state = 56, .external_lex_state = 1},
  [216] = {.lex_state = 51, .external_lex_state = 1},
  [217] = {.lex_state = 56, .external_lex_state = 1},
  [218] = {.lex_state = 56, .external_lex_state = 1},
  [219] = {.lex_state = 56, .external_lex_state = 1},
  [220] = {.lex_state = 56, .external_lex_state = 1},
  [221] = {.lex_state = 56, .external_lex_state = 1},
  [222] = {.lex_state = 56, .external_lex_state = 1},
  [223] = {.lex_state = 56, .external_lex_state = 1},
  [224] = {.lex_state = 51, .external_lex_state = 1},
  [225] = {.lex_state = 56, .external_lex_state = 1},
  [226] = {.lex_state = 56, .external_lex_state = 1},
  [227] = {.lex_state = 51, .external_lex_state = 1},
  [228] = {.lex_state = 56, .external_lex_state = 1},
  [229] = {.lex_state = 56, .external_lex_state = 1},
  [230] = {.lex_state = 51, .external_lex_state = 1},
  [231] = {.lex_state = 71, .external_lex_state = 1},
  [232] = {.lex_state = 56, .external_lex_state = 1},
  [233] = {.lex_state = 56, .external_lex_state = 1},
  [234] = {.lex_state = 71, .external_lex_state = 1},
  [235] = {.lex_state = 56, .external_lex_state = 1},
  [236] = {.lex_state = 56, .external_lex_state = 1},
  [237] = {.lex_state = 56, .external_lex_state = 1},
  [238] = {.lex_state = 56, .external_lex_state = 1},
  [239] = {.lex_state = 71, .external_lex_state = 1},
  [240] = {.lex_state = 56, .external_lex_state = 1},
  [241] = {.lex_state = 56, .external_lex_state = 1},
  [242] = {.lex_state = 56, .external_lex_state = 1},
  [243] = {.lex_state = 56, .external_lex_state = 1},
  [244] = {.lex_state = 56, .external_lex_state = 1},
  [245] = {.lex_state = 56, .external_lex_state = 1},
  [246] = {.lex_state = 56, .external_lex_state = 1},
  [247] = {.lex_state = 54, .external_lex_state = 1},
  [248] = {.lex_state = 56, .external_lex_state = 1},
  [249] = {.lex_state = 56, .external_lex_state = 1},
  [250] = {.lex_state = 54, .external_lex_state = 1},
  [251] = {.lex_state = 51, .external_lex_state = 1},
  [252] = {.lex_state = 71, .external_lex_state = 1},
  [253] = {.lex_state = 56, .external_lex_state = 1},
  [254] = {.lex_state = 51, .external_lex_state = 1},
  [255] = {.lex_state = 71, .external_lex_state = 1},
  [256] = {.lex_state = 51, .external_lex_state = 1},
  [257] = {.lex_state = 56, .external_lex_state = 1},
  [258] = {.lex_state = 51, .external_lex_state = 1},
  [259] = {.lex_state = 51, .external_lex_state = 1},
  [260] = {.lex_state = 51, .external_lex_state = 1},
  [261] = {.lex_state = 51, .external_lex_state = 1},
  [262] = {.lex_state = 71, .external_lex_state = 1},
  [263] = {.lex_state = 54, .external_lex_state = 1},
  [264] = {.lex_state = 41, .external_lex_state = 1},
  [265] = {.lex_state = 41, .external_lex_state = 1},
  [266] = {.lex_state = 53, .external_lex_state = 1},
  [267] = {.lex_state = 56, .external_lex_state = 1},
  [268] = {.lex_state = 56, .external_lex_state = 1},
  [269] = {.lex_state = 54, .external_lex_state = 1},
  [270] = {.lex_state = 56, .external_lex_state = 1},
  [271] = {.lex_state = 51, .external_lex_state = 1},
  [272] = {.lex_state = 54, .external_lex_state = 1},
  [273] = {.lex_state = 54, .external_lex_state = 1},
  [274] = {.lex_state = 51, .external_lex_state = 1},
  [275] = {.lex_state = 41, .external_lex_state = 1},
  [276] = {.lex_state = 53, .external_lex_state = 1},
  [277] = {.lex_state = 56, .external_lex_state = 1},
  [278] = {.lex_state = 54, .external_lex_state = 1},
  [279] = {.lex_state = 56, .external_lex_state = 1},
  [280] = {.lex_state = 56, .external_lex_state = 1},
  [281] = {.lex_state = 56, .external_lex_state = 1},
  [282] = {.lex_state = 53, .external_lex_state = 1},
  [283] = {.lex_state = 56, .external_lex_state = 1},
  [284] = {.lex_state = 41, .external_lex_state = 1},
  [285] = {.lex_state = 51, .external_lex_state = 1},
  [286] = {.lex_state = 56, .external_lex_state = 1},
  [287] = {.lex_state = 41, .external_lex_state = 1},
  [288] = {.lex_state = 56, .external_lex_state = 1},
  [289] = {.lex_state = 41, .external_lex_state = 1},
  [290] = {.lex_state = 51, .external_lex_state = 1},
  [291] = {.lex_state = 54, .external_lex_state = 1},
  [292] = {.lex_state = 56, .external_lex_state = 1},
  [293] = {.lex_state = 56, .external_lex_state = 1},
  [294] = {.lex_state = 41, .external_lex_state = 1},
  [295] = {.lex_state = 56, .external_lex_state = 1},
  [296] = {.lex_state = 54, .external_lex_state = 1},
  [297] = {.lex_state = 56, .external_lex_state = 1},
  [298] = {.lex_state = 41, .external_lex_state = 1},
  [299] = {.lex_state = 44, .external_lex_state = 1},
  [300] = {.lex_state = 53, .external_lex_state = 1},
  [301] = {.lex_state = 54, .external_lex_state = 1},
  [302] = {.lex_state = 44, .external_lex_state = 1},
  [303] = {.lex_state = 44, .external_lex_state = 1},
  [304] = {.lex_state = 45, .external_lex_state = 1},
  [305] = {.lex_state = 44, .external_lex_state = 1},
  [306] = {.lex_state = 45, .external_lex_state = 1},
  [307] = {.lex_state = 44, .external_lex_state = 1},
  [308] = {.lex_state = 45, .external_lex_state = 1},
  [309] = {.lex_state = 54, .external_lex_state = 1},
  [310] = {.lex_state = 45, .external_lex_state = 1},
  [311] = {.lex_state = 45, .external_lex_state = 1},
  [312] = {.lex_state = 44, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 44, .external_lex_state = 1},
  [315] = {.lex_state = 45, .external_lex_state = 1},
  [316] = {.lex_state = 45, .external_lex_state = 1},
  [317] = {.lex_state = 44, .external_lex_state = 1},
  [318] = {.lex_state = 44, .external_lex_state = 1},
  [319] = {.lex_state = 45, .external_lex_state = 1},
  [320] = {.lex_state = 44, .external_lex_state = 1},
  [321] = {.lex_state = 53, .external_lex_state = 1},
  [322] = {.lex_state = 45, .external_lex_state = 1},
  [323] = {.lex_state = 54, .external_lex_state = 1},
  [324] = {.lex_state = 44, .external_lex_state = 1},
  [325] = {.lex_state = 44, .external_lex_state = 1},
  [326] = {.lex_state = 44, .external_lex_state = 1},
  [327] = {.lex_state = 54, .external_lex_state = 1},
  [328] = {.lex_state = 44, .external_lex_state = 1},
  [329] = {.lex_state = 44, .external_lex_state = 1},
  [330] = {.lex_state = 44, .external_lex_state = 1},
  [331] = {.lex_state = 44, .external_lex_state = 1},
  [332] = {.lex_state = 44, .external_lex_state = 1},
  [333] = {.lex_state = 54, .external_lex_state = 1},
  [334] = {.lex_state = 44, .external_lex_state = 1},
  [335] = {.lex_state = 45, .external_lex_state = 1},
  [336] = {.lex_state = 44, .external_lex_state = 1},
  [337] = {.lex_state = 44, .external_lex_state = 1},
  [338] = {.lex_state = 44, .external_lex_state = 1},
  [339] = {.lex_state = 54, .external_lex_state = 1},
  [340] = {.lex_state = 54, .external_lex_state = 1},
  [341] = {.lex_state = 55, .external_lex_state = 1},
  [342] = {.lex_state = 44, .external_lex_state = 1},
  [343] = {.lex_state = 54, .external_lex_state = 1},
  [344] = {.lex_state = 45, .external_lex_state = 1},
  [345] = {.lex_state = 55, .external_lex_state = 1},
  [346] = {.lex_state = 55, .external_lex_state = 1},
  [347] = {.lex_state = 45, .external_lex_state = 1},
  [348] = {.lex_state = 55, .external_lex_state = 1},
  [349] = {.lex_state = 55, .external_lex_state = 1},
  [350] = {.lex_state = 41, .external_lex_state = 1},
  [351] = {.lex_state = 54, .external_lex_state = 1},
  [352] = {.lex_state = 41, .external_lex_state = 1},
  [353] = {.lex_state = 41, .external_lex_state = 1},
  [354] = {.lex_state = 55, .external_lex_state = 1},
  [355] = {.lex_state = 44, .external_lex_state = 1},
  [356] = {.lex_state = 54, .external_lex_state = 1},
  [357] = {.lex_state = 55, .external_lex_state = 1},
  [358] = {.lex_state = 55, .external_lex_state = 1},
  [359] = {.lex_state = 55, .external_lex_state = 1},
  [360] = {.lex_state = 55, .external_lex_state = 1},
  [361] = {.lex_state = 55, .external_lex_state = 1},
  [362] = {.lex_state = 55, .external_lex_state = 1},
  [363] = {.lex_state = 46, .external_lex_state = 1},
  [364] = {.lex_state = 55, .external_lex_state = 1},
  [365] = {.lex_state = 51, .external_lex_state = 1},
  [366] = {.lex_state = 44, .external_lex_state = 1},
  [367] = {.lex_state = 44, .external_lex_state = 1},
  [368] = {.lex_state = 55, .external_lex_state = 1},
  [369] = {.lex_state = 55, .external_lex_state = 1},
  [370] = {.lex_state = 55, .external_lex_state = 1},
  [371] = {.lex_state = 55, .external_lex_state = 1},
  [372] = {.lex_state = 55, .external_lex_state = 1},
  [373] = {.lex_state = 55, .external_lex_state = 1},
  [374] = {.lex_state = 55, .external_lex_state = 1},
  [375] = {.lex_state = 55, .external_lex_state = 1},
  [376] = {.lex_state = 55, .external_lex_state = 1},
  [377] = {.lex_state = 55, .external_lex_state = 1},
  [378] = {.lex_state = 55, .external_lex_state = 1},
  [379] = {.lex_state = 55, .external_lex_state = 1},
  [380] = {.lex_state = 55, .external_lex_state = 1},
  [381] = {.lex_state = 55, .external_lex_state = 1},
  [382] = {.lex_state = 53, .external_lex_state = 1},
  [383] = {.lex_state = 55, .external_lex_state = 1},
  [384] = {.lex_state = 55, .external_lex_state = 1},
  [385] = {.lex_state = 53, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 55, .external_lex_state = 1},
  [388] = {.lex_state = 54, .external_lex_state = 1},
  [389] = {.lex_state = 49, .external_lex_state = 1},
  [390] = {.lex_state = 55, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 53, .external_lex_state = 1},
  [393] = {.lex_state = 46, .external_lex_state = 1},
  [394] = {.lex_state = 0, .external_lex_state = 1},
  [395] = {.lex_state = 54, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 44, .external_lex_state = 1},
  [398] = {.lex_state = 53, .external_lex_state = 1},
  [399] = {.lex_state = 49, .external_lex_state = 1},
  [400] = {.lex_state = 53, .external_lex_state = 1},
  [401] = {.lex_state = 0, .external_lex_state = 1},
  [402] = {.lex_state = 44, .external_lex_state = 1},
  [403] = {.lex_state = 55, .external_lex_state = 1},
  [404] = {.lex_state = 41, .external_lex_state = 1},
  [405] = {.lex_state = 53, .external_lex_state = 1},
  [406] = {.lex_state = 53, .external_lex_state = 1},
  [407] = {.lex_state = 53, .external_lex_state = 1},
  [408] = {.lex_state = 53, .external_lex_state = 1},
  [409] = {.lex_state = 41, .external_lex_state = 1},
  [410] = {.lex_state = 48, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 48, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 50, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 50, .external_lex_state = 1},
  [418] = {.lex_state = 54, .external_lex_state = 1},
  [419] = {.lex_state = 53, .external_lex_state = 1},
  [420] = {.lex_state = 41, .external_lex_state = 1},
  [421] = {.lex_state = 41, .external_lex_state = 1},
  [422] = {.lex_state = 0, .external_lex_state = 1},
  [423] = {.lex_state = 54, .external_lex_state = 1},
  [424] = {.lex_state = 50, .external_lex_state = 1},
  [425] = {.lex_state = 54, .external_lex_state = 1},
  [426] = {.lex_state = 50, .external_lex_state = 1},
  [427] = {.lex_state = 54, .external_lex_state = 1},
  [428] = {.lex_state = 0, .external_lex_state = 1},
  [429] = {.lex_state = 41, .external_lex_state = 1},
  [430] = {.lex_state = 50, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 48, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 0, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 0, .external_lex_state = 1},
  [441] = {.lex_state = 42, .external_lex_state = 1},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 53, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 0, .external_lex_state = 1},
  [448] = {.lex_state = 42, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 53, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 0, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 53, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 53, .external_lex_state = 1},
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
  [472] = {.lex_state = 53, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 0, .external_lex_state = 1},
  [475] = {.lex_state = 54, .external_lex_state = 1},
  [476] = {.lex_state = 53, .external_lex_state = 1},
  [477] = {.lex_state = 54, .external_lex_state = 1},
  [478] = {.lex_state = 54, .external_lex_state = 1},
  [479] = {.lex_state = 0, .external_lex_state = 1},
  [480] = {.lex_state = 0, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 0, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 0, .external_lex_state = 1},
  [485] = {.lex_state = 54, .external_lex_state = 1},
  [486] = {.lex_state = 0, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 1},
  [489] = {.lex_state = 41, .external_lex_state = 1},
  [490] = {.lex_state = 0, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 0, .external_lex_state = 1},
  [493] = {.lex_state = 54, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 54, .external_lex_state = 1},
  [496] = {.lex_state = 54, .external_lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 1},
  [498] = {.lex_state = 0, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 54, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 54, .external_lex_state = 1},
  [503] = {.lex_state = 0, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 41, .external_lex_state = 1},
  [507] = {.lex_state = 0, .external_lex_state = 1},
  [508] = {.lex_state = 0, .external_lex_state = 1},
  [509] = {.lex_state = 53, .external_lex_state = 1},
  [510] = {.lex_state = 0, .external_lex_state = 1},
  [511] = {.lex_state = 0, .external_lex_state = 1},
  [512] = {.lex_state = 0, .external_lex_state = 1},
  [513] = {.lex_state = 0, .external_lex_state = 1},
  [514] = {.lex_state = 54, .external_lex_state = 1},
  [515] = {.lex_state = 0, .external_lex_state = 1},
  [516] = {.lex_state = 41, .external_lex_state = 1},
  [517] = {.lex_state = 53, .external_lex_state = 1},
  [518] = {.lex_state = 53, .external_lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 1},
  [520] = {.lex_state = 0, .external_lex_state = 1},
  [521] = {.lex_state = 0, .external_lex_state = 1},
  [522] = {.lex_state = 0, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 54, .external_lex_state = 1},
  [525] = {.lex_state = 0, .external_lex_state = 1},
  [526] = {.lex_state = 0, .external_lex_state = 1},
  [527] = {.lex_state = 53, .external_lex_state = 1},
  [528] = {.lex_state = 737, .external_lex_state = 1},
  [529] = {.lex_state = 41, .external_lex_state = 1},
  [530] = {.lex_state = 0, .external_lex_state = 1},
  [531] = {.lex_state = 41, .external_lex_state = 1},
  [532] = {.lex_state = 0, .external_lex_state = 1},
  [533] = {.lex_state = 54, .external_lex_state = 1},
  [534] = {.lex_state = 0, .external_lex_state = 1},
  [535] = {.lex_state = 50, .external_lex_state = 1},
  [536] = {.lex_state = 49, .external_lex_state = 1},
  [537] = {.lex_state = 41, .external_lex_state = 1},
  [538] = {.lex_state = 41, .external_lex_state = 1},
  [539] = {.lex_state = 42, .external_lex_state = 1},
  [540] = {.lex_state = 54, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 0, .external_lex_state = 1},
  [543] = {.lex_state = 0, .external_lex_state = 1},
  [544] = {.lex_state = 41, .external_lex_state = 1},
  [545] = {.lex_state = 48, .external_lex_state = 1},
  [546] = {.lex_state = 737, .external_lex_state = 1},
  [547] = {.lex_state = 0, .external_lex_state = 1},
  [548] = {.lex_state = 0, .external_lex_state = 1},
  [549] = {.lex_state = 0, .external_lex_state = 1},
  [550] = {.lex_state = 41, .external_lex_state = 1},
  [551] = {.lex_state = 0, .external_lex_state = 1},
  [552] = {.lex_state = 41, .external_lex_state = 1},
  [553] = {.lex_state = 41, .external_lex_state = 1},
  [554] = {.lex_state = 41, .external_lex_state = 1},
  [555] = {.lex_state = 0, .external_lex_state = 1},
  [556] = {.lex_state = 0, .external_lex_state = 1},
  [557] = {.lex_state = 41, .external_lex_state = 1},
  [558] = {.lex_state = 0, .external_lex_state = 1},
  [559] = {.lex_state = 42, .external_lex_state = 1},
  [560] = {.lex_state = 41, .external_lex_state = 1},
  [561] = {.lex_state = 41, .external_lex_state = 1},
  [562] = {.lex_state = 41, .external_lex_state = 1},
  [563] = {.lex_state = 0, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 41, .external_lex_state = 1},
  [566] = {.lex_state = 41, .external_lex_state = 1},
  [567] = {.lex_state = 41, .external_lex_state = 1},
  [568] = {.lex_state = 0, .external_lex_state = 1},
  [569] = {.lex_state = 41, .external_lex_state = 1},
  [570] = {.lex_state = 0, .external_lex_state = 1},
  [571] = {.lex_state = 53, .external_lex_state = 1},
  [572] = {.lex_state = 0, .external_lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 1},
  [574] = {.lex_state = 0, .external_lex_state = 1},
  [575] = {.lex_state = 0, .external_lex_state = 1},
  [576] = {.lex_state = 49, .external_lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 0, .external_lex_state = 1},
  [580] = {.lex_state = 0, .external_lex_state = 1},
  [581] = {.lex_state = 0, .external_lex_state = 1},
  [582] = {.lex_state = 54, .external_lex_state = 1},
  [583] = {.lex_state = 0, .external_lex_state = 1},
  [584] = {.lex_state = 0, .external_lex_state = 1},
  [585] = {.lex_state = 42, .external_lex_state = 1},
  [586] = {.lex_state = 0, .external_lex_state = 1},
  [587] = {.lex_state = 0, .external_lex_state = 1},
  [588] = {.lex_state = 0, .external_lex_state = 1},
  [589] = {.lex_state = 0, .external_lex_state = 1},
  [590] = {.lex_state = 0, .external_lex_state = 1},
  [591] = {.lex_state = 53, .external_lex_state = 1},
  [592] = {.lex_state = 53, .external_lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 1},
  [594] = {.lex_state = 0, .external_lex_state = 1},
  [595] = {.lex_state = 0, .external_lex_state = 1},
  [596] = {.lex_state = 53, .external_lex_state = 1},
  [597] = {.lex_state = 0, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 1},
  [602] = {.lex_state = 0, .external_lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 1},
  [604] = {.lex_state = 42, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 53, .external_lex_state = 1},
  [607] = {.lex_state = 0, .external_lex_state = 1},
  [608] = {.lex_state = 0, .external_lex_state = 1},
  [609] = {.lex_state = 0, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 41, .external_lex_state = 1},
  [612] = {.lex_state = 0, .external_lex_state = 1},
  [613] = {.lex_state = 0, .external_lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 1},
  [615] = {.lex_state = 0, .external_lex_state = 1},
  [616] = {.lex_state = 0, .external_lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 1},
  [619] = {.lex_state = 0, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 0, .external_lex_state = 1},
  [622] = {.lex_state = 53, .external_lex_state = 1},
  [623] = {.lex_state = 0, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 737, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 0, .external_lex_state = 1},
  [632] = {.lex_state = 0, .external_lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 1},
  [634] = {.lex_state = 0, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 1},
  [637] = {.lex_state = 0, .external_lex_state = 1},
  [638] = {.lex_state = 0, .external_lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 1},
  [640] = {.lex_state = 0, .external_lex_state = 1},
  [641] = {.lex_state = 0, .external_lex_state = 1},
  [642] = {.lex_state = 0, .external_lex_state = 1},
  [643] = {.lex_state = 0, .external_lex_state = 1},
  [644] = {.lex_state = 0, .external_lex_state = 1},
  [645] = {.lex_state = 0, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 0, .external_lex_state = 1},
  [648] = {.lex_state = 0, .external_lex_state = 1},
  [649] = {.lex_state = 0, .external_lex_state = 1},
  [650] = {.lex_state = 41, .external_lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 1},
  [652] = {.lex_state = 0, .external_lex_state = 1},
  [653] = {.lex_state = 0, .external_lex_state = 1},
  [654] = {.lex_state = 53, .external_lex_state = 1},
  [655] = {.lex_state = 0, .external_lex_state = 1},
  [656] = {.lex_state = 0, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 0, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 0, .external_lex_state = 1},
  [661] = {.lex_state = 0, .external_lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 1},
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 0, .external_lex_state = 1},
  [666] = {.lex_state = 0, .external_lex_state = 1},
  [667] = {.lex_state = 53, .external_lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 0, .external_lex_state = 1},
  [671] = {.lex_state = 0, .external_lex_state = 1},
  [672] = {.lex_state = 53, .external_lex_state = 1},
  [673] = {.lex_state = 0, .external_lex_state = 1},
  [674] = {.lex_state = 737, .external_lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 1},
  [677] = {.lex_state = 0, .external_lex_state = 1},
  [678] = {.lex_state = 0, .external_lex_state = 1},
  [679] = {.lex_state = 41, .external_lex_state = 1},
  [680] = {.lex_state = 0, .external_lex_state = 1},
  [681] = {.lex_state = 0, .external_lex_state = 1},
  [682] = {.lex_state = 0, .external_lex_state = 1},
  [683] = {.lex_state = 0, .external_lex_state = 1},
  [684] = {.lex_state = 0, .external_lex_state = 1},
  [685] = {.lex_state = 0, .external_lex_state = 1},
  [686] = {.lex_state = 0, .external_lex_state = 1},
  [687] = {.lex_state = 0, .external_lex_state = 1},
  [688] = {.lex_state = 0, .external_lex_state = 1},
  [689] = {.lex_state = 0, .external_lex_state = 1},
  [690] = {.lex_state = 0, .external_lex_state = 1},
  [691] = {.lex_state = 0, .external_lex_state = 1},
  [692] = {.lex_state = 53, .external_lex_state = 1},
  [693] = {.lex_state = 42, .external_lex_state = 1},
  [694] = {.lex_state = 0, .external_lex_state = 1},
  [695] = {.lex_state = 0, .external_lex_state = 1},
  [696] = {.lex_state = 53, .external_lex_state = 1},
  [697] = {.lex_state = 53, .external_lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 1},
  [699] = {.lex_state = 0, .external_lex_state = 1},
  [700] = {.lex_state = 41, .external_lex_state = 1},
  [701] = {.lex_state = 0, .external_lex_state = 1},
  [702] = {.lex_state = 0, .external_lex_state = 1},
  [703] = {.lex_state = 53, .external_lex_state = 1},
  [704] = {.lex_state = 49, .external_lex_state = 1},
  [705] = {.lex_state = 41, .external_lex_state = 1},
  [706] = {.lex_state = 53, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 53, .external_lex_state = 1},
  [709] = {.lex_state = 0, .external_lex_state = 1},
  [710] = {.lex_state = 0, .external_lex_state = 1},
  [711] = {.lex_state = 41, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 53, .external_lex_state = 1},
  [714] = {.lex_state = 53, .external_lex_state = 1},
  [715] = {.lex_state = 41, .external_lex_state = 1},
  [716] = {.lex_state = 53, .external_lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 1},
  [718] = {.lex_state = 41, .external_lex_state = 1},
  [719] = {.lex_state = 0, .external_lex_state = 1},
  [720] = {.lex_state = 41, .external_lex_state = 1},
  [721] = {.lex_state = 849, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 53, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 0, .external_lex_state = 1},
  [727] = {.lex_state = 0, .external_lex_state = 1},
  [728] = {.lex_state = 0, .external_lex_state = 1},
  [729] = {.lex_state = 0, .external_lex_state = 1},
  [730] = {.lex_state = 0, .external_lex_state = 1},
  [731] = {.lex_state = 0, .external_lex_state = 1},
  [732] = {.lex_state = 0, .external_lex_state = 1},
  [733] = {.lex_state = 41, .external_lex_state = 1},
  [734] = {.lex_state = 0, .external_lex_state = 1},
  [735] = {.lex_state = 0, .external_lex_state = 1},
  [736] = {.lex_state = 0, .external_lex_state = 1},
  [737] = {.lex_state = 0, .external_lex_state = 1},
  [738] = {.lex_state = 0, .external_lex_state = 1},
  [739] = {.lex_state = 54, .external_lex_state = 1},
  [740] = {.lex_state = 0, .external_lex_state = 1},
  [741] = {.lex_state = 41, .external_lex_state = 1},
  [742] = {.lex_state = 0, .external_lex_state = 1},
  [743] = {.lex_state = 0, .external_lex_state = 1},
  [744] = {.lex_state = 0, .external_lex_state = 1},
  [745] = {.lex_state = 0, .external_lex_state = 1},
  [746] = {.lex_state = 0, .external_lex_state = 1},
  [747] = {.lex_state = 0, .external_lex_state = 1},
  [748] = {.lex_state = 41, .external_lex_state = 1},
  [749] = {.lex_state = 0, .external_lex_state = 1},
  [750] = {.lex_state = 0, .external_lex_state = 1},
  [751] = {.lex_state = 53, .external_lex_state = 1},
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
    [anon_sym_all_DASHtraces] = ACTIONS(1),
    [anon_sym_exists_DASHtrace] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_qed] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_node_var_token1] = ACTIONS(1),
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
    [anon_sym_Ex] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_All] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(745),
    [sym_security_protocol_theory] = STATE(738),
    [anon_sym_theory] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(443), 1,
      sym_formula,
    STATE(559), 1,
      sym_node_var,
    STATE(579), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(641), 1,
      sym_goal,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [124] = 37,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(443), 1,
      sym_formula,
    STATE(559), 1,
      sym_node_var,
    STATE(579), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(593), 1,
      sym_goal,
    STATE(604), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [248] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(187), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(224), 1,
      sym_disjunction,
    STATE(227), 1,
      sym_imp,
    STATE(230), 1,
      sym_formula,
    STATE(321), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [366] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    STATE(712), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [484] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(572), 1,
      sym_formula,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [602] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(187), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(224), 1,
      sym_disjunction,
    STATE(230), 1,
      sym_formula,
    STATE(261), 1,
      sym_imp,
    STATE(321), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [720] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    STATE(607), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [838] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    STATE(609), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [956] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(448), 1,
      sym_node_var,
    STATE(539), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(605), 1,
      sym_fact,
    STATE(636), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1074] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(539), 1,
      sym__msetterm,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(605), 1,
      sym_fact,
    STATE(636), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1192] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    STATE(637), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1310] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    STATE(639), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1428] = 35,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(399), 1,
      sym_imp,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    STATE(663), 1,
      sym_formula,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1546] = 34,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      anon_sym_18,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(256), 1,
      sym_imp,
    STATE(284), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_conjunction,
    STATE(404), 1,
      sym_disjunction,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1661] = 34,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      anon_sym_18,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(254), 1,
      sym_imp,
    STATE(284), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_conjunction,
    STATE(404), 1,
      sym_disjunction,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1776] = 34,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(256), 1,
      sym_imp,
    STATE(290), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(365), 1,
      sym_disjunction,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1891] = 34,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      anon_sym_18,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(224), 1,
      sym_disjunction,
    STATE(254), 1,
      sym_imp,
    STATE(275), 1,
      sym_negation,
    STATE(294), 1,
      sym_conjunction,
    STATE(300), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2006] = 32,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      anon_sym_18,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(258), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2115] = 32,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      anon_sym_18,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(258), 1,
      sym_conjunction,
    STATE(275), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2224] = 32,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(190), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(258), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2333] = 32,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(258), 1,
      sym_conjunction,
    STATE(321), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2442] = 31,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_18,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(260), 1,
      sym_negation,
    STATE(321), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2548] = 31,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      anon_sym_18,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(260), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2654] = 28,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(259), 1,
      sym_atom,
    STATE(300), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2751] = 28,
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
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_last,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(259), 1,
      sym_atom,
    STATE(321), 1,
      sym_quantifier,
    STATE(559), 1,
      sym_node_var,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(604), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(31), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(33), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(37), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(39), 2,
      anon_sym_21,
      anon_sym_22,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2848] = 8,
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(53), 1,
      sym_not_function,
    STATE(64), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(52), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(47), 12,
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
  [2892] = 8,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(53), 1,
      sym_not_function,
    STATE(64), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(59), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(55), 12,
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
  [2936] = 8,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(53), 1,
      sym_not_function,
    STATE(64), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(59), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(61), 12,
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
  [2980] = 8,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [3024] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 20,
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
  [3061] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(83), 20,
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
  [3098] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(87), 20,
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
  [3135] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(94), 20,
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
  [3172] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(37), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(94), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(100), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(98), 10,
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
  [3211] = 8,
    ACTIONS(104), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(36), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(107), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(47), 11,
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
  [3254] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(37), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(94), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(112), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(110), 10,
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
  [3293] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 20,
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
  [3330] = 8,
    ACTIONS(120), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(36), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(122), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(118), 11,
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
  [3373] = 7,
    ACTIONS(128), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(59), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(131), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(124), 12,
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
  [3414] = 8,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    ACTIONS(138), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(53), 1,
      sym_not_function,
    STATE(76), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(141), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(134), 12,
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
  [3457] = 8,
    ACTIONS(120), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(36), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(122), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(144), 11,
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
  [3500] = 5,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(83), 19,
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
  [3536] = 7,
    ACTIONS(148), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(151), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(124), 11,
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
  [3576] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(154), 20,
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
  [3608] = 5,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 19,
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
  [3644] = 14,
    ACTIONS(158), 1,
      anon_sym_end,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_functions,
    ACTIONS(164), 1,
      anon_sym_equations,
    ACTIONS(166), 1,
      anon_sym_builtins,
    ACTIONS(168), 1,
      anon_sym_heuristic,
    ACTIONS(170), 1,
      anon_sym_tactic,
    ACTIONS(172), 1,
      anon_sym_rule,
    ACTIONS(174), 1,
      anon_sym_restriction,
    ACTIONS(176), 1,
      anon_sym_lemma,
    STATE(178), 1,
      sym_simple_rule,
    STATE(722), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(66), 11,
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
  [3698] = 5,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(94), 19,
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
  [3734] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(178), 20,
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
  [3766] = 5,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(182), 20,
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
  [3802] = 5,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(193), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(189), 20,
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
  [3838] = 8,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(84), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(198), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(134), 11,
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
  [3880] = 5,
    ACTIONS(193), 1,
      anon_sym_AMP,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(201), 20,
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
  [3916] = 5,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(87), 19,
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
  [3952] = 5,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 19,
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
  [3988] = 13,
    ACTIONS(208), 1,
      anon_sym_end,
    ACTIONS(210), 1,
      sym_ident,
    ACTIONS(213), 1,
      anon_sym_functions,
    ACTIONS(216), 1,
      anon_sym_equations,
    ACTIONS(219), 1,
      anon_sym_builtins,
    ACTIONS(222), 1,
      anon_sym_heuristic,
    ACTIONS(225), 1,
      anon_sym_tactic,
    ACTIONS(228), 1,
      anon_sym_rule,
    ACTIONS(231), 1,
      anon_sym_restriction,
    ACTIONS(234), 1,
      anon_sym_lemma,
    STATE(178), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(56), 11,
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
  [4039] = 5,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_AMP,
    STATE(60), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(189), 19,
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
  [4074] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(178), 19,
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
  [4105] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(182), 20,
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
  [4136] = 5,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(239), 1,
      anon_sym_AMP,
    STATE(60), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(182), 19,
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
  [4171] = 4,
    ACTIONS(244), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 20,
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
  [4204] = 4,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(247), 20,
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
  [4237] = 5,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_AMP,
    STATE(57), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(201), 19,
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
  [4272] = 4,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    STATE(62), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(251), 20,
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
  [4305] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(154), 19,
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
  [4336] = 13,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_functions,
    ACTIONS(164), 1,
      anon_sym_equations,
    ACTIONS(166), 1,
      anon_sym_builtins,
    ACTIONS(168), 1,
      anon_sym_heuristic,
    ACTIONS(170), 1,
      anon_sym_tactic,
    ACTIONS(172), 1,
      anon_sym_rule,
    ACTIONS(174), 1,
      anon_sym_restriction,
    ACTIONS(176), 1,
      anon_sym_lemma,
    ACTIONS(253), 1,
      anon_sym_end,
    STATE(178), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(56), 11,
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
  [4387] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(182), 19,
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
  [4417] = 5,
    ACTIONS(257), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      anon_sym_CARET,
    STATE(72), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(255), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4451] = 4,
    ACTIONS(261), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(247), 19,
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
  [4483] = 4,
    ACTIONS(261), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(251), 19,
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
  [4515] = 4,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(265), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4547] = 5,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(271), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(269), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4581] = 5,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(277), 1,
      anon_sym_CARET,
    STATE(73), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(273), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4615] = 4,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(284), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4647] = 3,
    ACTIONS(288), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(286), 20,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4677] = 3,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 20,
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
  [4707] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 19,
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
  [4739] = 4,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4771] = 3,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4800] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(505), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [4855] = 3,
    ACTIONS(309), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(307), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4884] = 3,
    ACTIONS(313), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(311), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4913] = 3,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(315), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [4942] = 3,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 19,
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
  [4971] = 3,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(319), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5000] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(460), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5055] = 3,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5084] = 3,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5113] = 5,
    ACTIONS(335), 1,
      anon_sym_EQ,
    ACTIONS(337), 1,
      anon_sym_STAR,
    STATE(103), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(333), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5146] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(339), 20,
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
  [5173] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(490), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5228] = 3,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5257] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(347), 20,
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
  [5284] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(349), 20,
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
  [5311] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(483), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5366] = 5,
    ACTIONS(355), 1,
      anon_sym_EQ,
    ACTIONS(357), 1,
      anon_sym_STAR,
    STATE(96), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(353), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5399] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(519), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5454] = 3,
    ACTIONS(364), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(362), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5483] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(513), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5538] = 3,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5567] = 3,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5596] = 3,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(273), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5625] = 5,
    ACTIONS(337), 1,
      anon_sym_STAR,
    ACTIONS(378), 1,
      anon_sym_EQ,
    STATE(96), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(376), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5658] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(499), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5713] = 3,
    ACTIONS(267), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(265), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5742] = 3,
    ACTIONS(384), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5771] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(494), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5826] = 3,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(388), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5855] = 3,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5884] = 4,
    ACTIONS(400), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
    ACTIONS(396), 16,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
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
  [5915] = 3,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 19,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [5944] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(273), 1,
      sym_proof_method,
    STATE(292), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(406), 10,
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
  [5982] = 3,
    ACTIONS(355), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(353), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [6010] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(251), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6062] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(462), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6114] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(481), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6166] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(273), 1,
      sym_proof_method,
    STATE(279), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(416), 10,
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
  [6204] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(634), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6256] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(520), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6308] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(480), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6360] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(433), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6412] = 5,
    ACTIONS(420), 1,
      anon_sym_EQ,
    STATE(133), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(418), 15,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [6444] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(424), 17,
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
  [6472] = 15,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(341), 1,
      sym_term,
    STATE(360), 1,
      sym__expterm,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(387), 1,
      sym__multterm,
    STATE(415), 1,
      sym__xorterm,
    STATE(535), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6524] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(440), 17,
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
  [6552] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(610), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6604] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(273), 1,
      sym_proof_method,
    STATE(277), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(444), 10,
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
  [6642] = 5,
    ACTIONS(448), 1,
      anon_sym_EQ,
    STATE(128), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(446), 15,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [6674] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(491), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6726] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(273), 1,
      sym_proof_method,
    STATE(297), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(453), 10,
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
  [6764] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(657), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6816] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(142), 1,
      sym__xorterm,
    STATE(492), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6868] = 5,
    ACTIONS(457), 1,
      anon_sym_EQ,
    STATE(128), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(455), 15,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [6900] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__multterm,
    STATE(135), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6949] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(459), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(461), 15,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [6976] = 3,
    ACTIONS(448), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(446), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [7003] = 14,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(135), 1,
      sym__xorterm,
    STATE(341), 1,
      sym_term,
    STATE(360), 1,
      sym__expterm,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(387), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7052] = 5,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(467), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(463), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [7082] = 13,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(89), 1,
      sym__expterm,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(136), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7128] = 5,
    ACTIONS(459), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(461), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [7158] = 13,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(341), 1,
      sym_term,
    STATE(360), 1,
      sym__expterm,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(403), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7204] = 5,
    ACTIONS(467), 1,
      anon_sym_PLUS,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(138), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(472), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [7234] = 6,
    ACTIONS(478), 1,
      anon_sym_prio,
    ACTIONS(480), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(164), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(175), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(476), 10,
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
  [7265] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(113), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7308] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(486), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(148), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(200), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(484), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7339] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_msg_var,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(243), 1,
      sym_equation,
    STATE(693), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7382] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_msg_var,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(183), 1,
      sym_equation,
    STATE(693), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7425] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(493), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(148), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(200), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(490), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7456] = 12,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(341), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(383), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7499] = 8,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_COLON,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      aux_sym_node_var_token1,
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
  [7534] = 6,
    ACTIONS(478), 1,
      anon_sym_prio,
    ACTIONS(480), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(164), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(173), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(506), 10,
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
  [7565] = 11,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(377), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7605] = 11,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_LT,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    ACTIONS(518), 1,
      anon_sym_TILDE,
    STATE(222), 1,
      sym_msg_var,
    STATE(233), 1,
      sym_nonnode_var,
    STATE(245), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(235), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7645] = 11,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(374), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7685] = 11,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_TILDE,
    STATE(361), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(368), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7725] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_term,
    STATE(88), 1,
      sym_msg_var,
    STATE(92), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7765] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_msg_var,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(102), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7805] = 11,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_LT,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    ACTIONS(518), 1,
      anon_sym_TILDE,
    STATE(222), 1,
      sym_msg_var,
    STATE(223), 1,
      sym_term,
    STATE(233), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(235), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7845] = 11,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_LT,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    ACTIONS(518), 1,
      anon_sym_TILDE,
    STATE(222), 1,
      sym_msg_var,
    STATE(233), 1,
      sym_nonnode_var,
    STATE(238), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(235), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7885] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_msg_var,
    STATE(92), 1,
      sym_nonnode_var,
    STATE(98), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(79), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7925] = 8,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(53), 1,
      sym_not_function,
    STATE(64), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(524), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7958] = 8,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(42), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(530), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7991] = 4,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(536), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(534), 12,
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
  [8016] = 4,
    ACTIONS(540), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(164), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(538), 11,
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
  [8041] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(94), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(543), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8068] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(145), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(200), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(484), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8095] = 8,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      anon_sym_COLON,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(65), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8128] = 4,
    ACTIONS(555), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(553), 10,
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
  [8152] = 4,
    STATE(174), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(558), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(560), 10,
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
  [8176] = 7,
    ACTIONS(528), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(530), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8206] = 3,
    ACTIONS(562), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 12,
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
  [8228] = 7,
    ACTIONS(522), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(53), 1,
      sym_not_function,
    STATE(64), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(524), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8258] = 4,
    ACTIONS(480), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(564), 10,
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
  [8282] = 4,
    STATE(174), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(566), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(568), 10,
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
  [8306] = 4,
    ACTIONS(480), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(506), 10,
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
  [8330] = 4,
    ACTIONS(480), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(476), 10,
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
  [8354] = 4,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(571), 10,
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
  [8377] = 4,
    ACTIONS(577), 1,
      anon_sym_variants,
    STATE(283), 1,
      sym_variants,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(575), 10,
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
  [8400] = 4,
    STATE(206), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(579), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8423] = 4,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(583), 10,
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
  [8446] = 8,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      anon_sym_DOT,
    ACTIONS(593), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(65), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8477] = 4,
    STATE(182), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(595), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [8500] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(600), 10,
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
  [8523] = 4,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(604), 10,
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
  [8546] = 4,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(608), 10,
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
  [8569] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(610), 10,
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
  [8592] = 3,
    STATE(205), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(612), 11,
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
  [8613] = 4,
    STATE(188), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(614), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8636] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_variants_repeat1,
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
  [8659] = 3,
    STATE(204), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(579), 11,
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
  [8680] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_variants_repeat1,
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
  [8703] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(628), 10,
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
  [8726] = 4,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(633), 10,
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
  [8749] = 4,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 10,
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
  [8772] = 4,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 10,
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
  [8795] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(267), 10,
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
  [8818] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
    ACTIONS(288), 10,
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
  [8839] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(644), 10,
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
  [8862] = 4,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_LBRACKprivate_RBRACK,
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
  [8885] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(655), 12,
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
  [8904] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(657), 12,
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
  [8923] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(661), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(659), 10,
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
  [8944] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_variants_repeat1,
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
  [8967] = 3,
    STATE(188), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 11,
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
  [8988] = 3,
    STATE(182), 1,
      aux_sym_disjunction_repeat1,
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
  [9009] = 4,
    STATE(188), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(665), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9032] = 4,
    STATE(169), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(450), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 10,
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
  [9055] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(671), 12,
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
  [9074] = 3,
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
  [9094] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(673), 11,
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
  [9112] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 11,
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
  [9130] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(677), 11,
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
  [9148] = 5,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(311), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9172] = 3,
    ACTIONS(683), 1,
      anon_sym_COMMA,
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
  [9192] = 3,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 10,
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
  [9212] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(689), 11,
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
  [9230] = 3,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 10,
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
  [9250] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(695), 10,
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
  [9270] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(699), 10,
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
  [9290] = 3,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 10,
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
  [9330] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(331), 10,
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
  [9350] = 3,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(364), 10,
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
  [9370] = 2,
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
  [9388] = 3,
    ACTIONS(715), 1,
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
  [9408] = 3,
    ACTIONS(717), 1,
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
  [9428] = 2,
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
  [9446] = 3,
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
  [9466] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(313), 10,
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
  [9486] = 2,
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
  [9504] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 11,
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
  [9522] = 3,
    ACTIONS(727), 1,
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
  [9542] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(345), 10,
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
  [9562] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(699), 11,
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
  [9580] = 3,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 10,
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
  [9600] = 3,
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
  [9620] = 3,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(628), 10,
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
  [9640] = 3,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(731), 10,
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
  [9660] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(695), 11,
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
  [9678] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 10,
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
  [9698] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 10,
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
  [9718] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(321), 10,
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
  [9738] = 3,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(633), 10,
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
  [9758] = 3,
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
  [9778] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(317), 10,
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
  [9798] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(644), 10,
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
  [9818] = 5,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(435), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(392), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9842] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(394), 10,
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
  [9862] = 3,
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
  [9882] = 5,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(319), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9906] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(743), 11,
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
  [9924] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 11,
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
  [9942] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(267), 10,
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
  [9962] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(745), 11,
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
  [9980] = 2,
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
  [9998] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(747), 11,
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
  [10016] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(390), 10,
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
  [10036] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(595), 11,
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
  [10054] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(749), 11,
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
  [10072] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(614), 11,
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
  [10090] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(751), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(719), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10110] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 11,
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
  [10128] = 8,
    ACTIONS(753), 1,
      anon_sym_SOLVED,
    ACTIONS(755), 1,
      anon_sym_by,
    ACTIONS(757), 1,
      anon_sym_case,
    ACTIONS(761), 1,
      anon_sym_solve,
    STATE(263), 1,
      sym_proof_method,
    STATE(555), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10157] = 3,
    STATE(289), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10176] = 3,
    STATE(298), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(667), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10195] = 8,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(765), 1,
      anon_sym_DOT,
    STATE(398), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(282), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10224] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 10,
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
  [10241] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(771), 10,
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
  [10258] = 4,
    ACTIONS(773), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(280), 6,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10279] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(775), 10,
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
  [10296] = 4,
    STATE(285), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(667), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10317] = 3,
    STATE(237), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [10336] = 8,
    ACTIONS(761), 1,
      anon_sym_solve,
    ACTIONS(781), 1,
      anon_sym_SOLVED,
    ACTIONS(783), 1,
      anon_sym_by,
    ACTIONS(785), 1,
      anon_sym_case,
    STATE(273), 1,
      sym_proof_method,
    STATE(288), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10365] = 3,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(743), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10384] = 3,
    STATE(264), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(579), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10403] = 8,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(789), 1,
      anon_sym_DOT,
    STATE(398), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(282), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10432] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(406), 10,
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
  [10449] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(791), 10,
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
  [10466] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(793), 10,
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
  [10483] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(795), 10,
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
  [10500] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(797), 10,
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
  [10517] = 8,
    ACTIONS(799), 1,
      sym_ident,
    ACTIONS(802), 1,
      anon_sym_DOT,
    ACTIONS(804), 1,
      anon_sym_POUND,
    STATE(398), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(282), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10546] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(810), 10,
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
  [10563] = 4,
    STATE(287), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(579), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10584] = 4,
    STATE(285), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(595), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10605] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(817), 10,
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
  [10622] = 4,
    STATE(289), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(665), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10643] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(819), 10,
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
  [10660] = 4,
    STATE(289), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(821), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(614), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10681] = 4,
    STATE(271), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(612), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10702] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(824), 10,
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
  [10719] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(453), 10,
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
  [10736] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(826), 10,
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
  [10753] = 3,
    STATE(265), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(612), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10772] = 2,
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
  [10789] = 3,
    STATE(180), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [10808] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(416), 10,
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
  [10825] = 4,
    STATE(298), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(595), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [10846] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(707), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10874] = 7,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    STATE(398), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(266), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10900] = 7,
    ACTIONS(753), 1,
      anon_sym_SOLVED,
    ACTIONS(755), 1,
      anon_sym_by,
    ACTIONS(761), 1,
      anon_sym_solve,
    STATE(263), 1,
      sym_proof_method,
    STATE(439), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10926] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(732), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10954] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(726), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10982] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(845), 1,
      anon_sym_BANG,
    STATE(506), 1,
      sym_fact,
    STATE(611), 1,
      sym_facts,
    STATE(675), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11010] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(671), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11038] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(741), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11066] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(597), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11094] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(853), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(679), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11122] = 7,
    ACTIONS(753), 1,
      anon_sym_SOLVED,
    ACTIONS(755), 1,
      anon_sym_by,
    ACTIONS(761), 1,
      anon_sym_solve,
    STATE(263), 1,
      sym_proof_method,
    STATE(437), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11148] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(855), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(720), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11176] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(857), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(718), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11204] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(581), 1,
      sym_facts,
    STATE(586), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11232] = 3,
    STATE(536), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(861), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [11250] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(625), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11278] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(865), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(715), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11306] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(867), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(650), 1,
      sym_facts,
    STATE(675), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11334] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(690), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11362] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(623), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11390] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(873), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(748), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11418] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(653), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11446] = 7,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    STATE(398), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(276), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [11472] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(877), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(711), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11500] = 6,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    ACTIONS(883), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(885), 1,
      anon_sym_heuristic_EQ,
    STATE(526), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(879), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11524] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(699), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11552] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(580), 1,
      sym_facts,
    STATE(586), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11580] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(649), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11608] = 7,
    ACTIONS(753), 1,
      anon_sym_SOLVED,
    ACTIONS(755), 1,
      anon_sym_by,
    ACTIONS(761), 1,
      anon_sym_solve,
    STATE(263), 1,
      sym_proof_method,
    STATE(551), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11634] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(658), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11662] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(646), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11690] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(643), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11718] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(638), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11746] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(633), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11774] = 6,
    ACTIONS(883), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(885), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    STATE(526), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(879), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11798] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(734), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11826] = 8,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(907), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(506), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(705), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11854] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(583), 1,
      sym_facts,
    STATE(586), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11882] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(736), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11910] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    STATE(725), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11938] = 3,
    STATE(46), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(530), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [11955] = 5,
    ACTIONS(883), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(885), 1,
      anon_sym_heuristic_EQ,
    STATE(526), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(879), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11976] = 5,
    ACTIONS(915), 1,
      anon_sym_CARET,
    STATE(357), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(257), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11997] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(534), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12022] = 3,
    STATE(31), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(524), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [12039] = 7,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(917), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(538), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12064] = 4,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(267), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(265), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12083] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(288), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(286), 5,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12100] = 7,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    ACTIONS(921), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(538), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12125] = 4,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(280), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12144] = 4,
    ACTIONS(925), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(280), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12163] = 4,
    STATE(352), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(927), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(667), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12182] = 5,
    ACTIONS(883), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(885), 1,
      anon_sym_heuristic_EQ,
    STATE(469), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(879), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12203] = 4,
    STATE(352), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(929), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(595), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12222] = 4,
    STATE(350), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(927), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(612), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12241] = 5,
    ACTIONS(932), 1,
      anon_sym_CARET,
    STATE(354), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(275), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12262] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(534), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12287] = 7,
    ACTIONS(935), 1,
      anon_sym_presort,
    ACTIONS(937), 1,
      anon_sym_prio,
    ACTIONS(939), 1,
      anon_sym_deprio,
    STATE(389), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(143), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(176), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12312] = 5,
    ACTIONS(915), 1,
      anon_sym_CARET,
    STATE(354), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(271), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12333] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(307), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12349] = 3,
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
  [12365] = 5,
    ACTIONS(941), 1,
      anon_sym_STAR,
    STATE(375), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(335), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12385] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(275), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(273), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12401] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(325), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12417] = 5,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(945), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12437] = 3,
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
  [12453] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(947), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(711), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [12469] = 6,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    STATE(534), 1,
      sym_fact,
    STATE(586), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12491] = 6,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_BANG,
    STATE(538), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12513] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(297), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12529] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(345), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(343), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12545] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(394), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(392), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12561] = 3,
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
  [12577] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(267), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(265), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12593] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(331), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(329), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12609] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(364), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(362), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12625] = 5,
    ACTIONS(941), 1,
      anon_sym_STAR,
    STATE(379), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(378), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12645] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(321), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(319), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12661] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(317), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(315), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12677] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(390), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(388), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12693] = 5,
    ACTIONS(949), 1,
      anon_sym_STAR,
    STATE(379), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(355), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12713] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(313), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(311), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12729] = 3,
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
  [12745] = 3,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(265), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12760] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(355), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12775] = 6,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(954), 1,
      anon_sym_XOR,
    ACTIONS(956), 1,
      anon_sym_13,
    STATE(390), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(457), 2,
      sym_ident,
      anon_sym_in,
  [12796] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(286), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12809] = 4,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(741), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12826] = 6,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(954), 1,
      anon_sym_XOR,
    ACTIONS(956), 1,
      anon_sym_13,
    STATE(384), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(420), 2,
      sym_ident,
      anon_sym_in,
  [12847] = 4,
    ACTIONS(761), 1,
      anon_sym_solve,
    STATE(555), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12864] = 5,
    ACTIONS(937), 1,
      anon_sym_prio,
    ACTIONS(939), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(151), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(175), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12883] = 6,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(958), 1,
      anon_sym_XOR,
    ACTIONS(961), 1,
      anon_sym_13,
    STATE(390), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(448), 2,
      sym_ident,
      anon_sym_in,
  [12904] = 4,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(435), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(739), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12921] = 3,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12936] = 4,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(966), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12953] = 4,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12970] = 4,
    ACTIONS(970), 1,
      anon_sym_solve,
    STATE(288), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(968), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12987] = 4,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    STATE(431), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(972), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13004] = 4,
    ACTIONS(974), 1,
      sym_ident,
    STATE(619), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13020] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13032] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(719), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13046] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13058] = 4,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(981), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13074] = 4,
    ACTIONS(983), 1,
      sym_ident,
    STATE(678), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13090] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(448), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [13104] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(985), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(711), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13118] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(265), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13130] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(987), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13142] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13154] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(307), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13166] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(567), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13181] = 3,
    STATE(466), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(991), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13194] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(741), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13205] = 3,
    STATE(515), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(991), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13218] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(972), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13229] = 4,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    STATE(598), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13244] = 4,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    STATE(426), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(474), 2,
      sym_ident,
      anon_sym_in,
  [13259] = 4,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(614), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13274] = 5,
    ACTIONS(1001), 1,
      sym_ident,
    ACTIONS(1003), 1,
      anon_sym_in,
    STATE(424), 1,
      aux_sym_let_block_repeat1,
    STATE(585), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13291] = 4,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(523), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13306] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1009), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13317] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(561), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13332] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(557), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13347] = 4,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
    STATE(642), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13362] = 4,
    ACTIONS(400), 1,
      anon_sym_node,
    ACTIONS(1013), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13377] = 5,
    ACTIONS(1015), 1,
      sym_ident,
    ACTIONS(1018), 1,
      anon_sym_in,
    STATE(424), 1,
      aux_sym_let_block_repeat1,
    STATE(585), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13394] = 4,
    ACTIONS(400), 1,
      anon_sym_node,
    ACTIONS(1020), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(966), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13409] = 4,
    ACTIONS(997), 1,
      anon_sym_PLUS,
    STATE(430), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(465), 2,
      sym_ident,
      anon_sym_in,
  [13424] = 4,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
    STATE(523), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13439] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1024), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13450] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(552), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13465] = 4,
    ACTIONS(1026), 1,
      anon_sym_PLUS,
    STATE(430), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(459), 2,
      sym_ident,
      anon_sym_in,
  [13480] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1029), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13491] = 3,
    STATE(578), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(991), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13504] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(981), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13515] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1031), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13526] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13537] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13551] = 4,
    ACTIONS(1037), 1,
      anon_sym_next,
    ACTIONS(1039), 1,
      anon_sym_qed,
    STATE(503), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13565] = 4,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(1043), 1,
      anon_sym_2,
    STATE(454), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13579] = 4,
    ACTIONS(1037), 1,
      anon_sym_next,
    ACTIONS(1045), 1,
      anon_sym_qed,
    STATE(456), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13593] = 4,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
    STATE(504), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13607] = 4,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(1051), 1,
      anon_sym_COLON,
    ACTIONS(1053), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13621] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13635] = 4,
    ACTIONS(1043), 1,
      anon_sym_2,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13649] = 4,
    ACTIONS(1062), 1,
      sym_ident,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
    STATE(751), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13663] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13677] = 4,
    ACTIONS(1068), 1,
      anon_sym_COLON,
    ACTIONS(1070), 1,
      anon_sym_LBRACK,
    STATE(749), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13691] = 4,
    ACTIONS(1070), 1,
      anon_sym_LBRACK,
    ACTIONS(1072), 1,
      anon_sym_COLON,
    STATE(747), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13705] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [13717] = 4,
    ACTIONS(1078), 1,
      anon_sym_LBRACK,
    ACTIONS(1080), 1,
      anon_sym_let,
    STATE(744), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13731] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_ident,
    STATE(717), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13745] = 4,
    ACTIONS(1080), 1,
      anon_sym_let,
    ACTIONS(1084), 1,
      anon_sym_LBRACK,
    STATE(742), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13759] = 4,
    ACTIONS(1080), 1,
      anon_sym_let,
    ACTIONS(1086), 1,
      anon_sym_LBRACK,
    STATE(740), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13773] = 4,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13787] = 4,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    ACTIONS(1092), 1,
      anon_sym_2,
    STATE(454), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13801] = 4,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
    ACTIONS(1095), 1,
      sym_ident,
    STATE(708), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13815] = 4,
    ACTIONS(1037), 1,
      anon_sym_next,
    ACTIONS(1097), 1,
      anon_sym_qed,
    STATE(465), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13829] = 4,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_ident,
    STATE(703), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13843] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13857] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13871] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13885] = 4,
    ACTIONS(1080), 1,
      anon_sym_let,
    ACTIONS(1109), 1,
      anon_sym_LBRACK,
    STATE(635), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13899] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    STATE(484), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13913] = 4,
    ACTIONS(1070), 1,
      anon_sym_LBRACK,
    ACTIONS(1113), 1,
      anon_sym_COLON,
    STATE(684), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13927] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13941] = 4,
    ACTIONS(1117), 1,
      anon_sym_next,
    ACTIONS(1120), 1,
      anon_sym_qed,
    STATE(465), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13955] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13969] = 4,
    ACTIONS(1124), 1,
      anon_sym_COLON,
    ACTIONS(1126), 1,
      anon_sym_LBRACK,
    STATE(670), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13983] = 4,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    ACTIONS(1130), 1,
      anon_sym_LBRACK,
    STATE(652), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13997] = 4,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RBRACK,
    STATE(479), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14011] = 4,
    ACTIONS(1080), 1,
      anon_sym_let,
    ACTIONS(1136), 1,
      anon_sym_LBRACK,
    STATE(590), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14025] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14039] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_ident,
    STATE(274), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14053] = 4,
    ACTIONS(1080), 1,
      anon_sym_let,
    ACTIONS(1140), 1,
      anon_sym_LBRACK,
    STATE(589), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14067] = 4,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    STATE(453), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14081] = 3,
    STATE(474), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14093] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_ident,
    STATE(686), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14107] = 3,
    ACTIONS(1146), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14119] = 4,
    ACTIONS(1148), 1,
      anon_sym_SQUOTE,
    ACTIONS(1150), 1,
      aux_sym_hexcolor_token1,
    STATE(574), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14133] = 4,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14147] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_GT,
    STATE(464), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14161] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14175] = 4,
    ACTIONS(1070), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      anon_sym_COLON,
    STATE(602), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14189] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14203] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14217] = 3,
    ACTIONS(1164), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1166), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14229] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14243] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14257] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14271] = 4,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(489), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14285] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14299] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14313] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14327] = 3,
    ACTIONS(1164), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1183), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14339] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14353] = 3,
    ACTIONS(1187), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(925), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14365] = 3,
    STATE(523), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14377] = 4,
    ACTIONS(1130), 1,
      anon_sym_LBRACK,
    ACTIONS(1189), 1,
      anon_sym_COLON,
    STATE(651), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14391] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14405] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14419] = 3,
    STATE(645), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1195), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14431] = 4,
    ACTIONS(1175), 1,
      anon_sym_RBRACK,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14445] = 3,
    STATE(647), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1195), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14457] = 4,
    ACTIONS(1037), 1,
      anon_sym_next,
    ACTIONS(1200), 1,
      anon_sym_qed,
    STATE(465), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14471] = 4,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14485] = 4,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14499] = 4,
    ACTIONS(1049), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14513] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14527] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14541] = 4,
    ACTIONS(1210), 1,
      sym_ident,
    STATE(417), 1,
      aux_sym_let_block_repeat1,
    STATE(585), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14555] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14569] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14583] = 4,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14597] = 4,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14611] = 3,
    ACTIONS(1013), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14623] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RBRACK,
    STATE(510), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14637] = 4,
    ACTIONS(917), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14651] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_ident,
    STATE(251), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14665] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_ident,
    STATE(660), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14679] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14693] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      anon_sym_GT,
    STATE(459), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14707] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14721] = 4,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14735] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14744] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1183), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14753] = 3,
    ACTIONS(1234), 1,
      aux_sym_arity_token1,
    STATE(71), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14764] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14773] = 3,
    ACTIONS(1236), 1,
      sym_ident,
    STATE(246), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14784] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1238), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1240), 1,
      sym_comment,
    STATE(668), 1,
      sym_param,
  [14797] = 3,
    ACTIONS(1242), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1244), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14808] = 3,
    ACTIONS(1246), 1,
      aux_sym_arity_token1,
    STATE(199), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14819] = 3,
    ACTIONS(867), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1248), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14830] = 3,
    ACTIONS(1250), 1,
      anon_sym_rule,
    STATE(226), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14841] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1252), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14850] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14859] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1254), 2,
      sym_ident,
      anon_sym_in,
  [14868] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1256), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [14877] = 3,
    ACTIONS(853), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1258), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14888] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14897] = 3,
    ACTIONS(1260), 1,
      anon_sym_EQ,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14908] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1264), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14917] = 3,
    ACTIONS(1266), 1,
      aux_sym_arity_token1,
    STATE(345), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14928] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1268), 2,
      anon_sym_next,
      anon_sym_qed,
  [14937] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1270), 2,
      anon_sym_left,
      anon_sym_right,
  [14946] = 3,
    ACTIONS(849), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1272), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14957] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1274), 2,
      anon_sym_E,
      anon_sym_AC,
  [14966] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1238), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1240), 1,
      sym_comment,
    STATE(631), 1,
      sym_param,
  [14979] = 3,
    ACTIONS(1276), 1,
      aux_sym_arity_token1,
    STATE(196), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14990] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14999] = 3,
    ACTIONS(1234), 1,
      aux_sym_arity_token1,
    STATE(682), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15010] = 3,
    ACTIONS(843), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1278), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15021] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1280), 2,
      anon_sym_next,
      anon_sym_qed,
  [15030] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15039] = 3,
    ACTIONS(1282), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1284), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15050] = 3,
    ACTIONS(907), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1286), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15061] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_next,
      anon_sym_qed,
  [15070] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15079] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15088] = 3,
    ACTIONS(1250), 1,
      anon_sym_rule,
    STATE(189), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15099] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [15108] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1031), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15117] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15126] = 3,
    ACTIONS(877), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1292), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15137] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15146] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15155] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15164] = 3,
    ACTIONS(865), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1298), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15175] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1029), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15184] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1300), 2,
      anon_sym_next,
      anon_sym_qed,
  [15193] = 3,
    ACTIONS(857), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1302), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15204] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1304), 2,
      anon_sym_next,
      anon_sym_qed,
  [15213] = 3,
    ACTIONS(1236), 1,
      sym_ident,
    STATE(184), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15224] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1090), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [15233] = 3,
    ACTIONS(1234), 1,
      aux_sym_arity_token1,
    STATE(746), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15244] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15253] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1308), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15262] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15271] = 3,
    ACTIONS(1234), 1,
      aux_sym_arity_token1,
    STATE(719), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15282] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15291] = 3,
    ACTIONS(1310), 1,
      anon_sym_,
    ACTIONS(1312), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15302] = 2,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15310] = 2,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15318] = 2,
    ACTIONS(1314), 1,
      aux_sym_hexcolor_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15326] = 2,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15334] = 2,
    ACTIONS(1316), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15342] = 2,
    ACTIONS(1318), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15350] = 2,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15358] = 2,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15366] = 2,
    ACTIONS(1324), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15374] = 2,
    ACTIONS(1136), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15382] = 2,
    ACTIONS(1109), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15390] = 2,
    ACTIONS(1326), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15398] = 2,
    ACTIONS(1328), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15406] = 2,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15414] = 2,
    ACTIONS(1332), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15422] = 2,
    ACTIONS(1334), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15430] = 2,
    ACTIONS(1336), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15438] = 2,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15446] = 2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15454] = 2,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15462] = 2,
    ACTIONS(1340), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15470] = 2,
    ACTIONS(1342), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15478] = 2,
    ACTIONS(1344), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15486] = 2,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15494] = 2,
    ACTIONS(1260), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15502] = 2,
    ACTIONS(1076), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15510] = 2,
    ACTIONS(1348), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15518] = 2,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15526] = 2,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15534] = 2,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15542] = 2,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15550] = 2,
    ACTIONS(873), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15558] = 2,
    ACTIONS(1358), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15566] = 2,
    ACTIONS(1360), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15574] = 2,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15582] = 2,
    ACTIONS(1362), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15590] = 2,
    ACTIONS(1364), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15598] = 2,
    ACTIONS(1366), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15606] = 2,
    ACTIONS(1368), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15614] = 2,
    ACTIONS(1370), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15622] = 2,
    ACTIONS(1013), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15630] = 2,
    ACTIONS(1372), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15638] = 2,
    ACTIONS(1374), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15646] = 2,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15654] = 2,
    ACTIONS(1376), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15662] = 2,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15670] = 2,
    ACTIONS(1378), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15678] = 2,
    ACTIONS(1380), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15686] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1240), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_oracle_goal_ranking_token1,
  [15696] = 2,
    ACTIONS(1384), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15704] = 2,
    ACTIONS(1386), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15712] = 2,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15720] = 2,
    ACTIONS(1390), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15728] = 2,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15736] = 2,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15744] = 2,
    ACTIONS(1392), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15752] = 2,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15760] = 2,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15768] = 2,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15776] = 2,
    ACTIONS(1398), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15784] = 2,
    ACTIONS(1400), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15792] = 2,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15800] = 2,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15808] = 2,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15816] = 2,
    ACTIONS(1406), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15824] = 2,
    ACTIONS(1408), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15832] = 2,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15840] = 2,
    ACTIONS(1410), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15848] = 2,
    ACTIONS(1412), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15856] = 2,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15864] = 2,
    ACTIONS(853), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15872] = 2,
    ACTIONS(1414), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15880] = 2,
    ACTIONS(1189), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15888] = 2,
    ACTIONS(1416), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15896] = 2,
    ACTIONS(1418), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15904] = 2,
    ACTIONS(1420), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15912] = 2,
    ACTIONS(1164), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15920] = 2,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15928] = 2,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15936] = 2,
    ACTIONS(1424), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15944] = 2,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15952] = 2,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15960] = 2,
    ACTIONS(1430), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15968] = 2,
    ACTIONS(1432), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15976] = 2,
    ACTIONS(1434), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15984] = 2,
    ACTIONS(1436), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15992] = 2,
    ACTIONS(1438), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16000] = 2,
    ACTIONS(1440), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16008] = 2,
    ACTIONS(1442), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16016] = 2,
    ACTIONS(1444), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16024] = 2,
    ACTIONS(1446), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16032] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16040] = 2,
    ACTIONS(1448), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16048] = 2,
    ACTIONS(1450), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16056] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1240), 1,
      sym_comment,
    ACTIONS(1452), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16066] = 2,
    ACTIONS(1454), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16074] = 2,
    ACTIONS(1456), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16082] = 2,
    ACTIONS(1458), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16090] = 2,
    ACTIONS(1460), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16098] = 2,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16106] = 2,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16114] = 2,
    ACTIONS(1464), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16122] = 2,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16130] = 2,
    ACTIONS(1468), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16138] = 2,
    ACTIONS(1158), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16146] = 2,
    ACTIONS(1470), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16154] = 2,
    ACTIONS(1472), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16162] = 2,
    ACTIONS(1474), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16170] = 2,
    ACTIONS(1476), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16178] = 2,
    ACTIONS(1478), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16186] = 2,
    ACTIONS(1480), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16194] = 2,
    ACTIONS(1482), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16202] = 2,
    ACTIONS(1484), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16210] = 2,
    ACTIONS(1486), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16218] = 2,
    ACTIONS(1488), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16226] = 2,
    ACTIONS(1490), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16234] = 2,
    ACTIONS(1492), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16242] = 2,
    ACTIONS(1494), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16250] = 2,
    ACTIONS(1496), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16258] = 2,
    ACTIONS(1498), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16266] = 2,
    ACTIONS(1500), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16274] = 2,
    ACTIONS(400), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16282] = 2,
    ACTIONS(1502), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16290] = 2,
    ACTIONS(1504), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16298] = 2,
    ACTIONS(1506), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16306] = 2,
    ACTIONS(877), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16314] = 2,
    ACTIONS(1508), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16322] = 2,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16330] = 2,
    ACTIONS(1510), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16338] = 2,
    ACTIONS(1512), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16346] = 2,
    ACTIONS(1514), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16354] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16362] = 2,
    ACTIONS(1516), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16370] = 2,
    ACTIONS(1518), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16378] = 2,
    ACTIONS(1520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16386] = 2,
    ACTIONS(857), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16394] = 2,
    ACTIONS(1522), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16402] = 2,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16410] = 2,
    ACTIONS(855), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16418] = 2,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16426] = 2,
    ACTIONS(1528), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16434] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1240), 1,
      sym_comment,
    ACTIONS(1530), 1,
      aux_sym_formal_comment_token1,
  [16444] = 2,
    ACTIONS(1532), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16452] = 2,
    ACTIONS(1534), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16460] = 2,
    ACTIONS(1536), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16468] = 2,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16476] = 2,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16484] = 2,
    ACTIONS(1538), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16492] = 2,
    ACTIONS(1540), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16500] = 2,
    ACTIONS(1542), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16508] = 2,
    ACTIONS(1544), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16516] = 2,
    ACTIONS(1546), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16524] = 2,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16532] = 2,
    ACTIONS(1548), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16540] = 2,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16548] = 2,
    ACTIONS(1550), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16556] = 2,
    ACTIONS(1552), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16564] = 2,
    ACTIONS(1554), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16572] = 2,
    ACTIONS(1556), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16580] = 2,
    ACTIONS(1558), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16588] = 2,
    ACTIONS(1084), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16596] = 2,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16604] = 2,
    ACTIONS(1078), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16612] = 2,
    ACTIONS(1560), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16620] = 2,
    ACTIONS(1562), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16628] = 2,
    ACTIONS(1564), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16636] = 2,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16644] = 2,
    ACTIONS(1068), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16652] = 2,
    ACTIONS(1568), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16660] = 2,
    ACTIONS(1570), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16668] = 2,
    ACTIONS(1572), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16676] = 2,
    ACTIONS(1574), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 124,
  [SMALL_STATE(4)] = 248,
  [SMALL_STATE(5)] = 366,
  [SMALL_STATE(6)] = 484,
  [SMALL_STATE(7)] = 602,
  [SMALL_STATE(8)] = 720,
  [SMALL_STATE(9)] = 838,
  [SMALL_STATE(10)] = 956,
  [SMALL_STATE(11)] = 1074,
  [SMALL_STATE(12)] = 1192,
  [SMALL_STATE(13)] = 1310,
  [SMALL_STATE(14)] = 1428,
  [SMALL_STATE(15)] = 1546,
  [SMALL_STATE(16)] = 1661,
  [SMALL_STATE(17)] = 1776,
  [SMALL_STATE(18)] = 1891,
  [SMALL_STATE(19)] = 2006,
  [SMALL_STATE(20)] = 2115,
  [SMALL_STATE(21)] = 2224,
  [SMALL_STATE(22)] = 2333,
  [SMALL_STATE(23)] = 2442,
  [SMALL_STATE(24)] = 2548,
  [SMALL_STATE(25)] = 2654,
  [SMALL_STATE(26)] = 2751,
  [SMALL_STATE(27)] = 2848,
  [SMALL_STATE(28)] = 2892,
  [SMALL_STATE(29)] = 2936,
  [SMALL_STATE(30)] = 2980,
  [SMALL_STATE(31)] = 3024,
  [SMALL_STATE(32)] = 3061,
  [SMALL_STATE(33)] = 3098,
  [SMALL_STATE(34)] = 3135,
  [SMALL_STATE(35)] = 3172,
  [SMALL_STATE(36)] = 3211,
  [SMALL_STATE(37)] = 3254,
  [SMALL_STATE(38)] = 3293,
  [SMALL_STATE(39)] = 3330,
  [SMALL_STATE(40)] = 3373,
  [SMALL_STATE(41)] = 3414,
  [SMALL_STATE(42)] = 3457,
  [SMALL_STATE(43)] = 3500,
  [SMALL_STATE(44)] = 3536,
  [SMALL_STATE(45)] = 3576,
  [SMALL_STATE(46)] = 3608,
  [SMALL_STATE(47)] = 3644,
  [SMALL_STATE(48)] = 3698,
  [SMALL_STATE(49)] = 3734,
  [SMALL_STATE(50)] = 3766,
  [SMALL_STATE(51)] = 3802,
  [SMALL_STATE(52)] = 3838,
  [SMALL_STATE(53)] = 3880,
  [SMALL_STATE(54)] = 3916,
  [SMALL_STATE(55)] = 3952,
  [SMALL_STATE(56)] = 3988,
  [SMALL_STATE(57)] = 4039,
  [SMALL_STATE(58)] = 4074,
  [SMALL_STATE(59)] = 4105,
  [SMALL_STATE(60)] = 4136,
  [SMALL_STATE(61)] = 4171,
  [SMALL_STATE(62)] = 4204,
  [SMALL_STATE(63)] = 4237,
  [SMALL_STATE(64)] = 4272,
  [SMALL_STATE(65)] = 4305,
  [SMALL_STATE(66)] = 4336,
  [SMALL_STATE(67)] = 4387,
  [SMALL_STATE(68)] = 4417,
  [SMALL_STATE(69)] = 4451,
  [SMALL_STATE(70)] = 4483,
  [SMALL_STATE(71)] = 4515,
  [SMALL_STATE(72)] = 4547,
  [SMALL_STATE(73)] = 4581,
  [SMALL_STATE(74)] = 4615,
  [SMALL_STATE(75)] = 4647,
  [SMALL_STATE(76)] = 4677,
  [SMALL_STATE(77)] = 4707,
  [SMALL_STATE(78)] = 4739,
  [SMALL_STATE(79)] = 4771,
  [SMALL_STATE(80)] = 4800,
  [SMALL_STATE(81)] = 4855,
  [SMALL_STATE(82)] = 4884,
  [SMALL_STATE(83)] = 4913,
  [SMALL_STATE(84)] = 4942,
  [SMALL_STATE(85)] = 4971,
  [SMALL_STATE(86)] = 5000,
  [SMALL_STATE(87)] = 5055,
  [SMALL_STATE(88)] = 5084,
  [SMALL_STATE(89)] = 5113,
  [SMALL_STATE(90)] = 5146,
  [SMALL_STATE(91)] = 5173,
  [SMALL_STATE(92)] = 5228,
  [SMALL_STATE(93)] = 5257,
  [SMALL_STATE(94)] = 5284,
  [SMALL_STATE(95)] = 5311,
  [SMALL_STATE(96)] = 5366,
  [SMALL_STATE(97)] = 5399,
  [SMALL_STATE(98)] = 5454,
  [SMALL_STATE(99)] = 5483,
  [SMALL_STATE(100)] = 5538,
  [SMALL_STATE(101)] = 5567,
  [SMALL_STATE(102)] = 5596,
  [SMALL_STATE(103)] = 5625,
  [SMALL_STATE(104)] = 5658,
  [SMALL_STATE(105)] = 5713,
  [SMALL_STATE(106)] = 5742,
  [SMALL_STATE(107)] = 5771,
  [SMALL_STATE(108)] = 5826,
  [SMALL_STATE(109)] = 5855,
  [SMALL_STATE(110)] = 5884,
  [SMALL_STATE(111)] = 5915,
  [SMALL_STATE(112)] = 5944,
  [SMALL_STATE(113)] = 5982,
  [SMALL_STATE(114)] = 6010,
  [SMALL_STATE(115)] = 6062,
  [SMALL_STATE(116)] = 6114,
  [SMALL_STATE(117)] = 6166,
  [SMALL_STATE(118)] = 6204,
  [SMALL_STATE(119)] = 6256,
  [SMALL_STATE(120)] = 6308,
  [SMALL_STATE(121)] = 6360,
  [SMALL_STATE(122)] = 6412,
  [SMALL_STATE(123)] = 6444,
  [SMALL_STATE(124)] = 6472,
  [SMALL_STATE(125)] = 6524,
  [SMALL_STATE(126)] = 6552,
  [SMALL_STATE(127)] = 6604,
  [SMALL_STATE(128)] = 6642,
  [SMALL_STATE(129)] = 6674,
  [SMALL_STATE(130)] = 6726,
  [SMALL_STATE(131)] = 6764,
  [SMALL_STATE(132)] = 6816,
  [SMALL_STATE(133)] = 6868,
  [SMALL_STATE(134)] = 6900,
  [SMALL_STATE(135)] = 6949,
  [SMALL_STATE(136)] = 6976,
  [SMALL_STATE(137)] = 7003,
  [SMALL_STATE(138)] = 7052,
  [SMALL_STATE(139)] = 7082,
  [SMALL_STATE(140)] = 7128,
  [SMALL_STATE(141)] = 7158,
  [SMALL_STATE(142)] = 7204,
  [SMALL_STATE(143)] = 7234,
  [SMALL_STATE(144)] = 7265,
  [SMALL_STATE(145)] = 7308,
  [SMALL_STATE(146)] = 7339,
  [SMALL_STATE(147)] = 7382,
  [SMALL_STATE(148)] = 7425,
  [SMALL_STATE(149)] = 7456,
  [SMALL_STATE(150)] = 7499,
  [SMALL_STATE(151)] = 7534,
  [SMALL_STATE(152)] = 7565,
  [SMALL_STATE(153)] = 7605,
  [SMALL_STATE(154)] = 7645,
  [SMALL_STATE(155)] = 7685,
  [SMALL_STATE(156)] = 7725,
  [SMALL_STATE(157)] = 7765,
  [SMALL_STATE(158)] = 7805,
  [SMALL_STATE(159)] = 7845,
  [SMALL_STATE(160)] = 7885,
  [SMALL_STATE(161)] = 7925,
  [SMALL_STATE(162)] = 7958,
  [SMALL_STATE(163)] = 7991,
  [SMALL_STATE(164)] = 8016,
  [SMALL_STATE(165)] = 8041,
  [SMALL_STATE(166)] = 8068,
  [SMALL_STATE(167)] = 8095,
  [SMALL_STATE(168)] = 8128,
  [SMALL_STATE(169)] = 8152,
  [SMALL_STATE(170)] = 8176,
  [SMALL_STATE(171)] = 8206,
  [SMALL_STATE(172)] = 8228,
  [SMALL_STATE(173)] = 8258,
  [SMALL_STATE(174)] = 8282,
  [SMALL_STATE(175)] = 8306,
  [SMALL_STATE(176)] = 8330,
  [SMALL_STATE(177)] = 8354,
  [SMALL_STATE(178)] = 8377,
  [SMALL_STATE(179)] = 8400,
  [SMALL_STATE(180)] = 8423,
  [SMALL_STATE(181)] = 8446,
  [SMALL_STATE(182)] = 8477,
  [SMALL_STATE(183)] = 8500,
  [SMALL_STATE(184)] = 8523,
  [SMALL_STATE(185)] = 8546,
  [SMALL_STATE(186)] = 8569,
  [SMALL_STATE(187)] = 8592,
  [SMALL_STATE(188)] = 8613,
  [SMALL_STATE(189)] = 8636,
  [SMALL_STATE(190)] = 8659,
  [SMALL_STATE(191)] = 8680,
  [SMALL_STATE(192)] = 8703,
  [SMALL_STATE(193)] = 8726,
  [SMALL_STATE(194)] = 8749,
  [SMALL_STATE(195)] = 8772,
  [SMALL_STATE(196)] = 8795,
  [SMALL_STATE(197)] = 8818,
  [SMALL_STATE(198)] = 8839,
  [SMALL_STATE(199)] = 8862,
  [SMALL_STATE(200)] = 8885,
  [SMALL_STATE(201)] = 8904,
  [SMALL_STATE(202)] = 8923,
  [SMALL_STATE(203)] = 8944,
  [SMALL_STATE(204)] = 8967,
  [SMALL_STATE(205)] = 8988,
  [SMALL_STATE(206)] = 9009,
  [SMALL_STATE(207)] = 9032,
  [SMALL_STATE(208)] = 9055,
  [SMALL_STATE(209)] = 9074,
  [SMALL_STATE(210)] = 9094,
  [SMALL_STATE(211)] = 9112,
  [SMALL_STATE(212)] = 9130,
  [SMALL_STATE(213)] = 9148,
  [SMALL_STATE(214)] = 9172,
  [SMALL_STATE(215)] = 9192,
  [SMALL_STATE(216)] = 9212,
  [SMALL_STATE(217)] = 9230,
  [SMALL_STATE(218)] = 9250,
  [SMALL_STATE(219)] = 9270,
  [SMALL_STATE(220)] = 9290,
  [SMALL_STATE(221)] = 9310,
  [SMALL_STATE(222)] = 9330,
  [SMALL_STATE(223)] = 9350,
  [SMALL_STATE(224)] = 9370,
  [SMALL_STATE(225)] = 9388,
  [SMALL_STATE(226)] = 9408,
  [SMALL_STATE(227)] = 9428,
  [SMALL_STATE(228)] = 9446,
  [SMALL_STATE(229)] = 9466,
  [SMALL_STATE(230)] = 9486,
  [SMALL_STATE(231)] = 9504,
  [SMALL_STATE(232)] = 9522,
  [SMALL_STATE(233)] = 9542,
  [SMALL_STATE(234)] = 9562,
  [SMALL_STATE(235)] = 9580,
  [SMALL_STATE(236)] = 9600,
  [SMALL_STATE(237)] = 9620,
  [SMALL_STATE(238)] = 9640,
  [SMALL_STATE(239)] = 9660,
  [SMALL_STATE(240)] = 9678,
  [SMALL_STATE(241)] = 9698,
  [SMALL_STATE(242)] = 9718,
  [SMALL_STATE(243)] = 9738,
  [SMALL_STATE(244)] = 9758,
  [SMALL_STATE(245)] = 9778,
  [SMALL_STATE(246)] = 9798,
  [SMALL_STATE(247)] = 9818,
  [SMALL_STATE(248)] = 9842,
  [SMALL_STATE(249)] = 9862,
  [SMALL_STATE(250)] = 9882,
  [SMALL_STATE(251)] = 9906,
  [SMALL_STATE(252)] = 9924,
  [SMALL_STATE(253)] = 9942,
  [SMALL_STATE(254)] = 9962,
  [SMALL_STATE(255)] = 9980,
  [SMALL_STATE(256)] = 9998,
  [SMALL_STATE(257)] = 10016,
  [SMALL_STATE(258)] = 10036,
  [SMALL_STATE(259)] = 10054,
  [SMALL_STATE(260)] = 10072,
  [SMALL_STATE(261)] = 10090,
  [SMALL_STATE(262)] = 10110,
  [SMALL_STATE(263)] = 10128,
  [SMALL_STATE(264)] = 10157,
  [SMALL_STATE(265)] = 10176,
  [SMALL_STATE(266)] = 10195,
  [SMALL_STATE(267)] = 10224,
  [SMALL_STATE(268)] = 10241,
  [SMALL_STATE(269)] = 10258,
  [SMALL_STATE(270)] = 10279,
  [SMALL_STATE(271)] = 10296,
  [SMALL_STATE(272)] = 10317,
  [SMALL_STATE(273)] = 10336,
  [SMALL_STATE(274)] = 10365,
  [SMALL_STATE(275)] = 10384,
  [SMALL_STATE(276)] = 10403,
  [SMALL_STATE(277)] = 10432,
  [SMALL_STATE(278)] = 10449,
  [SMALL_STATE(279)] = 10466,
  [SMALL_STATE(280)] = 10483,
  [SMALL_STATE(281)] = 10500,
  [SMALL_STATE(282)] = 10517,
  [SMALL_STATE(283)] = 10546,
  [SMALL_STATE(284)] = 10563,
  [SMALL_STATE(285)] = 10584,
  [SMALL_STATE(286)] = 10605,
  [SMALL_STATE(287)] = 10622,
  [SMALL_STATE(288)] = 10643,
  [SMALL_STATE(289)] = 10660,
  [SMALL_STATE(290)] = 10681,
  [SMALL_STATE(291)] = 10702,
  [SMALL_STATE(292)] = 10719,
  [SMALL_STATE(293)] = 10736,
  [SMALL_STATE(294)] = 10753,
  [SMALL_STATE(295)] = 10772,
  [SMALL_STATE(296)] = 10789,
  [SMALL_STATE(297)] = 10808,
  [SMALL_STATE(298)] = 10825,
  [SMALL_STATE(299)] = 10846,
  [SMALL_STATE(300)] = 10874,
  [SMALL_STATE(301)] = 10900,
  [SMALL_STATE(302)] = 10926,
  [SMALL_STATE(303)] = 10954,
  [SMALL_STATE(304)] = 10982,
  [SMALL_STATE(305)] = 11010,
  [SMALL_STATE(306)] = 11038,
  [SMALL_STATE(307)] = 11066,
  [SMALL_STATE(308)] = 11094,
  [SMALL_STATE(309)] = 11122,
  [SMALL_STATE(310)] = 11148,
  [SMALL_STATE(311)] = 11176,
  [SMALL_STATE(312)] = 11204,
  [SMALL_STATE(313)] = 11232,
  [SMALL_STATE(314)] = 11250,
  [SMALL_STATE(315)] = 11278,
  [SMALL_STATE(316)] = 11306,
  [SMALL_STATE(317)] = 11334,
  [SMALL_STATE(318)] = 11362,
  [SMALL_STATE(319)] = 11390,
  [SMALL_STATE(320)] = 11418,
  [SMALL_STATE(321)] = 11446,
  [SMALL_STATE(322)] = 11472,
  [SMALL_STATE(323)] = 11500,
  [SMALL_STATE(324)] = 11524,
  [SMALL_STATE(325)] = 11552,
  [SMALL_STATE(326)] = 11580,
  [SMALL_STATE(327)] = 11608,
  [SMALL_STATE(328)] = 11634,
  [SMALL_STATE(329)] = 11662,
  [SMALL_STATE(330)] = 11690,
  [SMALL_STATE(331)] = 11718,
  [SMALL_STATE(332)] = 11746,
  [SMALL_STATE(333)] = 11774,
  [SMALL_STATE(334)] = 11798,
  [SMALL_STATE(335)] = 11826,
  [SMALL_STATE(336)] = 11854,
  [SMALL_STATE(337)] = 11882,
  [SMALL_STATE(338)] = 11910,
  [SMALL_STATE(339)] = 11938,
  [SMALL_STATE(340)] = 11955,
  [SMALL_STATE(341)] = 11976,
  [SMALL_STATE(342)] = 11997,
  [SMALL_STATE(343)] = 12022,
  [SMALL_STATE(344)] = 12039,
  [SMALL_STATE(345)] = 12064,
  [SMALL_STATE(346)] = 12083,
  [SMALL_STATE(347)] = 12100,
  [SMALL_STATE(348)] = 12125,
  [SMALL_STATE(349)] = 12144,
  [SMALL_STATE(350)] = 12163,
  [SMALL_STATE(351)] = 12182,
  [SMALL_STATE(352)] = 12203,
  [SMALL_STATE(353)] = 12222,
  [SMALL_STATE(354)] = 12241,
  [SMALL_STATE(355)] = 12262,
  [SMALL_STATE(356)] = 12287,
  [SMALL_STATE(357)] = 12312,
  [SMALL_STATE(358)] = 12333,
  [SMALL_STATE(359)] = 12349,
  [SMALL_STATE(360)] = 12365,
  [SMALL_STATE(361)] = 12385,
  [SMALL_STATE(362)] = 12401,
  [SMALL_STATE(363)] = 12417,
  [SMALL_STATE(364)] = 12437,
  [SMALL_STATE(365)] = 12453,
  [SMALL_STATE(366)] = 12469,
  [SMALL_STATE(367)] = 12491,
  [SMALL_STATE(368)] = 12513,
  [SMALL_STATE(369)] = 12529,
  [SMALL_STATE(370)] = 12545,
  [SMALL_STATE(371)] = 12561,
  [SMALL_STATE(372)] = 12577,
  [SMALL_STATE(373)] = 12593,
  [SMALL_STATE(374)] = 12609,
  [SMALL_STATE(375)] = 12625,
  [SMALL_STATE(376)] = 12645,
  [SMALL_STATE(377)] = 12661,
  [SMALL_STATE(378)] = 12677,
  [SMALL_STATE(379)] = 12693,
  [SMALL_STATE(380)] = 12713,
  [SMALL_STATE(381)] = 12729,
  [SMALL_STATE(382)] = 12745,
  [SMALL_STATE(383)] = 12760,
  [SMALL_STATE(384)] = 12775,
  [SMALL_STATE(385)] = 12796,
  [SMALL_STATE(386)] = 12809,
  [SMALL_STATE(387)] = 12826,
  [SMALL_STATE(388)] = 12847,
  [SMALL_STATE(389)] = 12864,
  [SMALL_STATE(390)] = 12883,
  [SMALL_STATE(391)] = 12904,
  [SMALL_STATE(392)] = 12921,
  [SMALL_STATE(393)] = 12936,
  [SMALL_STATE(394)] = 12953,
  [SMALL_STATE(395)] = 12970,
  [SMALL_STATE(396)] = 12987,
  [SMALL_STATE(397)] = 13004,
  [SMALL_STATE(398)] = 13020,
  [SMALL_STATE(399)] = 13032,
  [SMALL_STATE(400)] = 13046,
  [SMALL_STATE(401)] = 13058,
  [SMALL_STATE(402)] = 13074,
  [SMALL_STATE(403)] = 13090,
  [SMALL_STATE(404)] = 13104,
  [SMALL_STATE(405)] = 13118,
  [SMALL_STATE(406)] = 13130,
  [SMALL_STATE(407)] = 13142,
  [SMALL_STATE(408)] = 13154,
  [SMALL_STATE(409)] = 13166,
  [SMALL_STATE(410)] = 13181,
  [SMALL_STATE(411)] = 13194,
  [SMALL_STATE(412)] = 13205,
  [SMALL_STATE(413)] = 13218,
  [SMALL_STATE(414)] = 13229,
  [SMALL_STATE(415)] = 13244,
  [SMALL_STATE(416)] = 13259,
  [SMALL_STATE(417)] = 13274,
  [SMALL_STATE(418)] = 13291,
  [SMALL_STATE(419)] = 13306,
  [SMALL_STATE(420)] = 13317,
  [SMALL_STATE(421)] = 13332,
  [SMALL_STATE(422)] = 13347,
  [SMALL_STATE(423)] = 13362,
  [SMALL_STATE(424)] = 13377,
  [SMALL_STATE(425)] = 13394,
  [SMALL_STATE(426)] = 13409,
  [SMALL_STATE(427)] = 13424,
  [SMALL_STATE(428)] = 13439,
  [SMALL_STATE(429)] = 13450,
  [SMALL_STATE(430)] = 13465,
  [SMALL_STATE(431)] = 13480,
  [SMALL_STATE(432)] = 13491,
  [SMALL_STATE(433)] = 13504,
  [SMALL_STATE(434)] = 13515,
  [SMALL_STATE(435)] = 13526,
  [SMALL_STATE(436)] = 13537,
  [SMALL_STATE(437)] = 13551,
  [SMALL_STATE(438)] = 13565,
  [SMALL_STATE(439)] = 13579,
  [SMALL_STATE(440)] = 13593,
  [SMALL_STATE(441)] = 13607,
  [SMALL_STATE(442)] = 13621,
  [SMALL_STATE(443)] = 13635,
  [SMALL_STATE(444)] = 13649,
  [SMALL_STATE(445)] = 13663,
  [SMALL_STATE(446)] = 13677,
  [SMALL_STATE(447)] = 13691,
  [SMALL_STATE(448)] = 13705,
  [SMALL_STATE(449)] = 13717,
  [SMALL_STATE(450)] = 13731,
  [SMALL_STATE(451)] = 13745,
  [SMALL_STATE(452)] = 13759,
  [SMALL_STATE(453)] = 13773,
  [SMALL_STATE(454)] = 13787,
  [SMALL_STATE(455)] = 13801,
  [SMALL_STATE(456)] = 13815,
  [SMALL_STATE(457)] = 13829,
  [SMALL_STATE(458)] = 13843,
  [SMALL_STATE(459)] = 13857,
  [SMALL_STATE(460)] = 13871,
  [SMALL_STATE(461)] = 13885,
  [SMALL_STATE(462)] = 13899,
  [SMALL_STATE(463)] = 13913,
  [SMALL_STATE(464)] = 13927,
  [SMALL_STATE(465)] = 13941,
  [SMALL_STATE(466)] = 13955,
  [SMALL_STATE(467)] = 13969,
  [SMALL_STATE(468)] = 13983,
  [SMALL_STATE(469)] = 13997,
  [SMALL_STATE(470)] = 14011,
  [SMALL_STATE(471)] = 14025,
  [SMALL_STATE(472)] = 14039,
  [SMALL_STATE(473)] = 14053,
  [SMALL_STATE(474)] = 14067,
  [SMALL_STATE(475)] = 14081,
  [SMALL_STATE(476)] = 14093,
  [SMALL_STATE(477)] = 14107,
  [SMALL_STATE(478)] = 14119,
  [SMALL_STATE(479)] = 14133,
  [SMALL_STATE(480)] = 14147,
  [SMALL_STATE(481)] = 14161,
  [SMALL_STATE(482)] = 14175,
  [SMALL_STATE(483)] = 14189,
  [SMALL_STATE(484)] = 14203,
  [SMALL_STATE(485)] = 14217,
  [SMALL_STATE(486)] = 14229,
  [SMALL_STATE(487)] = 14243,
  [SMALL_STATE(488)] = 14257,
  [SMALL_STATE(489)] = 14271,
  [SMALL_STATE(490)] = 14285,
  [SMALL_STATE(491)] = 14299,
  [SMALL_STATE(492)] = 14313,
  [SMALL_STATE(493)] = 14327,
  [SMALL_STATE(494)] = 14339,
  [SMALL_STATE(495)] = 14353,
  [SMALL_STATE(496)] = 14365,
  [SMALL_STATE(497)] = 14377,
  [SMALL_STATE(498)] = 14391,
  [SMALL_STATE(499)] = 14405,
  [SMALL_STATE(500)] = 14419,
  [SMALL_STATE(501)] = 14431,
  [SMALL_STATE(502)] = 14445,
  [SMALL_STATE(503)] = 14457,
  [SMALL_STATE(504)] = 14471,
  [SMALL_STATE(505)] = 14485,
  [SMALL_STATE(506)] = 14499,
  [SMALL_STATE(507)] = 14513,
  [SMALL_STATE(508)] = 14527,
  [SMALL_STATE(509)] = 14541,
  [SMALL_STATE(510)] = 14555,
  [SMALL_STATE(511)] = 14569,
  [SMALL_STATE(512)] = 14583,
  [SMALL_STATE(513)] = 14597,
  [SMALL_STATE(514)] = 14611,
  [SMALL_STATE(515)] = 14623,
  [SMALL_STATE(516)] = 14637,
  [SMALL_STATE(517)] = 14651,
  [SMALL_STATE(518)] = 14665,
  [SMALL_STATE(519)] = 14679,
  [SMALL_STATE(520)] = 14693,
  [SMALL_STATE(521)] = 14707,
  [SMALL_STATE(522)] = 14721,
  [SMALL_STATE(523)] = 14735,
  [SMALL_STATE(524)] = 14744,
  [SMALL_STATE(525)] = 14753,
  [SMALL_STATE(526)] = 14764,
  [SMALL_STATE(527)] = 14773,
  [SMALL_STATE(528)] = 14784,
  [SMALL_STATE(529)] = 14797,
  [SMALL_STATE(530)] = 14808,
  [SMALL_STATE(531)] = 14819,
  [SMALL_STATE(532)] = 14830,
  [SMALL_STATE(533)] = 14841,
  [SMALL_STATE(534)] = 14850,
  [SMALL_STATE(535)] = 14859,
  [SMALL_STATE(536)] = 14868,
  [SMALL_STATE(537)] = 14877,
  [SMALL_STATE(538)] = 14888,
  [SMALL_STATE(539)] = 14897,
  [SMALL_STATE(540)] = 14908,
  [SMALL_STATE(541)] = 14917,
  [SMALL_STATE(542)] = 14928,
  [SMALL_STATE(543)] = 14937,
  [SMALL_STATE(544)] = 14946,
  [SMALL_STATE(545)] = 14957,
  [SMALL_STATE(546)] = 14966,
  [SMALL_STATE(547)] = 14979,
  [SMALL_STATE(548)] = 14990,
  [SMALL_STATE(549)] = 14999,
  [SMALL_STATE(550)] = 15010,
  [SMALL_STATE(551)] = 15021,
  [SMALL_STATE(552)] = 15030,
  [SMALL_STATE(553)] = 15039,
  [SMALL_STATE(554)] = 15050,
  [SMALL_STATE(555)] = 15061,
  [SMALL_STATE(556)] = 15070,
  [SMALL_STATE(557)] = 15079,
  [SMALL_STATE(558)] = 15088,
  [SMALL_STATE(559)] = 15099,
  [SMALL_STATE(560)] = 15108,
  [SMALL_STATE(561)] = 15117,
  [SMALL_STATE(562)] = 15126,
  [SMALL_STATE(563)] = 15137,
  [SMALL_STATE(564)] = 15146,
  [SMALL_STATE(565)] = 15155,
  [SMALL_STATE(566)] = 15164,
  [SMALL_STATE(567)] = 15175,
  [SMALL_STATE(568)] = 15184,
  [SMALL_STATE(569)] = 15193,
  [SMALL_STATE(570)] = 15204,
  [SMALL_STATE(571)] = 15213,
  [SMALL_STATE(572)] = 15224,
  [SMALL_STATE(573)] = 15233,
  [SMALL_STATE(574)] = 15244,
  [SMALL_STATE(575)] = 15253,
  [SMALL_STATE(576)] = 15262,
  [SMALL_STATE(577)] = 15271,
  [SMALL_STATE(578)] = 15282,
  [SMALL_STATE(579)] = 15291,
  [SMALL_STATE(580)] = 15302,
  [SMALL_STATE(581)] = 15310,
  [SMALL_STATE(582)] = 15318,
  [SMALL_STATE(583)] = 15326,
  [SMALL_STATE(584)] = 15334,
  [SMALL_STATE(585)] = 15342,
  [SMALL_STATE(586)] = 15350,
  [SMALL_STATE(587)] = 15358,
  [SMALL_STATE(588)] = 15366,
  [SMALL_STATE(589)] = 15374,
  [SMALL_STATE(590)] = 15382,
  [SMALL_STATE(591)] = 15390,
  [SMALL_STATE(592)] = 15398,
  [SMALL_STATE(593)] = 15406,
  [SMALL_STATE(594)] = 15414,
  [SMALL_STATE(595)] = 15422,
  [SMALL_STATE(596)] = 15430,
  [SMALL_STATE(597)] = 15438,
  [SMALL_STATE(598)] = 15446,
  [SMALL_STATE(599)] = 15454,
  [SMALL_STATE(600)] = 15462,
  [SMALL_STATE(601)] = 15470,
  [SMALL_STATE(602)] = 15478,
  [SMALL_STATE(603)] = 15486,
  [SMALL_STATE(604)] = 15494,
  [SMALL_STATE(605)] = 15502,
  [SMALL_STATE(606)] = 15510,
  [SMALL_STATE(607)] = 15518,
  [SMALL_STATE(608)] = 15526,
  [SMALL_STATE(609)] = 15534,
  [SMALL_STATE(610)] = 15542,
  [SMALL_STATE(611)] = 15550,
  [SMALL_STATE(612)] = 15558,
  [SMALL_STATE(613)] = 15566,
  [SMALL_STATE(614)] = 15574,
  [SMALL_STATE(615)] = 15582,
  [SMALL_STATE(616)] = 15590,
  [SMALL_STATE(617)] = 15598,
  [SMALL_STATE(618)] = 15606,
  [SMALL_STATE(619)] = 15614,
  [SMALL_STATE(620)] = 15622,
  [SMALL_STATE(621)] = 15630,
  [SMALL_STATE(622)] = 15638,
  [SMALL_STATE(623)] = 15646,
  [SMALL_STATE(624)] = 15654,
  [SMALL_STATE(625)] = 15662,
  [SMALL_STATE(626)] = 15670,
  [SMALL_STATE(627)] = 15678,
  [SMALL_STATE(628)] = 15686,
  [SMALL_STATE(629)] = 15696,
  [SMALL_STATE(630)] = 15704,
  [SMALL_STATE(631)] = 15712,
  [SMALL_STATE(632)] = 15720,
  [SMALL_STATE(633)] = 15728,
  [SMALL_STATE(634)] = 15736,
  [SMALL_STATE(635)] = 15744,
  [SMALL_STATE(636)] = 15752,
  [SMALL_STATE(637)] = 15760,
  [SMALL_STATE(638)] = 15768,
  [SMALL_STATE(639)] = 15776,
  [SMALL_STATE(640)] = 15784,
  [SMALL_STATE(641)] = 15792,
  [SMALL_STATE(642)] = 15800,
  [SMALL_STATE(643)] = 15808,
  [SMALL_STATE(644)] = 15816,
  [SMALL_STATE(645)] = 15824,
  [SMALL_STATE(646)] = 15832,
  [SMALL_STATE(647)] = 15840,
  [SMALL_STATE(648)] = 15848,
  [SMALL_STATE(649)] = 15856,
  [SMALL_STATE(650)] = 15864,
  [SMALL_STATE(651)] = 15872,
  [SMALL_STATE(652)] = 15880,
  [SMALL_STATE(653)] = 15888,
  [SMALL_STATE(654)] = 15896,
  [SMALL_STATE(655)] = 15904,
  [SMALL_STATE(656)] = 15912,
  [SMALL_STATE(657)] = 15920,
  [SMALL_STATE(658)] = 15928,
  [SMALL_STATE(659)] = 15936,
  [SMALL_STATE(660)] = 15944,
  [SMALL_STATE(661)] = 15952,
  [SMALL_STATE(662)] = 15960,
  [SMALL_STATE(663)] = 15968,
  [SMALL_STATE(664)] = 15976,
  [SMALL_STATE(665)] = 15984,
  [SMALL_STATE(666)] = 15992,
  [SMALL_STATE(667)] = 16000,
  [SMALL_STATE(668)] = 16008,
  [SMALL_STATE(669)] = 16016,
  [SMALL_STATE(670)] = 16024,
  [SMALL_STATE(671)] = 16032,
  [SMALL_STATE(672)] = 16040,
  [SMALL_STATE(673)] = 16048,
  [SMALL_STATE(674)] = 16056,
  [SMALL_STATE(675)] = 16066,
  [SMALL_STATE(676)] = 16074,
  [SMALL_STATE(677)] = 16082,
  [SMALL_STATE(678)] = 16090,
  [SMALL_STATE(679)] = 16098,
  [SMALL_STATE(680)] = 16106,
  [SMALL_STATE(681)] = 16114,
  [SMALL_STATE(682)] = 16122,
  [SMALL_STATE(683)] = 16130,
  [SMALL_STATE(684)] = 16138,
  [SMALL_STATE(685)] = 16146,
  [SMALL_STATE(686)] = 16154,
  [SMALL_STATE(687)] = 16162,
  [SMALL_STATE(688)] = 16170,
  [SMALL_STATE(689)] = 16178,
  [SMALL_STATE(690)] = 16186,
  [SMALL_STATE(691)] = 16194,
  [SMALL_STATE(692)] = 16202,
  [SMALL_STATE(693)] = 16210,
  [SMALL_STATE(694)] = 16218,
  [SMALL_STATE(695)] = 16226,
  [SMALL_STATE(696)] = 16234,
  [SMALL_STATE(697)] = 16242,
  [SMALL_STATE(698)] = 16250,
  [SMALL_STATE(699)] = 16258,
  [SMALL_STATE(700)] = 16266,
  [SMALL_STATE(701)] = 16274,
  [SMALL_STATE(702)] = 16282,
  [SMALL_STATE(703)] = 16290,
  [SMALL_STATE(704)] = 16298,
  [SMALL_STATE(705)] = 16306,
  [SMALL_STATE(706)] = 16314,
  [SMALL_STATE(707)] = 16322,
  [SMALL_STATE(708)] = 16330,
  [SMALL_STATE(709)] = 16338,
  [SMALL_STATE(710)] = 16346,
  [SMALL_STATE(711)] = 16354,
  [SMALL_STATE(712)] = 16362,
  [SMALL_STATE(713)] = 16370,
  [SMALL_STATE(714)] = 16378,
  [SMALL_STATE(715)] = 16386,
  [SMALL_STATE(716)] = 16394,
  [SMALL_STATE(717)] = 16402,
  [SMALL_STATE(718)] = 16410,
  [SMALL_STATE(719)] = 16418,
  [SMALL_STATE(720)] = 16426,
  [SMALL_STATE(721)] = 16434,
  [SMALL_STATE(722)] = 16444,
  [SMALL_STATE(723)] = 16452,
  [SMALL_STATE(724)] = 16460,
  [SMALL_STATE(725)] = 16468,
  [SMALL_STATE(726)] = 16476,
  [SMALL_STATE(727)] = 16484,
  [SMALL_STATE(728)] = 16492,
  [SMALL_STATE(729)] = 16500,
  [SMALL_STATE(730)] = 16508,
  [SMALL_STATE(731)] = 16516,
  [SMALL_STATE(732)] = 16524,
  [SMALL_STATE(733)] = 16532,
  [SMALL_STATE(734)] = 16540,
  [SMALL_STATE(735)] = 16548,
  [SMALL_STATE(736)] = 16556,
  [SMALL_STATE(737)] = 16564,
  [SMALL_STATE(738)] = 16572,
  [SMALL_STATE(739)] = 16580,
  [SMALL_STATE(740)] = 16588,
  [SMALL_STATE(741)] = 16596,
  [SMALL_STATE(742)] = 16604,
  [SMALL_STATE(743)] = 16612,
  [SMALL_STATE(744)] = 16620,
  [SMALL_STATE(745)] = 16628,
  [SMALL_STATE(746)] = 16636,
  [SMALL_STATE(747)] = 16644,
  [SMALL_STATE(748)] = 16652,
  [SMALL_STATE(749)] = 16660,
  [SMALL_STATE(750)] = 16668,
  [SMALL_STATE(751)] = 16676,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(343),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(528),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(339),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(65),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(93),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(691),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(343),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(45),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(343),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(45),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(339),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(65),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(40),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(339),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(65),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(546),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(733),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(731),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(730),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(729),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(728),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(727),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(455),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(724),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(457),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(44),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(41),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(157),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(52),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(144),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(139),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(134),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(201),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(694),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(626),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(624),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(174),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(532),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(272),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(146),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(527),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(363),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(592),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(654),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(155),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(149),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(141),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(141),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(121),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(441),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(137),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(432),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(6),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(739),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(367),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(366),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(340),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(496),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexcolor, 3),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexcolor, 1),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1564] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
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
