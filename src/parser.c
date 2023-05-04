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
#define STATE_COUNT 748
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 250
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
  sym_hexcolor = 149,
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
  aux_sym_body_repeat1 = 222,
  aux_sym_functions_repeat1 = 223,
  aux_sym_equations_repeat1 = 224,
  aux_sym_built_ins_repeat1 = 225,
  aux_sym_global_heuristic_repeat1 = 226,
  aux_sym_tactic_repeat1 = 227,
  aux_sym_tactic_repeat2 = 228,
  aux_sym_prio_repeat1 = 229,
  aux_sym_function_repeat1 = 230,
  aux_sym_and_function_repeat1 = 231,
  aux_sym_not_function_repeat1 = 232,
  aux_sym_variants_repeat1 = 233,
  aux_sym_rule_attrs_repeat1 = 234,
  aux_sym_let_block_repeat1 = 235,
  aux_sym_lemma_attrs_repeat1 = 236,
  aux_sym_proof_skeleton_repeat1 = 237,
  aux_sym_goal_repeat1 = 238,
  aux_sym_natural_subscr_repeat1 = 239,
  aux_sym_tuple_term_repeat1 = 240,
  aux_sym__msetterm_repeat1 = 241,
  aux_sym__xorterm_repeat1 = 242,
  aux_sym__multterm_repeat1 = 243,
  aux_sym__expterm_repeat1 = 244,
  aux_sym_facts_repeat1 = 245,
  aux_sym_fact_annotes_repeat1 = 246,
  aux_sym_disjunction_repeat1 = 247,
  aux_sym_conjunction_repeat1 = 248,
  aux_sym_atom_repeat1 = 249,
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
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
  [39] = 27,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 32,
  [44] = 44,
  [45] = 31,
  [46] = 46,
  [47] = 36,
  [48] = 48,
  [49] = 49,
  [50] = 37,
  [51] = 51,
  [52] = 52,
  [53] = 34,
  [54] = 42,
  [55] = 33,
  [56] = 48,
  [57] = 44,
  [58] = 58,
  [59] = 59,
  [60] = 52,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 49,
  [65] = 65,
  [66] = 46,
  [67] = 67,
  [68] = 61,
  [69] = 59,
  [70] = 70,
  [71] = 65,
  [72] = 58,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 77,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 92,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 93,
  [101] = 101,
  [102] = 102,
  [103] = 80,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 92,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 120,
  [124] = 115,
  [125] = 115,
  [126] = 126,
  [127] = 117,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 141,
  [142] = 142,
  [143] = 41,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 29,
  [150] = 150,
  [151] = 144,
  [152] = 152,
  [153] = 153,
  [154] = 153,
  [155] = 155,
  [156] = 156,
  [157] = 152,
  [158] = 152,
  [159] = 155,
  [160] = 153,
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
  [181] = 29,
  [182] = 97,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 179,
  [187] = 73,
  [188] = 75,
  [189] = 95,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 70,
  [195] = 195,
  [196] = 196,
  [197] = 74,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 196,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 91,
  [209] = 98,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 214,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 216,
  [222] = 222,
  [223] = 223,
  [224] = 218,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 220,
  [229] = 219,
  [230] = 230,
  [231] = 215,
  [232] = 232,
  [233] = 233,
  [234] = 212,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 86,
  [240] = 110,
  [241] = 107,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 109,
  [247] = 94,
  [248] = 104,
  [249] = 105,
  [250] = 99,
  [251] = 251,
  [252] = 252,
  [253] = 83,
  [254] = 82,
  [255] = 89,
  [256] = 101,
  [257] = 257,
  [258] = 106,
  [259] = 108,
  [260] = 251,
  [261] = 84,
  [262] = 211,
  [263] = 263,
  [264] = 264,
  [265] = 207,
  [266] = 183,
  [267] = 179,
  [268] = 183,
  [269] = 207,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 179,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 276,
  [281] = 281,
  [282] = 205,
  [283] = 196,
  [284] = 277,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 199,
  [290] = 290,
  [291] = 205,
  [292] = 292,
  [293] = 196,
  [294] = 263,
  [295] = 295,
  [296] = 273,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 300,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 313,
  [315] = 315,
  [316] = 312,
  [317] = 302,
  [318] = 315,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 306,
  [325] = 321,
  [326] = 310,
  [327] = 305,
  [328] = 328,
  [329] = 319,
  [330] = 309,
  [331] = 301,
  [332] = 320,
  [333] = 311,
  [334] = 304,
  [335] = 308,
  [336] = 336,
  [337] = 323,
  [338] = 299,
  [339] = 75,
  [340] = 340,
  [341] = 341,
  [342] = 76,
  [343] = 343,
  [344] = 70,
  [345] = 345,
  [346] = 205,
  [347] = 74,
  [348] = 78,
  [349] = 349,
  [350] = 207,
  [351] = 351,
  [352] = 67,
  [353] = 351,
  [354] = 183,
  [355] = 345,
  [356] = 340,
  [357] = 73,
  [358] = 98,
  [359] = 89,
  [360] = 104,
  [361] = 108,
  [362] = 362,
  [363] = 105,
  [364] = 82,
  [365] = 94,
  [366] = 87,
  [367] = 88,
  [368] = 252,
  [369] = 107,
  [370] = 109,
  [371] = 110,
  [372] = 102,
  [373] = 86,
  [374] = 374,
  [375] = 84,
  [376] = 85,
  [377] = 106,
  [378] = 99,
  [379] = 101,
  [380] = 362,
  [381] = 83,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 75,
  [386] = 386,
  [387] = 113,
  [388] = 383,
  [389] = 122,
  [390] = 390,
  [391] = 70,
  [392] = 275,
  [393] = 133,
  [394] = 74,
  [395] = 132,
  [396] = 396,
  [397] = 86,
  [398] = 251,
  [399] = 252,
  [400] = 400,
  [401] = 108,
  [402] = 402,
  [403] = 402,
  [404] = 136,
  [405] = 82,
  [406] = 406,
  [407] = 94,
  [408] = 109,
  [409] = 384,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 142,
  [414] = 414,
  [415] = 415,
  [416] = 141,
  [417] = 139,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 390,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 382,
  [429] = 429,
  [430] = 430,
  [431] = 418,
  [432] = 432,
  [433] = 433,
  [434] = 386,
  [435] = 422,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 436,
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
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 454,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 444,
  [477] = 477,
  [478] = 478,
  [479] = 475,
  [480] = 470,
  [481] = 477,
  [482] = 443,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 451,
  [487] = 487,
  [488] = 464,
  [489] = 456,
  [490] = 456,
  [491] = 477,
  [492] = 492,
  [493] = 493,
  [494] = 475,
  [495] = 463,
  [496] = 470,
  [497] = 453,
  [498] = 498,
  [499] = 469,
  [500] = 466,
  [501] = 501,
  [502] = 487,
  [503] = 464,
  [504] = 452,
  [505] = 505,
  [506] = 506,
  [507] = 445,
  [508] = 473,
  [509] = 509,
  [510] = 439,
  [511] = 506,
  [512] = 493,
  [513] = 513,
  [514] = 514,
  [515] = 478,
  [516] = 446,
  [517] = 472,
  [518] = 466,
  [519] = 519,
  [520] = 485,
  [521] = 469,
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
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 523,
  [537] = 537,
  [538] = 285,
  [539] = 539,
  [540] = 534,
  [541] = 541,
  [542] = 533,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 533,
  [547] = 524,
  [548] = 415,
  [549] = 549,
  [550] = 550,
  [551] = 287,
  [552] = 543,
  [553] = 425,
  [554] = 554,
  [555] = 530,
  [556] = 412,
  [557] = 411,
  [558] = 523,
  [559] = 559,
  [560] = 560,
  [561] = 424,
  [562] = 562,
  [563] = 427,
  [564] = 297,
  [565] = 565,
  [566] = 264,
  [567] = 545,
  [568] = 568,
  [569] = 527,
  [570] = 570,
  [571] = 97,
  [572] = 572,
  [573] = 565,
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
  [598] = 578,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 602,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 578,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 606,
  [626] = 609,
  [627] = 587,
  [628] = 628,
  [629] = 582,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 616,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 620,
  [643] = 637,
  [644] = 644,
  [645] = 645,
  [646] = 639,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 602,
  [651] = 651,
  [652] = 652,
  [653] = 606,
  [654] = 654,
  [655] = 609,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 602,
  [664] = 664,
  [665] = 578,
  [666] = 666,
  [667] = 667,
  [668] = 603,
  [669] = 669,
  [670] = 577,
  [671] = 671,
  [672] = 672,
  [673] = 622,
  [674] = 628,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 581,
  [680] = 680,
  [681] = 590,
  [682] = 677,
  [683] = 648,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 603,
  [689] = 689,
  [690] = 610,
  [691] = 614,
  [692] = 671,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 678,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 599,
  [707] = 579,
  [708] = 708,
  [709] = 709,
  [710] = 580,
  [711] = 621,
  [712] = 712,
  [713] = 649,
  [714] = 651,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 708,
  [723] = 647,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 704,
  [729] = 729,
  [730] = 632,
  [731] = 731,
  [732] = 589,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 654,
  [737] = 685,
  [738] = 644,
  [739] = 645,
  [740] = 720,
  [741] = 741,
  [742] = 742,
  [743] = 612,
  [744] = 716,
  [745] = 658,
  [746] = 684,
  [747] = 676,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(482);
      if (lookahead == '!') ADVANCE(874);
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == '\'') ADVANCE(861);
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '*') ADVANCE(859);
      if (lookahead == '+') ADVANCE(854);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '-') ADVANCE(876);
      if (lookahead == '.') ADVANCE(793);
      if (lookahead == '/') ADVANCE(691);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(852);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(853);
      if (lookahead == '@') ADVANCE(824);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(711);
      if (lookahead == 'E') ADVANCE(785);
      if (lookahead == 'F') ADVANCE(886);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'O') ADVANCE(739);
      if (lookahead == 'P') ADVANCE(715);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'T') ADVANCE(889);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == '\\') SKIP(481)
      if (lookahead == ']') ADVANCE(776);
      if (lookahead == '^') ADVANCE(860);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(719);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(721);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 'q') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '{') ADVANCE(747);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '}') ADVANCE(748);
      if (lookahead == '~') ADVANCE(867);
      if (lookahead == 172) ADVANCE(884);
      if (lookahead == 8320) ADVANCE(831);
      if (lookahead == 8321) ADVANCE(832);
      if (lookahead == 8322) ADVANCE(833);
      if (lookahead == 8323) ADVANCE(834);
      if (lookahead == 8324) ADVANCE(835);
      if (lookahead == 8325) ADVANCE(836);
      if (lookahead == 8326) ADVANCE(837);
      if (lookahead == 8327) ADVANCE(838);
      if (lookahead == 8328) ADVANCE(839);
      if (lookahead == 8329) ADVANCE(840);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8704) ADVANCE(898);
      if (lookahead == 8707) ADVANCE(895);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == 8853) ADVANCE(857);
      if (lookahead == 8868) ADVANCE(888);
      if (lookahead == 8869) ADVANCE(885);
      if (lookahead == 9654) ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
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
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(48)
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
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(71)
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
      if (lookahead == '!') ADVANCE(874);
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == '\'') ADVANCE(861);
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(851);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'E') ADVANCE(682);
      if (lookahead == 'F') ADVANCE(887);
      if (lookahead == 'I') ADVANCE(590);
      if (lookahead == 'O') ADVANCE(672);
      if (lookahead == 'T') ADVANCE(890);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '~') ADVANCE(866);
      if (lookahead == 172) ADVANCE(884);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8704) ADVANCE(898);
      if (lookahead == 8707) ADVANCE(895);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == 8868) ADVANCE(888);
      if (lookahead == 8869) ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(874);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '\'') ADVANCE(861);
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '.') ADVANCE(792);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(851);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'E') ADVANCE(682);
      if (lookahead == 'F') ADVANCE(887);
      if (lookahead == 'I') ADVANCE(590);
      if (lookahead == 'O') ADVANCE(672);
      if (lookahead == 'T') ADVANCE(890);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead == '~') ADVANCE(866);
      if (lookahead == 172) ADVANCE(884);
      if (lookahead == 8704) ADVANCE(898);
      if (lookahead == 8707) ADVANCE(895);
      if (lookahead == 8868) ADVANCE(888);
      if (lookahead == 8869) ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(874);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '\'') ADVANCE(861);
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(851);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'E') ADVANCE(682);
      if (lookahead == 'F') ADVANCE(887);
      if (lookahead == 'I') ADVANCE(590);
      if (lookahead == 'O') ADVANCE(672);
      if (lookahead == 'T') ADVANCE(890);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == '~') ADVANCE(866);
      if (lookahead == 8704) ADVANCE(898);
      if (lookahead == 8707) ADVANCE(895);
      if (lookahead == 8868) ADVANCE(888);
      if (lookahead == 8869) ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(874);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(627);
      if (lookahead == 'I') ADVANCE(590);
      if (lookahead == 'O') ADVANCE(672);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(874);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(627);
      if (lookahead == 'I') ADVANCE(590);
      if (lookahead == 'O') ADVANCE(672);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '.') ADVANCE(793);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(852);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '~') ADVANCE(865);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '.') ADVANCE(792);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(852);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '~') ADVANCE(865);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '+') ADVANCE(854);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(853);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '}') ADVANCE(748);
      if (lookahead == '~') ADVANCE(471);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '*') ADVANCE(858);
      if (lookahead == '+') ADVANCE(854);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '-') ADVANCE(875);
      if (lookahead == '.') ADVANCE(793);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(853);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(711);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'O') ADVANCE(738);
      if (lookahead == 'P') ADVANCE(715);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(776);
      if (lookahead == '^') ADVANCE(860);
      if (lookahead == 'c') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(721);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == '{') ADVANCE(746);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '}') ADVANCE(748);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == 8853) ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '+') ADVANCE(854);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(853);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '}') ADVANCE(748);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(712);
      if (lookahead == 'I') ADVANCE(714);
      if (lookahead == 'O') ADVANCE(740);
      if (lookahead == 'P') ADVANCE(716);
      if (lookahead == 'S') ADVANCE(718);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'c') ADVANCE(720);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(724);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == 8658) ADVANCE(881);
      if (lookahead == 8660) ADVANCE(879);
      if (lookahead == 8741) ADVANCE(826);
      if (lookahead == 8743) ADVANCE(883);
      if (lookahead == 8744) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '&') ADVANCE(754);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '|') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '$') ADVANCE(863);
      if (lookahead == '\'') ADVANCE(861);
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '.') ADVANCE(792);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(851);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '~') ADVANCE(866);
      if (lookahead == 8320) ADVANCE(831);
      if (lookahead == 8321) ADVANCE(832);
      if (lookahead == 8322) ADVANCE(833);
      if (lookahead == 8323) ADVANCE(834);
      if (lookahead == 8324) ADVANCE(835);
      if (lookahead == 8325) ADVANCE(836);
      if (lookahead == 8326) ADVANCE(837);
      if (lookahead == 8327) ADVANCE(838);
      if (lookahead == 8328) ADVANCE(839);
      if (lookahead == 8329) ADVANCE(840);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ')') ADVANCE(787);
      if (lookahead == '*') ADVANCE(858);
      if (lookahead == '+') ADVANCE(854);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '.') ADVANCE(793);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '<') ADVANCE(851);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '@') ADVANCE(824);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == ']') ADVANCE(776);
      if (lookahead == '^') ADVANCE(860);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'q') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '{') ADVANCE(746);
      if (lookahead == 8853) ADVANCE(857);
      if (lookahead == 9654) ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == '*') ADVANCE(858);
      if (lookahead == '+') ADVANCE(854);
      if (lookahead == '.') ADVANCE(793);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == 'X') ADVANCE(501);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '^') ADVANCE(860);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == '{') ADVANCE(746);
      if (lookahead == 8853) ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(782);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '.') ADVANCE(793);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '[') ADVANCE(358);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '{') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(841);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(439);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(500);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'b') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'v') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(803);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(802);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(788);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(789);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(777);
      if (lookahead == '[') ADVANCE(778);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(878);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(880);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(825);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(779);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(786);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(786);
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(806);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(308);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(342);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(351);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(349);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(855);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(197);
      END_STATE();
    case 101:
      if (lookahead == 'V') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(692);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(356);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(864);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(741);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'y') ADVANCE(808);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(421);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(794);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(701);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(705);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(708);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(704);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(868);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'y') ADVANCE(808);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(896);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(769);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'q') ADVANCE(452);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(877);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(780);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(761);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(891);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(707);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 460:
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 461:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 462:
      if (lookahead == 'x') ADVANCE(757);
      END_STATE();
    case 463:
      if (lookahead == 'x') ADVANCE(422);
      END_STATE();
    case 464:
      if (lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 465:
      if (lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 466:
      if (lookahead == 'y') ADVANCE(813);
      END_STATE();
    case 467:
      if (lookahead == 'y') ADVANCE(815);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 469:
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 470:
      if (lookahead == '}') ADVANCE(850);
      END_STATE();
    case 471:
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 472:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 473:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(899);
      END_STATE();
    case 474:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 475:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 477:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 478:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      END_STATE();
    case 479:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(900);
      if (lookahead == '\r') ADVANCE(901);
      END_STATE();
    case 480:
      if (eof) ADVANCE(482);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 481:
      if (eof) ADVANCE(482);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(480)
      END_STATE();
    case 482:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(516);
      if (lookahead == 'I') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == 'g') ADVANCE(545);
      if (lookahead == 's') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'h') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'u') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == 'u') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(681);
      if (lookahead == 'r') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == 'q') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 't') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(559);
      if (lookahead == 'y') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(803);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(733);
      if (lookahead == '\r') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(737);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(737);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '"') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(735);
      if (lookahead != 0) ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '\\') ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(737);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(737);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(732);
      if (lookahead == '\r') ADVANCE(736);
      if (lookahead == '"') ADVANCE(900);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(732);
      if (lookahead == '"') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(735);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(841);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(893);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_all_DASHtraces);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_node_var_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(845);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(849);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(849);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(849);
      if (lookahead == '*') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(849);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(849);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(844);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '*') ADVANCE(900);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(844);
      if (lookahead == '*') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(850);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(862);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(862);
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_In);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_Out);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_Out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_Fr);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_Fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(479);
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
  [27] = {.lex_state = 48, .external_lex_state = 1},
  [28] = {.lex_state = 48, .external_lex_state = 1},
  [29] = {.lex_state = 49, .external_lex_state = 1},
  [30] = {.lex_state = 48, .external_lex_state = 1},
  [31] = {.lex_state = 48, .external_lex_state = 1},
  [32] = {.lex_state = 48, .external_lex_state = 1},
  [33] = {.lex_state = 48, .external_lex_state = 1},
  [34] = {.lex_state = 48, .external_lex_state = 1},
  [35] = {.lex_state = 51, .external_lex_state = 1},
  [36] = {.lex_state = 48, .external_lex_state = 1},
  [37] = {.lex_state = 48, .external_lex_state = 1},
  [38] = {.lex_state = 52, .external_lex_state = 1},
  [39] = {.lex_state = 52, .external_lex_state = 1},
  [40] = {.lex_state = 52, .external_lex_state = 1},
  [41] = {.lex_state = 51, .external_lex_state = 1},
  [42] = {.lex_state = 48, .external_lex_state = 1},
  [43] = {.lex_state = 52, .external_lex_state = 1},
  [44] = {.lex_state = 48, .external_lex_state = 1},
  [45] = {.lex_state = 52, .external_lex_state = 1},
  [46] = {.lex_state = 48, .external_lex_state = 1},
  [47] = {.lex_state = 52, .external_lex_state = 1},
  [48] = {.lex_state = 48, .external_lex_state = 1},
  [49] = {.lex_state = 48, .external_lex_state = 1},
  [50] = {.lex_state = 52, .external_lex_state = 1},
  [51] = {.lex_state = 56, .external_lex_state = 1},
  [52] = {.lex_state = 48, .external_lex_state = 1},
  [53] = {.lex_state = 52, .external_lex_state = 1},
  [54] = {.lex_state = 52, .external_lex_state = 1},
  [55] = {.lex_state = 52, .external_lex_state = 1},
  [56] = {.lex_state = 52, .external_lex_state = 1},
  [57] = {.lex_state = 52, .external_lex_state = 1},
  [58] = {.lex_state = 48, .external_lex_state = 1},
  [59] = {.lex_state = 48, .external_lex_state = 1},
  [60] = {.lex_state = 52, .external_lex_state = 1},
  [61] = {.lex_state = 48, .external_lex_state = 1},
  [62] = {.lex_state = 56, .external_lex_state = 1},
  [63] = {.lex_state = 56, .external_lex_state = 1},
  [64] = {.lex_state = 52, .external_lex_state = 1},
  [65] = {.lex_state = 48, .external_lex_state = 1},
  [66] = {.lex_state = 52, .external_lex_state = 1},
  [67] = {.lex_state = 49, .external_lex_state = 1},
  [68] = {.lex_state = 52, .external_lex_state = 1},
  [69] = {.lex_state = 52, .external_lex_state = 1},
  [70] = {.lex_state = 49, .external_lex_state = 1},
  [71] = {.lex_state = 52, .external_lex_state = 1},
  [72] = {.lex_state = 52, .external_lex_state = 1},
  [73] = {.lex_state = 49, .external_lex_state = 1},
  [74] = {.lex_state = 49, .external_lex_state = 1},
  [75] = {.lex_state = 49, .external_lex_state = 1},
  [76] = {.lex_state = 49, .external_lex_state = 1},
  [77] = {.lex_state = 48, .external_lex_state = 1},
  [78] = {.lex_state = 49, .external_lex_state = 1},
  [79] = {.lex_state = 52, .external_lex_state = 1},
  [80] = {.lex_state = 53, .external_lex_state = 1},
  [81] = {.lex_state = 53, .external_lex_state = 1},
  [82] = {.lex_state = 49, .external_lex_state = 1},
  [83] = {.lex_state = 49, .external_lex_state = 1},
  [84] = {.lex_state = 49, .external_lex_state = 1},
  [85] = {.lex_state = 49, .external_lex_state = 1},
  [86] = {.lex_state = 49, .external_lex_state = 1},
  [87] = {.lex_state = 49, .external_lex_state = 1},
  [88] = {.lex_state = 49, .external_lex_state = 1},
  [89] = {.lex_state = 49, .external_lex_state = 1},
  [90] = {.lex_state = 46, .external_lex_state = 1},
  [91] = {.lex_state = 51, .external_lex_state = 1},
  [92] = {.lex_state = 53, .external_lex_state = 1},
  [93] = {.lex_state = 53, .external_lex_state = 1},
  [94] = {.lex_state = 49, .external_lex_state = 1},
  [95] = {.lex_state = 51, .external_lex_state = 1},
  [96] = {.lex_state = 53, .external_lex_state = 1},
  [97] = {.lex_state = 51, .external_lex_state = 1},
  [98] = {.lex_state = 49, .external_lex_state = 1},
  [99] = {.lex_state = 49, .external_lex_state = 1},
  [100] = {.lex_state = 53, .external_lex_state = 1},
  [101] = {.lex_state = 49, .external_lex_state = 1},
  [102] = {.lex_state = 49, .external_lex_state = 1},
  [103] = {.lex_state = 53, .external_lex_state = 1},
  [104] = {.lex_state = 49, .external_lex_state = 1},
  [105] = {.lex_state = 49, .external_lex_state = 1},
  [106] = {.lex_state = 49, .external_lex_state = 1},
  [107] = {.lex_state = 49, .external_lex_state = 1},
  [108] = {.lex_state = 49, .external_lex_state = 1},
  [109] = {.lex_state = 49, .external_lex_state = 1},
  [110] = {.lex_state = 49, .external_lex_state = 1},
  [111] = {.lex_state = 53, .external_lex_state = 1},
  [112] = {.lex_state = 68, .external_lex_state = 1},
  [113] = {.lex_state = 49, .external_lex_state = 1},
  [114] = {.lex_state = 47, .external_lex_state = 1},
  [115] = {.lex_state = 53, .external_lex_state = 1},
  [116] = {.lex_state = 53, .external_lex_state = 1},
  [117] = {.lex_state = 53, .external_lex_state = 1},
  [118] = {.lex_state = 53, .external_lex_state = 1},
  [119] = {.lex_state = 68, .external_lex_state = 1},
  [120] = {.lex_state = 53, .external_lex_state = 1},
  [121] = {.lex_state = 53, .external_lex_state = 1},
  [122] = {.lex_state = 49, .external_lex_state = 1},
  [123] = {.lex_state = 53, .external_lex_state = 1},
  [124] = {.lex_state = 53, .external_lex_state = 1},
  [125] = {.lex_state = 53, .external_lex_state = 1},
  [126] = {.lex_state = 53, .external_lex_state = 1},
  [127] = {.lex_state = 53, .external_lex_state = 1},
  [128] = {.lex_state = 47, .external_lex_state = 1},
  [129] = {.lex_state = 53, .external_lex_state = 1},
  [130] = {.lex_state = 68, .external_lex_state = 1},
  [131] = {.lex_state = 68, .external_lex_state = 1},
  [132] = {.lex_state = 49, .external_lex_state = 1},
  [133] = {.lex_state = 49, .external_lex_state = 1},
  [134] = {.lex_state = 50, .external_lex_state = 1},
  [135] = {.lex_state = 53, .external_lex_state = 1},
  [136] = {.lex_state = 49, .external_lex_state = 1},
  [137] = {.lex_state = 53, .external_lex_state = 1},
  [138] = {.lex_state = 53, .external_lex_state = 1},
  [139] = {.lex_state = 48, .external_lex_state = 1},
  [140] = {.lex_state = 53, .external_lex_state = 1},
  [141] = {.lex_state = 48, .external_lex_state = 1},
  [142] = {.lex_state = 48, .external_lex_state = 1},
  [143] = {.lex_state = 49, .external_lex_state = 1},
  [144] = {.lex_state = 53, .external_lex_state = 1},
  [145] = {.lex_state = 69, .external_lex_state = 1},
  [146] = {.lex_state = 53, .external_lex_state = 1},
  [147] = {.lex_state = 49, .external_lex_state = 1},
  [148] = {.lex_state = 53, .external_lex_state = 1},
  [149] = {.lex_state = 56, .external_lex_state = 1},
  [150] = {.lex_state = 69, .external_lex_state = 1},
  [151] = {.lex_state = 53, .external_lex_state = 1},
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
  [163] = {.lex_state = 69, .external_lex_state = 1},
  [164] = {.lex_state = 51, .external_lex_state = 1},
  [165] = {.lex_state = 49, .external_lex_state = 1},
  [166] = {.lex_state = 49, .external_lex_state = 1},
  [167] = {.lex_state = 54, .external_lex_state = 1},
  [168] = {.lex_state = 70, .external_lex_state = 1},
  [169] = {.lex_state = 70, .external_lex_state = 1},
  [170] = {.lex_state = 54, .external_lex_state = 1},
  [171] = {.lex_state = 70, .external_lex_state = 1},
  [172] = {.lex_state = 53, .external_lex_state = 1},
  [173] = {.lex_state = 51, .external_lex_state = 1},
  [174] = {.lex_state = 70, .external_lex_state = 1},
  [175] = {.lex_state = 53, .external_lex_state = 1},
  [176] = {.lex_state = 54, .external_lex_state = 1},
  [177] = {.lex_state = 56, .external_lex_state = 1},
  [178] = {.lex_state = 56, .external_lex_state = 1},
  [179] = {.lex_state = 51, .external_lex_state = 1},
  [180] = {.lex_state = 56, .external_lex_state = 1},
  [181] = {.lex_state = 55, .external_lex_state = 1},
  [182] = {.lex_state = 49, .external_lex_state = 1},
  [183] = {.lex_state = 51, .external_lex_state = 1},
  [184] = {.lex_state = 56, .external_lex_state = 1},
  [185] = {.lex_state = 56, .external_lex_state = 1},
  [186] = {.lex_state = 51, .external_lex_state = 1},
  [187] = {.lex_state = 56, .external_lex_state = 1},
  [188] = {.lex_state = 56, .external_lex_state = 1},
  [189] = {.lex_state = 49, .external_lex_state = 1},
  [190] = {.lex_state = 56, .external_lex_state = 1},
  [191] = {.lex_state = 56, .external_lex_state = 1},
  [192] = {.lex_state = 56, .external_lex_state = 1},
  [193] = {.lex_state = 56, .external_lex_state = 1},
  [194] = {.lex_state = 56, .external_lex_state = 1},
  [195] = {.lex_state = 71, .external_lex_state = 1},
  [196] = {.lex_state = 51, .external_lex_state = 1},
  [197] = {.lex_state = 56, .external_lex_state = 1},
  [198] = {.lex_state = 56, .external_lex_state = 1},
  [199] = {.lex_state = 51, .external_lex_state = 1},
  [200] = {.lex_state = 56, .external_lex_state = 1},
  [201] = {.lex_state = 51, .external_lex_state = 1},
  [202] = {.lex_state = 56, .external_lex_state = 1},
  [203] = {.lex_state = 0, .external_lex_state = 1},
  [204] = {.lex_state = 56, .external_lex_state = 1},
  [205] = {.lex_state = 51, .external_lex_state = 1},
  [206] = {.lex_state = 56, .external_lex_state = 1},
  [207] = {.lex_state = 51, .external_lex_state = 1},
  [208] = {.lex_state = 49, .external_lex_state = 1},
  [209] = {.lex_state = 56, .external_lex_state = 1},
  [210] = {.lex_state = 54, .external_lex_state = 1},
  [211] = {.lex_state = 71, .external_lex_state = 1},
  [212] = {.lex_state = 71, .external_lex_state = 1},
  [213] = {.lex_state = 51, .external_lex_state = 1},
  [214] = {.lex_state = 71, .external_lex_state = 1},
  [215] = {.lex_state = 56, .external_lex_state = 1},
  [216] = {.lex_state = 56, .external_lex_state = 1},
  [217] = {.lex_state = 56, .external_lex_state = 1},
  [218] = {.lex_state = 56, .external_lex_state = 1},
  [219] = {.lex_state = 56, .external_lex_state = 1},
  [220] = {.lex_state = 71, .external_lex_state = 1},
  [221] = {.lex_state = 71, .external_lex_state = 1},
  [222] = {.lex_state = 51, .external_lex_state = 1},
  [223] = {.lex_state = 51, .external_lex_state = 1},
  [224] = {.lex_state = 71, .external_lex_state = 1},
  [225] = {.lex_state = 51, .external_lex_state = 1},
  [226] = {.lex_state = 51, .external_lex_state = 1},
  [227] = {.lex_state = 51, .external_lex_state = 1},
  [228] = {.lex_state = 56, .external_lex_state = 1},
  [229] = {.lex_state = 71, .external_lex_state = 1},
  [230] = {.lex_state = 56, .external_lex_state = 1},
  [231] = {.lex_state = 71, .external_lex_state = 1},
  [232] = {.lex_state = 56, .external_lex_state = 1},
  [233] = {.lex_state = 51, .external_lex_state = 1},
  [234] = {.lex_state = 56, .external_lex_state = 1},
  [235] = {.lex_state = 54, .external_lex_state = 1},
  [236] = {.lex_state = 56, .external_lex_state = 1},
  [237] = {.lex_state = 51, .external_lex_state = 1},
  [238] = {.lex_state = 54, .external_lex_state = 1},
  [239] = {.lex_state = 56, .external_lex_state = 1},
  [240] = {.lex_state = 56, .external_lex_state = 1},
  [241] = {.lex_state = 56, .external_lex_state = 1},
  [242] = {.lex_state = 56, .external_lex_state = 1},
  [243] = {.lex_state = 56, .external_lex_state = 1},
  [244] = {.lex_state = 56, .external_lex_state = 1},
  [245] = {.lex_state = 56, .external_lex_state = 1},
  [246] = {.lex_state = 56, .external_lex_state = 1},
  [247] = {.lex_state = 56, .external_lex_state = 1},
  [248] = {.lex_state = 56, .external_lex_state = 1},
  [249] = {.lex_state = 56, .external_lex_state = 1},
  [250] = {.lex_state = 56, .external_lex_state = 1},
  [251] = {.lex_state = 51, .external_lex_state = 1},
  [252] = {.lex_state = 51, .external_lex_state = 1},
  [253] = {.lex_state = 56, .external_lex_state = 1},
  [254] = {.lex_state = 56, .external_lex_state = 1},
  [255] = {.lex_state = 56, .external_lex_state = 1},
  [256] = {.lex_state = 56, .external_lex_state = 1},
  [257] = {.lex_state = 51, .external_lex_state = 1},
  [258] = {.lex_state = 56, .external_lex_state = 1},
  [259] = {.lex_state = 56, .external_lex_state = 1},
  [260] = {.lex_state = 51, .external_lex_state = 1},
  [261] = {.lex_state = 56, .external_lex_state = 1},
  [262] = {.lex_state = 56, .external_lex_state = 1},
  [263] = {.lex_state = 56, .external_lex_state = 1},
  [264] = {.lex_state = 56, .external_lex_state = 1},
  [265] = {.lex_state = 41, .external_lex_state = 1},
  [266] = {.lex_state = 41, .external_lex_state = 1},
  [267] = {.lex_state = 41, .external_lex_state = 1},
  [268] = {.lex_state = 51, .external_lex_state = 1},
  [269] = {.lex_state = 51, .external_lex_state = 1},
  [270] = {.lex_state = 56, .external_lex_state = 1},
  [271] = {.lex_state = 56, .external_lex_state = 1},
  [272] = {.lex_state = 51, .external_lex_state = 1},
  [273] = {.lex_state = 53, .external_lex_state = 1},
  [274] = {.lex_state = 41, .external_lex_state = 1},
  [275] = {.lex_state = 54, .external_lex_state = 1},
  [276] = {.lex_state = 54, .external_lex_state = 1},
  [277] = {.lex_state = 56, .external_lex_state = 1},
  [278] = {.lex_state = 56, .external_lex_state = 1},
  [279] = {.lex_state = 54, .external_lex_state = 1},
  [280] = {.lex_state = 54, .external_lex_state = 1},
  [281] = {.lex_state = 56, .external_lex_state = 1},
  [282] = {.lex_state = 41, .external_lex_state = 1},
  [283] = {.lex_state = 41, .external_lex_state = 1},
  [284] = {.lex_state = 54, .external_lex_state = 1},
  [285] = {.lex_state = 56, .external_lex_state = 1},
  [286] = {.lex_state = 56, .external_lex_state = 1},
  [287] = {.lex_state = 56, .external_lex_state = 1},
  [288] = {.lex_state = 53, .external_lex_state = 1},
  [289] = {.lex_state = 41, .external_lex_state = 1},
  [290] = {.lex_state = 56, .external_lex_state = 1},
  [291] = {.lex_state = 51, .external_lex_state = 1},
  [292] = {.lex_state = 54, .external_lex_state = 1},
  [293] = {.lex_state = 41, .external_lex_state = 1},
  [294] = {.lex_state = 54, .external_lex_state = 1},
  [295] = {.lex_state = 56, .external_lex_state = 1},
  [296] = {.lex_state = 53, .external_lex_state = 1},
  [297] = {.lex_state = 56, .external_lex_state = 1},
  [298] = {.lex_state = 56, .external_lex_state = 1},
  [299] = {.lex_state = 44, .external_lex_state = 1},
  [300] = {.lex_state = 44, .external_lex_state = 1},
  [301] = {.lex_state = 54, .external_lex_state = 1},
  [302] = {.lex_state = 45, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 45, .external_lex_state = 1},
  [305] = {.lex_state = 44, .external_lex_state = 1},
  [306] = {.lex_state = 45, .external_lex_state = 1},
  [307] = {.lex_state = 44, .external_lex_state = 1},
  [308] = {.lex_state = 45, .external_lex_state = 1},
  [309] = {.lex_state = 45, .external_lex_state = 1},
  [310] = {.lex_state = 45, .external_lex_state = 1},
  [311] = {.lex_state = 45, .external_lex_state = 1},
  [312] = {.lex_state = 45, .external_lex_state = 1},
  [313] = {.lex_state = 45, .external_lex_state = 1},
  [314] = {.lex_state = 45, .external_lex_state = 1},
  [315] = {.lex_state = 44, .external_lex_state = 1},
  [316] = {.lex_state = 45, .external_lex_state = 1},
  [317] = {.lex_state = 45, .external_lex_state = 1},
  [318] = {.lex_state = 44, .external_lex_state = 1},
  [319] = {.lex_state = 53, .external_lex_state = 1},
  [320] = {.lex_state = 44, .external_lex_state = 1},
  [321] = {.lex_state = 45, .external_lex_state = 1},
  [322] = {.lex_state = 54, .external_lex_state = 1},
  [323] = {.lex_state = 45, .external_lex_state = 1},
  [324] = {.lex_state = 45, .external_lex_state = 1},
  [325] = {.lex_state = 45, .external_lex_state = 1},
  [326] = {.lex_state = 45, .external_lex_state = 1},
  [327] = {.lex_state = 44, .external_lex_state = 1},
  [328] = {.lex_state = 54, .external_lex_state = 1},
  [329] = {.lex_state = 53, .external_lex_state = 1},
  [330] = {.lex_state = 45, .external_lex_state = 1},
  [331] = {.lex_state = 54, .external_lex_state = 1},
  [332] = {.lex_state = 44, .external_lex_state = 1},
  [333] = {.lex_state = 45, .external_lex_state = 1},
  [334] = {.lex_state = 45, .external_lex_state = 1},
  [335] = {.lex_state = 45, .external_lex_state = 1},
  [336] = {.lex_state = 54, .external_lex_state = 1},
  [337] = {.lex_state = 45, .external_lex_state = 1},
  [338] = {.lex_state = 44, .external_lex_state = 1},
  [339] = {.lex_state = 55, .external_lex_state = 1},
  [340] = {.lex_state = 44, .external_lex_state = 1},
  [341] = {.lex_state = 54, .external_lex_state = 1},
  [342] = {.lex_state = 55, .external_lex_state = 1},
  [343] = {.lex_state = 54, .external_lex_state = 1},
  [344] = {.lex_state = 55, .external_lex_state = 1},
  [345] = {.lex_state = 44, .external_lex_state = 1},
  [346] = {.lex_state = 41, .external_lex_state = 1},
  [347] = {.lex_state = 55, .external_lex_state = 1},
  [348] = {.lex_state = 55, .external_lex_state = 1},
  [349] = {.lex_state = 54, .external_lex_state = 1},
  [350] = {.lex_state = 41, .external_lex_state = 1},
  [351] = {.lex_state = 54, .external_lex_state = 1},
  [352] = {.lex_state = 55, .external_lex_state = 1},
  [353] = {.lex_state = 54, .external_lex_state = 1},
  [354] = {.lex_state = 41, .external_lex_state = 1},
  [355] = {.lex_state = 45, .external_lex_state = 1},
  [356] = {.lex_state = 45, .external_lex_state = 1},
  [357] = {.lex_state = 55, .external_lex_state = 1},
  [358] = {.lex_state = 55, .external_lex_state = 1},
  [359] = {.lex_state = 55, .external_lex_state = 1},
  [360] = {.lex_state = 55, .external_lex_state = 1},
  [361] = {.lex_state = 55, .external_lex_state = 1},
  [362] = {.lex_state = 44, .external_lex_state = 1},
  [363] = {.lex_state = 55, .external_lex_state = 1},
  [364] = {.lex_state = 55, .external_lex_state = 1},
  [365] = {.lex_state = 55, .external_lex_state = 1},
  [366] = {.lex_state = 55, .external_lex_state = 1},
  [367] = {.lex_state = 55, .external_lex_state = 1},
  [368] = {.lex_state = 51, .external_lex_state = 1},
  [369] = {.lex_state = 55, .external_lex_state = 1},
  [370] = {.lex_state = 55, .external_lex_state = 1},
  [371] = {.lex_state = 55, .external_lex_state = 1},
  [372] = {.lex_state = 55, .external_lex_state = 1},
  [373] = {.lex_state = 55, .external_lex_state = 1},
  [374] = {.lex_state = 46, .external_lex_state = 1},
  [375] = {.lex_state = 55, .external_lex_state = 1},
  [376] = {.lex_state = 55, .external_lex_state = 1},
  [377] = {.lex_state = 55, .external_lex_state = 1},
  [378] = {.lex_state = 55, .external_lex_state = 1},
  [379] = {.lex_state = 55, .external_lex_state = 1},
  [380] = {.lex_state = 44, .external_lex_state = 1},
  [381] = {.lex_state = 55, .external_lex_state = 1},
  [382] = {.lex_state = 0, .external_lex_state = 1},
  [383] = {.lex_state = 54, .external_lex_state = 1},
  [384] = {.lex_state = 0, .external_lex_state = 1},
  [385] = {.lex_state = 46, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 55, .external_lex_state = 1},
  [388] = {.lex_state = 54, .external_lex_state = 1},
  [389] = {.lex_state = 55, .external_lex_state = 1},
  [390] = {.lex_state = 0, .external_lex_state = 1},
  [391] = {.lex_state = 53, .external_lex_state = 1},
  [392] = {.lex_state = 53, .external_lex_state = 1},
  [393] = {.lex_state = 55, .external_lex_state = 1},
  [394] = {.lex_state = 53, .external_lex_state = 1},
  [395] = {.lex_state = 55, .external_lex_state = 1},
  [396] = {.lex_state = 48, .external_lex_state = 1},
  [397] = {.lex_state = 53, .external_lex_state = 1},
  [398] = {.lex_state = 48, .external_lex_state = 1},
  [399] = {.lex_state = 41, .external_lex_state = 1},
  [400] = {.lex_state = 53, .external_lex_state = 1},
  [401] = {.lex_state = 53, .external_lex_state = 1},
  [402] = {.lex_state = 44, .external_lex_state = 1},
  [403] = {.lex_state = 44, .external_lex_state = 1},
  [404] = {.lex_state = 55, .external_lex_state = 1},
  [405] = {.lex_state = 53, .external_lex_state = 1},
  [406] = {.lex_state = 0, .external_lex_state = 1},
  [407] = {.lex_state = 53, .external_lex_state = 1},
  [408] = {.lex_state = 53, .external_lex_state = 1},
  [409] = {.lex_state = 41, .external_lex_state = 1},
  [410] = {.lex_state = 0, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 50, .external_lex_state = 1},
  [414] = {.lex_state = 49, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 50, .external_lex_state = 1},
  [417] = {.lex_state = 50, .external_lex_state = 1},
  [418] = {.lex_state = 54, .external_lex_state = 1},
  [419] = {.lex_state = 54, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 0, .external_lex_state = 1},
  [422] = {.lex_state = 49, .external_lex_state = 1},
  [423] = {.lex_state = 41, .external_lex_state = 1},
  [424] = {.lex_state = 0, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 50, .external_lex_state = 1},
  [427] = {.lex_state = 0, .external_lex_state = 1},
  [428] = {.lex_state = 41, .external_lex_state = 1},
  [429] = {.lex_state = 50, .external_lex_state = 1},
  [430] = {.lex_state = 54, .external_lex_state = 1},
  [431] = {.lex_state = 54, .external_lex_state = 1},
  [432] = {.lex_state = 0, .external_lex_state = 1},
  [433] = {.lex_state = 53, .external_lex_state = 1},
  [434] = {.lex_state = 41, .external_lex_state = 1},
  [435] = {.lex_state = 49, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 0, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 0, .external_lex_state = 1},
  [441] = {.lex_state = 0, .external_lex_state = 1},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 53, .external_lex_state = 1},
  [444] = {.lex_state = 0, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 53, .external_lex_state = 1},
  [448] = {.lex_state = 53, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 0, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 0, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 53, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 0, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 42, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 0, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 0, .external_lex_state = 1},
  [465] = {.lex_state = 54, .external_lex_state = 1},
  [466] = {.lex_state = 54, .external_lex_state = 1},
  [467] = {.lex_state = 54, .external_lex_state = 1},
  [468] = {.lex_state = 53, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 0, .external_lex_state = 1},
  [471] = {.lex_state = 0, .external_lex_state = 1},
  [472] = {.lex_state = 0, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 54, .external_lex_state = 1},
  [475] = {.lex_state = 0, .external_lex_state = 1},
  [476] = {.lex_state = 0, .external_lex_state = 1},
  [477] = {.lex_state = 0, .external_lex_state = 1},
  [478] = {.lex_state = 0, .external_lex_state = 1},
  [479] = {.lex_state = 0, .external_lex_state = 1},
  [480] = {.lex_state = 0, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 53, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 53, .external_lex_state = 1},
  [485] = {.lex_state = 54, .external_lex_state = 1},
  [486] = {.lex_state = 0, .external_lex_state = 1},
  [487] = {.lex_state = 41, .external_lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 0, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 42, .external_lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 41, .external_lex_state = 1},
  [496] = {.lex_state = 0, .external_lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 1},
  [498] = {.lex_state = 0, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 54, .external_lex_state = 1},
  [501] = {.lex_state = 53, .external_lex_state = 1},
  [502] = {.lex_state = 0, .external_lex_state = 1},
  [503] = {.lex_state = 0, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 0, .external_lex_state = 1},
  [507] = {.lex_state = 0, .external_lex_state = 1},
  [508] = {.lex_state = 0, .external_lex_state = 1},
  [509] = {.lex_state = 0, .external_lex_state = 1},
  [510] = {.lex_state = 0, .external_lex_state = 1},
  [511] = {.lex_state = 0, .external_lex_state = 1},
  [512] = {.lex_state = 0, .external_lex_state = 1},
  [513] = {.lex_state = 54, .external_lex_state = 1},
  [514] = {.lex_state = 53, .external_lex_state = 1},
  [515] = {.lex_state = 0, .external_lex_state = 1},
  [516] = {.lex_state = 0, .external_lex_state = 1},
  [517] = {.lex_state = 41, .external_lex_state = 1},
  [518] = {.lex_state = 54, .external_lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 1},
  [520] = {.lex_state = 54, .external_lex_state = 1},
  [521] = {.lex_state = 0, .external_lex_state = 1},
  [522] = {.lex_state = 53, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 41, .external_lex_state = 1},
  [525] = {.lex_state = 53, .external_lex_state = 1},
  [526] = {.lex_state = 0, .external_lex_state = 1},
  [527] = {.lex_state = 41, .external_lex_state = 1},
  [528] = {.lex_state = 0, .external_lex_state = 1},
  [529] = {.lex_state = 0, .external_lex_state = 1},
  [530] = {.lex_state = 41, .external_lex_state = 1},
  [531] = {.lex_state = 42, .external_lex_state = 1},
  [532] = {.lex_state = 50, .external_lex_state = 1},
  [533] = {.lex_state = 54, .external_lex_state = 1},
  [534] = {.lex_state = 41, .external_lex_state = 1},
  [535] = {.lex_state = 0, .external_lex_state = 1},
  [536] = {.lex_state = 0, .external_lex_state = 1},
  [537] = {.lex_state = 0, .external_lex_state = 1},
  [538] = {.lex_state = 0, .external_lex_state = 1},
  [539] = {.lex_state = 0, .external_lex_state = 1},
  [540] = {.lex_state = 0, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 54, .external_lex_state = 1},
  [543] = {.lex_state = 733, .external_lex_state = 1},
  [544] = {.lex_state = 49, .external_lex_state = 1},
  [545] = {.lex_state = 41, .external_lex_state = 1},
  [546] = {.lex_state = 54, .external_lex_state = 1},
  [547] = {.lex_state = 41, .external_lex_state = 1},
  [548] = {.lex_state = 41, .external_lex_state = 1},
  [549] = {.lex_state = 0, .external_lex_state = 1},
  [550] = {.lex_state = 0, .external_lex_state = 1},
  [551] = {.lex_state = 0, .external_lex_state = 1},
  [552] = {.lex_state = 733, .external_lex_state = 1},
  [553] = {.lex_state = 41, .external_lex_state = 1},
  [554] = {.lex_state = 42, .external_lex_state = 1},
  [555] = {.lex_state = 41, .external_lex_state = 1},
  [556] = {.lex_state = 41, .external_lex_state = 1},
  [557] = {.lex_state = 41, .external_lex_state = 1},
  [558] = {.lex_state = 0, .external_lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 1},
  [560] = {.lex_state = 0, .external_lex_state = 1},
  [561] = {.lex_state = 41, .external_lex_state = 1},
  [562] = {.lex_state = 48, .external_lex_state = 1},
  [563] = {.lex_state = 41, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 41, .external_lex_state = 1},
  [566] = {.lex_state = 0, .external_lex_state = 1},
  [567] = {.lex_state = 41, .external_lex_state = 1},
  [568] = {.lex_state = 0, .external_lex_state = 1},
  [569] = {.lex_state = 41, .external_lex_state = 1},
  [570] = {.lex_state = 0, .external_lex_state = 1},
  [571] = {.lex_state = 48, .external_lex_state = 1},
  [572] = {.lex_state = 0, .external_lex_state = 1},
  [573] = {.lex_state = 41, .external_lex_state = 1},
  [574] = {.lex_state = 0, .external_lex_state = 1},
  [575] = {.lex_state = 0, .external_lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 1},
  [577] = {.lex_state = 733, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 41, .external_lex_state = 1},
  [580] = {.lex_state = 53, .external_lex_state = 1},
  [581] = {.lex_state = 0, .external_lex_state = 1},
  [582] = {.lex_state = 0, .external_lex_state = 1},
  [583] = {.lex_state = 0, .external_lex_state = 1},
  [584] = {.lex_state = 0, .external_lex_state = 1},
  [585] = {.lex_state = 0, .external_lex_state = 1},
  [586] = {.lex_state = 0, .external_lex_state = 1},
  [587] = {.lex_state = 0, .external_lex_state = 1},
  [588] = {.lex_state = 0, .external_lex_state = 1},
  [589] = {.lex_state = 0, .external_lex_state = 1},
  [590] = {.lex_state = 0, .external_lex_state = 1},
  [591] = {.lex_state = 0, .external_lex_state = 1},
  [592] = {.lex_state = 53, .external_lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 1},
  [594] = {.lex_state = 0, .external_lex_state = 1},
  [595] = {.lex_state = 42, .external_lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 1},
  [597] = {.lex_state = 0, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 1},
  [600] = {.lex_state = 41, .external_lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 1},
  [602] = {.lex_state = 53, .external_lex_state = 1},
  [603] = {.lex_state = 53, .external_lex_state = 1},
  [604] = {.lex_state = 53, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 0, .external_lex_state = 1},
  [607] = {.lex_state = 53, .external_lex_state = 1},
  [608] = {.lex_state = 42, .external_lex_state = 1},
  [609] = {.lex_state = 0, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 0, .external_lex_state = 1},
  [612] = {.lex_state = 0, .external_lex_state = 1},
  [613] = {.lex_state = 0, .external_lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 1},
  [615] = {.lex_state = 53, .external_lex_state = 1},
  [616] = {.lex_state = 0, .external_lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 1},
  [619] = {.lex_state = 0, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 41, .external_lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 53, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 0, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 0, .external_lex_state = 1},
  [632] = {.lex_state = 0, .external_lex_state = 1},
  [633] = {.lex_state = 53, .external_lex_state = 1},
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
  [650] = {.lex_state = 53, .external_lex_state = 1},
  [651] = {.lex_state = 41, .external_lex_state = 1},
  [652] = {.lex_state = 845, .external_lex_state = 1},
  [653] = {.lex_state = 0, .external_lex_state = 1},
  [654] = {.lex_state = 0, .external_lex_state = 1},
  [655] = {.lex_state = 0, .external_lex_state = 1},
  [656] = {.lex_state = 48, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 0, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 0, .external_lex_state = 1},
  [661] = {.lex_state = 0, .external_lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 1},
  [663] = {.lex_state = 53, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 0, .external_lex_state = 1},
  [666] = {.lex_state = 0, .external_lex_state = 1},
  [667] = {.lex_state = 0, .external_lex_state = 1},
  [668] = {.lex_state = 53, .external_lex_state = 1},
  [669] = {.lex_state = 53, .external_lex_state = 1},
  [670] = {.lex_state = 733, .external_lex_state = 1},
  [671] = {.lex_state = 0, .external_lex_state = 1},
  [672] = {.lex_state = 53, .external_lex_state = 1},
  [673] = {.lex_state = 0, .external_lex_state = 1},
  [674] = {.lex_state = 0, .external_lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 1},
  [676] = {.lex_state = 53, .external_lex_state = 1},
  [677] = {.lex_state = 0, .external_lex_state = 1},
  [678] = {.lex_state = 41, .external_lex_state = 1},
  [679] = {.lex_state = 0, .external_lex_state = 1},
  [680] = {.lex_state = 0, .external_lex_state = 1},
  [681] = {.lex_state = 0, .external_lex_state = 1},
  [682] = {.lex_state = 0, .external_lex_state = 1},
  [683] = {.lex_state = 0, .external_lex_state = 1},
  [684] = {.lex_state = 0, .external_lex_state = 1},
  [685] = {.lex_state = 0, .external_lex_state = 1},
  [686] = {.lex_state = 0, .external_lex_state = 1},
  [687] = {.lex_state = 0, .external_lex_state = 1},
  [688] = {.lex_state = 53, .external_lex_state = 1},
  [689] = {.lex_state = 0, .external_lex_state = 1},
  [690] = {.lex_state = 0, .external_lex_state = 1},
  [691] = {.lex_state = 0, .external_lex_state = 1},
  [692] = {.lex_state = 0, .external_lex_state = 1},
  [693] = {.lex_state = 0, .external_lex_state = 1},
  [694] = {.lex_state = 0, .external_lex_state = 1},
  [695] = {.lex_state = 0, .external_lex_state = 1},
  [696] = {.lex_state = 0, .external_lex_state = 1},
  [697] = {.lex_state = 41, .external_lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 1},
  [699] = {.lex_state = 0, .external_lex_state = 1},
  [700] = {.lex_state = 0, .external_lex_state = 1},
  [701] = {.lex_state = 41, .external_lex_state = 1},
  [702] = {.lex_state = 0, .external_lex_state = 1},
  [703] = {.lex_state = 0, .external_lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 1},
  [705] = {.lex_state = 0, .external_lex_state = 1},
  [706] = {.lex_state = 0, .external_lex_state = 1},
  [707] = {.lex_state = 41, .external_lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 1},
  [709] = {.lex_state = 0, .external_lex_state = 1},
  [710] = {.lex_state = 53, .external_lex_state = 1},
  [711] = {.lex_state = 41, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 1},
  [714] = {.lex_state = 41, .external_lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 1},
  [716] = {.lex_state = 41, .external_lex_state = 1},
  [717] = {.lex_state = 48, .external_lex_state = 1},
  [718] = {.lex_state = 0, .external_lex_state = 1},
  [719] = {.lex_state = 0, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 0, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 0, .external_lex_state = 1},
  [725] = {.lex_state = 53, .external_lex_state = 1},
  [726] = {.lex_state = 0, .external_lex_state = 1},
  [727] = {.lex_state = 0, .external_lex_state = 1},
  [728] = {.lex_state = 0, .external_lex_state = 1},
  [729] = {.lex_state = 0, .external_lex_state = 1},
  [730] = {.lex_state = 0, .external_lex_state = 1},
  [731] = {.lex_state = 42, .external_lex_state = 1},
  [732] = {.lex_state = 0, .external_lex_state = 1},
  [733] = {.lex_state = 0, .external_lex_state = 1},
  [734] = {.lex_state = 0, .external_lex_state = 1},
  [735] = {.lex_state = 0, .external_lex_state = 1},
  [736] = {.lex_state = 0, .external_lex_state = 1},
  [737] = {.lex_state = 0, .external_lex_state = 1},
  [738] = {.lex_state = 0, .external_lex_state = 1},
  [739] = {.lex_state = 0, .external_lex_state = 1},
  [740] = {.lex_state = 0, .external_lex_state = 1},
  [741] = {.lex_state = 54, .external_lex_state = 1},
  [742] = {.lex_state = 0, .external_lex_state = 1},
  [743] = {.lex_state = 0, .external_lex_state = 1},
  [744] = {.lex_state = 41, .external_lex_state = 1},
  [745] = {.lex_state = 0, .external_lex_state = 1},
  [746] = {.lex_state = 0, .external_lex_state = 1},
  [747] = {.lex_state = 53, .external_lex_state = 1},
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
    [sym_source_file] = STATE(724),
    [sym_security_protocol_theory] = STATE(719),
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(437), 1,
      sym_formula,
    STATE(528), 1,
      sym_fact,
    STATE(554), 1,
      sym_node_var,
    STATE(595), 1,
      sym__msetterm,
    STATE(637), 1,
      sym_goal,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(437), 1,
      sym_formula,
    STATE(528), 1,
      sym_fact,
    STATE(554), 1,
      sym_node_var,
    STATE(595), 1,
      sym__msetterm,
    STATE(643), 1,
      sym_goal,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(572), 1,
      sym_formula,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(727), 1,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(662), 1,
      sym_formula,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(605), 1,
      sym_formula,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(596), 1,
      sym_formula,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(586), 1,
      sym_formula,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(492), 1,
      sym_node_var,
    STATE(531), 1,
      sym__msetterm,
    STATE(585), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(733), 1,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(531), 1,
      sym__msetterm,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(733), 1,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(398), 1,
      sym_imp,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(729), 1,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(186), 1,
      sym_negation,
    STATE(207), 1,
      sym_conjunction,
    STATE(213), 1,
      sym_atom,
    STATE(233), 1,
      sym_formula,
    STATE(252), 1,
      sym_disjunction,
    STATE(260), 1,
      sym_imp,
    STATE(319), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(186), 1,
      sym_negation,
    STATE(207), 1,
      sym_conjunction,
    STATE(213), 1,
      sym_atom,
    STATE(233), 1,
      sym_formula,
    STATE(251), 1,
      sym_imp,
    STATE(252), 1,
      sym_disjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(226), 1,
      sym_imp,
    STATE(274), 1,
      sym_negation,
    STATE(329), 1,
      sym_quantifier,
    STATE(350), 1,
      sym_conjunction,
    STATE(399), 1,
      sym_disjunction,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1661] = 34,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(226), 1,
      sym_imp,
    STATE(269), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(368), 1,
      sym_disjunction,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [1776] = 34,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(227), 1,
      sym_imp,
    STATE(274), 1,
      sym_negation,
    STATE(329), 1,
      sym_quantifier,
    STATE(350), 1,
      sym_conjunction,
    STATE(399), 1,
      sym_disjunction,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(227), 1,
      sym_imp,
    STATE(252), 1,
      sym_disjunction,
    STATE(265), 1,
      sym_conjunction,
    STATE(267), 1,
      sym_negation,
    STATE(329), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(274), 1,
      sym_negation,
    STATE(329), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2115] = 32,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(179), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2224] = 32,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(267), 1,
      sym_negation,
    STATE(329), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(186), 1,
      sym_negation,
    STATE(213), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(223), 1,
      sym_negation,
    STATE(319), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(213), 1,
      sym_atom,
    STATE(223), 1,
      sym_negation,
    STATE(329), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(257), 1,
      sym_atom,
    STATE(319), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(257), 1,
      sym_atom,
    STATE(329), 1,
      sym_quantifier,
    STATE(554), 1,
      sym_node_var,
    STATE(585), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(692), 1,
      sym_builtin_facts,
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
    STATE(110), 5,
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
    STATE(46), 1,
      sym_not_function,
    STATE(65), 1,
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
    STATE(46), 1,
      sym_not_function,
    STATE(65), 1,
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
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(63), 19,
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
  [2980] = 8,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(46), 1,
      sym_not_function,
    STATE(65), 1,
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
    ACTIONS(75), 12,
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
  [3024] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
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
  [3061] = 8,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(46), 1,
      sym_not_function,
    STATE(77), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(90), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(83), 12,
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
  [3104] = 5,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(98), 2,
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
  [3141] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(100), 20,
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
  [3178] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(41), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(95), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(106), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(104), 10,
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
  [3217] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(110), 20,
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
  [3254] = 5,
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
  [3291] = 8,
    ACTIONS(116), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(66), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(118), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(114), 11,
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
  [3334] = 8,
    ACTIONS(120), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(66), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(123), 7,
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
  [3377] = 8,
    ACTIONS(116), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(66), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(118), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(126), 11,
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
  [3420] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(41), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(95), 2,
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
  [3459] = 7,
    ACTIONS(140), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(61), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(143), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(136), 12,
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
  [3500] = 8,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(146), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(66), 1,
      sym_not_function,
    STATE(79), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(149), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(83), 11,
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
  [3542] = 5,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    ACTIONS(156), 1,
      anon_sym_AMP,
    STATE(44), 1,
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
  [3578] = 5,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
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
  [3614] = 5,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_AMP,
    STATE(48), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(161), 20,
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
  [3650] = 5,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(110), 19,
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
  [3686] = 5,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(167), 20,
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
  [3722] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(171), 20,
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
  [3754] = 5,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
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
  [3790] = 14,
    ACTIONS(175), 1,
      anon_sym_end,
    ACTIONS(177), 1,
      sym_ident,
    ACTIONS(179), 1,
      anon_sym_functions,
    ACTIONS(181), 1,
      anon_sym_equations,
    ACTIONS(183), 1,
      anon_sym_builtins,
    ACTIONS(185), 1,
      anon_sym_heuristic,
    ACTIONS(187), 1,
      anon_sym_tactic,
    ACTIONS(189), 1,
      anon_sym_rule,
    ACTIONS(191), 1,
      anon_sym_restriction,
    ACTIONS(193), 1,
      anon_sym_lemma,
    STATE(195), 1,
      sym_simple_rule,
    STATE(666), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(63), 11,
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
  [3844] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(195), 20,
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
  [3876] = 5,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(100), 19,
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
  [3912] = 7,
    ACTIONS(199), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(68), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(202), 7,
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
  [3952] = 5,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(98), 2,
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
  [3988] = 5,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(208), 1,
      anon_sym_AMP,
    STATE(57), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(167), 19,
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
  [4023] = 5,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_AMP,
    STATE(57), 1,
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
  [4058] = 4,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(213), 20,
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
  [4091] = 4,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_function_repeat1,
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
  [4124] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(195), 19,
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
  [4155] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
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
  [4186] = 13,
    ACTIONS(222), 1,
      anon_sym_end,
    ACTIONS(224), 1,
      sym_ident,
    ACTIONS(227), 1,
      anon_sym_functions,
    ACTIONS(230), 1,
      anon_sym_equations,
    ACTIONS(233), 1,
      anon_sym_builtins,
    ACTIONS(236), 1,
      anon_sym_heuristic,
    ACTIONS(239), 1,
      anon_sym_tactic,
    ACTIONS(242), 1,
      anon_sym_rule,
    ACTIONS(245), 1,
      anon_sym_restriction,
    ACTIONS(248), 1,
      anon_sym_lemma,
    STATE(195), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(62), 11,
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
  [4237] = 13,
    ACTIONS(177), 1,
      sym_ident,
    ACTIONS(179), 1,
      anon_sym_functions,
    ACTIONS(181), 1,
      anon_sym_equations,
    ACTIONS(183), 1,
      anon_sym_builtins,
    ACTIONS(185), 1,
      anon_sym_heuristic,
    ACTIONS(187), 1,
      anon_sym_tactic,
    ACTIONS(189), 1,
      anon_sym_rule,
    ACTIONS(191), 1,
      anon_sym_restriction,
    ACTIONS(193), 1,
      anon_sym_lemma,
    ACTIONS(251), 1,
      anon_sym_end,
    STATE(195), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(62), 11,
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
  [4288] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(171), 19,
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
  [4319] = 4,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(253), 20,
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
  [4352] = 5,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(208), 1,
      anon_sym_AMP,
    STATE(56), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(161), 19,
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
  [4387] = 5,
    ACTIONS(257), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      anon_sym_CARET,
    STATE(76), 1,
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
  [4421] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
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
  [4451] = 4,
    ACTIONS(261), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_function_repeat1,
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
  [4483] = 3,
    ACTIONS(266), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(264), 20,
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
  [4513] = 4,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(253), 19,
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
  [4545] = 4,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(213), 19,
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
  [4577] = 4,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 19,
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
  [4609] = 4,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 19,
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
  [4641] = 4,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 19,
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
  [4673] = 5,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(76), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 18,
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
  [4707] = 3,
    ACTIONS(291), 1,
      anon_sym_PIPE,
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
  [4737] = 5,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(67), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 18,
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
  [4771] = 3,
    ACTIONS(291), 1,
      anon_sym_PIPE,
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
  [4800] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(446), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [4855] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(519), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [4910] = 3,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 19,
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
  [4939] = 3,
    ACTIONS(311), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 19,
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
  [4968] = 3,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(313), 19,
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
  [4997] = 5,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(321), 1,
      anon_sym_STAR,
    STATE(102), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(317), 17,
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
  [5030] = 3,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 19,
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
  [5059] = 5,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      anon_sym_STAR,
    STATE(87), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 17,
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
  [5092] = 3,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 19,
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
  [5121] = 3,
    ACTIONS(336), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(334), 19,
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
  [5150] = 4,
    ACTIONS(342), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
    ACTIONS(338), 16,
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
  [5181] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(344), 20,
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
  [5208] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(475), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5263] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(473), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5318] = 3,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 19,
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
  [5347] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(354), 20,
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
  [5374] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(479), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5429] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(358), 20,
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
  [5456] = 3,
    ACTIONS(362), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(360), 19,
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
  [5485] = 3,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(364), 19,
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
  [5514] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(508), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5569] = 3,
    ACTIONS(372), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 19,
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
  [5598] = 5,
    ACTIONS(321), 1,
      anon_sym_STAR,
    ACTIONS(376), 1,
      anon_sym_EQ,
    STATE(87), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(374), 17,
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
  [5631] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(516), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5686] = 3,
    ACTIONS(382), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(380), 19,
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
  [5715] = 3,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(384), 19,
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
  [5744] = 3,
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
  [5773] = 3,
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
  [5802] = 3,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 19,
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
  [5831] = 3,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 19,
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
  [5860] = 3,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 19,
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
  [5889] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(494), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5944] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(280), 1,
      sym_proof_method,
    STATE(290), 1,
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
  [5982] = 5,
    ACTIONS(418), 1,
      anon_sym_EQ,
    STATE(113), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(416), 15,
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
  [6014] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(423), 17,
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
  [6042] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(653), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6094] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(237), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6146] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(480), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6198] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(470), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6250] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(280), 1,
      sym_proof_method,
    STATE(298), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(427), 10,
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
  [6288] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(521), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6340] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(469), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6392] = 3,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 18,
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
  [6420] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(499), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6472] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(625), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6524] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(606), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6576] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(410), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6628] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(496), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6680] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(429), 17,
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
  [6708] = 15,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(348), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(376), 1,
      sym__expterm,
    STATE(395), 1,
      sym__multterm,
    STATE(416), 1,
      sym__xorterm,
    STATE(532), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6760] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(271), 1,
      sym_proof_skeleton,
    STATE(280), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(445), 10,
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
  [6798] = 8,
    ACTIONS(408), 1,
      anon_sym_SOLVED,
    ACTIONS(410), 1,
      anon_sym_by,
    ACTIONS(414), 1,
      anon_sym_solve,
    STATE(280), 1,
      sym_proof_method,
    STATE(281), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(447), 10,
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
  [6836] = 5,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(133), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(449), 15,
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
  [6868] = 5,
    ACTIONS(457), 1,
      anon_sym_EQ,
    STATE(113), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(453), 2,
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
  [6900] = 3,
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
  [6927] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(132), 1,
      sym__multterm,
    STATE(134), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6976] = 3,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(416), 17,
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
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(134), 1,
      sym__xorterm,
    STATE(348), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(376), 1,
      sym__expterm,
    STATE(395), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7052] = 13,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(136), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7098] = 5,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(467), 1,
      anon_sym_PLUS,
    STATE(142), 1,
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
  [7128] = 13,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(348), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(376), 1,
      sym__expterm,
    STATE(404), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7174] = 5,
    ACTIONS(467), 1,
      anon_sym_PLUS,
    ACTIONS(471), 1,
      anon_sym_EQ,
    STATE(139), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(469), 14,
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
  [7204] = 5,
    ACTIONS(459), 1,
      anon_sym_EQ,
    ACTIONS(473), 1,
      anon_sym_PLUS,
    STATE(142), 1,
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
  [7234] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(481), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(143), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(189), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(478), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7265] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_term,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(122), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7308] = 6,
    ACTIONS(486), 1,
      anon_sym_prio,
    ACTIONS(488), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(163), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(169), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(484), 10,
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
  [7339] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(244), 1,
      sym_equation,
    STATE(608), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7382] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(494), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(143), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(189), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(492), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7413] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    STATE(204), 1,
      sym_equation,
    STATE(608), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7456] = 8,
    ACTIONS(63), 1,
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
    ACTIONS(65), 10,
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
  [7491] = 6,
    ACTIONS(486), 1,
      anon_sym_prio,
    ACTIONS(488), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(163), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(171), 2,
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
  [7522] = 12,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(348), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(389), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7565] = 11,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(379), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7605] = 11,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    STATE(375), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7645] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_term,
    STATE(86), 1,
      sym_msg_var,
    STATE(107), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7685] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_msg_var,
    STATE(88), 1,
      sym_term,
    STATE(107), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7725] = 11,
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
    STATE(239), 1,
      sym_msg_var,
    STATE(241), 1,
      sym_nonnode_var,
    STATE(243), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(240), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7765] = 11,
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
    STATE(239), 1,
      sym_msg_var,
    STATE(241), 1,
      sym_nonnode_var,
    STATE(256), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(240), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7805] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      sym_ident,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_msg_var,
    STATE(101), 1,
      sym_term,
    STATE(107), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(110), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7845] = 11,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    STATE(367), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(373), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(371), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7885] = 11,
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
    STATE(239), 1,
      sym_msg_var,
    STATE(241), 1,
      sym_nonnode_var,
    STATE(261), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(240), 5,
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
    STATE(46), 1,
      sym_not_function,
    STATE(65), 1,
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
  [7958] = 8,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(66), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
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
    ACTIONS(534), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(163), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(532), 11,
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
  [8016] = 4,
    ACTIONS(537), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(539), 12,
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
    STATE(95), 2,
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
    ACTIONS(494), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(147), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(189), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(492), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8095] = 8,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
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
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(63), 7,
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
    ACTIONS(488), 1,
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
  [8176] = 7,
    ACTIONS(522), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_function_name,
    STATE(46), 1,
      sym_not_function,
    STATE(65), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(30), 2,
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
  [8206] = 4,
    ACTIONS(488), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(558), 10,
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
  [8230] = 4,
    STATE(175), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(560), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(562), 10,
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
  [8254] = 3,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(338), 12,
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
  [8276] = 4,
    ACTIONS(488), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(484), 10,
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
  [8300] = 4,
    STATE(175), 1,
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
  [8324] = 7,
    ACTIONS(528), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(66), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(38), 2,
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
  [8354] = 4,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_equations_repeat1,
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
  [8377] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(576), 10,
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
  [8398] = 4,
    STATE(201), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(580), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8421] = 4,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(584), 10,
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
  [8444] = 8,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_DOT,
    ACTIONS(596), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(63), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8475] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(598), 12,
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
  [8494] = 3,
    STATE(205), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(600), 11,
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
  [8515] = 4,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(602), 10,
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
  [8538] = 4,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [8561] = 3,
    STATE(196), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(580), 11,
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
  [8582] = 4,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 10,
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
  [8605] = 4,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 10,
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
  [8628] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(615), 12,
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
  [8647] = 4,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_functions_repeat1,
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
  [8670] = 4,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(622), 10,
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
  [8693] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(198), 1,
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
  [8716] = 4,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_variants_repeat1,
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
  [8739] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
    ACTIONS(266), 10,
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
  [8760] = 4,
    ACTIONS(638), 1,
      anon_sym_variants,
    STATE(270), 1,
      sym_variants,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(636), 10,
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
  [8783] = 3,
    STATE(199), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(640), 11,
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
  [8804] = 4,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_COLON,
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
  [8827] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_built_ins_repeat1,
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
  [8850] = 4,
    STATE(199), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(649), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8873] = 4,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(654), 10,
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
  [8896] = 4,
    STATE(199), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(640), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8919] = 4,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(656), 10,
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
  [8942] = 4,
    STATE(172), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(448), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(658), 10,
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
  [8965] = 4,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(660), 10,
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
  [8988] = 4,
    STATE(205), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(662), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [9011] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(667), 10,
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
  [9034] = 3,
    STATE(183), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 11,
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
  [9094] = 5,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(425), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(309), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9118] = 2,
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
  [9136] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(679), 11,
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
  [9154] = 2,
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
  [9172] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(683), 11,
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
  [9190] = 3,
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
  [9210] = 3,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(689), 10,
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
  [9230] = 3,
    ACTIONS(693), 1,
      anon_sym_COMMA,
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
  [9290] = 2,
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
  [9308] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(689), 11,
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
  [9326] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 11,
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
  [9344] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(649), 11,
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
  [9362] = 2,
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
  [9380] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(662), 11,
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
  [9398] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(707), 11,
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
  [9416] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(709), 11,
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
  [9434] = 3,
    ACTIONS(711), 1,
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
  [9454] = 2,
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
  [9472] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(602), 10,
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
  [9492] = 2,
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
  [9510] = 3,
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
  [9530] = 2,
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
  [9548] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(679), 10,
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
  [9568] = 5,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(388), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9592] = 3,
    ACTIONS(727), 1,
      anon_sym_COMMA,
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
  [9612] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 11,
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
  [9630] = 5,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(415), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(380), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9654] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 10,
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
  [9674] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 10,
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
  [9694] = 3,
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
  [9714] = 3,
    ACTIONS(733), 1,
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
  [9734] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(735), 10,
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
  [9754] = 3,
    ACTIONS(739), 1,
      anon_sym_COMMA,
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
  [9774] = 3,
    ACTIONS(741), 1,
      anon_sym_COMMA,
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
  [9794] = 3,
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
  [9814] = 3,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(352), 10,
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
  [9834] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 10,
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
  [9854] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [9874] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(366), 10,
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
  [9894] = 2,
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
  [9912] = 2,
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
  [9930] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(311), 10,
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
  [9950] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(307), 10,
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
  [9970] = 3,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(336), 10,
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
  [9990] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 10,
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
  [10010] = 2,
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
  [10028] = 3,
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
  [10048] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(398), 10,
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
  [10068] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(743), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10088] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(315), 10,
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
  [10108] = 3,
    ACTIONS(751), 1,
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
  [10128] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(753), 10,
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
  [10145] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(755), 10,
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
  [10162] = 3,
    STATE(266), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10181] = 3,
    STATE(282), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(600), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10200] = 3,
    STATE(283), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(580), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10219] = 4,
    STATE(291), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(600), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10240] = 4,
    STATE(268), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(669), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10261] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(759), 10,
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
  [10278] = 2,
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
  [10295] = 3,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10314] = 8,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(765), 1,
      anon_sym_DOT,
    STATE(397), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(288), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(400), 2,
      sym_node_var,
      sym_nonnode_var,
  [10343] = 4,
    STATE(293), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(580), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10364] = 4,
    ACTIONS(771), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(272), 6,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10385] = 8,
    ACTIONS(773), 1,
      anon_sym_SOLVED,
    ACTIONS(775), 1,
      anon_sym_by,
    ACTIONS(777), 1,
      anon_sym_case,
    ACTIONS(781), 1,
      anon_sym_solve,
    STATE(276), 1,
      sym_proof_method,
    STATE(551), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10414] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(783), 10,
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
  [10431] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(785), 10,
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
  [10448] = 3,
    STATE(242), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(787), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [10467] = 8,
    ACTIONS(781), 1,
      anon_sym_solve,
    ACTIONS(789), 1,
      anon_sym_SOLVED,
    ACTIONS(791), 1,
      anon_sym_by,
    ACTIONS(793), 1,
      anon_sym_case,
    STATE(280), 1,
      sym_proof_method,
    STATE(287), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10496] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(445), 10,
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
  [10513] = 4,
    STATE(282), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(662), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [10534] = 3,
    STATE(289), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(640), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10553] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(798), 10,
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
  [10570] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(800), 10,
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
  [10587] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(802), 10,
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
  [10604] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(804), 10,
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
  [10621] = 8,
    ACTIONS(806), 1,
      sym_ident,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_POUND,
    STATE(397), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(288), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(400), 2,
      sym_node_var,
      sym_nonnode_var,
  [10650] = 4,
    STATE(289), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(649), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10671] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 10,
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
  [10688] = 4,
    STATE(291), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(820), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(662), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10709] = 3,
    STATE(206), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(787), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [10728] = 4,
    STATE(289), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(640), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10749] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(823), 10,
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
  [10766] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(825), 10,
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
  [10783] = 8,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(827), 1,
      anon_sym_DOT,
    STATE(397), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(288), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(400), 2,
      sym_node_var,
      sym_nonnode_var,
  [10812] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(829), 10,
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
  [10829] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(831), 10,
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
  [10846] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(837), 1,
      anon_sym_BANG,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    STATE(714), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10874] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(839), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
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
  [10902] = 7,
    ACTIONS(773), 1,
      anon_sym_SOLVED,
    ACTIONS(775), 1,
      anon_sym_by,
    ACTIONS(781), 1,
      anon_sym_solve,
    STATE(276), 1,
      sym_proof_method,
    STATE(510), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10928] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(582), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10956] = 3,
    STATE(562), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(845), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [10974] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(730), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11002] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(579), 1,
      sym_facts,
    STATE(671), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11030] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(649), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11058] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(853), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(621), 1,
      sym_facts,
    STATE(671), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11086] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(647), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11114] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(645), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11142] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(642), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11170] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(639), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11198] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(634), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11226] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(589), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11254] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
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
  [11282] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(869), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    STATE(701), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11310] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(616), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11338] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(629), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11366] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(875), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    STATE(678), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11394] = 7,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    STATE(397), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(273), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(400), 2,
      sym_node_var,
      sym_nonnode_var,
  [11420] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(877), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    STATE(744), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11448] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(704), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11476] = 7,
    ACTIONS(773), 1,
      anon_sym_SOLVED,
    ACTIONS(775), 1,
      anon_sym_by,
    ACTIONS(781), 1,
      anon_sym_solve,
    STATE(276), 1,
      sym_proof_method,
    STATE(559), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11502] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(708), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11530] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(713), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11558] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(728), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11586] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(620), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11614] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(889), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
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
  [11642] = 6,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    ACTIONS(895), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(897), 1,
      anon_sym_heuristic_EQ,
    STATE(570), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(891), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11666] = 7,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_ident,
    STATE(397), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(296), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(400), 2,
      sym_node_var,
      sym_nonnode_var,
  [11692] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(739), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11720] = 7,
    ACTIONS(773), 1,
      anon_sym_SOLVED,
    ACTIONS(775), 1,
      anon_sym_by,
    ACTIONS(781), 1,
      anon_sym_solve,
    STATE(276), 1,
      sym_proof_method,
    STATE(439), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11746] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(901), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    STATE(716), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11774] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(646), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11802] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(632), 1,
      sym_facts,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11830] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(723), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11858] = 6,
    ACTIONS(895), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(897), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(570), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(891), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11882] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    STATE(722), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11910] = 8,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(913), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(495), 1,
      sym_fact,
    STATE(651), 1,
      sym_facts,
    STATE(671), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11938] = 4,
    ACTIONS(915), 1,
      aux_sym_node_var_token1,
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
  [11957] = 7,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(917), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(534), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11982] = 5,
    ACTIONS(895), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(897), 1,
      anon_sym_heuristic_EQ,
    STATE(570), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(891), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12003] = 5,
    ACTIONS(919), 1,
      anon_sym_CARET,
    STATE(342), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(286), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12024] = 5,
    ACTIONS(895), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(897), 1,
      anon_sym_heuristic_EQ,
    STATE(483), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(891), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12045] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(266), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(264), 5,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12062] = 7,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    ACTIONS(922), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(534), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12087] = 4,
    STATE(346), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(662), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12106] = 4,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(278), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12125] = 5,
    ACTIONS(929), 1,
      anon_sym_CARET,
    STATE(352), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(295), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12146] = 7,
    ACTIONS(931), 1,
      anon_sym_presort,
    ACTIONS(933), 1,
      anon_sym_prio,
    ACTIONS(935), 1,
      anon_sym_deprio,
    STATE(396), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(145), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(174), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12171] = 4,
    STATE(354), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(937), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(669), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12190] = 3,
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
  [12207] = 5,
    ACTIONS(929), 1,
      anon_sym_CARET,
    STATE(342), 1,
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
  [12228] = 3,
    STATE(45), 1,
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
  [12245] = 4,
    STATE(346), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(937), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(600), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12264] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(540), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12289] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(540), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12314] = 4,
    ACTIONS(939), 1,
      anon_sym_COLON,
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
  [12333] = 3,
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
  [12349] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(336), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(334), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12365] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(382), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(380), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12381] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(398), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(396), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12397] = 6,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      sym_ident,
    STATE(540), 1,
      sym_fact,
    STATE(692), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12419] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(386), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(384), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12435] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(307), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(305), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12451] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(352), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12467] = 5,
    ACTIONS(941), 1,
      anon_sym_STAR,
    STATE(366), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(329), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12487] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(286), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(284), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12503] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(944), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(745), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [12519] = 3,
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
  [12535] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(278), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12551] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(400), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12567] = 5,
    ACTIONS(946), 1,
      anon_sym_STAR,
    STATE(366), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(376), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12587] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(323), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12603] = 5,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(948), 1,
      anon_sym_COLON,
    ACTIONS(950), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(63), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12623] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(315), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(313), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12639] = 5,
    ACTIONS(946), 1,
      anon_sym_STAR,
    STATE(372), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(319), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12659] = 3,
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
  [12675] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(366), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(364), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12691] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(370), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12707] = 6,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_BANG,
    STATE(534), 1,
      sym_fact,
    STATE(671), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12729] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(311), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(309), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12745] = 4,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(425), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12762] = 4,
    ACTIONS(954), 1,
      anon_sym_solve,
    STATE(287), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(952), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12779] = 4,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12796] = 4,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(956), 1,
      aux_sym_node_var_token1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12813] = 4,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(427), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12830] = 6,
    ACTIONS(416), 1,
      anon_sym_PLUS,
    ACTIONS(960), 1,
      anon_sym_XOR,
    ACTIONS(963), 1,
      anon_sym_13,
    STATE(387), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      sym_ident,
      anon_sym_in,
  [12851] = 4,
    ACTIONS(781), 1,
      anon_sym_solve,
    STATE(551), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(779), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12868] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(329), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12883] = 4,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    STATE(415), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(731), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12900] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(264), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12913] = 3,
    ACTIONS(966), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(338), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12928] = 6,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(968), 1,
      anon_sym_XOR,
    ACTIONS(970), 1,
      anon_sym_13,
    STATE(387), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(457), 2,
      sym_ident,
      anon_sym_in,
  [12949] = 3,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12964] = 6,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(968), 1,
      anon_sym_XOR,
    ACTIONS(970), 1,
      anon_sym_13,
    STATE(393), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      sym_ident,
      anon_sym_in,
  [12985] = 5,
    ACTIONS(933), 1,
      anon_sym_prio,
    ACTIONS(935), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(150), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(169), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [13004] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13016] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(743), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13030] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(745), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13044] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(978), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13056] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13068] = 4,
    ACTIONS(980), 1,
      sym_ident,
    STATE(628), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13084] = 4,
    ACTIONS(982), 1,
      sym_ident,
    STATE(674), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13100] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(418), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [13114] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13126] = 4,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(987), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13142] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13154] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13166] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(557), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13181] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(987), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13192] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13203] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(991), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13214] = 4,
    ACTIONS(993), 1,
      anon_sym_PLUS,
    STATE(413), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(459), 2,
      sym_ident,
      anon_sym_in,
  [13229] = 3,
    STATE(576), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(996), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13242] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13253] = 4,
    ACTIONS(998), 1,
      anon_sym_PLUS,
    STATE(417), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(471), 2,
      sym_ident,
      anon_sym_in,
  [13268] = 4,
    ACTIONS(998), 1,
      anon_sym_PLUS,
    STATE(413), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(465), 2,
      sym_ident,
      anon_sym_in,
  [13283] = 4,
    ACTIONS(342), 1,
      anon_sym_node,
    ACTIONS(1000), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13298] = 4,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(560), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13313] = 4,
    ACTIONS(1006), 1,
      anon_sym_DQUOTE,
    STATE(721), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1008), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13328] = 4,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(667), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1008), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13343] = 3,
    STATE(515), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(996), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13356] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(548), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13371] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1012), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13382] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13393] = 5,
    ACTIONS(1014), 1,
      sym_ident,
    ACTIONS(1016), 1,
      anon_sym_in,
    STATE(429), 1,
      aux_sym_let_block_repeat1,
    STATE(731), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13410] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1018), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13421] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(553), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13436] = 5,
    ACTIONS(1020), 1,
      sym_ident,
    ACTIONS(1023), 1,
      anon_sym_in,
    STATE(429), 1,
      aux_sym_let_block_repeat1,
    STATE(731), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13453] = 4,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    STATE(560), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13468] = 4,
    ACTIONS(342), 1,
      anon_sym_node,
    ACTIONS(1027), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13483] = 4,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    STATE(593), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1008), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13498] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1031), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13509] = 4,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(563), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13524] = 3,
    STATE(478), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(996), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13537] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13551] = 4,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(1039), 1,
      anon_sym_2,
    STATE(438), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13565] = 4,
    ACTIONS(1039), 1,
      anon_sym_2,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13579] = 4,
    ACTIONS(1043), 1,
      anon_sym_next,
    ACTIONS(1045), 1,
      anon_sym_qed,
    STATE(452), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13593] = 4,
    ACTIONS(1047), 1,
      anon_sym_COLON,
    ACTIONS(1049), 1,
      anon_sym_LBRACK,
    STATE(624), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13607] = 4,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13621] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13635] = 4,
    ACTIONS(1058), 1,
      sym_ident,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
    STATE(747), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13649] = 4,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(1064), 1,
      anon_sym_LBRACK,
    STATE(745), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13663] = 4,
    ACTIONS(1064), 1,
      anon_sym_LBRACK,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(743), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13677] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13691] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym_ident,
    STATE(630), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13705] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym_ident,
    STATE(734), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13719] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13733] = 4,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_2,
    STATE(450), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13747] = 4,
    ACTIONS(1077), 1,
      anon_sym_LBRACK,
    ACTIONS(1079), 1,
      anon_sym_let,
    STATE(740), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13761] = 4,
    ACTIONS(1043), 1,
      anon_sym_next,
    ACTIONS(1081), 1,
      anon_sym_qed,
    STATE(459), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13775] = 4,
    ACTIONS(1079), 1,
      anon_sym_let,
    ACTIONS(1083), 1,
      anon_sym_LBRACK,
    STATE(738), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13789] = 4,
    ACTIONS(1079), 1,
      anon_sym_let,
    ACTIONS(1085), 1,
      anon_sym_LBRACK,
    STATE(736), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13803] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym_ident,
    STATE(237), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13817] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13831] = 4,
    ACTIONS(1089), 1,
      anon_sym_COLON,
    ACTIONS(1091), 1,
      anon_sym_LBRACK,
    STATE(618), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13845] = 4,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13859] = 4,
    ACTIONS(1098), 1,
      anon_sym_next,
    ACTIONS(1101), 1,
      anon_sym_qed,
    STATE(459), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13873] = 4,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(1103), 1,
      anon_sym_COLON,
    ACTIONS(1105), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13887] = 4,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
    STATE(461), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13901] = 4,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13915] = 4,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
    STATE(472), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13929] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13943] = 3,
    STATE(712), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13955] = 3,
    ACTIONS(1122), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13967] = 3,
    STATE(693), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13979] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym_ident,
    STATE(703), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13993] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_GT,
    STATE(481), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14007] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RBRACE,
    STATE(490), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14021] = 4,
    ACTIONS(1079), 1,
      anon_sym_let,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(654), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14035] = 4,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14049] = 4,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14063] = 3,
    STATE(498), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14075] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14089] = 4,
    ACTIONS(1064), 1,
      anon_sym_LBRACK,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    STATE(658), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14103] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_GT,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14117] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RBRACK,
    STATE(506), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14131] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14145] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14159] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_GT,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14173] = 4,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
    ACTIONS(1148), 1,
      sym_ident,
    STATE(676), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14187] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_RBRACK,
    STATE(462), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14201] = 4,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      sym_ident,
    STATE(592), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14215] = 3,
    ACTIONS(1156), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14227] = 4,
    ACTIONS(1079), 1,
      anon_sym_let,
    ACTIONS(1160), 1,
      anon_sym_LBRACK,
    STATE(720), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14241] = 4,
    ACTIONS(1162), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(487), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14255] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14269] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14283] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RBRACE,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14297] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_GT,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14311] = 3,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [14323] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14337] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14351] = 4,
    ACTIONS(1116), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14365] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
    STATE(489), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14379] = 4,
    ACTIONS(1079), 1,
      anon_sym_let,
    ACTIONS(1187), 1,
      anon_sym_LBRACK,
    STATE(644), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14393] = 4,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RBRACK,
    STATE(505), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14407] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_GT,
    STATE(491), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14421] = 3,
    ACTIONS(1195), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14433] = 4,
    ACTIONS(1197), 1,
      sym_ident,
    STATE(426), 1,
      aux_sym_let_block_repeat1,
    STATE(731), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14447] = 4,
    ACTIONS(1165), 1,
      anon_sym_RBRACK,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14461] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14475] = 4,
    ACTIONS(1043), 1,
      anon_sym_next,
    ACTIONS(1204), 1,
      anon_sym_qed,
    STATE(459), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14489] = 4,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14503] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14517] = 4,
    ACTIONS(1064), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    STATE(612), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14531] = 4,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14545] = 4,
    ACTIONS(1049), 1,
      anon_sym_LBRACK,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    STATE(675), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14559] = 4,
    ACTIONS(1043), 1,
      anon_sym_next,
    ACTIONS(1214), 1,
      anon_sym_qed,
    STATE(504), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14573] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14587] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14601] = 3,
    STATE(560), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14613] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym_ident,
    STATE(272), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14627] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14641] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14655] = 4,
    ACTIONS(917), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14669] = 3,
    ACTIONS(1027), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14681] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14695] = 3,
    ACTIONS(1156), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1226), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14707] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_GT,
    STATE(477), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14721] = 3,
    ACTIONS(1230), 1,
      sym_ident,
    STATE(185), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14732] = 3,
    ACTIONS(1232), 1,
      aux_sym_arity_token1,
    STATE(74), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14743] = 3,
    ACTIONS(875), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1234), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14754] = 3,
    ACTIONS(1230), 1,
      sym_ident,
    STATE(245), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14765] = 3,
    ACTIONS(1236), 1,
      aux_sym_arity_token1,
    STATE(191), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14776] = 3,
    ACTIONS(913), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1238), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14787] = 3,
    ACTIONS(1240), 1,
      anon_sym_,
    ACTIONS(1242), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14798] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14807] = 3,
    ACTIONS(849), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1244), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14818] = 3,
    ACTIONS(1246), 1,
      anon_sym_EQ,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14829] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1250), 2,
      sym_ident,
      anon_sym_in,
  [14838] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1252), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14847] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14856] = 3,
    ACTIONS(1232), 1,
      aux_sym_arity_token1,
    STATE(742), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14867] = 3,
    ACTIONS(1254), 1,
      aux_sym_arity_token1,
    STATE(347), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14878] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14887] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1258), 2,
      anon_sym_next,
      anon_sym_qed,
  [14896] = 3,
    ACTIONS(1260), 1,
      anon_sym_rule,
    STATE(230), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14907] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14916] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1262), 2,
      anon_sym_left,
      anon_sym_right,
  [14925] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1264), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14934] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1266), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1268), 1,
      sym_comment,
    STATE(627), 1,
      sym_param,
  [14947] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1270), 2,
      anon_sym_E,
      anon_sym_AC,
  [14956] = 3,
    ACTIONS(1272), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1274), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14967] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1226), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14976] = 3,
    ACTIONS(869), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1276), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14987] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14996] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1278), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15005] = 3,
    ACTIONS(1232), 1,
      aux_sym_arity_token1,
    STATE(700), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15016] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1280), 2,
      anon_sym_next,
      anon_sym_qed,
  [15025] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1266), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1268), 1,
      sym_comment,
    STATE(587), 1,
      sym_param,
  [15038] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15047] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [15056] = 3,
    ACTIONS(889), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1282), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15067] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15076] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15085] = 3,
    ACTIONS(1284), 1,
      aux_sym_arity_token1,
    STATE(197), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15096] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1286), 2,
      anon_sym_next,
      anon_sym_qed,
  [15105] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15114] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15123] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15132] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1018), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15141] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_next,
      anon_sym_qed,
  [15150] = 3,
    ACTIONS(839), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1292), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15161] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1294), 2,
      anon_sym_next,
      anon_sym_qed,
  [15170] = 3,
    ACTIONS(1296), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1298), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15181] = 3,
    ACTIONS(1260), 1,
      anon_sym_rule,
    STATE(202), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15192] = 3,
    ACTIONS(835), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1300), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15203] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15212] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15221] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1072), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [15230] = 3,
    ACTIONS(853), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1302), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15241] = 3,
    ACTIONS(1232), 1,
      aux_sym_arity_token1,
    STATE(735), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15252] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15261] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1054), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15270] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1268), 1,
      sym_comment,
    ACTIONS(1306), 1,
      aux_sym_oracle_goal_ranking_token1,
  [15280] = 2,
    ACTIONS(1308), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15288] = 2,
    ACTIONS(853), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15296] = 2,
    ACTIONS(1310), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15304] = 2,
    ACTIONS(1312), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15312] = 2,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15320] = 2,
    ACTIONS(342), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15328] = 2,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15336] = 2,
    ACTIONS(1177), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15344] = 2,
    ACTIONS(1316), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15352] = 2,
    ACTIONS(1318), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15360] = 2,
    ACTIONS(1320), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15368] = 2,
    ACTIONS(1322), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15376] = 2,
    ACTIONS(1324), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15384] = 2,
    ACTIONS(1326), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15392] = 2,
    ACTIONS(1328), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15400] = 2,
    ACTIONS(1006), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15408] = 2,
    ACTIONS(1330), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15416] = 2,
    ACTIONS(1246), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15424] = 2,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15432] = 2,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15440] = 2,
    ACTIONS(1336), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15448] = 2,
    ACTIONS(1338), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15456] = 2,
    ACTIONS(1340), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15464] = 2,
    ACTIONS(1342), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15472] = 2,
    ACTIONS(1344), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15480] = 2,
    ACTIONS(1346), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15488] = 2,
    ACTIONS(1348), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15496] = 2,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15504] = 2,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15512] = 2,
    ACTIONS(1354), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15520] = 2,
    ACTIONS(1356), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15528] = 2,
    ACTIONS(1358), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15536] = 2,
    ACTIONS(1360), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15544] = 2,
    ACTIONS(1362), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15552] = 2,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15560] = 2,
    ACTIONS(1364), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15568] = 2,
    ACTIONS(1366), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15576] = 2,
    ACTIONS(1368), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15584] = 2,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15592] = 2,
    ACTIONS(1370), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15600] = 2,
    ACTIONS(1372), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15608] = 2,
    ACTIONS(1374), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15616] = 2,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15624] = 2,
    ACTIONS(913), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15632] = 2,
    ACTIONS(1376), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15640] = 2,
    ACTIONS(1378), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15648] = 2,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15656] = 2,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15664] = 2,
    ACTIONS(1380), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15672] = 2,
    ACTIONS(1382), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15680] = 2,
    ACTIONS(1384), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15688] = 2,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15696] = 2,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15704] = 2,
    ACTIONS(1156), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15712] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15720] = 2,
    ACTIONS(1388), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15728] = 2,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15736] = 2,
    ACTIONS(1390), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15744] = 2,
    ACTIONS(1392), 1,
      anon_sym_COLON,
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
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15768] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15776] = 2,
    ACTIONS(1398), 1,
      anon_sym_COLON,
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
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15800] = 2,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15808] = 2,
    ACTIONS(1160), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15816] = 2,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15824] = 2,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15832] = 2,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15840] = 2,
    ACTIONS(1404), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15848] = 2,
    ACTIONS(1406), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15856] = 2,
    ACTIONS(1408), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15864] = 2,
    ACTIONS(877), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15872] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1268), 1,
      sym_comment,
    ACTIONS(1410), 1,
      aux_sym_formal_comment_token1,
  [15882] = 2,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15890] = 2,
    ACTIONS(1187), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15898] = 2,
    ACTIONS(1414), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15906] = 2,
    ACTIONS(1416), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15914] = 2,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15922] = 2,
    ACTIONS(1420), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15930] = 2,
    ACTIONS(1422), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15938] = 2,
    ACTIONS(1424), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15946] = 2,
    ACTIONS(1426), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15954] = 2,
    ACTIONS(1428), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15962] = 2,
    ACTIONS(1430), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15970] = 2,
    ACTIONS(1432), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15978] = 2,
    ACTIONS(1434), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15986] = 2,
    ACTIONS(1436), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15994] = 2,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16002] = 2,
    ACTIONS(1438), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16010] = 2,
    ACTIONS(1440), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16018] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1268), 1,
      sym_comment,
    ACTIONS(1442), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16028] = 2,
    ACTIONS(1444), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16036] = 2,
    ACTIONS(1446), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16044] = 2,
    ACTIONS(1448), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16052] = 2,
    ACTIONS(1450), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16060] = 2,
    ACTIONS(1452), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16068] = 2,
    ACTIONS(1454), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16076] = 2,
    ACTIONS(1456), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16084] = 2,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16092] = 2,
    ACTIONS(1458), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16100] = 2,
    ACTIONS(1460), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16108] = 2,
    ACTIONS(1462), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16116] = 2,
    ACTIONS(1464), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16124] = 2,
    ACTIONS(1466), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16132] = 2,
    ACTIONS(1468), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16140] = 2,
    ACTIONS(1470), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16148] = 2,
    ACTIONS(1472), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16156] = 2,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16164] = 2,
    ACTIONS(1476), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16172] = 2,
    ACTIONS(1478), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16180] = 2,
    ACTIONS(1480), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16188] = 2,
    ACTIONS(1482), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16196] = 2,
    ACTIONS(1484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16204] = 2,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16212] = 2,
    ACTIONS(1488), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16220] = 2,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16228] = 2,
    ACTIONS(1492), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16236] = 2,
    ACTIONS(1494), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16244] = 2,
    ACTIONS(1027), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16252] = 2,
    ACTIONS(1496), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16260] = 2,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16268] = 2,
    ACTIONS(889), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16276] = 2,
    ACTIONS(1500), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16284] = 2,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16292] = 2,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16300] = 2,
    ACTIONS(1504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16308] = 2,
    ACTIONS(1506), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16316] = 2,
    ACTIONS(839), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16324] = 2,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16332] = 2,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16340] = 2,
    ACTIONS(1510), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16348] = 2,
    ACTIONS(835), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16356] = 2,
    ACTIONS(1512), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16364] = 2,
    ACTIONS(1514), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16372] = 2,
    ACTIONS(901), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16380] = 2,
    ACTIONS(1516), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16388] = 2,
    ACTIONS(1518), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16396] = 2,
    ACTIONS(1520), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16404] = 2,
    ACTIONS(1522), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16412] = 2,
    ACTIONS(1524), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16420] = 2,
    ACTIONS(1526), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16428] = 2,
    ACTIONS(1528), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16436] = 2,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16444] = 2,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16452] = 2,
    ACTIONS(1530), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16460] = 2,
    ACTIONS(1532), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16468] = 2,
    ACTIONS(1534), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16476] = 2,
    ACTIONS(1536), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16484] = 2,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16492] = 2,
    ACTIONS(1538), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16500] = 2,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16508] = 2,
    ACTIONS(1540), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16516] = 2,
    ACTIONS(1542), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16524] = 2,
    ACTIONS(1544), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16532] = 2,
    ACTIONS(1546), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16540] = 2,
    ACTIONS(1548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16548] = 2,
    ACTIONS(1083), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16556] = 2,
    ACTIONS(1550), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16564] = 2,
    ACTIONS(1077), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16572] = 2,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16580] = 2,
    ACTIONS(1552), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16588] = 2,
    ACTIONS(1554), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16596] = 2,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16604] = 2,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16612] = 2,
    ACTIONS(1558), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16620] = 2,
    ACTIONS(1560), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16628] = 2,
    ACTIONS(1562), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16636] = 2,
    ACTIONS(1564), 1,
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
  [SMALL_STATE(33)] = 3104,
  [SMALL_STATE(34)] = 3141,
  [SMALL_STATE(35)] = 3178,
  [SMALL_STATE(36)] = 3217,
  [SMALL_STATE(37)] = 3254,
  [SMALL_STATE(38)] = 3291,
  [SMALL_STATE(39)] = 3334,
  [SMALL_STATE(40)] = 3377,
  [SMALL_STATE(41)] = 3420,
  [SMALL_STATE(42)] = 3459,
  [SMALL_STATE(43)] = 3500,
  [SMALL_STATE(44)] = 3542,
  [SMALL_STATE(45)] = 3578,
  [SMALL_STATE(46)] = 3614,
  [SMALL_STATE(47)] = 3650,
  [SMALL_STATE(48)] = 3686,
  [SMALL_STATE(49)] = 3722,
  [SMALL_STATE(50)] = 3754,
  [SMALL_STATE(51)] = 3790,
  [SMALL_STATE(52)] = 3844,
  [SMALL_STATE(53)] = 3876,
  [SMALL_STATE(54)] = 3912,
  [SMALL_STATE(55)] = 3952,
  [SMALL_STATE(56)] = 3988,
  [SMALL_STATE(57)] = 4023,
  [SMALL_STATE(58)] = 4058,
  [SMALL_STATE(59)] = 4091,
  [SMALL_STATE(60)] = 4124,
  [SMALL_STATE(61)] = 4155,
  [SMALL_STATE(62)] = 4186,
  [SMALL_STATE(63)] = 4237,
  [SMALL_STATE(64)] = 4288,
  [SMALL_STATE(65)] = 4319,
  [SMALL_STATE(66)] = 4352,
  [SMALL_STATE(67)] = 4387,
  [SMALL_STATE(68)] = 4421,
  [SMALL_STATE(69)] = 4451,
  [SMALL_STATE(70)] = 4483,
  [SMALL_STATE(71)] = 4513,
  [SMALL_STATE(72)] = 4545,
  [SMALL_STATE(73)] = 4577,
  [SMALL_STATE(74)] = 4609,
  [SMALL_STATE(75)] = 4641,
  [SMALL_STATE(76)] = 4673,
  [SMALL_STATE(77)] = 4707,
  [SMALL_STATE(78)] = 4737,
  [SMALL_STATE(79)] = 4771,
  [SMALL_STATE(80)] = 4800,
  [SMALL_STATE(81)] = 4855,
  [SMALL_STATE(82)] = 4910,
  [SMALL_STATE(83)] = 4939,
  [SMALL_STATE(84)] = 4968,
  [SMALL_STATE(85)] = 4997,
  [SMALL_STATE(86)] = 5030,
  [SMALL_STATE(87)] = 5059,
  [SMALL_STATE(88)] = 5092,
  [SMALL_STATE(89)] = 5121,
  [SMALL_STATE(90)] = 5150,
  [SMALL_STATE(91)] = 5181,
  [SMALL_STATE(92)] = 5208,
  [SMALL_STATE(93)] = 5263,
  [SMALL_STATE(94)] = 5318,
  [SMALL_STATE(95)] = 5347,
  [SMALL_STATE(96)] = 5374,
  [SMALL_STATE(97)] = 5429,
  [SMALL_STATE(98)] = 5456,
  [SMALL_STATE(99)] = 5485,
  [SMALL_STATE(100)] = 5514,
  [SMALL_STATE(101)] = 5569,
  [SMALL_STATE(102)] = 5598,
  [SMALL_STATE(103)] = 5631,
  [SMALL_STATE(104)] = 5686,
  [SMALL_STATE(105)] = 5715,
  [SMALL_STATE(106)] = 5744,
  [SMALL_STATE(107)] = 5773,
  [SMALL_STATE(108)] = 5802,
  [SMALL_STATE(109)] = 5831,
  [SMALL_STATE(110)] = 5860,
  [SMALL_STATE(111)] = 5889,
  [SMALL_STATE(112)] = 5944,
  [SMALL_STATE(113)] = 5982,
  [SMALL_STATE(114)] = 6014,
  [SMALL_STATE(115)] = 6042,
  [SMALL_STATE(116)] = 6094,
  [SMALL_STATE(117)] = 6146,
  [SMALL_STATE(118)] = 6198,
  [SMALL_STATE(119)] = 6250,
  [SMALL_STATE(120)] = 6288,
  [SMALL_STATE(121)] = 6340,
  [SMALL_STATE(122)] = 6392,
  [SMALL_STATE(123)] = 6420,
  [SMALL_STATE(124)] = 6472,
  [SMALL_STATE(125)] = 6524,
  [SMALL_STATE(126)] = 6576,
  [SMALL_STATE(127)] = 6628,
  [SMALL_STATE(128)] = 6680,
  [SMALL_STATE(129)] = 6708,
  [SMALL_STATE(130)] = 6760,
  [SMALL_STATE(131)] = 6798,
  [SMALL_STATE(132)] = 6836,
  [SMALL_STATE(133)] = 6868,
  [SMALL_STATE(134)] = 6900,
  [SMALL_STATE(135)] = 6927,
  [SMALL_STATE(136)] = 6976,
  [SMALL_STATE(137)] = 7003,
  [SMALL_STATE(138)] = 7052,
  [SMALL_STATE(139)] = 7098,
  [SMALL_STATE(140)] = 7128,
  [SMALL_STATE(141)] = 7174,
  [SMALL_STATE(142)] = 7204,
  [SMALL_STATE(143)] = 7234,
  [SMALL_STATE(144)] = 7265,
  [SMALL_STATE(145)] = 7308,
  [SMALL_STATE(146)] = 7339,
  [SMALL_STATE(147)] = 7382,
  [SMALL_STATE(148)] = 7413,
  [SMALL_STATE(149)] = 7456,
  [SMALL_STATE(150)] = 7491,
  [SMALL_STATE(151)] = 7522,
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
  [SMALL_STATE(172)] = 8230,
  [SMALL_STATE(173)] = 8254,
  [SMALL_STATE(174)] = 8276,
  [SMALL_STATE(175)] = 8300,
  [SMALL_STATE(176)] = 8324,
  [SMALL_STATE(177)] = 8354,
  [SMALL_STATE(178)] = 8377,
  [SMALL_STATE(179)] = 8398,
  [SMALL_STATE(180)] = 8421,
  [SMALL_STATE(181)] = 8444,
  [SMALL_STATE(182)] = 8475,
  [SMALL_STATE(183)] = 8494,
  [SMALL_STATE(184)] = 8515,
  [SMALL_STATE(185)] = 8538,
  [SMALL_STATE(186)] = 8561,
  [SMALL_STATE(187)] = 8582,
  [SMALL_STATE(188)] = 8605,
  [SMALL_STATE(189)] = 8628,
  [SMALL_STATE(190)] = 8647,
  [SMALL_STATE(191)] = 8670,
  [SMALL_STATE(192)] = 8693,
  [SMALL_STATE(193)] = 8716,
  [SMALL_STATE(194)] = 8739,
  [SMALL_STATE(195)] = 8760,
  [SMALL_STATE(196)] = 8783,
  [SMALL_STATE(197)] = 8804,
  [SMALL_STATE(198)] = 8827,
  [SMALL_STATE(199)] = 8850,
  [SMALL_STATE(200)] = 8873,
  [SMALL_STATE(201)] = 8896,
  [SMALL_STATE(202)] = 8919,
  [SMALL_STATE(203)] = 8942,
  [SMALL_STATE(204)] = 8965,
  [SMALL_STATE(205)] = 8988,
  [SMALL_STATE(206)] = 9011,
  [SMALL_STATE(207)] = 9034,
  [SMALL_STATE(208)] = 9055,
  [SMALL_STATE(209)] = 9074,
  [SMALL_STATE(210)] = 9094,
  [SMALL_STATE(211)] = 9118,
  [SMALL_STATE(212)] = 9136,
  [SMALL_STATE(213)] = 9154,
  [SMALL_STATE(214)] = 9172,
  [SMALL_STATE(215)] = 9190,
  [SMALL_STATE(216)] = 9210,
  [SMALL_STATE(217)] = 9230,
  [SMALL_STATE(218)] = 9250,
  [SMALL_STATE(219)] = 9270,
  [SMALL_STATE(220)] = 9290,
  [SMALL_STATE(221)] = 9308,
  [SMALL_STATE(222)] = 9326,
  [SMALL_STATE(223)] = 9344,
  [SMALL_STATE(224)] = 9362,
  [SMALL_STATE(225)] = 9380,
  [SMALL_STATE(226)] = 9398,
  [SMALL_STATE(227)] = 9416,
  [SMALL_STATE(228)] = 9434,
  [SMALL_STATE(229)] = 9454,
  [SMALL_STATE(230)] = 9472,
  [SMALL_STATE(231)] = 9492,
  [SMALL_STATE(232)] = 9510,
  [SMALL_STATE(233)] = 9530,
  [SMALL_STATE(234)] = 9548,
  [SMALL_STATE(235)] = 9568,
  [SMALL_STATE(236)] = 9592,
  [SMALL_STATE(237)] = 9612,
  [SMALL_STATE(238)] = 9630,
  [SMALL_STATE(239)] = 9654,
  [SMALL_STATE(240)] = 9674,
  [SMALL_STATE(241)] = 9694,
  [SMALL_STATE(242)] = 9714,
  [SMALL_STATE(243)] = 9734,
  [SMALL_STATE(244)] = 9754,
  [SMALL_STATE(245)] = 9774,
  [SMALL_STATE(246)] = 9794,
  [SMALL_STATE(247)] = 9814,
  [SMALL_STATE(248)] = 9834,
  [SMALL_STATE(249)] = 9854,
  [SMALL_STATE(250)] = 9874,
  [SMALL_STATE(251)] = 9894,
  [SMALL_STATE(252)] = 9912,
  [SMALL_STATE(253)] = 9930,
  [SMALL_STATE(254)] = 9950,
  [SMALL_STATE(255)] = 9970,
  [SMALL_STATE(256)] = 9990,
  [SMALL_STATE(257)] = 10010,
  [SMALL_STATE(258)] = 10028,
  [SMALL_STATE(259)] = 10048,
  [SMALL_STATE(260)] = 10068,
  [SMALL_STATE(261)] = 10088,
  [SMALL_STATE(262)] = 10108,
  [SMALL_STATE(263)] = 10128,
  [SMALL_STATE(264)] = 10145,
  [SMALL_STATE(265)] = 10162,
  [SMALL_STATE(266)] = 10181,
  [SMALL_STATE(267)] = 10200,
  [SMALL_STATE(268)] = 10219,
  [SMALL_STATE(269)] = 10240,
  [SMALL_STATE(270)] = 10261,
  [SMALL_STATE(271)] = 10278,
  [SMALL_STATE(272)] = 10295,
  [SMALL_STATE(273)] = 10314,
  [SMALL_STATE(274)] = 10343,
  [SMALL_STATE(275)] = 10364,
  [SMALL_STATE(276)] = 10385,
  [SMALL_STATE(277)] = 10414,
  [SMALL_STATE(278)] = 10431,
  [SMALL_STATE(279)] = 10448,
  [SMALL_STATE(280)] = 10467,
  [SMALL_STATE(281)] = 10496,
  [SMALL_STATE(282)] = 10513,
  [SMALL_STATE(283)] = 10534,
  [SMALL_STATE(284)] = 10553,
  [SMALL_STATE(285)] = 10570,
  [SMALL_STATE(286)] = 10587,
  [SMALL_STATE(287)] = 10604,
  [SMALL_STATE(288)] = 10621,
  [SMALL_STATE(289)] = 10650,
  [SMALL_STATE(290)] = 10671,
  [SMALL_STATE(291)] = 10688,
  [SMALL_STATE(292)] = 10709,
  [SMALL_STATE(293)] = 10728,
  [SMALL_STATE(294)] = 10749,
  [SMALL_STATE(295)] = 10766,
  [SMALL_STATE(296)] = 10783,
  [SMALL_STATE(297)] = 10812,
  [SMALL_STATE(298)] = 10829,
  [SMALL_STATE(299)] = 10846,
  [SMALL_STATE(300)] = 10874,
  [SMALL_STATE(301)] = 10902,
  [SMALL_STATE(302)] = 10928,
  [SMALL_STATE(303)] = 10956,
  [SMALL_STATE(304)] = 10974,
  [SMALL_STATE(305)] = 11002,
  [SMALL_STATE(306)] = 11030,
  [SMALL_STATE(307)] = 11058,
  [SMALL_STATE(308)] = 11086,
  [SMALL_STATE(309)] = 11114,
  [SMALL_STATE(310)] = 11142,
  [SMALL_STATE(311)] = 11170,
  [SMALL_STATE(312)] = 11198,
  [SMALL_STATE(313)] = 11226,
  [SMALL_STATE(314)] = 11254,
  [SMALL_STATE(315)] = 11282,
  [SMALL_STATE(316)] = 11310,
  [SMALL_STATE(317)] = 11338,
  [SMALL_STATE(318)] = 11366,
  [SMALL_STATE(319)] = 11394,
  [SMALL_STATE(320)] = 11420,
  [SMALL_STATE(321)] = 11448,
  [SMALL_STATE(322)] = 11476,
  [SMALL_STATE(323)] = 11502,
  [SMALL_STATE(324)] = 11530,
  [SMALL_STATE(325)] = 11558,
  [SMALL_STATE(326)] = 11586,
  [SMALL_STATE(327)] = 11614,
  [SMALL_STATE(328)] = 11642,
  [SMALL_STATE(329)] = 11666,
  [SMALL_STATE(330)] = 11692,
  [SMALL_STATE(331)] = 11720,
  [SMALL_STATE(332)] = 11746,
  [SMALL_STATE(333)] = 11774,
  [SMALL_STATE(334)] = 11802,
  [SMALL_STATE(335)] = 11830,
  [SMALL_STATE(336)] = 11858,
  [SMALL_STATE(337)] = 11882,
  [SMALL_STATE(338)] = 11910,
  [SMALL_STATE(339)] = 11938,
  [SMALL_STATE(340)] = 11957,
  [SMALL_STATE(341)] = 11982,
  [SMALL_STATE(342)] = 12003,
  [SMALL_STATE(343)] = 12024,
  [SMALL_STATE(344)] = 12045,
  [SMALL_STATE(345)] = 12062,
  [SMALL_STATE(346)] = 12087,
  [SMALL_STATE(347)] = 12106,
  [SMALL_STATE(348)] = 12125,
  [SMALL_STATE(349)] = 12146,
  [SMALL_STATE(350)] = 12171,
  [SMALL_STATE(351)] = 12190,
  [SMALL_STATE(352)] = 12207,
  [SMALL_STATE(353)] = 12228,
  [SMALL_STATE(354)] = 12245,
  [SMALL_STATE(355)] = 12264,
  [SMALL_STATE(356)] = 12289,
  [SMALL_STATE(357)] = 12314,
  [SMALL_STATE(358)] = 12333,
  [SMALL_STATE(359)] = 12349,
  [SMALL_STATE(360)] = 12365,
  [SMALL_STATE(361)] = 12381,
  [SMALL_STATE(362)] = 12397,
  [SMALL_STATE(363)] = 12419,
  [SMALL_STATE(364)] = 12435,
  [SMALL_STATE(365)] = 12451,
  [SMALL_STATE(366)] = 12467,
  [SMALL_STATE(367)] = 12487,
  [SMALL_STATE(368)] = 12503,
  [SMALL_STATE(369)] = 12519,
  [SMALL_STATE(370)] = 12535,
  [SMALL_STATE(371)] = 12551,
  [SMALL_STATE(372)] = 12567,
  [SMALL_STATE(373)] = 12587,
  [SMALL_STATE(374)] = 12603,
  [SMALL_STATE(375)] = 12623,
  [SMALL_STATE(376)] = 12639,
  [SMALL_STATE(377)] = 12659,
  [SMALL_STATE(378)] = 12675,
  [SMALL_STATE(379)] = 12691,
  [SMALL_STATE(380)] = 12707,
  [SMALL_STATE(381)] = 12729,
  [SMALL_STATE(382)] = 12745,
  [SMALL_STATE(383)] = 12762,
  [SMALL_STATE(384)] = 12779,
  [SMALL_STATE(385)] = 12796,
  [SMALL_STATE(386)] = 12813,
  [SMALL_STATE(387)] = 12830,
  [SMALL_STATE(388)] = 12851,
  [SMALL_STATE(389)] = 12868,
  [SMALL_STATE(390)] = 12883,
  [SMALL_STATE(391)] = 12900,
  [SMALL_STATE(392)] = 12913,
  [SMALL_STATE(393)] = 12928,
  [SMALL_STATE(394)] = 12949,
  [SMALL_STATE(395)] = 12964,
  [SMALL_STATE(396)] = 12985,
  [SMALL_STATE(397)] = 13004,
  [SMALL_STATE(398)] = 13016,
  [SMALL_STATE(399)] = 13030,
  [SMALL_STATE(400)] = 13044,
  [SMALL_STATE(401)] = 13056,
  [SMALL_STATE(402)] = 13068,
  [SMALL_STATE(403)] = 13084,
  [SMALL_STATE(404)] = 13100,
  [SMALL_STATE(405)] = 13114,
  [SMALL_STATE(406)] = 13126,
  [SMALL_STATE(407)] = 13142,
  [SMALL_STATE(408)] = 13154,
  [SMALL_STATE(409)] = 13166,
  [SMALL_STATE(410)] = 13181,
  [SMALL_STATE(411)] = 13192,
  [SMALL_STATE(412)] = 13203,
  [SMALL_STATE(413)] = 13214,
  [SMALL_STATE(414)] = 13229,
  [SMALL_STATE(415)] = 13242,
  [SMALL_STATE(416)] = 13253,
  [SMALL_STATE(417)] = 13268,
  [SMALL_STATE(418)] = 13283,
  [SMALL_STATE(419)] = 13298,
  [SMALL_STATE(420)] = 13313,
  [SMALL_STATE(421)] = 13328,
  [SMALL_STATE(422)] = 13343,
  [SMALL_STATE(423)] = 13356,
  [SMALL_STATE(424)] = 13371,
  [SMALL_STATE(425)] = 13382,
  [SMALL_STATE(426)] = 13393,
  [SMALL_STATE(427)] = 13410,
  [SMALL_STATE(428)] = 13421,
  [SMALL_STATE(429)] = 13436,
  [SMALL_STATE(430)] = 13453,
  [SMALL_STATE(431)] = 13468,
  [SMALL_STATE(432)] = 13483,
  [SMALL_STATE(433)] = 13498,
  [SMALL_STATE(434)] = 13509,
  [SMALL_STATE(435)] = 13524,
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
  [SMALL_STATE(449)] = 13719,
  [SMALL_STATE(450)] = 13733,
  [SMALL_STATE(451)] = 13747,
  [SMALL_STATE(452)] = 13761,
  [SMALL_STATE(453)] = 13775,
  [SMALL_STATE(454)] = 13789,
  [SMALL_STATE(455)] = 13803,
  [SMALL_STATE(456)] = 13817,
  [SMALL_STATE(457)] = 13831,
  [SMALL_STATE(458)] = 13845,
  [SMALL_STATE(459)] = 13859,
  [SMALL_STATE(460)] = 13873,
  [SMALL_STATE(461)] = 13887,
  [SMALL_STATE(462)] = 13901,
  [SMALL_STATE(463)] = 13915,
  [SMALL_STATE(464)] = 13929,
  [SMALL_STATE(465)] = 13943,
  [SMALL_STATE(466)] = 13955,
  [SMALL_STATE(467)] = 13967,
  [SMALL_STATE(468)] = 13979,
  [SMALL_STATE(469)] = 13993,
  [SMALL_STATE(470)] = 14007,
  [SMALL_STATE(471)] = 14021,
  [SMALL_STATE(472)] = 14035,
  [SMALL_STATE(473)] = 14049,
  [SMALL_STATE(474)] = 14063,
  [SMALL_STATE(475)] = 14075,
  [SMALL_STATE(476)] = 14089,
  [SMALL_STATE(477)] = 14103,
  [SMALL_STATE(478)] = 14117,
  [SMALL_STATE(479)] = 14131,
  [SMALL_STATE(480)] = 14145,
  [SMALL_STATE(481)] = 14159,
  [SMALL_STATE(482)] = 14173,
  [SMALL_STATE(483)] = 14187,
  [SMALL_STATE(484)] = 14201,
  [SMALL_STATE(485)] = 14215,
  [SMALL_STATE(486)] = 14227,
  [SMALL_STATE(487)] = 14241,
  [SMALL_STATE(488)] = 14255,
  [SMALL_STATE(489)] = 14269,
  [SMALL_STATE(490)] = 14283,
  [SMALL_STATE(491)] = 14297,
  [SMALL_STATE(492)] = 14311,
  [SMALL_STATE(493)] = 14323,
  [SMALL_STATE(494)] = 14337,
  [SMALL_STATE(495)] = 14351,
  [SMALL_STATE(496)] = 14365,
  [SMALL_STATE(497)] = 14379,
  [SMALL_STATE(498)] = 14393,
  [SMALL_STATE(499)] = 14407,
  [SMALL_STATE(500)] = 14421,
  [SMALL_STATE(501)] = 14433,
  [SMALL_STATE(502)] = 14447,
  [SMALL_STATE(503)] = 14461,
  [SMALL_STATE(504)] = 14475,
  [SMALL_STATE(505)] = 14489,
  [SMALL_STATE(506)] = 14503,
  [SMALL_STATE(507)] = 14517,
  [SMALL_STATE(508)] = 14531,
  [SMALL_STATE(509)] = 14545,
  [SMALL_STATE(510)] = 14559,
  [SMALL_STATE(511)] = 14573,
  [SMALL_STATE(512)] = 14587,
  [SMALL_STATE(513)] = 14601,
  [SMALL_STATE(514)] = 14613,
  [SMALL_STATE(515)] = 14627,
  [SMALL_STATE(516)] = 14641,
  [SMALL_STATE(517)] = 14655,
  [SMALL_STATE(518)] = 14669,
  [SMALL_STATE(519)] = 14681,
  [SMALL_STATE(520)] = 14695,
  [SMALL_STATE(521)] = 14707,
  [SMALL_STATE(522)] = 14721,
  [SMALL_STATE(523)] = 14732,
  [SMALL_STATE(524)] = 14743,
  [SMALL_STATE(525)] = 14754,
  [SMALL_STATE(526)] = 14765,
  [SMALL_STATE(527)] = 14776,
  [SMALL_STATE(528)] = 14787,
  [SMALL_STATE(529)] = 14798,
  [SMALL_STATE(530)] = 14807,
  [SMALL_STATE(531)] = 14818,
  [SMALL_STATE(532)] = 14829,
  [SMALL_STATE(533)] = 14838,
  [SMALL_STATE(534)] = 14847,
  [SMALL_STATE(535)] = 14856,
  [SMALL_STATE(536)] = 14867,
  [SMALL_STATE(537)] = 14878,
  [SMALL_STATE(538)] = 14887,
  [SMALL_STATE(539)] = 14896,
  [SMALL_STATE(540)] = 14907,
  [SMALL_STATE(541)] = 14916,
  [SMALL_STATE(542)] = 14925,
  [SMALL_STATE(543)] = 14934,
  [SMALL_STATE(544)] = 14947,
  [SMALL_STATE(545)] = 14956,
  [SMALL_STATE(546)] = 14967,
  [SMALL_STATE(547)] = 14976,
  [SMALL_STATE(548)] = 14987,
  [SMALL_STATE(549)] = 14996,
  [SMALL_STATE(550)] = 15005,
  [SMALL_STATE(551)] = 15016,
  [SMALL_STATE(552)] = 15025,
  [SMALL_STATE(553)] = 15038,
  [SMALL_STATE(554)] = 15047,
  [SMALL_STATE(555)] = 15056,
  [SMALL_STATE(556)] = 15067,
  [SMALL_STATE(557)] = 15076,
  [SMALL_STATE(558)] = 15085,
  [SMALL_STATE(559)] = 15096,
  [SMALL_STATE(560)] = 15105,
  [SMALL_STATE(561)] = 15114,
  [SMALL_STATE(562)] = 15123,
  [SMALL_STATE(563)] = 15132,
  [SMALL_STATE(564)] = 15141,
  [SMALL_STATE(565)] = 15150,
  [SMALL_STATE(566)] = 15161,
  [SMALL_STATE(567)] = 15170,
  [SMALL_STATE(568)] = 15181,
  [SMALL_STATE(569)] = 15192,
  [SMALL_STATE(570)] = 15203,
  [SMALL_STATE(571)] = 15212,
  [SMALL_STATE(572)] = 15221,
  [SMALL_STATE(573)] = 15230,
  [SMALL_STATE(574)] = 15241,
  [SMALL_STATE(575)] = 15252,
  [SMALL_STATE(576)] = 15261,
  [SMALL_STATE(577)] = 15270,
  [SMALL_STATE(578)] = 15280,
  [SMALL_STATE(579)] = 15288,
  [SMALL_STATE(580)] = 15296,
  [SMALL_STATE(581)] = 15304,
  [SMALL_STATE(582)] = 15312,
  [SMALL_STATE(583)] = 15320,
  [SMALL_STATE(584)] = 15328,
  [SMALL_STATE(585)] = 15336,
  [SMALL_STATE(586)] = 15344,
  [SMALL_STATE(587)] = 15352,
  [SMALL_STATE(588)] = 15360,
  [SMALL_STATE(589)] = 15368,
  [SMALL_STATE(590)] = 15376,
  [SMALL_STATE(591)] = 15384,
  [SMALL_STATE(592)] = 15392,
  [SMALL_STATE(593)] = 15400,
  [SMALL_STATE(594)] = 15408,
  [SMALL_STATE(595)] = 15416,
  [SMALL_STATE(596)] = 15424,
  [SMALL_STATE(597)] = 15432,
  [SMALL_STATE(598)] = 15440,
  [SMALL_STATE(599)] = 15448,
  [SMALL_STATE(600)] = 15456,
  [SMALL_STATE(601)] = 15464,
  [SMALL_STATE(602)] = 15472,
  [SMALL_STATE(603)] = 15480,
  [SMALL_STATE(604)] = 15488,
  [SMALL_STATE(605)] = 15496,
  [SMALL_STATE(606)] = 15504,
  [SMALL_STATE(607)] = 15512,
  [SMALL_STATE(608)] = 15520,
  [SMALL_STATE(609)] = 15528,
  [SMALL_STATE(610)] = 15536,
  [SMALL_STATE(611)] = 15544,
  [SMALL_STATE(612)] = 15552,
  [SMALL_STATE(613)] = 15560,
  [SMALL_STATE(614)] = 15568,
  [SMALL_STATE(615)] = 15576,
  [SMALL_STATE(616)] = 15584,
  [SMALL_STATE(617)] = 15592,
  [SMALL_STATE(618)] = 15600,
  [SMALL_STATE(619)] = 15608,
  [SMALL_STATE(620)] = 15616,
  [SMALL_STATE(621)] = 15624,
  [SMALL_STATE(622)] = 15632,
  [SMALL_STATE(623)] = 15640,
  [SMALL_STATE(624)] = 15648,
  [SMALL_STATE(625)] = 15656,
  [SMALL_STATE(626)] = 15664,
  [SMALL_STATE(627)] = 15672,
  [SMALL_STATE(628)] = 15680,
  [SMALL_STATE(629)] = 15688,
  [SMALL_STATE(630)] = 15696,
  [SMALL_STATE(631)] = 15704,
  [SMALL_STATE(632)] = 15712,
  [SMALL_STATE(633)] = 15720,
  [SMALL_STATE(634)] = 15728,
  [SMALL_STATE(635)] = 15736,
  [SMALL_STATE(636)] = 15744,
  [SMALL_STATE(637)] = 15752,
  [SMALL_STATE(638)] = 15760,
  [SMALL_STATE(639)] = 15768,
  [SMALL_STATE(640)] = 15776,
  [SMALL_STATE(641)] = 15784,
  [SMALL_STATE(642)] = 15792,
  [SMALL_STATE(643)] = 15800,
  [SMALL_STATE(644)] = 15808,
  [SMALL_STATE(645)] = 15816,
  [SMALL_STATE(646)] = 15824,
  [SMALL_STATE(647)] = 15832,
  [SMALL_STATE(648)] = 15840,
  [SMALL_STATE(649)] = 15848,
  [SMALL_STATE(650)] = 15856,
  [SMALL_STATE(651)] = 15864,
  [SMALL_STATE(652)] = 15872,
  [SMALL_STATE(653)] = 15882,
  [SMALL_STATE(654)] = 15890,
  [SMALL_STATE(655)] = 15898,
  [SMALL_STATE(656)] = 15906,
  [SMALL_STATE(657)] = 15914,
  [SMALL_STATE(658)] = 15922,
  [SMALL_STATE(659)] = 15930,
  [SMALL_STATE(660)] = 15938,
  [SMALL_STATE(661)] = 15946,
  [SMALL_STATE(662)] = 15954,
  [SMALL_STATE(663)] = 15962,
  [SMALL_STATE(664)] = 15970,
  [SMALL_STATE(665)] = 15978,
  [SMALL_STATE(666)] = 15986,
  [SMALL_STATE(667)] = 15994,
  [SMALL_STATE(668)] = 16002,
  [SMALL_STATE(669)] = 16010,
  [SMALL_STATE(670)] = 16018,
  [SMALL_STATE(671)] = 16028,
  [SMALL_STATE(672)] = 16036,
  [SMALL_STATE(673)] = 16044,
  [SMALL_STATE(674)] = 16052,
  [SMALL_STATE(675)] = 16060,
  [SMALL_STATE(676)] = 16068,
  [SMALL_STATE(677)] = 16076,
  [SMALL_STATE(678)] = 16084,
  [SMALL_STATE(679)] = 16092,
  [SMALL_STATE(680)] = 16100,
  [SMALL_STATE(681)] = 16108,
  [SMALL_STATE(682)] = 16116,
  [SMALL_STATE(683)] = 16124,
  [SMALL_STATE(684)] = 16132,
  [SMALL_STATE(685)] = 16140,
  [SMALL_STATE(686)] = 16148,
  [SMALL_STATE(687)] = 16156,
  [SMALL_STATE(688)] = 16164,
  [SMALL_STATE(689)] = 16172,
  [SMALL_STATE(690)] = 16180,
  [SMALL_STATE(691)] = 16188,
  [SMALL_STATE(692)] = 16196,
  [SMALL_STATE(693)] = 16204,
  [SMALL_STATE(694)] = 16212,
  [SMALL_STATE(695)] = 16220,
  [SMALL_STATE(696)] = 16228,
  [SMALL_STATE(697)] = 16236,
  [SMALL_STATE(698)] = 16244,
  [SMALL_STATE(699)] = 16252,
  [SMALL_STATE(700)] = 16260,
  [SMALL_STATE(701)] = 16268,
  [SMALL_STATE(702)] = 16276,
  [SMALL_STATE(703)] = 16284,
  [SMALL_STATE(704)] = 16292,
  [SMALL_STATE(705)] = 16300,
  [SMALL_STATE(706)] = 16308,
  [SMALL_STATE(707)] = 16316,
  [SMALL_STATE(708)] = 16324,
  [SMALL_STATE(709)] = 16332,
  [SMALL_STATE(710)] = 16340,
  [SMALL_STATE(711)] = 16348,
  [SMALL_STATE(712)] = 16356,
  [SMALL_STATE(713)] = 16364,
  [SMALL_STATE(714)] = 16372,
  [SMALL_STATE(715)] = 16380,
  [SMALL_STATE(716)] = 16388,
  [SMALL_STATE(717)] = 16396,
  [SMALL_STATE(718)] = 16404,
  [SMALL_STATE(719)] = 16412,
  [SMALL_STATE(720)] = 16420,
  [SMALL_STATE(721)] = 16428,
  [SMALL_STATE(722)] = 16436,
  [SMALL_STATE(723)] = 16444,
  [SMALL_STATE(724)] = 16452,
  [SMALL_STATE(725)] = 16460,
  [SMALL_STATE(726)] = 16468,
  [SMALL_STATE(727)] = 16476,
  [SMALL_STATE(728)] = 16484,
  [SMALL_STATE(729)] = 16492,
  [SMALL_STATE(730)] = 16500,
  [SMALL_STATE(731)] = 16508,
  [SMALL_STATE(732)] = 16516,
  [SMALL_STATE(733)] = 16524,
  [SMALL_STATE(734)] = 16532,
  [SMALL_STATE(735)] = 16540,
  [SMALL_STATE(736)] = 16548,
  [SMALL_STATE(737)] = 16556,
  [SMALL_STATE(738)] = 16564,
  [SMALL_STATE(739)] = 16572,
  [SMALL_STATE(740)] = 16580,
  [SMALL_STATE(741)] = 16588,
  [SMALL_STATE(742)] = 16596,
  [SMALL_STATE(743)] = 16604,
  [SMALL_STATE(744)] = 16612,
  [SMALL_STATE(745)] = 16620,
  [SMALL_STATE(746)] = 16628,
  [SMALL_STATE(747)] = 16636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(351),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(49),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(351),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(49),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(552),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(353),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(64),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(97),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(610),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(351),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(49),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(353),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(64),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(353),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(64),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(543),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(54),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(32),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(697),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(696),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(689),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(687),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(686),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(680),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(482),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(669),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(484),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(43),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(155),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 6),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(144),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(138),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(135),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(182),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(690),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(638),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(641),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(175),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(146),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(539),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(525),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(279),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(374),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(615),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(650),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(159),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 3),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(151),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(140),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(140),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(126),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(137),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [1020] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(460),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(414),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(4),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(341),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(741),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(513),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(380),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(362),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1530] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
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
