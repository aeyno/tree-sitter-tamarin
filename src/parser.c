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
#define STATE_COUNT 756
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 249
#define ALIAS_COUNT 0
#define TOKEN_COUNT 151
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
  anon_sym_In = 126,
  anon_sym_Out = 127,
  anon_sym_Fr = 128,
  anon_sym_BANG = 129,
  anon_sym_DASH = 130,
  anon_sym_no_precomp = 131,
  anon_sym_LT_EQ_GT = 132,
  anon_sym_14 = 133,
  anon_sym_EQ_EQ_GT = 134,
  anon_sym_15 = 135,
  anon_sym_16 = 136,
  anon_sym_17 = 137,
  anon_sym_18 = 138,
  anon_sym_19 = 139,
  anon_sym_F = 140,
  anon_sym_20 = 141,
  anon_sym_T = 142,
  anon_sym_last = 143,
  anon_sym_Ex = 144,
  anon_sym_21 = 145,
  anon_sym_All = 146,
  anon_sym_22 = 147,
  sym_hexcolor = 148,
  sym_comment = 149,
  sym_multiline_comment = 150,
  sym_source_file = 151,
  sym_security_protocol_theory = 152,
  sym_body = 153,
  sym__signature_spec = 154,
  sym_functions = 155,
  sym_function_sym = 156,
  sym_arity = 157,
  sym_equations = 158,
  sym_equation = 159,
  sym_built_ins = 160,
  sym_built_in = 161,
  sym_global_heuristic = 162,
  sym_goal_ranking = 163,
  sym_standard_goal_ranking = 164,
  sym_oracle_goal_ranking = 165,
  sym_tactic = 166,
  sym_presort = 167,
  sym_prio = 168,
  sym_deprio = 169,
  sym_post_ranking = 170,
  sym_function = 171,
  sym_and_function = 172,
  sym_not_function = 173,
  sym_param = 174,
  sym_function_name = 175,
  sym_rule = 176,
  sym_simple_rule = 177,
  sym_variants = 178,
  sym_modulo = 179,
  sym_rule_attrs = 180,
  sym_rule_attr = 181,
  sym_let_block = 182,
  sym_msg_var = 183,
  sym_restriction = 184,
  sym_restriction_attrs = 185,
  sym_lemma = 186,
  sym_lemma_attrs = 187,
  sym_lemma_attr = 188,
  sym_trace_quantifier = 189,
  sym_proof_skeleton = 190,
  sym_proof_method = 191,
  sym_goal = 192,
  sym_node_var = 193,
  sym_natural = 194,
  sym_natural_subscr = 195,
  sym_formal_comment = 196,
  sym_tuple_term = 197,
  sym__msetterm = 198,
  sym__xorterm = 199,
  sym__multterm = 200,
  sym__expterm = 201,
  sym_term = 202,
  sym_binary_app = 203,
  sym_nested = 204,
  sym_app = 205,
  sym_literal = 206,
  sym_nonnode_var = 207,
  sym_facts = 208,
  sym_builtin_facts = 209,
  sym_fact = 210,
  sym_fact_annotes = 211,
  sym_fact_annote = 212,
  sym_formula = 213,
  sym_imp = 214,
  sym_disjunction = 215,
  sym_conjunction = 216,
  sym_negation = 217,
  sym_atom = 218,
  sym_lvar = 219,
  sym_quantifier = 220,
  aux_sym_body_repeat1 = 221,
  aux_sym_functions_repeat1 = 222,
  aux_sym_equations_repeat1 = 223,
  aux_sym_built_ins_repeat1 = 224,
  aux_sym_global_heuristic_repeat1 = 225,
  aux_sym_tactic_repeat1 = 226,
  aux_sym_tactic_repeat2 = 227,
  aux_sym_prio_repeat1 = 228,
  aux_sym_function_repeat1 = 229,
  aux_sym_and_function_repeat1 = 230,
  aux_sym_not_function_repeat1 = 231,
  aux_sym_variants_repeat1 = 232,
  aux_sym_rule_attrs_repeat1 = 233,
  aux_sym_let_block_repeat1 = 234,
  aux_sym_lemma_attrs_repeat1 = 235,
  aux_sym_proof_skeleton_repeat1 = 236,
  aux_sym_goal_repeat1 = 237,
  aux_sym_natural_subscr_repeat1 = 238,
  aux_sym_tuple_term_repeat1 = 239,
  aux_sym__msetterm_repeat1 = 240,
  aux_sym__xorterm_repeat1 = 241,
  aux_sym__multterm_repeat1 = 242,
  aux_sym__expterm_repeat1 = 243,
  aux_sym_facts_repeat1 = 244,
  aux_sym_fact_annotes_repeat1 = 245,
  aux_sym_disjunction_repeat1 = 246,
  aux_sym_conjunction_repeat1 = 247,
  aux_sym_atom_repeat1 = 248,
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
  [8] = 5,
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
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 38,
  [46] = 46,
  [47] = 34,
  [48] = 36,
  [49] = 31,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 30,
  [54] = 54,
  [55] = 33,
  [56] = 56,
  [57] = 46,
  [58] = 58,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 52,
  [66] = 51,
  [67] = 43,
  [68] = 62,
  [69] = 58,
  [70] = 70,
  [71] = 56,
  [72] = 61,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
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
  [87] = 81,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 76,
  [95] = 80,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 81,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 96,
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
  [116] = 113,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 120,
  [123] = 123,
  [124] = 115,
  [125] = 115,
  [126] = 126,
  [127] = 127,
  [128] = 120,
  [129] = 129,
  [130] = 113,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 134,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 35,
  [148] = 148,
  [149] = 149,
  [150] = 146,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 39,
  [155] = 152,
  [156] = 153,
  [157] = 151,
  [158] = 158,
  [159] = 153,
  [160] = 152,
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
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 181,
  [187] = 187,
  [188] = 70,
  [189] = 83,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 93,
  [195] = 97,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 60,
  [204] = 74,
  [205] = 205,
  [206] = 206,
  [207] = 178,
  [208] = 98,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 210,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 215,
  [221] = 213,
  [222] = 39,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 219,
  [231] = 231,
  [232] = 232,
  [233] = 228,
  [234] = 234,
  [235] = 216,
  [236] = 217,
  [237] = 237,
  [238] = 238,
  [239] = 110,
  [240] = 100,
  [241] = 82,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 106,
  [246] = 246,
  [247] = 107,
  [248] = 101,
  [249] = 78,
  [250] = 105,
  [251] = 251,
  [252] = 252,
  [253] = 90,
  [254] = 85,
  [255] = 84,
  [256] = 103,
  [257] = 257,
  [258] = 108,
  [259] = 109,
  [260] = 79,
  [261] = 251,
  [262] = 91,
  [263] = 212,
  [264] = 264,
  [265] = 265,
  [266] = 205,
  [267] = 180,
  [268] = 180,
  [269] = 178,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 178,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 191,
  [283] = 283,
  [284] = 181,
  [285] = 285,
  [286] = 275,
  [287] = 205,
  [288] = 288,
  [289] = 191,
  [290] = 200,
  [291] = 291,
  [292] = 273,
  [293] = 281,
  [294] = 181,
  [295] = 295,
  [296] = 283,
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
  [307] = 307,
  [308] = 302,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 303,
  [315] = 309,
  [316] = 316,
  [317] = 312,
  [318] = 313,
  [319] = 319,
  [320] = 320,
  [321] = 305,
  [322] = 322,
  [323] = 322,
  [324] = 301,
  [325] = 311,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 306,
  [330] = 307,
  [331] = 300,
  [332] = 327,
  [333] = 319,
  [334] = 334,
  [335] = 335,
  [336] = 310,
  [337] = 320,
  [338] = 316,
  [339] = 334,
  [340] = 340,
  [341] = 341,
  [342] = 70,
  [343] = 73,
  [344] = 75,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 60,
  [349] = 205,
  [350] = 346,
  [351] = 351,
  [352] = 340,
  [353] = 347,
  [354] = 74,
  [355] = 77,
  [356] = 180,
  [357] = 191,
  [358] = 100,
  [359] = 108,
  [360] = 360,
  [361] = 92,
  [362] = 79,
  [363] = 78,
  [364] = 109,
  [365] = 101,
  [366] = 84,
  [367] = 105,
  [368] = 360,
  [369] = 82,
  [370] = 102,
  [371] = 107,
  [372] = 106,
  [373] = 88,
  [374] = 86,
  [375] = 110,
  [376] = 252,
  [377] = 91,
  [378] = 85,
  [379] = 103,
  [380] = 98,
  [381] = 90,
  [382] = 132,
  [383] = 60,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 265,
  [389] = 126,
  [390] = 390,
  [391] = 391,
  [392] = 387,
  [393] = 123,
  [394] = 121,
  [395] = 395,
  [396] = 158,
  [397] = 135,
  [398] = 398,
  [399] = 107,
  [400] = 79,
  [401] = 251,
  [402] = 252,
  [403] = 106,
  [404] = 110,
  [405] = 109,
  [406] = 406,
  [407] = 407,
  [408] = 398,
  [409] = 84,
  [410] = 70,
  [411] = 411,
  [412] = 412,
  [413] = 138,
  [414] = 414,
  [415] = 415,
  [416] = 415,
  [417] = 391,
  [418] = 418,
  [419] = 419,
  [420] = 139,
  [421] = 421,
  [422] = 384,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 141,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 385,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 426,
  [438] = 427,
  [439] = 390,
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
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 461,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 451,
  [482] = 441,
  [483] = 479,
  [484] = 484,
  [485] = 485,
  [486] = 450,
  [487] = 480,
  [488] = 474,
  [489] = 462,
  [490] = 490,
  [491] = 491,
  [492] = 469,
  [493] = 464,
  [494] = 464,
  [495] = 462,
  [496] = 441,
  [497] = 480,
  [498] = 474,
  [499] = 473,
  [500] = 469,
  [501] = 501,
  [502] = 468,
  [503] = 472,
  [504] = 504,
  [505] = 460,
  [506] = 506,
  [507] = 485,
  [508] = 459,
  [509] = 452,
  [510] = 447,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 511,
  [517] = 501,
  [518] = 440,
  [519] = 453,
  [520] = 520,
  [521] = 448,
  [522] = 484,
  [523] = 458,
  [524] = 473,
  [525] = 525,
  [526] = 472,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 531,
  [542] = 539,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 299,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 540,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 553,
  [555] = 528,
  [556] = 435,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 264,
  [561] = 531,
  [562] = 433,
  [563] = 551,
  [564] = 530,
  [565] = 411,
  [566] = 412,
  [567] = 540,
  [568] = 568,
  [569] = 569,
  [570] = 431,
  [571] = 571,
  [572] = 434,
  [573] = 272,
  [574] = 574,
  [575] = 274,
  [576] = 535,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 574,
  [581] = 93,
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
  [612] = 609,
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
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 616,
  [635] = 619,
  [636] = 636,
  [637] = 595,
  [638] = 624,
  [639] = 589,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 600,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 647,
  [652] = 627,
  [653] = 653,
  [654] = 649,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 609,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 616,
  [665] = 665,
  [666] = 619,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 609,
  [674] = 674,
  [675] = 675,
  [676] = 607,
  [677] = 677,
  [678] = 641,
  [679] = 679,
  [680] = 680,
  [681] = 610,
  [682] = 630,
  [683] = 683,
  [684] = 623,
  [685] = 685,
  [686] = 686,
  [687] = 672,
  [688] = 688,
  [689] = 588,
  [690] = 685,
  [691] = 668,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 607,
  [697] = 697,
  [698] = 617,
  [699] = 679,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 686,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 605,
  [715] = 597,
  [716] = 659,
  [717] = 717,
  [718] = 615,
  [719] = 632,
  [720] = 720,
  [721] = 721,
  [722] = 670,
  [723] = 723,
  [724] = 724,
  [725] = 657,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 717,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 712,
  [737] = 737,
  [738] = 636,
  [739] = 739,
  [740] = 591,
  [741] = 741,
  [742] = 742,
  [743] = 693,
  [744] = 656,
  [745] = 655,
  [746] = 648,
  [747] = 747,
  [748] = 728,
  [749] = 749,
  [750] = 750,
  [751] = 622,
  [752] = 724,
  [753] = 663,
  [754] = 692,
  [755] = 683,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(481);
      if (lookahead == '!') ADVANCE(871);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '$') ADVANCE(860);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '*') ADVANCE(856);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '-') ADVANCE(873);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(849);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '>') ADVANCE(850);
      if (lookahead == '@') ADVANCE(822);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(710);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'F') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(712);
      if (lookahead == 'O') ADVANCE(738);
      if (lookahead == 'P') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(716);
      if (lookahead == 'T') ADVANCE(886);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(774);
      if (lookahead == '\\') SKIP(480)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(718);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead == 'p') ADVANCE(722);
      if (lookahead == 'q') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '{') ADVANCE(746);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(747);
      if (lookahead == '~') ADVANCE(864);
      if (lookahead == 172) ADVANCE(881);
      if (lookahead == 8320) ADVANCE(828);
      if (lookahead == 8321) ADVANCE(829);
      if (lookahead == 8322) ADVANCE(830);
      if (lookahead == 8323) ADVANCE(831);
      if (lookahead == 8324) ADVANCE(832);
      if (lookahead == 8325) ADVANCE(833);
      if (lookahead == 8326) ADVANCE(834);
      if (lookahead == 8327) ADVANCE(835);
      if (lookahead == 8328) ADVANCE(836);
      if (lookahead == 8329) ADVANCE(837);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8704) ADVANCE(895);
      if (lookahead == 8707) ADVANCE(892);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == 8853) ADVANCE(854);
      if (lookahead == 8868) ADVANCE(885);
      if (lookahead == 8869) ADVANCE(882);
      if (lookahead == 9654) ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
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
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(48)
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
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(68)
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
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(54)
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
      if (lookahead == '!') ADVANCE(871);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '$') ADVANCE(860);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'A') ADVANCE(578);
      if (lookahead == 'E') ADVANCE(681);
      if (lookahead == 'F') ADVANCE(884);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'O') ADVANCE(671);
      if (lookahead == 'T') ADVANCE(887);
      if (lookahead == '[') ADVANCE(774);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '~') ADVANCE(863);
      if (lookahead == 172) ADVANCE(881);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8704) ADVANCE(895);
      if (lookahead == 8707) ADVANCE(892);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == 8868) ADVANCE(885);
      if (lookahead == 8869) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(871);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '$') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == 'A') ADVANCE(578);
      if (lookahead == 'E') ADVANCE(681);
      if (lookahead == 'F') ADVANCE(884);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'O') ADVANCE(671);
      if (lookahead == 'T') ADVANCE(887);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead == '~') ADVANCE(863);
      if (lookahead == 172) ADVANCE(881);
      if (lookahead == 8704) ADVANCE(895);
      if (lookahead == 8707) ADVANCE(892);
      if (lookahead == 8868) ADVANCE(885);
      if (lookahead == 8869) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(871);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '$') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(578);
      if (lookahead == 'E') ADVANCE(681);
      if (lookahead == 'F') ADVANCE(884);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'O') ADVANCE(671);
      if (lookahead == 'T') ADVANCE(887);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == '~') ADVANCE(863);
      if (lookahead == 8704) ADVANCE(895);
      if (lookahead == 8707) ADVANCE(892);
      if (lookahead == 8868) ADVANCE(885);
      if (lookahead == 8869) ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(871);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'O') ADVANCE(671);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(871);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'O') ADVANCE(671);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '$') ADVANCE(860);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(849);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '~') ADVANCE(862);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '>') ADVANCE(850);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(747);
      if (lookahead == '~') ADVANCE(471);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '*') ADVANCE(855);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '>') ADVANCE(850);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(710);
      if (lookahead == 'E') ADVANCE(783);
      if (lookahead == 'I') ADVANCE(712);
      if (lookahead == 'O') ADVANCE(737);
      if (lookahead == 'P') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(716);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(857);
      if (lookahead == 'c') ADVANCE(718);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead == 'p') ADVANCE(722);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(747);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == 8853) ADVANCE(854);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '*') ADVANCE(855);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(849);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '>') ADVANCE(850);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(857);
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
      if (lookahead == '{') ADVANCE(745);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(747);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == 8853) ADVANCE(854);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '>') ADVANCE(850);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(747);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(711);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'O') ADVANCE(739);
      if (lookahead == 'P') ADVANCE(715);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'c') ADVANCE(719);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(721);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == 8658) ADVANCE(878);
      if (lookahead == 8660) ADVANCE(876);
      if (lookahead == 8741) ADVANCE(824);
      if (lookahead == 8743) ADVANCE(880);
      if (lookahead == 8744) ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '&') ADVANCE(753);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '$') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '~') ADVANCE(863);
      if (lookahead == 8320) ADVANCE(828);
      if (lookahead == 8321) ADVANCE(829);
      if (lookahead == 8322) ADVANCE(830);
      if (lookahead == 8323) ADVANCE(831);
      if (lookahead == 8324) ADVANCE(832);
      if (lookahead == 8325) ADVANCE(833);
      if (lookahead == 8326) ADVANCE(834);
      if (lookahead == 8327) ADVANCE(835);
      if (lookahead == 8328) ADVANCE(836);
      if (lookahead == 8329) ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(786);
      if (lookahead == '*') ADVANCE(855);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '@') ADVANCE(822);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(774);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '^') ADVANCE(857);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead == 8853) ADVANCE(854);
      if (lookahead == 9654) ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == '*') ADVANCE(855);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == 'X') ADVANCE(500);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead == 8853) ADVANCE(854);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '[') ADVANCE(358);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(838);
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
      if (lookahead == '/') ADVANCE(897);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(801);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(787);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(788);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(776);
      if (lookahead == '[') ADVANCE(777);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(875);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(877);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(823);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(778);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(785);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(785);
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(804);
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
      if (lookahead == 'R') ADVANCE(852);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(197);
      END_STATE();
    case 101:
      if (lookahead == 'V') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(691);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(356);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(754);
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
      if (lookahead == 'a') ADVANCE(795);
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
      if (lookahead == 'b') ADVANCE(861);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(708);
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
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(751);
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
      if (lookahead == 't') ADVANCE(754);
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
      if (lookahead == 'y') ADVANCE(806);
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
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(758);
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
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(792);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(700);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(704);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(707);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(703);
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
      if (lookahead == 'h') ADVANCE(865);
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
      if (lookahead == 'y') ADVANCE(806);
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
      if (lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(768);
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
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(701);
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
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(782);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(743);
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
      if (lookahead == 'p') ADVANCE(874);
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
      if (lookahead == 'r') ADVANCE(705);
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
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(779);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(797);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(760);
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
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(750);
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
      if (lookahead == 'x') ADVANCE(756);
      END_STATE();
    case 463:
      if (lookahead == 'x') ADVANCE(422);
      END_STATE();
    case 464:
      if (lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 465:
      if (lookahead == 'y') ADVANCE(482);
      END_STATE();
    case 466:
      if (lookahead == 'y') ADVANCE(811);
      END_STATE();
    case 467:
      if (lookahead == 'y') ADVANCE(813);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 469:
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 470:
      if (lookahead == '}') ADVANCE(847);
      END_STATE();
    case 471:
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 472:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      END_STATE();
    case 473:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
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
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(897);
      if (lookahead == '\r') ADVANCE(898);
      END_STATE();
    case 479:
      if (eof) ADVANCE(481);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 480:
      if (eof) ADVANCE(481);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(479)
      END_STATE();
    case 481:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(515);
      if (lookahead == 'I') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'g') ADVANCE(544);
      if (lookahead == 's') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'h') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == 'u') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'p') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead == 'q') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead == 't') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(897);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(801);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(732);
      if (lookahead == '\r') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(736);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(736);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(736);
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(734);
      if (lookahead != 0) ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(736);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(736);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(731);
      if (lookahead == '\r') ADVANCE(735);
      if (lookahead == '"') ADVANCE(897);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(731);
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(734);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(838);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(890);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_all_DASHtraces);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(842);
      if (lookahead == '\r') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(846);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(846);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(844);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(843);
      if (lookahead == '\\') ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(846);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(846);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(841);
      if (lookahead == '\r') ADVANCE(845);
      if (lookahead == '*') ADVANCE(897);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(841);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(847);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(859);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(859);
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_In);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_Out);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_Out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_Fr);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_Fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(478);
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
  [28] = {.lex_state = 47, .external_lex_state = 1},
  [29] = {.lex_state = 47, .external_lex_state = 1},
  [30] = {.lex_state = 47, .external_lex_state = 1},
  [31] = {.lex_state = 47, .external_lex_state = 1},
  [32] = {.lex_state = 51, .external_lex_state = 1},
  [33] = {.lex_state = 47, .external_lex_state = 1},
  [34] = {.lex_state = 47, .external_lex_state = 1},
  [35] = {.lex_state = 51, .external_lex_state = 1},
  [36] = {.lex_state = 47, .external_lex_state = 1},
  [37] = {.lex_state = 52, .external_lex_state = 1},
  [38] = {.lex_state = 47, .external_lex_state = 1},
  [39] = {.lex_state = 48, .external_lex_state = 1},
  [40] = {.lex_state = 52, .external_lex_state = 1},
  [41] = {.lex_state = 47, .external_lex_state = 1},
  [42] = {.lex_state = 52, .external_lex_state = 1},
  [43] = {.lex_state = 47, .external_lex_state = 1},
  [44] = {.lex_state = 52, .external_lex_state = 1},
  [45] = {.lex_state = 52, .external_lex_state = 1},
  [46] = {.lex_state = 47, .external_lex_state = 1},
  [47] = {.lex_state = 52, .external_lex_state = 1},
  [48] = {.lex_state = 52, .external_lex_state = 1},
  [49] = {.lex_state = 52, .external_lex_state = 1},
  [50] = {.lex_state = 47, .external_lex_state = 1},
  [51] = {.lex_state = 47, .external_lex_state = 1},
  [52] = {.lex_state = 47, .external_lex_state = 1},
  [53] = {.lex_state = 52, .external_lex_state = 1},
  [54] = {.lex_state = 56, .external_lex_state = 1},
  [55] = {.lex_state = 52, .external_lex_state = 1},
  [56] = {.lex_state = 47, .external_lex_state = 1},
  [57] = {.lex_state = 52, .external_lex_state = 1},
  [58] = {.lex_state = 47, .external_lex_state = 1},
  [59] = {.lex_state = 52, .external_lex_state = 1},
  [60] = {.lex_state = 49, .external_lex_state = 1},
  [61] = {.lex_state = 47, .external_lex_state = 1},
  [62] = {.lex_state = 47, .external_lex_state = 1},
  [63] = {.lex_state = 56, .external_lex_state = 1},
  [64] = {.lex_state = 56, .external_lex_state = 1},
  [65] = {.lex_state = 52, .external_lex_state = 1},
  [66] = {.lex_state = 52, .external_lex_state = 1},
  [67] = {.lex_state = 52, .external_lex_state = 1},
  [68] = {.lex_state = 52, .external_lex_state = 1},
  [69] = {.lex_state = 52, .external_lex_state = 1},
  [70] = {.lex_state = 48, .external_lex_state = 1},
  [71] = {.lex_state = 52, .external_lex_state = 1},
  [72] = {.lex_state = 52, .external_lex_state = 1},
  [73] = {.lex_state = 48, .external_lex_state = 1},
  [74] = {.lex_state = 48, .external_lex_state = 1},
  [75] = {.lex_state = 48, .external_lex_state = 1},
  [76] = {.lex_state = 47, .external_lex_state = 1},
  [77] = {.lex_state = 48, .external_lex_state = 1},
  [78] = {.lex_state = 48, .external_lex_state = 1},
  [79] = {.lex_state = 48, .external_lex_state = 1},
  [80] = {.lex_state = 53, .external_lex_state = 1},
  [81] = {.lex_state = 53, .external_lex_state = 1},
  [82] = {.lex_state = 48, .external_lex_state = 1},
  [83] = {.lex_state = 51, .external_lex_state = 1},
  [84] = {.lex_state = 48, .external_lex_state = 1},
  [85] = {.lex_state = 48, .external_lex_state = 1},
  [86] = {.lex_state = 48, .external_lex_state = 1},
  [87] = {.lex_state = 53, .external_lex_state = 1},
  [88] = {.lex_state = 48, .external_lex_state = 1},
  [89] = {.lex_state = 53, .external_lex_state = 1},
  [90] = {.lex_state = 48, .external_lex_state = 1},
  [91] = {.lex_state = 48, .external_lex_state = 1},
  [92] = {.lex_state = 48, .external_lex_state = 1},
  [93] = {.lex_state = 51, .external_lex_state = 1},
  [94] = {.lex_state = 52, .external_lex_state = 1},
  [95] = {.lex_state = 53, .external_lex_state = 1},
  [96] = {.lex_state = 53, .external_lex_state = 1},
  [97] = {.lex_state = 51, .external_lex_state = 1},
  [98] = {.lex_state = 48, .external_lex_state = 1},
  [99] = {.lex_state = 53, .external_lex_state = 1},
  [100] = {.lex_state = 48, .external_lex_state = 1},
  [101] = {.lex_state = 48, .external_lex_state = 1},
  [102] = {.lex_state = 48, .external_lex_state = 1},
  [103] = {.lex_state = 48, .external_lex_state = 1},
  [104] = {.lex_state = 53, .external_lex_state = 1},
  [105] = {.lex_state = 48, .external_lex_state = 1},
  [106] = {.lex_state = 48, .external_lex_state = 1},
  [107] = {.lex_state = 48, .external_lex_state = 1},
  [108] = {.lex_state = 48, .external_lex_state = 1},
  [109] = {.lex_state = 48, .external_lex_state = 1},
  [110] = {.lex_state = 48, .external_lex_state = 1},
  [111] = {.lex_state = 46, .external_lex_state = 1},
  [112] = {.lex_state = 46, .external_lex_state = 1},
  [113] = {.lex_state = 53, .external_lex_state = 1},
  [114] = {.lex_state = 68, .external_lex_state = 1},
  [115] = {.lex_state = 53, .external_lex_state = 1},
  [116] = {.lex_state = 53, .external_lex_state = 1},
  [117] = {.lex_state = 46, .external_lex_state = 1},
  [118] = {.lex_state = 53, .external_lex_state = 1},
  [119] = {.lex_state = 68, .external_lex_state = 1},
  [120] = {.lex_state = 53, .external_lex_state = 1},
  [121] = {.lex_state = 48, .external_lex_state = 1},
  [122] = {.lex_state = 53, .external_lex_state = 1},
  [123] = {.lex_state = 48, .external_lex_state = 1},
  [124] = {.lex_state = 53, .external_lex_state = 1},
  [125] = {.lex_state = 53, .external_lex_state = 1},
  [126] = {.lex_state = 48, .external_lex_state = 1},
  [127] = {.lex_state = 68, .external_lex_state = 1},
  [128] = {.lex_state = 53, .external_lex_state = 1},
  [129] = {.lex_state = 68, .external_lex_state = 1},
  [130] = {.lex_state = 53, .external_lex_state = 1},
  [131] = {.lex_state = 53, .external_lex_state = 1},
  [132] = {.lex_state = 48, .external_lex_state = 1},
  [133] = {.lex_state = 53, .external_lex_state = 1},
  [134] = {.lex_state = 53, .external_lex_state = 1},
  [135] = {.lex_state = 48, .external_lex_state = 1},
  [136] = {.lex_state = 50, .external_lex_state = 1},
  [137] = {.lex_state = 53, .external_lex_state = 1},
  [138] = {.lex_state = 47, .external_lex_state = 1},
  [139] = {.lex_state = 47, .external_lex_state = 1},
  [140] = {.lex_state = 53, .external_lex_state = 1},
  [141] = {.lex_state = 47, .external_lex_state = 1},
  [142] = {.lex_state = 53, .external_lex_state = 1},
  [143] = {.lex_state = 69, .external_lex_state = 1},
  [144] = {.lex_state = 48, .external_lex_state = 1},
  [145] = {.lex_state = 69, .external_lex_state = 1},
  [146] = {.lex_state = 53, .external_lex_state = 1},
  [147] = {.lex_state = 48, .external_lex_state = 1},
  [148] = {.lex_state = 53, .external_lex_state = 1},
  [149] = {.lex_state = 53, .external_lex_state = 1},
  [150] = {.lex_state = 53, .external_lex_state = 1},
  [151] = {.lex_state = 53, .external_lex_state = 1},
  [152] = {.lex_state = 53, .external_lex_state = 1},
  [153] = {.lex_state = 53, .external_lex_state = 1},
  [154] = {.lex_state = 56, .external_lex_state = 1},
  [155] = {.lex_state = 53, .external_lex_state = 1},
  [156] = {.lex_state = 53, .external_lex_state = 1},
  [157] = {.lex_state = 53, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 53, .external_lex_state = 1},
  [160] = {.lex_state = 53, .external_lex_state = 1},
  [161] = {.lex_state = 53, .external_lex_state = 1},
  [162] = {.lex_state = 49, .external_lex_state = 1},
  [163] = {.lex_state = 49, .external_lex_state = 1},
  [164] = {.lex_state = 48, .external_lex_state = 1},
  [165] = {.lex_state = 69, .external_lex_state = 1},
  [166] = {.lex_state = 51, .external_lex_state = 1},
  [167] = {.lex_state = 48, .external_lex_state = 1},
  [168] = {.lex_state = 70, .external_lex_state = 1},
  [169] = {.lex_state = 70, .external_lex_state = 1},
  [170] = {.lex_state = 54, .external_lex_state = 1},
  [171] = {.lex_state = 70, .external_lex_state = 1},
  [172] = {.lex_state = 53, .external_lex_state = 1},
  [173] = {.lex_state = 49, .external_lex_state = 1},
  [174] = {.lex_state = 53, .external_lex_state = 1},
  [175] = {.lex_state = 70, .external_lex_state = 1},
  [176] = {.lex_state = 51, .external_lex_state = 1},
  [177] = {.lex_state = 49, .external_lex_state = 1},
  [178] = {.lex_state = 51, .external_lex_state = 1},
  [179] = {.lex_state = 56, .external_lex_state = 1},
  [180] = {.lex_state = 51, .external_lex_state = 1},
  [181] = {.lex_state = 51, .external_lex_state = 1},
  [182] = {.lex_state = 56, .external_lex_state = 1},
  [183] = {.lex_state = 56, .external_lex_state = 1},
  [184] = {.lex_state = 56, .external_lex_state = 1},
  [185] = {.lex_state = 56, .external_lex_state = 1},
  [186] = {.lex_state = 51, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 56, .external_lex_state = 1},
  [189] = {.lex_state = 48, .external_lex_state = 1},
  [190] = {.lex_state = 56, .external_lex_state = 1},
  [191] = {.lex_state = 51, .external_lex_state = 1},
  [192] = {.lex_state = 56, .external_lex_state = 1},
  [193] = {.lex_state = 56, .external_lex_state = 1},
  [194] = {.lex_state = 48, .external_lex_state = 1},
  [195] = {.lex_state = 48, .external_lex_state = 1},
  [196] = {.lex_state = 56, .external_lex_state = 1},
  [197] = {.lex_state = 71, .external_lex_state = 1},
  [198] = {.lex_state = 56, .external_lex_state = 1},
  [199] = {.lex_state = 56, .external_lex_state = 1},
  [200] = {.lex_state = 51, .external_lex_state = 1},
  [201] = {.lex_state = 56, .external_lex_state = 1},
  [202] = {.lex_state = 56, .external_lex_state = 1},
  [203] = {.lex_state = 56, .external_lex_state = 1},
  [204] = {.lex_state = 56, .external_lex_state = 1},
  [205] = {.lex_state = 51, .external_lex_state = 1},
  [206] = {.lex_state = 56, .external_lex_state = 1},
  [207] = {.lex_state = 51, .external_lex_state = 1},
  [208] = {.lex_state = 56, .external_lex_state = 1},
  [209] = {.lex_state = 54, .external_lex_state = 1},
  [210] = {.lex_state = 56, .external_lex_state = 1},
  [211] = {.lex_state = 51, .external_lex_state = 1},
  [212] = {.lex_state = 71, .external_lex_state = 1},
  [213] = {.lex_state = 56, .external_lex_state = 1},
  [214] = {.lex_state = 71, .external_lex_state = 1},
  [215] = {.lex_state = 56, .external_lex_state = 1},
  [216] = {.lex_state = 56, .external_lex_state = 1},
  [217] = {.lex_state = 56, .external_lex_state = 1},
  [218] = {.lex_state = 51, .external_lex_state = 1},
  [219] = {.lex_state = 71, .external_lex_state = 1},
  [220] = {.lex_state = 71, .external_lex_state = 1},
  [221] = {.lex_state = 71, .external_lex_state = 1},
  [222] = {.lex_state = 55, .external_lex_state = 1},
  [223] = {.lex_state = 54, .external_lex_state = 1},
  [224] = {.lex_state = 51, .external_lex_state = 1},
  [225] = {.lex_state = 51, .external_lex_state = 1},
  [226] = {.lex_state = 51, .external_lex_state = 1},
  [227] = {.lex_state = 56, .external_lex_state = 1},
  [228] = {.lex_state = 56, .external_lex_state = 1},
  [229] = {.lex_state = 56, .external_lex_state = 1},
  [230] = {.lex_state = 56, .external_lex_state = 1},
  [231] = {.lex_state = 51, .external_lex_state = 1},
  [232] = {.lex_state = 51, .external_lex_state = 1},
  [233] = {.lex_state = 71, .external_lex_state = 1},
  [234] = {.lex_state = 56, .external_lex_state = 1},
  [235] = {.lex_state = 71, .external_lex_state = 1},
  [236] = {.lex_state = 71, .external_lex_state = 1},
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
  [260] = {.lex_state = 56, .external_lex_state = 1},
  [261] = {.lex_state = 51, .external_lex_state = 1},
  [262] = {.lex_state = 56, .external_lex_state = 1},
  [263] = {.lex_state = 56, .external_lex_state = 1},
  [264] = {.lex_state = 56, .external_lex_state = 1},
  [265] = {.lex_state = 54, .external_lex_state = 1},
  [266] = {.lex_state = 41, .external_lex_state = 1},
  [267] = {.lex_state = 41, .external_lex_state = 1},
  [268] = {.lex_state = 51, .external_lex_state = 1},
  [269] = {.lex_state = 41, .external_lex_state = 1},
  [270] = {.lex_state = 56, .external_lex_state = 1},
  [271] = {.lex_state = 56, .external_lex_state = 1},
  [272] = {.lex_state = 56, .external_lex_state = 1},
  [273] = {.lex_state = 53, .external_lex_state = 1},
  [274] = {.lex_state = 56, .external_lex_state = 1},
  [275] = {.lex_state = 49, .external_lex_state = 1},
  [276] = {.lex_state = 41, .external_lex_state = 1},
  [277] = {.lex_state = 51, .external_lex_state = 1},
  [278] = {.lex_state = 56, .external_lex_state = 1},
  [279] = {.lex_state = 49, .external_lex_state = 1},
  [280] = {.lex_state = 56, .external_lex_state = 1},
  [281] = {.lex_state = 56, .external_lex_state = 1},
  [282] = {.lex_state = 41, .external_lex_state = 1},
  [283] = {.lex_state = 49, .external_lex_state = 1},
  [284] = {.lex_state = 41, .external_lex_state = 1},
  [285] = {.lex_state = 56, .external_lex_state = 1},
  [286] = {.lex_state = 56, .external_lex_state = 1},
  [287] = {.lex_state = 51, .external_lex_state = 1},
  [288] = {.lex_state = 56, .external_lex_state = 1},
  [289] = {.lex_state = 51, .external_lex_state = 1},
  [290] = {.lex_state = 41, .external_lex_state = 1},
  [291] = {.lex_state = 56, .external_lex_state = 1},
  [292] = {.lex_state = 53, .external_lex_state = 1},
  [293] = {.lex_state = 49, .external_lex_state = 1},
  [294] = {.lex_state = 41, .external_lex_state = 1},
  [295] = {.lex_state = 49, .external_lex_state = 1},
  [296] = {.lex_state = 49, .external_lex_state = 1},
  [297] = {.lex_state = 53, .external_lex_state = 1},
  [298] = {.lex_state = 56, .external_lex_state = 1},
  [299] = {.lex_state = 56, .external_lex_state = 1},
  [300] = {.lex_state = 44, .external_lex_state = 1},
  [301] = {.lex_state = 45, .external_lex_state = 1},
  [302] = {.lex_state = 45, .external_lex_state = 1},
  [303] = {.lex_state = 45, .external_lex_state = 1},
  [304] = {.lex_state = 49, .external_lex_state = 1},
  [305] = {.lex_state = 44, .external_lex_state = 1},
  [306] = {.lex_state = 45, .external_lex_state = 1},
  [307] = {.lex_state = 53, .external_lex_state = 1},
  [308] = {.lex_state = 45, .external_lex_state = 1},
  [309] = {.lex_state = 44, .external_lex_state = 1},
  [310] = {.lex_state = 49, .external_lex_state = 1},
  [311] = {.lex_state = 44, .external_lex_state = 1},
  [312] = {.lex_state = 44, .external_lex_state = 1},
  [313] = {.lex_state = 44, .external_lex_state = 1},
  [314] = {.lex_state = 45, .external_lex_state = 1},
  [315] = {.lex_state = 44, .external_lex_state = 1},
  [316] = {.lex_state = 45, .external_lex_state = 1},
  [317] = {.lex_state = 44, .external_lex_state = 1},
  [318] = {.lex_state = 44, .external_lex_state = 1},
  [319] = {.lex_state = 44, .external_lex_state = 1},
  [320] = {.lex_state = 44, .external_lex_state = 1},
  [321] = {.lex_state = 44, .external_lex_state = 1},
  [322] = {.lex_state = 44, .external_lex_state = 1},
  [323] = {.lex_state = 44, .external_lex_state = 1},
  [324] = {.lex_state = 45, .external_lex_state = 1},
  [325] = {.lex_state = 44, .external_lex_state = 1},
  [326] = {.lex_state = 49, .external_lex_state = 1},
  [327] = {.lex_state = 44, .external_lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 1},
  [329] = {.lex_state = 45, .external_lex_state = 1},
  [330] = {.lex_state = 53, .external_lex_state = 1},
  [331] = {.lex_state = 44, .external_lex_state = 1},
  [332] = {.lex_state = 44, .external_lex_state = 1},
  [333] = {.lex_state = 44, .external_lex_state = 1},
  [334] = {.lex_state = 44, .external_lex_state = 1},
  [335] = {.lex_state = 49, .external_lex_state = 1},
  [336] = {.lex_state = 49, .external_lex_state = 1},
  [337] = {.lex_state = 44, .external_lex_state = 1},
  [338] = {.lex_state = 45, .external_lex_state = 1},
  [339] = {.lex_state = 44, .external_lex_state = 1},
  [340] = {.lex_state = 45, .external_lex_state = 1},
  [341] = {.lex_state = 49, .external_lex_state = 1},
  [342] = {.lex_state = 55, .external_lex_state = 1},
  [343] = {.lex_state = 55, .external_lex_state = 1},
  [344] = {.lex_state = 55, .external_lex_state = 1},
  [345] = {.lex_state = 49, .external_lex_state = 1},
  [346] = {.lex_state = 49, .external_lex_state = 1},
  [347] = {.lex_state = 45, .external_lex_state = 1},
  [348] = {.lex_state = 55, .external_lex_state = 1},
  [349] = {.lex_state = 41, .external_lex_state = 1},
  [350] = {.lex_state = 49, .external_lex_state = 1},
  [351] = {.lex_state = 49, .external_lex_state = 1},
  [352] = {.lex_state = 44, .external_lex_state = 1},
  [353] = {.lex_state = 44, .external_lex_state = 1},
  [354] = {.lex_state = 55, .external_lex_state = 1},
  [355] = {.lex_state = 55, .external_lex_state = 1},
  [356] = {.lex_state = 41, .external_lex_state = 1},
  [357] = {.lex_state = 41, .external_lex_state = 1},
  [358] = {.lex_state = 55, .external_lex_state = 1},
  [359] = {.lex_state = 55, .external_lex_state = 1},
  [360] = {.lex_state = 44, .external_lex_state = 1},
  [361] = {.lex_state = 55, .external_lex_state = 1},
  [362] = {.lex_state = 55, .external_lex_state = 1},
  [363] = {.lex_state = 55, .external_lex_state = 1},
  [364] = {.lex_state = 55, .external_lex_state = 1},
  [365] = {.lex_state = 55, .external_lex_state = 1},
  [366] = {.lex_state = 55, .external_lex_state = 1},
  [367] = {.lex_state = 55, .external_lex_state = 1},
  [368] = {.lex_state = 44, .external_lex_state = 1},
  [369] = {.lex_state = 55, .external_lex_state = 1},
  [370] = {.lex_state = 55, .external_lex_state = 1},
  [371] = {.lex_state = 55, .external_lex_state = 1},
  [372] = {.lex_state = 55, .external_lex_state = 1},
  [373] = {.lex_state = 55, .external_lex_state = 1},
  [374] = {.lex_state = 55, .external_lex_state = 1},
  [375] = {.lex_state = 55, .external_lex_state = 1},
  [376] = {.lex_state = 51, .external_lex_state = 1},
  [377] = {.lex_state = 55, .external_lex_state = 1},
  [378] = {.lex_state = 55, .external_lex_state = 1},
  [379] = {.lex_state = 55, .external_lex_state = 1},
  [380] = {.lex_state = 55, .external_lex_state = 1},
  [381] = {.lex_state = 55, .external_lex_state = 1},
  [382] = {.lex_state = 55, .external_lex_state = 1},
  [383] = {.lex_state = 53, .external_lex_state = 1},
  [384] = {.lex_state = 0, .external_lex_state = 1},
  [385] = {.lex_state = 0, .external_lex_state = 1},
  [386] = {.lex_state = 53, .external_lex_state = 1},
  [387] = {.lex_state = 49, .external_lex_state = 1},
  [388] = {.lex_state = 53, .external_lex_state = 1},
  [389] = {.lex_state = 55, .external_lex_state = 1},
  [390] = {.lex_state = 0, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 49, .external_lex_state = 1},
  [393] = {.lex_state = 55, .external_lex_state = 1},
  [394] = {.lex_state = 55, .external_lex_state = 1},
  [395] = {.lex_state = 47, .external_lex_state = 1},
  [396] = {.lex_state = 53, .external_lex_state = 1},
  [397] = {.lex_state = 55, .external_lex_state = 1},
  [398] = {.lex_state = 44, .external_lex_state = 1},
  [399] = {.lex_state = 53, .external_lex_state = 1},
  [400] = {.lex_state = 53, .external_lex_state = 1},
  [401] = {.lex_state = 47, .external_lex_state = 1},
  [402] = {.lex_state = 41, .external_lex_state = 1},
  [403] = {.lex_state = 53, .external_lex_state = 1},
  [404] = {.lex_state = 53, .external_lex_state = 1},
  [405] = {.lex_state = 53, .external_lex_state = 1},
  [406] = {.lex_state = 53, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 44, .external_lex_state = 1},
  [409] = {.lex_state = 53, .external_lex_state = 1},
  [410] = {.lex_state = 53, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 50, .external_lex_state = 1},
  [414] = {.lex_state = 50, .external_lex_state = 1},
  [415] = {.lex_state = 49, .external_lex_state = 1},
  [416] = {.lex_state = 49, .external_lex_state = 1},
  [417] = {.lex_state = 41, .external_lex_state = 1},
  [418] = {.lex_state = 48, .external_lex_state = 1},
  [419] = {.lex_state = 49, .external_lex_state = 1},
  [420] = {.lex_state = 50, .external_lex_state = 1},
  [421] = {.lex_state = 50, .external_lex_state = 1},
  [422] = {.lex_state = 41, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 49, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 48, .external_lex_state = 1},
  [427] = {.lex_state = 49, .external_lex_state = 1},
  [428] = {.lex_state = 50, .external_lex_state = 1},
  [429] = {.lex_state = 0, .external_lex_state = 1},
  [430] = {.lex_state = 0, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 41, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 53, .external_lex_state = 1},
  [437] = {.lex_state = 48, .external_lex_state = 1},
  [438] = {.lex_state = 49, .external_lex_state = 1},
  [439] = {.lex_state = 41, .external_lex_state = 1},
  [440] = {.lex_state = 0, .external_lex_state = 1},
  [441] = {.lex_state = 0, .external_lex_state = 1},
  [442] = {.lex_state = 42, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 53, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 0, .external_lex_state = 1},
  [448] = {.lex_state = 0, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 53, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 0, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 53, .external_lex_state = 1},
  [455] = {.lex_state = 53, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 0, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 0, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 0, .external_lex_state = 1},
  [465] = {.lex_state = 42, .external_lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 49, .external_lex_state = 1},
  [470] = {.lex_state = 49, .external_lex_state = 1},
  [471] = {.lex_state = 49, .external_lex_state = 1},
  [472] = {.lex_state = 49, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 0, .external_lex_state = 1},
  [475] = {.lex_state = 53, .external_lex_state = 1},
  [476] = {.lex_state = 0, .external_lex_state = 1},
  [477] = {.lex_state = 0, .external_lex_state = 1},
  [478] = {.lex_state = 49, .external_lex_state = 1},
  [479] = {.lex_state = 0, .external_lex_state = 1},
  [480] = {.lex_state = 0, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 0, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 0, .external_lex_state = 1},
  [485] = {.lex_state = 41, .external_lex_state = 1},
  [486] = {.lex_state = 53, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 53, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 49, .external_lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 1},
  [496] = {.lex_state = 0, .external_lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 1},
  [498] = {.lex_state = 0, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 49, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 41, .external_lex_state = 1},
  [503] = {.lex_state = 49, .external_lex_state = 1},
  [504] = {.lex_state = 53, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 0, .external_lex_state = 1},
  [507] = {.lex_state = 0, .external_lex_state = 1},
  [508] = {.lex_state = 0, .external_lex_state = 1},
  [509] = {.lex_state = 0, .external_lex_state = 1},
  [510] = {.lex_state = 0, .external_lex_state = 1},
  [511] = {.lex_state = 0, .external_lex_state = 1},
  [512] = {.lex_state = 0, .external_lex_state = 1},
  [513] = {.lex_state = 0, .external_lex_state = 1},
  [514] = {.lex_state = 0, .external_lex_state = 1},
  [515] = {.lex_state = 53, .external_lex_state = 1},
  [516] = {.lex_state = 0, .external_lex_state = 1},
  [517] = {.lex_state = 0, .external_lex_state = 1},
  [518] = {.lex_state = 0, .external_lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 1},
  [520] = {.lex_state = 49, .external_lex_state = 1},
  [521] = {.lex_state = 0, .external_lex_state = 1},
  [522] = {.lex_state = 41, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 0, .external_lex_state = 1},
  [525] = {.lex_state = 0, .external_lex_state = 1},
  [526] = {.lex_state = 49, .external_lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 1},
  [528] = {.lex_state = 41, .external_lex_state = 1},
  [529] = {.lex_state = 50, .external_lex_state = 1},
  [530] = {.lex_state = 41, .external_lex_state = 1},
  [531] = {.lex_state = 0, .external_lex_state = 1},
  [532] = {.lex_state = 53, .external_lex_state = 1},
  [533] = {.lex_state = 53, .external_lex_state = 1},
  [534] = {.lex_state = 0, .external_lex_state = 1},
  [535] = {.lex_state = 41, .external_lex_state = 1},
  [536] = {.lex_state = 0, .external_lex_state = 1},
  [537] = {.lex_state = 0, .external_lex_state = 1},
  [538] = {.lex_state = 42, .external_lex_state = 1},
  [539] = {.lex_state = 0, .external_lex_state = 1},
  [540] = {.lex_state = 0, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 41, .external_lex_state = 1},
  [543] = {.lex_state = 0, .external_lex_state = 1},
  [544] = {.lex_state = 0, .external_lex_state = 1},
  [545] = {.lex_state = 42, .external_lex_state = 1},
  [546] = {.lex_state = 0, .external_lex_state = 1},
  [547] = {.lex_state = 0, .external_lex_state = 1},
  [548] = {.lex_state = 42, .external_lex_state = 1},
  [549] = {.lex_state = 0, .external_lex_state = 1},
  [550] = {.lex_state = 0, .external_lex_state = 1},
  [551] = {.lex_state = 732, .external_lex_state = 1},
  [552] = {.lex_state = 48, .external_lex_state = 1},
  [553] = {.lex_state = 41, .external_lex_state = 1},
  [554] = {.lex_state = 41, .external_lex_state = 1},
  [555] = {.lex_state = 41, .external_lex_state = 1},
  [556] = {.lex_state = 41, .external_lex_state = 1},
  [557] = {.lex_state = 0, .external_lex_state = 1},
  [558] = {.lex_state = 0, .external_lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 1},
  [560] = {.lex_state = 0, .external_lex_state = 1},
  [561] = {.lex_state = 0, .external_lex_state = 1},
  [562] = {.lex_state = 41, .external_lex_state = 1},
  [563] = {.lex_state = 732, .external_lex_state = 1},
  [564] = {.lex_state = 41, .external_lex_state = 1},
  [565] = {.lex_state = 41, .external_lex_state = 1},
  [566] = {.lex_state = 41, .external_lex_state = 1},
  [567] = {.lex_state = 0, .external_lex_state = 1},
  [568] = {.lex_state = 0, .external_lex_state = 1},
  [569] = {.lex_state = 0, .external_lex_state = 1},
  [570] = {.lex_state = 41, .external_lex_state = 1},
  [571] = {.lex_state = 47, .external_lex_state = 1},
  [572] = {.lex_state = 41, .external_lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 1},
  [574] = {.lex_state = 41, .external_lex_state = 1},
  [575] = {.lex_state = 0, .external_lex_state = 1},
  [576] = {.lex_state = 41, .external_lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 0, .external_lex_state = 1},
  [580] = {.lex_state = 41, .external_lex_state = 1},
  [581] = {.lex_state = 47, .external_lex_state = 1},
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
  [592] = {.lex_state = 0, .external_lex_state = 1},
  [593] = {.lex_state = 53, .external_lex_state = 1},
  [594] = {.lex_state = 0, .external_lex_state = 1},
  [595] = {.lex_state = 0, .external_lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 1},
  [597] = {.lex_state = 41, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 1},
  [602] = {.lex_state = 41, .external_lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 1},
  [604] = {.lex_state = 0, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 0, .external_lex_state = 1},
  [607] = {.lex_state = 53, .external_lex_state = 1},
  [608] = {.lex_state = 0, .external_lex_state = 1},
  [609] = {.lex_state = 53, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 0, .external_lex_state = 1},
  [612] = {.lex_state = 53, .external_lex_state = 1},
  [613] = {.lex_state = 42, .external_lex_state = 1},
  [614] = {.lex_state = 53, .external_lex_state = 1},
  [615] = {.lex_state = 53, .external_lex_state = 1},
  [616] = {.lex_state = 0, .external_lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 1},
  [619] = {.lex_state = 0, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 42, .external_lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 0, .external_lex_state = 1},
  [624] = {.lex_state = 53, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 0, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 0, .external_lex_state = 1},
  [632] = {.lex_state = 41, .external_lex_state = 1},
  [633] = {.lex_state = 53, .external_lex_state = 1},
  [634] = {.lex_state = 0, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 1},
  [637] = {.lex_state = 0, .external_lex_state = 1},
  [638] = {.lex_state = 53, .external_lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 1},
  [640] = {.lex_state = 53, .external_lex_state = 1},
  [641] = {.lex_state = 732, .external_lex_state = 1},
  [642] = {.lex_state = 0, .external_lex_state = 1},
  [643] = {.lex_state = 0, .external_lex_state = 1},
  [644] = {.lex_state = 0, .external_lex_state = 1},
  [645] = {.lex_state = 0, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 0, .external_lex_state = 1},
  [648] = {.lex_state = 0, .external_lex_state = 1},
  [649] = {.lex_state = 0, .external_lex_state = 1},
  [650] = {.lex_state = 0, .external_lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 1},
  [652] = {.lex_state = 0, .external_lex_state = 1},
  [653] = {.lex_state = 0, .external_lex_state = 1},
  [654] = {.lex_state = 0, .external_lex_state = 1},
  [655] = {.lex_state = 0, .external_lex_state = 1},
  [656] = {.lex_state = 0, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 47, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 53, .external_lex_state = 1},
  [661] = {.lex_state = 0, .external_lex_state = 1},
  [662] = {.lex_state = 842, .external_lex_state = 1},
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 0, .external_lex_state = 1},
  [666] = {.lex_state = 0, .external_lex_state = 1},
  [667] = {.lex_state = 0, .external_lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 41, .external_lex_state = 1},
  [671] = {.lex_state = 0, .external_lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 1},
  [673] = {.lex_state = 53, .external_lex_state = 1},
  [674] = {.lex_state = 0, .external_lex_state = 1},
  [675] = {.lex_state = 53, .external_lex_state = 1},
  [676] = {.lex_state = 53, .external_lex_state = 1},
  [677] = {.lex_state = 53, .external_lex_state = 1},
  [678] = {.lex_state = 732, .external_lex_state = 1},
  [679] = {.lex_state = 0, .external_lex_state = 1},
  [680] = {.lex_state = 0, .external_lex_state = 1},
  [681] = {.lex_state = 0, .external_lex_state = 1},
  [682] = {.lex_state = 0, .external_lex_state = 1},
  [683] = {.lex_state = 53, .external_lex_state = 1},
  [684] = {.lex_state = 0, .external_lex_state = 1},
  [685] = {.lex_state = 0, .external_lex_state = 1},
  [686] = {.lex_state = 41, .external_lex_state = 1},
  [687] = {.lex_state = 0, .external_lex_state = 1},
  [688] = {.lex_state = 0, .external_lex_state = 1},
  [689] = {.lex_state = 0, .external_lex_state = 1},
  [690] = {.lex_state = 0, .external_lex_state = 1},
  [691] = {.lex_state = 0, .external_lex_state = 1},
  [692] = {.lex_state = 0, .external_lex_state = 1},
  [693] = {.lex_state = 0, .external_lex_state = 1},
  [694] = {.lex_state = 0, .external_lex_state = 1},
  [695] = {.lex_state = 0, .external_lex_state = 1},
  [696] = {.lex_state = 53, .external_lex_state = 1},
  [697] = {.lex_state = 0, .external_lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 1},
  [699] = {.lex_state = 0, .external_lex_state = 1},
  [700] = {.lex_state = 0, .external_lex_state = 1},
  [701] = {.lex_state = 0, .external_lex_state = 1},
  [702] = {.lex_state = 0, .external_lex_state = 1},
  [703] = {.lex_state = 0, .external_lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 1},
  [705] = {.lex_state = 41, .external_lex_state = 1},
  [706] = {.lex_state = 0, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 1},
  [709] = {.lex_state = 41, .external_lex_state = 1},
  [710] = {.lex_state = 0, .external_lex_state = 1},
  [711] = {.lex_state = 0, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 1},
  [715] = {.lex_state = 41, .external_lex_state = 1},
  [716] = {.lex_state = 0, .external_lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 1},
  [718] = {.lex_state = 53, .external_lex_state = 1},
  [719] = {.lex_state = 41, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 47, .external_lex_state = 1},
  [722] = {.lex_state = 41, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 41, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 0, .external_lex_state = 1},
  [727] = {.lex_state = 0, .external_lex_state = 1},
  [728] = {.lex_state = 0, .external_lex_state = 1},
  [729] = {.lex_state = 0, .external_lex_state = 1},
  [730] = {.lex_state = 0, .external_lex_state = 1},
  [731] = {.lex_state = 53, .external_lex_state = 1},
  [732] = {.lex_state = 0, .external_lex_state = 1},
  [733] = {.lex_state = 0, .external_lex_state = 1},
  [734] = {.lex_state = 0, .external_lex_state = 1},
  [735] = {.lex_state = 0, .external_lex_state = 1},
  [736] = {.lex_state = 0, .external_lex_state = 1},
  [737] = {.lex_state = 0, .external_lex_state = 1},
  [738] = {.lex_state = 0, .external_lex_state = 1},
  [739] = {.lex_state = 0, .external_lex_state = 1},
  [740] = {.lex_state = 0, .external_lex_state = 1},
  [741] = {.lex_state = 0, .external_lex_state = 1},
  [742] = {.lex_state = 0, .external_lex_state = 1},
  [743] = {.lex_state = 0, .external_lex_state = 1},
  [744] = {.lex_state = 0, .external_lex_state = 1},
  [745] = {.lex_state = 0, .external_lex_state = 1},
  [746] = {.lex_state = 0, .external_lex_state = 1},
  [747] = {.lex_state = 42, .external_lex_state = 1},
  [748] = {.lex_state = 0, .external_lex_state = 1},
  [749] = {.lex_state = 49, .external_lex_state = 1},
  [750] = {.lex_state = 0, .external_lex_state = 1},
  [751] = {.lex_state = 0, .external_lex_state = 1},
  [752] = {.lex_state = 41, .external_lex_state = 1},
  [753] = {.lex_state = 0, .external_lex_state = 1},
  [754] = {.lex_state = 0, .external_lex_state = 1},
  [755] = {.lex_state = 53, .external_lex_state = 1},
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
    [sym_source_file] = STATE(732),
    [sym_security_protocol_theory] = STATE(727),
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(513), 1,
      sym_formula,
    STATE(537), 1,
      sym_fact,
    STATE(548), 1,
      sym_node_var,
    STATE(621), 1,
      sym__msetterm,
    STATE(647), 1,
      sym_goal,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(513), 1,
      sym_formula,
    STATE(537), 1,
      sym_fact,
    STATE(548), 1,
      sym_node_var,
    STATE(621), 1,
      sym__msetterm,
    STATE(651), 1,
      sym_goal,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(442), 1,
      sym_node_var,
    STATE(545), 1,
      sym__msetterm,
    STATE(618), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(742), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(205), 1,
      sym_conjunction,
    STATE(207), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(231), 1,
      sym_formula,
    STATE(252), 1,
      sym_disjunction,
    STATE(261), 1,
      sym_imp,
    STATE(330), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(741), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(620), 1,
      sym_formula,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(205), 1,
      sym_conjunction,
    STATE(207), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(231), 1,
      sym_formula,
    STATE(251), 1,
      sym_imp,
    STATE(252), 1,
      sym_disjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(545), 1,
      sym__msetterm,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(742), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(737), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(603), 1,
      sym_formula,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(592), 1,
      sym_formula,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(608), 1,
      sym_formula,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(401), 1,
      sym_imp,
    STATE(548), 1,
      sym_node_var,
    STATE(582), 1,
      sym_formula,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(226), 1,
      sym_imp,
    STATE(276), 1,
      sym_negation,
    STATE(307), 1,
      sym_quantifier,
    STATE(349), 1,
      sym_conjunction,
    STATE(402), 1,
      sym_disjunction,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(226), 1,
      sym_imp,
    STATE(287), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(376), 1,
      sym_disjunction,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(232), 1,
      sym_imp,
    STATE(276), 1,
      sym_negation,
    STATE(307), 1,
      sym_quantifier,
    STATE(349), 1,
      sym_conjunction,
    STATE(402), 1,
      sym_disjunction,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(232), 1,
      sym_imp,
    STATE(252), 1,
      sym_disjunction,
    STATE(266), 1,
      sym_conjunction,
    STATE(269), 1,
      sym_negation,
    STATE(307), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2006] = 32,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(178), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(207), 1,
      sym_negation,
    STATE(211), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(330), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(269), 1,
      sym_negation,
    STATE(307), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2333] = 32,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(225), 1,
      sym_conjunction,
    STATE(276), 1,
      sym_negation,
    STATE(307), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2442] = 31,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(224), 1,
      sym_negation,
    STATE(307), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2548] = 31,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(211), 1,
      sym_atom,
    STATE(224), 1,
      sym_negation,
    STATE(330), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(257), 1,
      sym_atom,
    STATE(330), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(257), 1,
      sym_atom,
    STATE(307), 1,
      sym_quantifier,
    STATE(548), 1,
      sym_node_var,
    STATE(618), 1,
      sym_fact,
    STATE(621), 1,
      sym__msetterm,
    STATE(699), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2848] = 8,
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_function_name,
    STATE(43), 1,
      sym_not_function,
    STATE(58), 1,
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
    STATE(41), 1,
      sym_function_name,
    STATE(43), 1,
      sym_not_function,
    STATE(58), 1,
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
    STATE(41), 1,
      sym_function_name,
    STATE(43), 1,
      sym_not_function,
    STATE(58), 1,
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
  [2980] = 7,
    ACTIONS(67), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(70), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(63), 12,
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
  [3021] = 5,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(73), 20,
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
  [3058] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(97), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(81), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(79), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3097] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(85), 20,
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
  [3134] = 5,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(73), 20,
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
  [3171] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(97), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(94), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(92), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3210] = 5,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
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
  [3247] = 8,
    ACTIONS(104), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(37), 2,
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
  [3290] = 8,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_function_name,
    STATE(43), 1,
      sym_not_function,
    STATE(76), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [3333] = 7,
    ACTIONS(120), 1,
      anon_sym_COLON,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(122), 19,
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
  [3374] = 8,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(37), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(136), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(132), 11,
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
  [3417] = 5,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(138), 20,
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
  [3454] = 8,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(37), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(136), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(142), 11,
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
  [3497] = 5,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP,
    STATE(46), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(144), 20,
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
  [3533] = 5,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(138), 19,
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
  [3569] = 8,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(152), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(94), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(155), 7,
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
  [3611] = 5,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(158), 20,
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
  [3647] = 5,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(73), 19,
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
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
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
  [3719] = 5,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(73), 19,
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
  [3755] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_DQUOTE,
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
  [3787] = 5,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(170), 1,
      anon_sym_AMP,
    STATE(51), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(166), 20,
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
  [3823] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(173), 20,
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
  [3855] = 7,
    ACTIONS(177), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(68), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(180), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(63), 11,
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
  [3895] = 14,
    ACTIONS(183), 1,
      anon_sym_end,
    ACTIONS(185), 1,
      sym_ident,
    ACTIONS(187), 1,
      anon_sym_functions,
    ACTIONS(189), 1,
      anon_sym_equations,
    ACTIONS(191), 1,
      anon_sym_builtins,
    ACTIONS(193), 1,
      anon_sym_heuristic,
    ACTIONS(195), 1,
      anon_sym_tactic,
    ACTIONS(197), 1,
      anon_sym_rule,
    ACTIONS(199), 1,
      anon_sym_restriction,
    ACTIONS(201), 1,
      anon_sym_lemma,
    STATE(197), 1,
      sym_simple_rule,
    STATE(674), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(64), 11,
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
  [3949] = 5,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(85), 19,
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
  [3985] = 4,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(206), 20,
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
  [4018] = 5,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_AMP,
    STATE(66), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(158), 19,
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
  [4053] = 4,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(61), 1,
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
  [4086] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_DQUOTE,
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
  [4117] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(217), 20,
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
  [4148] = 4,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(221), 20,
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
  [4181] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(166), 20,
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
  [4212] = 13,
    ACTIONS(223), 1,
      anon_sym_end,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(228), 1,
      anon_sym_functions,
    ACTIONS(231), 1,
      anon_sym_equations,
    ACTIONS(234), 1,
      anon_sym_builtins,
    ACTIONS(237), 1,
      anon_sym_heuristic,
    ACTIONS(240), 1,
      anon_sym_tactic,
    ACTIONS(243), 1,
      anon_sym_rule,
    ACTIONS(246), 1,
      anon_sym_restriction,
    ACTIONS(249), 1,
      anon_sym_lemma,
    STATE(197), 1,
      sym_simple_rule,
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
  [4263] = 13,
    ACTIONS(185), 1,
      sym_ident,
    ACTIONS(187), 1,
      anon_sym_functions,
    ACTIONS(189), 1,
      anon_sym_equations,
    ACTIONS(191), 1,
      anon_sym_builtins,
    ACTIONS(193), 1,
      anon_sym_heuristic,
    ACTIONS(195), 1,
      anon_sym_tactic,
    ACTIONS(197), 1,
      anon_sym_rule,
    ACTIONS(199), 1,
      anon_sym_restriction,
    ACTIONS(201), 1,
      anon_sym_lemma,
    ACTIONS(252), 1,
      anon_sym_end,
    STATE(197), 1,
      sym_simple_rule,
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
  [4314] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(173), 19,
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
  [4345] = 5,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(254), 1,
      anon_sym_AMP,
    STATE(66), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(166), 19,
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
  [4380] = 5,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_AMP,
    STATE(57), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(144), 19,
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
  [4415] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(166), 19,
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
  [4445] = 4,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    STATE(72), 1,
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
  [4477] = 4,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 19,
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
  [4509] = 4,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(206), 19,
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
  [4541] = 4,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(221), 19,
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
  [4573] = 5,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(272), 1,
      anon_sym_CARET,
    STATE(73), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(268), 18,
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
  [4607] = 4,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(277), 19,
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
  [4639] = 5,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(285), 1,
      anon_sym_CARET,
    STATE(73), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(281), 18,
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
  [4673] = 3,
    ACTIONS(287), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(206), 20,
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
  [4703] = 5,
    ACTIONS(285), 1,
      anon_sym_CARET,
    ACTIONS(291), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(289), 18,
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
  [4737] = 3,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 19,
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
  [4766] = 3,
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
  [4795] = 16,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(483), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [4850] = 16,
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
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [4905] = 3,
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
  [4934] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(313), 20,
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
  [4961] = 3,
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
  [4990] = 3,
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
  [5019] = 3,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(268), 19,
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
  [5048] = 16,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(487), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5103] = 5,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_STAR,
    STATE(88), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 17,
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
  [5136] = 16,
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
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(525), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5191] = 3,
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
  [5220] = 3,
    ACTIONS(340), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(338), 19,
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
  [5249] = 5,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_STAR,
    STATE(102), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(342), 17,
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
  [5282] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(348), 20,
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
  [5309] = 3,
    ACTIONS(287), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(206), 19,
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
  [5338] = 16,
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
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5393] = 16,
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
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(453), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5448] = 2,
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
  [5475] = 3,
    ACTIONS(358), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 19,
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
  [5504] = 16,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(497), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5559] = 3,
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
  [5588] = 3,
    ACTIONS(368), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(366), 19,
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
  [5617] = 5,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_EQ,
    STATE(88), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 17,
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
  [5650] = 3,
    ACTIONS(376), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(374), 19,
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
  [5679] = 16,
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
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5734] = 3,
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
  [5763] = 3,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(277), 19,
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
  [5792] = 3,
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
  [5821] = 3,
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
  [5850] = 3,
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
  [5879] = 3,
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
  [5908] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(400), 17,
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
  [5936] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(404), 17,
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
  [5964] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6016] = 8,
    ACTIONS(410), 1,
      anon_sym_SOLVED,
    ACTIONS(412), 1,
      anon_sym_by,
    ACTIONS(416), 1,
      anon_sym_solve,
    STATE(278), 1,
      sym_proof_skeleton,
    STATE(296), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(408), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6054] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(634), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6106] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(524), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6158] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(418), 17,
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
  [6186] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6238] = 8,
    ACTIONS(410), 1,
      anon_sym_SOLVED,
    ACTIONS(412), 1,
      anon_sym_by,
    ACTIONS(416), 1,
      anon_sym_solve,
    STATE(271), 1,
      sym_proof_skeleton,
    STATE(296), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(422), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6276] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(498), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6328] = 5,
    ACTIONS(426), 1,
      anon_sym_EQ,
    STATE(132), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(424), 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(474), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6412] = 3,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 18,
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
  [6440] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(616), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6492] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(664), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6544] = 5,
    ACTIONS(432), 1,
      anon_sym_EQ,
    STATE(126), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(430), 15,
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
  [6576] = 8,
    ACTIONS(410), 1,
      anon_sym_SOLVED,
    ACTIONS(412), 1,
      anon_sym_by,
    ACTIONS(416), 1,
      anon_sym_solve,
    STATE(291), 1,
      sym_proof_skeleton,
    STATE(296), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(437), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6614] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(488), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6666] = 8,
    ACTIONS(410), 1,
      anon_sym_SOLVED,
    ACTIONS(412), 1,
      anon_sym_by,
    ACTIONS(416), 1,
      anon_sym_solve,
    STATE(285), 1,
      sym_proof_skeleton,
    STATE(296), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(439), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6704] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
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
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6756] = 15,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(141), 1,
      sym__xorterm,
    STATE(423), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6808] = 5,
    ACTIONS(443), 1,
      anon_sym_EQ,
    STATE(126), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(441), 15,
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
  [6840] = 15,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(355), 1,
      sym_term,
    STATE(361), 1,
      sym__expterm,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym_msg_var,
    STATE(394), 1,
      sym__multterm,
    STATE(428), 1,
      sym__xorterm,
    STATE(529), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6892] = 14,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(121), 1,
      sym__multterm,
    STATE(136), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6941] = 3,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(430), 17,
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
  [6968] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(457), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(459), 15,
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
  [6995] = 14,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(136), 1,
      sym__xorterm,
    STATE(355), 1,
      sym_term,
    STATE(361), 1,
      sym__expterm,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym_msg_var,
    STATE(394), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7044] = 5,
    ACTIONS(457), 1,
      anon_sym_EQ,
    ACTIONS(461), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(459), 14,
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
  [7074] = 5,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 14,
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
  [7104] = 13,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(92), 1,
      sym__expterm,
    STATE(110), 1,
      sym_msg_var,
    STATE(135), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7150] = 5,
    ACTIONS(468), 1,
      anon_sym_PLUS,
    ACTIONS(472), 1,
      anon_sym_EQ,
    STATE(139), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(470), 14,
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
  [7180] = 13,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(355), 1,
      sym_term,
    STATE(361), 1,
      sym__expterm,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym_msg_var,
    STATE(397), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7226] = 6,
    ACTIONS(476), 1,
      anon_sym_prio,
    ACTIONS(478), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(165), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(168), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(474), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7257] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(484), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(147), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(195), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(482), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7288] = 6,
    ACTIONS(476), 1,
      anon_sym_prio,
    ACTIONS(478), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(165), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(171), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(486), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7319] = 12,
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
    STATE(77), 1,
      sym_term,
    STATE(82), 1,
      sym_nonnode_var,
    STATE(110), 1,
      sym_msg_var,
    STATE(123), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7362] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(493), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(147), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(195), 2,
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
  [7393] = 12,
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
    STATE(82), 1,
      sym_nonnode_var,
    STATE(110), 1,
      sym_msg_var,
    STATE(179), 1,
      sym_equation,
    STATE(613), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7436] = 12,
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
    STATE(82), 1,
      sym_nonnode_var,
    STATE(110), 1,
      sym_msg_var,
    STATE(244), 1,
      sym_equation,
    STATE(613), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7479] = 12,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(355), 1,
      sym_term,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym_msg_var,
    STATE(393), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7522] = 11,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(374), 1,
      sym_term,
    STATE(375), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7562] = 11,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym_msg_var,
    STATE(377), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7602] = 11,
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
    STATE(82), 1,
      sym_nonnode_var,
    STATE(103), 1,
      sym_term,
    STATE(110), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7642] = 7,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_COLON,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(124), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7674] = 11,
    ACTIONS(504), 1,
      sym_ident,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    ACTIONS(514), 1,
      anon_sym_TILDE,
    STATE(239), 1,
      sym_msg_var,
    STATE(241), 1,
      sym_nonnode_var,
    STATE(262), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(240), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7714] = 11,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym_msg_var,
    STATE(379), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7754] = 11,
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
    STATE(82), 1,
      sym_nonnode_var,
    STATE(86), 1,
      sym_term,
    STATE(110), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7794] = 4,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(516), 12,
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
  [7820] = 11,
    ACTIONS(504), 1,
      sym_ident,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    ACTIONS(514), 1,
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
    ACTIONS(510), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(240), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7860] = 11,
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
    STATE(82), 1,
      sym_nonnode_var,
    STATE(91), 1,
      sym_term,
    STATE(110), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(100), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7900] = 11,
    ACTIONS(504), 1,
      sym_ident,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    ACTIONS(514), 1,
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
    ACTIONS(510), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(240), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7940] = 8,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_function_name,
    STATE(43), 1,
      sym_not_function,
    STATE(58), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(526), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7973] = 8,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(42), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(532), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8006] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(144), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(195), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(482), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8033] = 4,
    ACTIONS(536), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(165), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(534), 11,
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
  [8058] = 4,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(541), 12,
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
  [8083] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(32), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(97), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(545), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8110] = 4,
    ACTIONS(478), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(169), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(549), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8134] = 4,
    ACTIONS(553), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(169), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(551), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8158] = 7,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(122), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8188] = 4,
    ACTIONS(478), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(169), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(474), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8212] = 4,
    STATE(174), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(562), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(564), 10,
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
  [8236] = 7,
    ACTIONS(524), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_function_name,
    STATE(43), 1,
      sym_not_function,
    STATE(58), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(526), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8266] = 4,
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
  [8290] = 4,
    ACTIONS(478), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(169), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(486), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8314] = 3,
    ACTIONS(571), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(404), 12,
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
  [8336] = 7,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(532), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8366] = 4,
    STATE(181), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(573), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8389] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(577), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8412] = 3,
    STATE(191), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(581), 11,
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
  [8433] = 4,
    STATE(200), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(583), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8456] = 4,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(585), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8479] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [8502] = 4,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(593), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8525] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(598), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8548] = 3,
    STATE(200), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(583), 11,
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
  [8569] = 4,
    STATE(172), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(455), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(600), 10,
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
  [8592] = 4,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8615] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(604), 12,
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
  [8634] = 4,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(606), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8657] = 4,
    STATE(191), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(611), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [8680] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(616), 10,
      anon_sym_end,
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
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(621), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8726] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(623), 12,
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
  [8745] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(625), 12,
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
  [8764] = 4,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(627), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8787] = 4,
    ACTIONS(634), 1,
      anon_sym_variants,
    STATE(288), 1,
      sym_variants,
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
  [8810] = 4,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_LBRACKprivate_RBRACK,
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
  [8833] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(642), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8854] = 4,
    STATE(200), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(646), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8877] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(651), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8900] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(655), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8923] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
    ACTIONS(219), 10,
      anon_sym_end,
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
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(279), 10,
      anon_sym_end,
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
    STATE(180), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(659), 11,
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
  [8988] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(661), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9011] = 3,
    STATE(186), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(573), 11,
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
  [9032] = 3,
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
  [9052] = 5,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(433), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(334), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9076] = 3,
    ACTIONS(669), 1,
      anon_sym_COMMA,
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
  [9096] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(671), 11,
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
  [9114] = 2,
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
  [9132] = 3,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 10,
      anon_sym_end,
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
    ACTIONS(667), 11,
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
    ACTIONS(681), 1,
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
  [9190] = 3,
    ACTIONS(685), 1,
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
  [9210] = 3,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(687), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9230] = 2,
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
  [9248] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(693), 11,
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
  [9266] = 2,
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
  [9284] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(675), 11,
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
  [9302] = 7,
    ACTIONS(695), 1,
      anon_sym_COLON,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(124), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(122), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9330] = 5,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(412), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 2,
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
  [9354] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(646), 11,
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
  [9372] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(611), 11,
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
  [9390] = 2,
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
  [9408] = 3,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(593), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9428] = 3,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(709), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9448] = 3,
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
  [9468] = 3,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(693), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9488] = 2,
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
  [9506] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(721), 11,
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
  [9524] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(709), 11,
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
  [9542] = 3,
    ACTIONS(725), 1,
      anon_sym_COMMA,
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
  [9562] = 2,
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
  [9580] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(687), 11,
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
  [9598] = 2,
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
  [9616] = 5,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(435), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(366), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9640] = 3,
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
  [9660] = 3,
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
  [9680] = 3,
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
  [9700] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(606), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9720] = 3,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(733), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9740] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(616), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9760] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(279), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9780] = 3,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(627), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9800] = 3,
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
  [9820] = 3,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9840] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(295), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9860] = 3,
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
  [9880] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(741), 11,
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
  [9898] = 2,
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
  [9916] = 3,
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
  [9936] = 3,
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
  [9956] = 3,
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
  [9976] = 3,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(376), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9996] = 2,
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
  [10014] = 3,
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
  [10034] = 3,
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
  [10054] = 3,
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
  [10074] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(741), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10094] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(340), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10114] = 3,
    ACTIONS(749), 1,
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
  [10134] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(751), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10151] = 4,
    ACTIONS(753), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(277), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10172] = 3,
    STATE(267), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(659), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10191] = 3,
    STATE(282), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(581), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10210] = 4,
    STATE(289), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(581), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10231] = 3,
    STATE(284), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(573), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10250] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(757), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10267] = 2,
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
  [10284] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(761), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10301] = 8,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(765), 1,
      anon_sym_DOT,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(404), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(297), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10330] = 2,
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
  [10347] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(773), 10,
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
  [10364] = 4,
    STATE(294), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(573), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10385] = 3,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(727), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10404] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(422), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10421] = 3,
    STATE(242), 1,
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
  [10440] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(781), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10457] = 2,
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
  [10474] = 4,
    STATE(282), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(611), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [10495] = 8,
    ACTIONS(788), 1,
      anon_sym_SOLVED,
    ACTIONS(790), 1,
      anon_sym_by,
    ACTIONS(792), 1,
      anon_sym_case,
    ACTIONS(796), 1,
      anon_sym_solve,
    STATE(283), 1,
      sym_proof_method,
    STATE(560), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10524] = 3,
    STATE(290), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(583), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10543] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(408), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10560] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(798), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10577] = 4,
    STATE(268), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(659), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10598] = 2,
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
  [10615] = 4,
    STATE(289), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(802), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(611), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10636] = 4,
    STATE(290), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(646), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10657] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10674] = 8,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(767), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      anon_sym_DOT,
    STATE(404), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(297), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10703] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(810), 10,
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
  [10720] = 4,
    STATE(290), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(583), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10741] = 3,
    STATE(182), 1,
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
  [10760] = 8,
    ACTIONS(796), 1,
      anon_sym_solve,
    ACTIONS(812), 1,
      anon_sym_SOLVED,
    ACTIONS(814), 1,
      anon_sym_by,
    ACTIONS(816), 1,
      anon_sym_case,
    STATE(264), 1,
      sym_proof_skeleton,
    STATE(296), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10789] = 8,
    ACTIONS(818), 1,
      sym_ident,
    ACTIONS(821), 1,
      anon_sym_DOT,
    ACTIONS(823), 1,
      anon_sym_POUND,
    STATE(404), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(297), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [10818] = 2,
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
  [10835] = 2,
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
  [10852] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(652), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10880] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(839), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(841), 1,
      anon_sym_BANG,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    STATE(752), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10908] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    STATE(719), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10936] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(845), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
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
  [10964] = 7,
    ACTIONS(788), 1,
      anon_sym_SOLVED,
    ACTIONS(790), 1,
      anon_sym_by,
    ACTIONS(796), 1,
      anon_sym_solve,
    STATE(283), 1,
      sym_proof_method,
    STATE(558), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10990] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(600), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11018] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    STATE(709), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11046] = 7,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(404), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(292), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [11072] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(851), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(632), 1,
      sym_facts,
    STATE(679), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11100] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
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
  [11128] = 7,
    ACTIONS(788), 1,
      anon_sym_SOLVED,
    ACTIONS(790), 1,
      anon_sym_by,
    ACTIONS(796), 1,
      anon_sym_solve,
    STATE(283), 1,
      sym_proof_method,
    STATE(510), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11154] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(589), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11182] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(745), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11210] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(659), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11238] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(861), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(597), 1,
      sym_facts,
    STATE(679), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11266] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(657), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11294] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(865), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
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
  [11322] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(655), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11350] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
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
  [11378] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(649), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11406] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(712), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11434] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(644), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11462] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(740), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11490] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(591), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11518] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(881), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    STATE(724), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11546] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(639), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11574] = 6,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(889), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(891), 1,
      anon_sym_heuristic_EQ,
    STATE(579), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(885), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11598] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(738), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11626] = 3,
    STATE(571), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(895), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [11644] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(897), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    STATE(686), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11672] = 7,
    ACTIONS(763), 1,
      sym_ident,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(404), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(273), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(406), 2,
      sym_node_var,
      sym_nonnode_var,
  [11698] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(627), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11726] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(636), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11754] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(654), 1,
      sym_facts,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11782] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
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
  [11810] = 6,
    ACTIONS(889), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(891), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    STATE(579), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(885), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11834] = 7,
    ACTIONS(788), 1,
      anon_sym_SOLVED,
    ACTIONS(790), 1,
      anon_sym_by,
    ACTIONS(796), 1,
      anon_sym_solve,
    STATE(283), 1,
      sym_proof_method,
    STATE(447), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11860] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
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
  [11888] = 8,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(911), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(502), 1,
      sym_fact,
    STATE(670), 1,
      sym_facts,
    STATE(679), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11916] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    STATE(717), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11944] = 7,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(915), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(542), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11969] = 5,
    ACTIONS(889), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(891), 1,
      anon_sym_heuristic_EQ,
    STATE(579), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(885), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11990] = 4,
    ACTIONS(917), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(259), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12009] = 5,
    ACTIONS(919), 1,
      anon_sym_CARET,
    STATE(343), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(270), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12030] = 5,
    ACTIONS(922), 1,
      anon_sym_CARET,
    STATE(343), 1,
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
  [12051] = 5,
    ACTIONS(889), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(891), 1,
      anon_sym_heuristic_EQ,
    STATE(491), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(885), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12072] = 3,
    STATE(34), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(526), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [12089] = 7,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    ACTIONS(924), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(542), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12114] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(219), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(217), 5,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12131] = 4,
    STATE(356), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(659), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12150] = 3,
    STATE(47), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(532), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [12167] = 7,
    ACTIONS(928), 1,
      anon_sym_presort,
    ACTIONS(930), 1,
      anon_sym_prio,
    ACTIONS(932), 1,
      anon_sym_deprio,
    STATE(395), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(145), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(175), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12192] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(915), 1,
      anon_sym_RBRACK,
    STATE(539), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12217] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    STATE(539), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12242] = 4,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(279), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(277), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12261] = 5,
    ACTIONS(922), 1,
      anon_sym_CARET,
    STATE(344), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(291), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12282] = 4,
    STATE(357), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(581), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12301] = 4,
    STATE(357), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(936), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(611), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12320] = 3,
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
  [12336] = 3,
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
  [12352] = 6,
    ACTIONS(837), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_BANG,
    STATE(542), 1,
      sym_fact,
    STATE(679), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12374] = 5,
    ACTIONS(939), 1,
      anon_sym_STAR,
    STATE(370), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(344), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12394] = 3,
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
  [12410] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(295), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(293), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12426] = 3,
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
  [12442] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(366), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12458] = 3,
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
  [12474] = 3,
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
  [12490] = 6,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(833), 1,
      sym_ident,
    STATE(539), 1,
      sym_fact,
    STATE(699), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12512] = 3,
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
  [12528] = 5,
    ACTIONS(939), 1,
      anon_sym_STAR,
    STATE(373), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(372), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12548] = 3,
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
  [12564] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(279), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(277), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12580] = 5,
    ACTIONS(941), 1,
      anon_sym_STAR,
    STATE(373), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(327), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12600] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(270), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(268), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12616] = 3,
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
  [12632] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(944), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(743), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [12648] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(340), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(338), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12664] = 3,
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
  [12680] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(376), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(374), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12696] = 3,
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
  [12712] = 3,
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
  [12728] = 6,
    ACTIONS(441), 1,
      anon_sym_PLUS,
    ACTIONS(946), 1,
      anon_sym_XOR,
    ACTIONS(948), 1,
      anon_sym_13,
    STATE(389), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(443), 2,
      sym_ident,
      anon_sym_in,
  [12749] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(217), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12762] = 4,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(434), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(950), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12779] = 4,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(435), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12796] = 3,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(122), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12811] = 4,
    ACTIONS(796), 1,
      anon_sym_solve,
    STATE(560), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12828] = 3,
    ACTIONS(954), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(277), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12843] = 6,
    ACTIONS(430), 1,
      anon_sym_PLUS,
    ACTIONS(956), 1,
      anon_sym_XOR,
    ACTIONS(959), 1,
      anon_sym_13,
    STATE(389), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(432), 2,
      sym_ident,
      anon_sym_in,
  [12864] = 4,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(433), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12881] = 4,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(412), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12898] = 4,
    ACTIONS(964), 1,
      anon_sym_solve,
    STATE(264), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(962), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12915] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(327), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12930] = 6,
    ACTIONS(424), 1,
      anon_sym_PLUS,
    ACTIONS(946), 1,
      anon_sym_XOR,
    ACTIONS(948), 1,
      anon_sym_13,
    STATE(382), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(426), 2,
      sym_ident,
      anon_sym_in,
  [12951] = 5,
    ACTIONS(930), 1,
      anon_sym_prio,
    ACTIONS(932), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(143), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(171), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12970] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(516), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12982] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(432), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12996] = 4,
    ACTIONS(966), 1,
      sym_ident,
    STATE(682), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13012] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(384), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13024] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13036] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(968), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(741), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13050] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(743), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13064] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(277), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13076] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13088] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13100] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(972), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13112] = 4,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(977), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13128] = 4,
    ACTIONS(979), 1,
      sym_ident,
    STATE(630), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [13144] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(315), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13156] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13168] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(981), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13179] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(950), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13190] = 4,
    ACTIONS(983), 1,
      anon_sym_PLUS,
    STATE(413), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(457), 2,
      sym_ident,
      anon_sym_in,
  [13205] = 5,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(989), 1,
      anon_sym_in,
    STATE(414), 1,
      aux_sym_let_block_repeat1,
    STATE(747), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13222] = 4,
    ACTIONS(991), 1,
      anon_sym_msg,
    ACTIONS(993), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13237] = 4,
    ACTIONS(993), 1,
      anon_sym_node,
    ACTIONS(997), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13252] = 4,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(566), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13267] = 3,
    STATE(584), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1003), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13280] = 4,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(568), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13295] = 4,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    STATE(413), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(466), 2,
      sym_ident,
      anon_sym_in,
  [13310] = 5,
    ACTIONS(1011), 1,
      sym_ident,
    ACTIONS(1013), 1,
      anon_sym_in,
    STATE(414), 1,
      aux_sym_let_block_repeat1,
    STATE(747), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13327] = 4,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(572), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13342] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(977), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13353] = 4,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
    STATE(568), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13368] = 4,
    ACTIONS(1017), 1,
      anon_sym_DQUOTE,
    STATE(599), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1019), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13383] = 3,
    STATE(440), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1003), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13396] = 4,
    ACTIONS(1021), 1,
      anon_sym_msg,
    ACTIONS(1023), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13411] = 4,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    STATE(420), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(472), 2,
      sym_ident,
      anon_sym_in,
  [13426] = 4,
    ACTIONS(1027), 1,
      anon_sym_DQUOTE,
    STATE(729), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1019), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13441] = 4,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    STATE(671), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1019), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13456] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1031), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13467] = 4,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(556), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13482] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13493] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1033), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13504] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13515] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1035), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13526] = 3,
    STATE(518), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1003), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13539] = 4,
    ACTIONS(1023), 1,
      anon_sym_node,
    ACTIONS(1037), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1039), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13554] = 4,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(562), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13569] = 4,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1043), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13583] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13597] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1051), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [13609] = 4,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(463), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13623] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      sym_ident,
    STATE(277), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13637] = 4,
    ACTIONS(1057), 1,
      anon_sym_COLON,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
    STATE(631), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13651] = 4,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(1063), 1,
      anon_sym_2,
    STATE(457), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13665] = 4,
    ACTIONS(1065), 1,
      anon_sym_next,
    ACTIONS(1067), 1,
      anon_sym_qed,
    STATE(459), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13679] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13693] = 4,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13707] = 4,
    ACTIONS(1076), 1,
      sym_ident,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(755), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13721] = 4,
    ACTIONS(1080), 1,
      anon_sym_COLON,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
    STATE(753), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13735] = 4,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
    ACTIONS(1084), 1,
      anon_sym_COLON,
    STATE(751), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13749] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13763] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      sym_ident,
    STATE(237), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13777] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      sym_ident,
    STATE(733), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13791] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13805] = 4,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    ACTIONS(1090), 1,
      anon_sym_2,
    STATE(457), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13819] = 4,
    ACTIONS(1093), 1,
      anon_sym_LBRACK,
    ACTIONS(1095), 1,
      anon_sym_let,
    STATE(748), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13833] = 4,
    ACTIONS(1065), 1,
      anon_sym_next,
    ACTIONS(1097), 1,
      anon_sym_qed,
    STATE(467), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13847] = 4,
    ACTIONS(1095), 1,
      anon_sym_let,
    ACTIONS(1099), 1,
      anon_sym_LBRACK,
    STATE(746), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13861] = 4,
    ACTIONS(1095), 1,
      anon_sym_let,
    ACTIONS(1101), 1,
      anon_sym_LBRACK,
    STATE(744), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13875] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RBRACE,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13889] = 4,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13903] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13917] = 4,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_COLON,
    ACTIONS(1114), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13931] = 4,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_RBRACK,
    STATE(466), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13945] = 4,
    ACTIONS(1121), 1,
      anon_sym_next,
    ACTIONS(1124), 1,
      anon_sym_qed,
    STATE(467), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13959] = 4,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RBRACK,
    STATE(484), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13973] = 3,
    ACTIONS(997), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13985] = 3,
    STATE(720), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1130), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13997] = 3,
    STATE(701), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1130), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14009] = 3,
    ACTIONS(1132), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1134), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14021] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_GT,
    STATE(482), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14035] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
    STATE(489), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14049] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      sym_ident,
    STATE(708), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14063] = 4,
    ACTIONS(1095), 1,
      anon_sym_let,
    ACTIONS(1140), 1,
      anon_sym_LBRACK,
    STATE(656), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14077] = 4,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    ACTIONS(1144), 1,
      anon_sym_LBRACK,
    STATE(628), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14091] = 3,
    STATE(506), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14103] = 4,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14117] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14131] = 4,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
    ACTIONS(1148), 1,
      anon_sym_COLON,
    STATE(663), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14145] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14159] = 4,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14173] = 4,
    ACTIONS(915), 1,
      anon_sym_RBRACK,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14187] = 4,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(485), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14201] = 4,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    ACTIONS(1159), 1,
      sym_ident,
    STATE(683), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14215] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14229] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RBRACE,
    STATE(462), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14243] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14257] = 4,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    ACTIONS(1167), 1,
      sym_ident,
    STATE(593), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14271] = 4,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RBRACK,
    STATE(443), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14285] = 3,
    ACTIONS(1173), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14297] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14311] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14325] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RBRACE,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14339] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14353] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14367] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    STATE(495), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14381] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_GT,
    STATE(496), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14395] = 3,
    ACTIONS(1191), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1193), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14407] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14421] = 4,
    ACTIONS(1128), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14435] = 3,
    ACTIONS(1199), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1201), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14447] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      sym_ident,
    STATE(611), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14461] = 4,
    ACTIONS(1095), 1,
      anon_sym_let,
    ACTIONS(1203), 1,
      anon_sym_LBRACK,
    STATE(648), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14475] = 4,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14489] = 4,
    ACTIONS(1157), 1,
      anon_sym_RBRACK,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14503] = 4,
    ACTIONS(1065), 1,
      anon_sym_next,
    ACTIONS(1212), 1,
      anon_sym_qed,
    STATE(467), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14517] = 4,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
    ACTIONS(1214), 1,
      anon_sym_COLON,
    STATE(622), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14531] = 4,
    ACTIONS(1065), 1,
      anon_sym_next,
    ACTIONS(1216), 1,
      anon_sym_qed,
    STATE(508), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14545] = 4,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14559] = 4,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14573] = 4,
    ACTIONS(1063), 1,
      anon_sym_2,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14587] = 4,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
    ACTIONS(1224), 1,
      anon_sym_COLON,
    STATE(680), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14601] = 4,
    ACTIONS(1226), 1,
      sym_ident,
    STATE(421), 1,
      aux_sym_let_block_repeat1,
    STATE(747), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14615] = 4,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14629] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14643] = 4,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RBRACK,
    STATE(516), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14657] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14671] = 3,
    STATE(568), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14683] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14697] = 4,
    ACTIONS(915), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    STATE(485), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14711] = 4,
    ACTIONS(1095), 1,
      anon_sym_let,
    ACTIONS(1238), 1,
      anon_sym_LBRACK,
    STATE(728), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14725] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_GT,
    STATE(441), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14739] = 4,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14753] = 3,
    ACTIONS(1037), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1039), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14765] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(706), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14776] = 3,
    ACTIONS(897), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1246), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14787] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1248), 2,
      sym_ident,
      anon_sym_in,
  [14796] = 3,
    ACTIONS(861), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1250), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14807] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(74), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14818] = 3,
    ACTIONS(1252), 1,
      sym_ident,
    STATE(183), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14829] = 3,
    ACTIONS(1252), 1,
      sym_ident,
    STATE(246), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14840] = 3,
    ACTIONS(1254), 1,
      aux_sym_arity_token1,
    STATE(198), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14851] = 3,
    ACTIONS(911), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1256), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14862] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(750), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14873] = 3,
    ACTIONS(1258), 1,
      anon_sym_,
    ACTIONS(1260), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14884] = 3,
    ACTIONS(277), 1,
      anon_sym_EQ,
    ACTIONS(1262), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14895] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14904] = 3,
    ACTIONS(1264), 1,
      aux_sym_arity_token1,
    STATE(255), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14915] = 3,
    ACTIONS(1266), 1,
      aux_sym_arity_token1,
    STATE(354), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14926] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14935] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14944] = 3,
    ACTIONS(1270), 1,
      anon_sym_rule,
    STATE(227), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14955] = 3,
    ACTIONS(1272), 1,
      anon_sym_EQ,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14966] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1276), 2,
      anon_sym_next,
      anon_sym_qed,
  [14975] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1278), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14984] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1051), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [14993] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1280), 2,
      anon_sym_left,
      anon_sym_right,
  [15002] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(84), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15013] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1282), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1284), 1,
      sym_comment,
    STATE(637), 1,
      sym_param,
  [15026] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1286), 2,
      anon_sym_E,
      anon_sym_AC,
  [15035] = 3,
    ACTIONS(1288), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1290), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15046] = 3,
    ACTIONS(1292), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1294), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15057] = 3,
    ACTIONS(849), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1296), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15068] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15077] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(538), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15088] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1298), 2,
      anon_sym_next,
      anon_sym_qed,
  [15097] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(111), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15108] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1300), 2,
      anon_sym_next,
      anon_sym_qed,
  [15117] = 3,
    ACTIONS(1264), 1,
      aux_sym_arity_token1,
    STATE(204), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15128] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15137] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1282), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1284), 1,
      sym_comment,
    STATE(595), 1,
      sym_param,
  [15150] = 3,
    ACTIONS(845), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1302), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15161] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15170] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15179] = 3,
    ACTIONS(1266), 1,
      aux_sym_arity_token1,
    STATE(366), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15190] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15199] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(176), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15210] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1031), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15219] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1304), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15228] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1033), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15237] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1306), 2,
      anon_sym_next,
      anon_sym_qed,
  [15246] = 3,
    ACTIONS(843), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1308), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15257] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1310), 2,
      anon_sym_next,
      anon_sym_qed,
  [15266] = 3,
    ACTIONS(865), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1312), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15277] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(265), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15288] = 3,
    ACTIONS(1270), 1,
      anon_sym_rule,
    STATE(206), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15299] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15308] = 3,
    ACTIONS(851), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1314), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15319] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15328] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [15337] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(734), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15348] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1074), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15357] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15366] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15375] = 2,
    ACTIONS(1318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15383] = 2,
    ACTIONS(1320), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15391] = 2,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15399] = 2,
    ACTIONS(1322), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15407] = 2,
    ACTIONS(1324), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15415] = 2,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15423] = 2,
    ACTIONS(1328), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15431] = 2,
    ACTIONS(997), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15439] = 2,
    ACTIONS(1330), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15447] = 2,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15455] = 2,
    ACTIONS(851), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15463] = 2,
    ACTIONS(1334), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15471] = 2,
    ACTIONS(1027), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15479] = 2,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15487] = 2,
    ACTIONS(1023), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15495] = 2,
    ACTIONS(1336), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15503] = 2,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15511] = 2,
    ACTIONS(1340), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15519] = 2,
    ACTIONS(1342), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15527] = 2,
    ACTIONS(1344), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15535] = 2,
    ACTIONS(1346), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15543] = 2,
    ACTIONS(1348), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15551] = 2,
    ACTIONS(1350), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15559] = 2,
    ACTIONS(1352), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15567] = 2,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15575] = 2,
    ACTIONS(1356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15583] = 2,
    ACTIONS(1358), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15591] = 2,
    ACTIONS(1360), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15599] = 2,
    ACTIONS(1362), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15607] = 2,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15615] = 2,
    ACTIONS(1366), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15623] = 2,
    ACTIONS(1051), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15631] = 2,
    ACTIONS(1368), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15639] = 2,
    ACTIONS(1370), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15647] = 2,
    ACTIONS(1272), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15655] = 2,
    ACTIONS(1148), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15663] = 2,
    ACTIONS(1372), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15671] = 2,
    ACTIONS(1374), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15679] = 2,
    ACTIONS(1376), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15687] = 2,
    ACTIONS(1378), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15695] = 2,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15703] = 2,
    ACTIONS(1380), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15711] = 2,
    ACTIONS(1382), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15719] = 2,
    ACTIONS(1384), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15727] = 2,
    ACTIONS(1224), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15735] = 2,
    ACTIONS(911), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15743] = 2,
    ACTIONS(1386), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15751] = 2,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15759] = 2,
    ACTIONS(1388), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15767] = 2,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15775] = 2,
    ACTIONS(1390), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15783] = 2,
    ACTIONS(1392), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15791] = 2,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15799] = 2,
    ACTIONS(1394), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15807] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1284), 1,
      sym_comment,
    ACTIONS(1396), 1,
      aux_sym_oracle_goal_ranking_token1,
  [15817] = 2,
    ACTIONS(1398), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15825] = 2,
    ACTIONS(1400), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15833] = 2,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15841] = 2,
    ACTIONS(1402), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15849] = 2,
    ACTIONS(993), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15857] = 2,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15865] = 2,
    ACTIONS(1238), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15873] = 2,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15881] = 2,
    ACTIONS(1406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15889] = 2,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15897] = 2,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15905] = 2,
    ACTIONS(1410), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15913] = 2,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15921] = 2,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15929] = 2,
    ACTIONS(1203), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15937] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15945] = 2,
    ACTIONS(1412), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15953] = 2,
    ACTIONS(1414), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15961] = 2,
    ACTIONS(1416), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15969] = 2,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15977] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1284), 1,
      sym_comment,
    ACTIONS(1420), 1,
      aux_sym_formal_comment_token1,
  [15987] = 2,
    ACTIONS(1422), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15995] = 2,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16003] = 2,
    ACTIONS(1426), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16011] = 2,
    ACTIONS(1428), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16019] = 2,
    ACTIONS(1430), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16027] = 2,
    ACTIONS(1432), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16035] = 2,
    ACTIONS(1434), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16043] = 2,
    ACTIONS(839), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16051] = 2,
    ACTIONS(1017), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16059] = 2,
    ACTIONS(1436), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16067] = 2,
    ACTIONS(1438), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16075] = 2,
    ACTIONS(1440), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16083] = 2,
    ACTIONS(1442), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16091] = 2,
    ACTIONS(1444), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16099] = 2,
    ACTIONS(1446), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16107] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1284), 1,
      sym_comment,
    ACTIONS(1448), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16117] = 2,
    ACTIONS(1450), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16125] = 2,
    ACTIONS(1452), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16133] = 2,
    ACTIONS(1454), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16141] = 2,
    ACTIONS(1456), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16149] = 2,
    ACTIONS(1458), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16157] = 2,
    ACTIONS(1460), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16165] = 2,
    ACTIONS(1462), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16173] = 2,
    ACTIONS(861), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16181] = 2,
    ACTIONS(1464), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16189] = 2,
    ACTIONS(1466), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16197] = 2,
    ACTIONS(1468), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16205] = 2,
    ACTIONS(1470), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16213] = 2,
    ACTIONS(1472), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16221] = 2,
    ACTIONS(1474), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16229] = 2,
    ACTIONS(1476), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16237] = 2,
    ACTIONS(1478), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16245] = 2,
    ACTIONS(1480), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16253] = 2,
    ACTIONS(1482), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16261] = 2,
    ACTIONS(1484), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16269] = 2,
    ACTIONS(1486), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16277] = 2,
    ACTIONS(1488), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16285] = 2,
    ACTIONS(1490), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16293] = 2,
    ACTIONS(1492), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16301] = 2,
    ACTIONS(1037), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16309] = 2,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16317] = 2,
    ACTIONS(1496), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16325] = 2,
    ACTIONS(1498), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16333] = 2,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16341] = 2,
    ACTIONS(1502), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16349] = 2,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16357] = 2,
    ACTIONS(845), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16365] = 2,
    ACTIONS(1506), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16373] = 2,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16381] = 2,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16389] = 2,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16397] = 2,
    ACTIONS(1512), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16405] = 2,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16413] = 2,
    ACTIONS(1514), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16421] = 2,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16429] = 2,
    ACTIONS(1516), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16437] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16445] = 2,
    ACTIONS(1518), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16453] = 2,
    ACTIONS(1520), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16461] = 2,
    ACTIONS(881), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16469] = 2,
    ACTIONS(1522), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16477] = 2,
    ACTIONS(1524), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16485] = 2,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16493] = 2,
    ACTIONS(1526), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16501] = 2,
    ACTIONS(1528), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16509] = 2,
    ACTIONS(1530), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16517] = 2,
    ACTIONS(1532), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16525] = 2,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16533] = 2,
    ACTIONS(1534), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16541] = 2,
    ACTIONS(1536), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16549] = 2,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16557] = 2,
    ACTIONS(1540), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16565] = 2,
    ACTIONS(1542), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16573] = 2,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16581] = 2,
    ACTIONS(1544), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16589] = 2,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16597] = 2,
    ACTIONS(1546), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16605] = 2,
    ACTIONS(1548), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16613] = 2,
    ACTIONS(1550), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16621] = 2,
    ACTIONS(1552), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16629] = 2,
    ACTIONS(1554), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16637] = 2,
    ACTIONS(1099), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16645] = 2,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16653] = 2,
    ACTIONS(1093), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16661] = 2,
    ACTIONS(1556), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16669] = 2,
    ACTIONS(1558), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16677] = 2,
    ACTIONS(1560), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16685] = 2,
    ACTIONS(1562), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16693] = 2,
    ACTIONS(1080), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16701] = 2,
    ACTIONS(1564), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16709] = 2,
    ACTIONS(1566), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16717] = 2,
    ACTIONS(1568), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16725] = 2,
    ACTIONS(1570), 1,
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
  [SMALL_STATE(31)] = 3021,
  [SMALL_STATE(32)] = 3058,
  [SMALL_STATE(33)] = 3097,
  [SMALL_STATE(34)] = 3134,
  [SMALL_STATE(35)] = 3171,
  [SMALL_STATE(36)] = 3210,
  [SMALL_STATE(37)] = 3247,
  [SMALL_STATE(38)] = 3290,
  [SMALL_STATE(39)] = 3333,
  [SMALL_STATE(40)] = 3374,
  [SMALL_STATE(41)] = 3417,
  [SMALL_STATE(42)] = 3454,
  [SMALL_STATE(43)] = 3497,
  [SMALL_STATE(44)] = 3533,
  [SMALL_STATE(45)] = 3569,
  [SMALL_STATE(46)] = 3611,
  [SMALL_STATE(47)] = 3647,
  [SMALL_STATE(48)] = 3683,
  [SMALL_STATE(49)] = 3719,
  [SMALL_STATE(50)] = 3755,
  [SMALL_STATE(51)] = 3787,
  [SMALL_STATE(52)] = 3823,
  [SMALL_STATE(53)] = 3855,
  [SMALL_STATE(54)] = 3895,
  [SMALL_STATE(55)] = 3949,
  [SMALL_STATE(56)] = 3985,
  [SMALL_STATE(57)] = 4018,
  [SMALL_STATE(58)] = 4053,
  [SMALL_STATE(59)] = 4086,
  [SMALL_STATE(60)] = 4117,
  [SMALL_STATE(61)] = 4148,
  [SMALL_STATE(62)] = 4181,
  [SMALL_STATE(63)] = 4212,
  [SMALL_STATE(64)] = 4263,
  [SMALL_STATE(65)] = 4314,
  [SMALL_STATE(66)] = 4345,
  [SMALL_STATE(67)] = 4380,
  [SMALL_STATE(68)] = 4415,
  [SMALL_STATE(69)] = 4445,
  [SMALL_STATE(70)] = 4477,
  [SMALL_STATE(71)] = 4509,
  [SMALL_STATE(72)] = 4541,
  [SMALL_STATE(73)] = 4573,
  [SMALL_STATE(74)] = 4607,
  [SMALL_STATE(75)] = 4639,
  [SMALL_STATE(76)] = 4673,
  [SMALL_STATE(77)] = 4703,
  [SMALL_STATE(78)] = 4737,
  [SMALL_STATE(79)] = 4766,
  [SMALL_STATE(80)] = 4795,
  [SMALL_STATE(81)] = 4850,
  [SMALL_STATE(82)] = 4905,
  [SMALL_STATE(83)] = 4934,
  [SMALL_STATE(84)] = 4961,
  [SMALL_STATE(85)] = 4990,
  [SMALL_STATE(86)] = 5019,
  [SMALL_STATE(87)] = 5048,
  [SMALL_STATE(88)] = 5103,
  [SMALL_STATE(89)] = 5136,
  [SMALL_STATE(90)] = 5191,
  [SMALL_STATE(91)] = 5220,
  [SMALL_STATE(92)] = 5249,
  [SMALL_STATE(93)] = 5282,
  [SMALL_STATE(94)] = 5309,
  [SMALL_STATE(95)] = 5338,
  [SMALL_STATE(96)] = 5393,
  [SMALL_STATE(97)] = 5448,
  [SMALL_STATE(98)] = 5475,
  [SMALL_STATE(99)] = 5504,
  [SMALL_STATE(100)] = 5559,
  [SMALL_STATE(101)] = 5588,
  [SMALL_STATE(102)] = 5617,
  [SMALL_STATE(103)] = 5650,
  [SMALL_STATE(104)] = 5679,
  [SMALL_STATE(105)] = 5734,
  [SMALL_STATE(106)] = 5763,
  [SMALL_STATE(107)] = 5792,
  [SMALL_STATE(108)] = 5821,
  [SMALL_STATE(109)] = 5850,
  [SMALL_STATE(110)] = 5879,
  [SMALL_STATE(111)] = 5908,
  [SMALL_STATE(112)] = 5936,
  [SMALL_STATE(113)] = 5964,
  [SMALL_STATE(114)] = 6016,
  [SMALL_STATE(115)] = 6054,
  [SMALL_STATE(116)] = 6106,
  [SMALL_STATE(117)] = 6158,
  [SMALL_STATE(118)] = 6186,
  [SMALL_STATE(119)] = 6238,
  [SMALL_STATE(120)] = 6276,
  [SMALL_STATE(121)] = 6328,
  [SMALL_STATE(122)] = 6360,
  [SMALL_STATE(123)] = 6412,
  [SMALL_STATE(124)] = 6440,
  [SMALL_STATE(125)] = 6492,
  [SMALL_STATE(126)] = 6544,
  [SMALL_STATE(127)] = 6576,
  [SMALL_STATE(128)] = 6614,
  [SMALL_STATE(129)] = 6666,
  [SMALL_STATE(130)] = 6704,
  [SMALL_STATE(131)] = 6756,
  [SMALL_STATE(132)] = 6808,
  [SMALL_STATE(133)] = 6840,
  [SMALL_STATE(134)] = 6892,
  [SMALL_STATE(135)] = 6941,
  [SMALL_STATE(136)] = 6968,
  [SMALL_STATE(137)] = 6995,
  [SMALL_STATE(138)] = 7044,
  [SMALL_STATE(139)] = 7074,
  [SMALL_STATE(140)] = 7104,
  [SMALL_STATE(141)] = 7150,
  [SMALL_STATE(142)] = 7180,
  [SMALL_STATE(143)] = 7226,
  [SMALL_STATE(144)] = 7257,
  [SMALL_STATE(145)] = 7288,
  [SMALL_STATE(146)] = 7319,
  [SMALL_STATE(147)] = 7362,
  [SMALL_STATE(148)] = 7393,
  [SMALL_STATE(149)] = 7436,
  [SMALL_STATE(150)] = 7479,
  [SMALL_STATE(151)] = 7522,
  [SMALL_STATE(152)] = 7562,
  [SMALL_STATE(153)] = 7602,
  [SMALL_STATE(154)] = 7642,
  [SMALL_STATE(155)] = 7674,
  [SMALL_STATE(156)] = 7714,
  [SMALL_STATE(157)] = 7754,
  [SMALL_STATE(158)] = 7794,
  [SMALL_STATE(159)] = 7820,
  [SMALL_STATE(160)] = 7860,
  [SMALL_STATE(161)] = 7900,
  [SMALL_STATE(162)] = 7940,
  [SMALL_STATE(163)] = 7973,
  [SMALL_STATE(164)] = 8006,
  [SMALL_STATE(165)] = 8033,
  [SMALL_STATE(166)] = 8058,
  [SMALL_STATE(167)] = 8083,
  [SMALL_STATE(168)] = 8110,
  [SMALL_STATE(169)] = 8134,
  [SMALL_STATE(170)] = 8158,
  [SMALL_STATE(171)] = 8188,
  [SMALL_STATE(172)] = 8212,
  [SMALL_STATE(173)] = 8236,
  [SMALL_STATE(174)] = 8266,
  [SMALL_STATE(175)] = 8290,
  [SMALL_STATE(176)] = 8314,
  [SMALL_STATE(177)] = 8336,
  [SMALL_STATE(178)] = 8366,
  [SMALL_STATE(179)] = 8389,
  [SMALL_STATE(180)] = 8412,
  [SMALL_STATE(181)] = 8433,
  [SMALL_STATE(182)] = 8456,
  [SMALL_STATE(183)] = 8479,
  [SMALL_STATE(184)] = 8502,
  [SMALL_STATE(185)] = 8525,
  [SMALL_STATE(186)] = 8548,
  [SMALL_STATE(187)] = 8569,
  [SMALL_STATE(188)] = 8592,
  [SMALL_STATE(189)] = 8615,
  [SMALL_STATE(190)] = 8634,
  [SMALL_STATE(191)] = 8657,
  [SMALL_STATE(192)] = 8680,
  [SMALL_STATE(193)] = 8703,
  [SMALL_STATE(194)] = 8726,
  [SMALL_STATE(195)] = 8745,
  [SMALL_STATE(196)] = 8764,
  [SMALL_STATE(197)] = 8787,
  [SMALL_STATE(198)] = 8810,
  [SMALL_STATE(199)] = 8833,
  [SMALL_STATE(200)] = 8854,
  [SMALL_STATE(201)] = 8877,
  [SMALL_STATE(202)] = 8900,
  [SMALL_STATE(203)] = 8923,
  [SMALL_STATE(204)] = 8944,
  [SMALL_STATE(205)] = 8967,
  [SMALL_STATE(206)] = 8988,
  [SMALL_STATE(207)] = 9011,
  [SMALL_STATE(208)] = 9032,
  [SMALL_STATE(209)] = 9052,
  [SMALL_STATE(210)] = 9076,
  [SMALL_STATE(211)] = 9096,
  [SMALL_STATE(212)] = 9114,
  [SMALL_STATE(213)] = 9132,
  [SMALL_STATE(214)] = 9152,
  [SMALL_STATE(215)] = 9170,
  [SMALL_STATE(216)] = 9190,
  [SMALL_STATE(217)] = 9210,
  [SMALL_STATE(218)] = 9230,
  [SMALL_STATE(219)] = 9248,
  [SMALL_STATE(220)] = 9266,
  [SMALL_STATE(221)] = 9284,
  [SMALL_STATE(222)] = 9302,
  [SMALL_STATE(223)] = 9330,
  [SMALL_STATE(224)] = 9354,
  [SMALL_STATE(225)] = 9372,
  [SMALL_STATE(226)] = 9390,
  [SMALL_STATE(227)] = 9408,
  [SMALL_STATE(228)] = 9428,
  [SMALL_STATE(229)] = 9448,
  [SMALL_STATE(230)] = 9468,
  [SMALL_STATE(231)] = 9488,
  [SMALL_STATE(232)] = 9506,
  [SMALL_STATE(233)] = 9524,
  [SMALL_STATE(234)] = 9542,
  [SMALL_STATE(235)] = 9562,
  [SMALL_STATE(236)] = 9580,
  [SMALL_STATE(237)] = 9598,
  [SMALL_STATE(238)] = 9616,
  [SMALL_STATE(239)] = 9640,
  [SMALL_STATE(240)] = 9660,
  [SMALL_STATE(241)] = 9680,
  [SMALL_STATE(242)] = 9700,
  [SMALL_STATE(243)] = 9720,
  [SMALL_STATE(244)] = 9740,
  [SMALL_STATE(245)] = 9760,
  [SMALL_STATE(246)] = 9780,
  [SMALL_STATE(247)] = 9800,
  [SMALL_STATE(248)] = 9820,
  [SMALL_STATE(249)] = 9840,
  [SMALL_STATE(250)] = 9860,
  [SMALL_STATE(251)] = 9880,
  [SMALL_STATE(252)] = 9898,
  [SMALL_STATE(253)] = 9916,
  [SMALL_STATE(254)] = 9936,
  [SMALL_STATE(255)] = 9956,
  [SMALL_STATE(256)] = 9976,
  [SMALL_STATE(257)] = 9996,
  [SMALL_STATE(258)] = 10014,
  [SMALL_STATE(259)] = 10034,
  [SMALL_STATE(260)] = 10054,
  [SMALL_STATE(261)] = 10074,
  [SMALL_STATE(262)] = 10094,
  [SMALL_STATE(263)] = 10114,
  [SMALL_STATE(264)] = 10134,
  [SMALL_STATE(265)] = 10151,
  [SMALL_STATE(266)] = 10172,
  [SMALL_STATE(267)] = 10191,
  [SMALL_STATE(268)] = 10210,
  [SMALL_STATE(269)] = 10231,
  [SMALL_STATE(270)] = 10250,
  [SMALL_STATE(271)] = 10267,
  [SMALL_STATE(272)] = 10284,
  [SMALL_STATE(273)] = 10301,
  [SMALL_STATE(274)] = 10330,
  [SMALL_STATE(275)] = 10347,
  [SMALL_STATE(276)] = 10364,
  [SMALL_STATE(277)] = 10385,
  [SMALL_STATE(278)] = 10404,
  [SMALL_STATE(279)] = 10421,
  [SMALL_STATE(280)] = 10440,
  [SMALL_STATE(281)] = 10457,
  [SMALL_STATE(282)] = 10474,
  [SMALL_STATE(283)] = 10495,
  [SMALL_STATE(284)] = 10524,
  [SMALL_STATE(285)] = 10543,
  [SMALL_STATE(286)] = 10560,
  [SMALL_STATE(287)] = 10577,
  [SMALL_STATE(288)] = 10598,
  [SMALL_STATE(289)] = 10615,
  [SMALL_STATE(290)] = 10636,
  [SMALL_STATE(291)] = 10657,
  [SMALL_STATE(292)] = 10674,
  [SMALL_STATE(293)] = 10703,
  [SMALL_STATE(294)] = 10720,
  [SMALL_STATE(295)] = 10741,
  [SMALL_STATE(296)] = 10760,
  [SMALL_STATE(297)] = 10789,
  [SMALL_STATE(298)] = 10818,
  [SMALL_STATE(299)] = 10835,
  [SMALL_STATE(300)] = 10852,
  [SMALL_STATE(301)] = 10880,
  [SMALL_STATE(302)] = 10908,
  [SMALL_STATE(303)] = 10936,
  [SMALL_STATE(304)] = 10964,
  [SMALL_STATE(305)] = 10990,
  [SMALL_STATE(306)] = 11018,
  [SMALL_STATE(307)] = 11046,
  [SMALL_STATE(308)] = 11072,
  [SMALL_STATE(309)] = 11100,
  [SMALL_STATE(310)] = 11128,
  [SMALL_STATE(311)] = 11154,
  [SMALL_STATE(312)] = 11182,
  [SMALL_STATE(313)] = 11210,
  [SMALL_STATE(314)] = 11238,
  [SMALL_STATE(315)] = 11266,
  [SMALL_STATE(316)] = 11294,
  [SMALL_STATE(317)] = 11322,
  [SMALL_STATE(318)] = 11350,
  [SMALL_STATE(319)] = 11378,
  [SMALL_STATE(320)] = 11406,
  [SMALL_STATE(321)] = 11434,
  [SMALL_STATE(322)] = 11462,
  [SMALL_STATE(323)] = 11490,
  [SMALL_STATE(324)] = 11518,
  [SMALL_STATE(325)] = 11546,
  [SMALL_STATE(326)] = 11574,
  [SMALL_STATE(327)] = 11598,
  [SMALL_STATE(328)] = 11626,
  [SMALL_STATE(329)] = 11644,
  [SMALL_STATE(330)] = 11672,
  [SMALL_STATE(331)] = 11698,
  [SMALL_STATE(332)] = 11726,
  [SMALL_STATE(333)] = 11754,
  [SMALL_STATE(334)] = 11782,
  [SMALL_STATE(335)] = 11810,
  [SMALL_STATE(336)] = 11834,
  [SMALL_STATE(337)] = 11860,
  [SMALL_STATE(338)] = 11888,
  [SMALL_STATE(339)] = 11916,
  [SMALL_STATE(340)] = 11944,
  [SMALL_STATE(341)] = 11969,
  [SMALL_STATE(342)] = 11990,
  [SMALL_STATE(343)] = 12009,
  [SMALL_STATE(344)] = 12030,
  [SMALL_STATE(345)] = 12051,
  [SMALL_STATE(346)] = 12072,
  [SMALL_STATE(347)] = 12089,
  [SMALL_STATE(348)] = 12114,
  [SMALL_STATE(349)] = 12131,
  [SMALL_STATE(350)] = 12150,
  [SMALL_STATE(351)] = 12167,
  [SMALL_STATE(352)] = 12192,
  [SMALL_STATE(353)] = 12217,
  [SMALL_STATE(354)] = 12242,
  [SMALL_STATE(355)] = 12261,
  [SMALL_STATE(356)] = 12282,
  [SMALL_STATE(357)] = 12301,
  [SMALL_STATE(358)] = 12320,
  [SMALL_STATE(359)] = 12336,
  [SMALL_STATE(360)] = 12352,
  [SMALL_STATE(361)] = 12374,
  [SMALL_STATE(362)] = 12394,
  [SMALL_STATE(363)] = 12410,
  [SMALL_STATE(364)] = 12426,
  [SMALL_STATE(365)] = 12442,
  [SMALL_STATE(366)] = 12458,
  [SMALL_STATE(367)] = 12474,
  [SMALL_STATE(368)] = 12490,
  [SMALL_STATE(369)] = 12512,
  [SMALL_STATE(370)] = 12528,
  [SMALL_STATE(371)] = 12548,
  [SMALL_STATE(372)] = 12564,
  [SMALL_STATE(373)] = 12580,
  [SMALL_STATE(374)] = 12600,
  [SMALL_STATE(375)] = 12616,
  [SMALL_STATE(376)] = 12632,
  [SMALL_STATE(377)] = 12648,
  [SMALL_STATE(378)] = 12664,
  [SMALL_STATE(379)] = 12680,
  [SMALL_STATE(380)] = 12696,
  [SMALL_STATE(381)] = 12712,
  [SMALL_STATE(382)] = 12728,
  [SMALL_STATE(383)] = 12749,
  [SMALL_STATE(384)] = 12762,
  [SMALL_STATE(385)] = 12779,
  [SMALL_STATE(386)] = 12796,
  [SMALL_STATE(387)] = 12811,
  [SMALL_STATE(388)] = 12828,
  [SMALL_STATE(389)] = 12843,
  [SMALL_STATE(390)] = 12864,
  [SMALL_STATE(391)] = 12881,
  [SMALL_STATE(392)] = 12898,
  [SMALL_STATE(393)] = 12915,
  [SMALL_STATE(394)] = 12930,
  [SMALL_STATE(395)] = 12951,
  [SMALL_STATE(396)] = 12970,
  [SMALL_STATE(397)] = 12982,
  [SMALL_STATE(398)] = 12996,
  [SMALL_STATE(399)] = 13012,
  [SMALL_STATE(400)] = 13024,
  [SMALL_STATE(401)] = 13036,
  [SMALL_STATE(402)] = 13050,
  [SMALL_STATE(403)] = 13064,
  [SMALL_STATE(404)] = 13076,
  [SMALL_STATE(405)] = 13088,
  [SMALL_STATE(406)] = 13100,
  [SMALL_STATE(407)] = 13112,
  [SMALL_STATE(408)] = 13128,
  [SMALL_STATE(409)] = 13144,
  [SMALL_STATE(410)] = 13156,
  [SMALL_STATE(411)] = 13168,
  [SMALL_STATE(412)] = 13179,
  [SMALL_STATE(413)] = 13190,
  [SMALL_STATE(414)] = 13205,
  [SMALL_STATE(415)] = 13222,
  [SMALL_STATE(416)] = 13237,
  [SMALL_STATE(417)] = 13252,
  [SMALL_STATE(418)] = 13267,
  [SMALL_STATE(419)] = 13280,
  [SMALL_STATE(420)] = 13295,
  [SMALL_STATE(421)] = 13310,
  [SMALL_STATE(422)] = 13327,
  [SMALL_STATE(423)] = 13342,
  [SMALL_STATE(424)] = 13353,
  [SMALL_STATE(425)] = 13368,
  [SMALL_STATE(426)] = 13383,
  [SMALL_STATE(427)] = 13396,
  [SMALL_STATE(428)] = 13411,
  [SMALL_STATE(429)] = 13426,
  [SMALL_STATE(430)] = 13441,
  [SMALL_STATE(431)] = 13456,
  [SMALL_STATE(432)] = 13467,
  [SMALL_STATE(433)] = 13482,
  [SMALL_STATE(434)] = 13493,
  [SMALL_STATE(435)] = 13504,
  [SMALL_STATE(436)] = 13515,
  [SMALL_STATE(437)] = 13526,
  [SMALL_STATE(438)] = 13539,
  [SMALL_STATE(439)] = 13554,
  [SMALL_STATE(440)] = 13569,
  [SMALL_STATE(441)] = 13583,
  [SMALL_STATE(442)] = 13597,
  [SMALL_STATE(443)] = 13609,
  [SMALL_STATE(444)] = 13623,
  [SMALL_STATE(445)] = 13637,
  [SMALL_STATE(446)] = 13651,
  [SMALL_STATE(447)] = 13665,
  [SMALL_STATE(448)] = 13679,
  [SMALL_STATE(449)] = 13693,
  [SMALL_STATE(450)] = 13707,
  [SMALL_STATE(451)] = 13721,
  [SMALL_STATE(452)] = 13735,
  [SMALL_STATE(453)] = 13749,
  [SMALL_STATE(454)] = 13763,
  [SMALL_STATE(455)] = 13777,
  [SMALL_STATE(456)] = 13791,
  [SMALL_STATE(457)] = 13805,
  [SMALL_STATE(458)] = 13819,
  [SMALL_STATE(459)] = 13833,
  [SMALL_STATE(460)] = 13847,
  [SMALL_STATE(461)] = 13861,
  [SMALL_STATE(462)] = 13875,
  [SMALL_STATE(463)] = 13889,
  [SMALL_STATE(464)] = 13903,
  [SMALL_STATE(465)] = 13917,
  [SMALL_STATE(466)] = 13931,
  [SMALL_STATE(467)] = 13945,
  [SMALL_STATE(468)] = 13959,
  [SMALL_STATE(469)] = 13973,
  [SMALL_STATE(470)] = 13985,
  [SMALL_STATE(471)] = 13997,
  [SMALL_STATE(472)] = 14009,
  [SMALL_STATE(473)] = 14021,
  [SMALL_STATE(474)] = 14035,
  [SMALL_STATE(475)] = 14049,
  [SMALL_STATE(476)] = 14063,
  [SMALL_STATE(477)] = 14077,
  [SMALL_STATE(478)] = 14091,
  [SMALL_STATE(479)] = 14103,
  [SMALL_STATE(480)] = 14117,
  [SMALL_STATE(481)] = 14131,
  [SMALL_STATE(482)] = 14145,
  [SMALL_STATE(483)] = 14159,
  [SMALL_STATE(484)] = 14173,
  [SMALL_STATE(485)] = 14187,
  [SMALL_STATE(486)] = 14201,
  [SMALL_STATE(487)] = 14215,
  [SMALL_STATE(488)] = 14229,
  [SMALL_STATE(489)] = 14243,
  [SMALL_STATE(490)] = 14257,
  [SMALL_STATE(491)] = 14271,
  [SMALL_STATE(492)] = 14285,
  [SMALL_STATE(493)] = 14297,
  [SMALL_STATE(494)] = 14311,
  [SMALL_STATE(495)] = 14325,
  [SMALL_STATE(496)] = 14339,
  [SMALL_STATE(497)] = 14353,
  [SMALL_STATE(498)] = 14367,
  [SMALL_STATE(499)] = 14381,
  [SMALL_STATE(500)] = 14395,
  [SMALL_STATE(501)] = 14407,
  [SMALL_STATE(502)] = 14421,
  [SMALL_STATE(503)] = 14435,
  [SMALL_STATE(504)] = 14447,
  [SMALL_STATE(505)] = 14461,
  [SMALL_STATE(506)] = 14475,
  [SMALL_STATE(507)] = 14489,
  [SMALL_STATE(508)] = 14503,
  [SMALL_STATE(509)] = 14517,
  [SMALL_STATE(510)] = 14531,
  [SMALL_STATE(511)] = 14545,
  [SMALL_STATE(512)] = 14559,
  [SMALL_STATE(513)] = 14573,
  [SMALL_STATE(514)] = 14587,
  [SMALL_STATE(515)] = 14601,
  [SMALL_STATE(516)] = 14615,
  [SMALL_STATE(517)] = 14629,
  [SMALL_STATE(518)] = 14643,
  [SMALL_STATE(519)] = 14657,
  [SMALL_STATE(520)] = 14671,
  [SMALL_STATE(521)] = 14683,
  [SMALL_STATE(522)] = 14697,
  [SMALL_STATE(523)] = 14711,
  [SMALL_STATE(524)] = 14725,
  [SMALL_STATE(525)] = 14739,
  [SMALL_STATE(526)] = 14753,
  [SMALL_STATE(527)] = 14765,
  [SMALL_STATE(528)] = 14776,
  [SMALL_STATE(529)] = 14787,
  [SMALL_STATE(530)] = 14796,
  [SMALL_STATE(531)] = 14807,
  [SMALL_STATE(532)] = 14818,
  [SMALL_STATE(533)] = 14829,
  [SMALL_STATE(534)] = 14840,
  [SMALL_STATE(535)] = 14851,
  [SMALL_STATE(536)] = 14862,
  [SMALL_STATE(537)] = 14873,
  [SMALL_STATE(538)] = 14884,
  [SMALL_STATE(539)] = 14895,
  [SMALL_STATE(540)] = 14904,
  [SMALL_STATE(541)] = 14915,
  [SMALL_STATE(542)] = 14926,
  [SMALL_STATE(543)] = 14935,
  [SMALL_STATE(544)] = 14944,
  [SMALL_STATE(545)] = 14955,
  [SMALL_STATE(546)] = 14966,
  [SMALL_STATE(547)] = 14975,
  [SMALL_STATE(548)] = 14984,
  [SMALL_STATE(549)] = 14993,
  [SMALL_STATE(550)] = 15002,
  [SMALL_STATE(551)] = 15013,
  [SMALL_STATE(552)] = 15026,
  [SMALL_STATE(553)] = 15035,
  [SMALL_STATE(554)] = 15046,
  [SMALL_STATE(555)] = 15057,
  [SMALL_STATE(556)] = 15068,
  [SMALL_STATE(557)] = 15077,
  [SMALL_STATE(558)] = 15088,
  [SMALL_STATE(559)] = 15097,
  [SMALL_STATE(560)] = 15108,
  [SMALL_STATE(561)] = 15117,
  [SMALL_STATE(562)] = 15128,
  [SMALL_STATE(563)] = 15137,
  [SMALL_STATE(564)] = 15150,
  [SMALL_STATE(565)] = 15161,
  [SMALL_STATE(566)] = 15170,
  [SMALL_STATE(567)] = 15179,
  [SMALL_STATE(568)] = 15190,
  [SMALL_STATE(569)] = 15199,
  [SMALL_STATE(570)] = 15210,
  [SMALL_STATE(571)] = 15219,
  [SMALL_STATE(572)] = 15228,
  [SMALL_STATE(573)] = 15237,
  [SMALL_STATE(574)] = 15246,
  [SMALL_STATE(575)] = 15257,
  [SMALL_STATE(576)] = 15266,
  [SMALL_STATE(577)] = 15277,
  [SMALL_STATE(578)] = 15288,
  [SMALL_STATE(579)] = 15299,
  [SMALL_STATE(580)] = 15308,
  [SMALL_STATE(581)] = 15319,
  [SMALL_STATE(582)] = 15328,
  [SMALL_STATE(583)] = 15337,
  [SMALL_STATE(584)] = 15348,
  [SMALL_STATE(585)] = 15357,
  [SMALL_STATE(586)] = 15366,
  [SMALL_STATE(587)] = 15375,
  [SMALL_STATE(588)] = 15383,
  [SMALL_STATE(589)] = 15391,
  [SMALL_STATE(590)] = 15399,
  [SMALL_STATE(591)] = 15407,
  [SMALL_STATE(592)] = 15415,
  [SMALL_STATE(593)] = 15423,
  [SMALL_STATE(594)] = 15431,
  [SMALL_STATE(595)] = 15439,
  [SMALL_STATE(596)] = 15447,
  [SMALL_STATE(597)] = 15455,
  [SMALL_STATE(598)] = 15463,
  [SMALL_STATE(599)] = 15471,
  [SMALL_STATE(600)] = 15479,
  [SMALL_STATE(601)] = 15487,
  [SMALL_STATE(602)] = 15495,
  [SMALL_STATE(603)] = 15503,
  [SMALL_STATE(604)] = 15511,
  [SMALL_STATE(605)] = 15519,
  [SMALL_STATE(606)] = 15527,
  [SMALL_STATE(607)] = 15535,
  [SMALL_STATE(608)] = 15543,
  [SMALL_STATE(609)] = 15551,
  [SMALL_STATE(610)] = 15559,
  [SMALL_STATE(611)] = 15567,
  [SMALL_STATE(612)] = 15575,
  [SMALL_STATE(613)] = 15583,
  [SMALL_STATE(614)] = 15591,
  [SMALL_STATE(615)] = 15599,
  [SMALL_STATE(616)] = 15607,
  [SMALL_STATE(617)] = 15615,
  [SMALL_STATE(618)] = 15623,
  [SMALL_STATE(619)] = 15631,
  [SMALL_STATE(620)] = 15639,
  [SMALL_STATE(621)] = 15647,
  [SMALL_STATE(622)] = 15655,
  [SMALL_STATE(623)] = 15663,
  [SMALL_STATE(624)] = 15671,
  [SMALL_STATE(625)] = 15679,
  [SMALL_STATE(626)] = 15687,
  [SMALL_STATE(627)] = 15695,
  [SMALL_STATE(628)] = 15703,
  [SMALL_STATE(629)] = 15711,
  [SMALL_STATE(630)] = 15719,
  [SMALL_STATE(631)] = 15727,
  [SMALL_STATE(632)] = 15735,
  [SMALL_STATE(633)] = 15743,
  [SMALL_STATE(634)] = 15751,
  [SMALL_STATE(635)] = 15759,
  [SMALL_STATE(636)] = 15767,
  [SMALL_STATE(637)] = 15775,
  [SMALL_STATE(638)] = 15783,
  [SMALL_STATE(639)] = 15791,
  [SMALL_STATE(640)] = 15799,
  [SMALL_STATE(641)] = 15807,
  [SMALL_STATE(642)] = 15817,
  [SMALL_STATE(643)] = 15825,
  [SMALL_STATE(644)] = 15833,
  [SMALL_STATE(645)] = 15841,
  [SMALL_STATE(646)] = 15849,
  [SMALL_STATE(647)] = 15857,
  [SMALL_STATE(648)] = 15865,
  [SMALL_STATE(649)] = 15873,
  [SMALL_STATE(650)] = 15881,
  [SMALL_STATE(651)] = 15889,
  [SMALL_STATE(652)] = 15897,
  [SMALL_STATE(653)] = 15905,
  [SMALL_STATE(654)] = 15913,
  [SMALL_STATE(655)] = 15921,
  [SMALL_STATE(656)] = 15929,
  [SMALL_STATE(657)] = 15937,
  [SMALL_STATE(658)] = 15945,
  [SMALL_STATE(659)] = 15953,
  [SMALL_STATE(660)] = 15961,
  [SMALL_STATE(661)] = 15969,
  [SMALL_STATE(662)] = 15977,
  [SMALL_STATE(663)] = 15987,
  [SMALL_STATE(664)] = 15995,
  [SMALL_STATE(665)] = 16003,
  [SMALL_STATE(666)] = 16011,
  [SMALL_STATE(667)] = 16019,
  [SMALL_STATE(668)] = 16027,
  [SMALL_STATE(669)] = 16035,
  [SMALL_STATE(670)] = 16043,
  [SMALL_STATE(671)] = 16051,
  [SMALL_STATE(672)] = 16059,
  [SMALL_STATE(673)] = 16067,
  [SMALL_STATE(674)] = 16075,
  [SMALL_STATE(675)] = 16083,
  [SMALL_STATE(676)] = 16091,
  [SMALL_STATE(677)] = 16099,
  [SMALL_STATE(678)] = 16107,
  [SMALL_STATE(679)] = 16117,
  [SMALL_STATE(680)] = 16125,
  [SMALL_STATE(681)] = 16133,
  [SMALL_STATE(682)] = 16141,
  [SMALL_STATE(683)] = 16149,
  [SMALL_STATE(684)] = 16157,
  [SMALL_STATE(685)] = 16165,
  [SMALL_STATE(686)] = 16173,
  [SMALL_STATE(687)] = 16181,
  [SMALL_STATE(688)] = 16189,
  [SMALL_STATE(689)] = 16197,
  [SMALL_STATE(690)] = 16205,
  [SMALL_STATE(691)] = 16213,
  [SMALL_STATE(692)] = 16221,
  [SMALL_STATE(693)] = 16229,
  [SMALL_STATE(694)] = 16237,
  [SMALL_STATE(695)] = 16245,
  [SMALL_STATE(696)] = 16253,
  [SMALL_STATE(697)] = 16261,
  [SMALL_STATE(698)] = 16269,
  [SMALL_STATE(699)] = 16277,
  [SMALL_STATE(700)] = 16285,
  [SMALL_STATE(701)] = 16293,
  [SMALL_STATE(702)] = 16301,
  [SMALL_STATE(703)] = 16309,
  [SMALL_STATE(704)] = 16317,
  [SMALL_STATE(705)] = 16325,
  [SMALL_STATE(706)] = 16333,
  [SMALL_STATE(707)] = 16341,
  [SMALL_STATE(708)] = 16349,
  [SMALL_STATE(709)] = 16357,
  [SMALL_STATE(710)] = 16365,
  [SMALL_STATE(711)] = 16373,
  [SMALL_STATE(712)] = 16381,
  [SMALL_STATE(713)] = 16389,
  [SMALL_STATE(714)] = 16397,
  [SMALL_STATE(715)] = 16405,
  [SMALL_STATE(716)] = 16413,
  [SMALL_STATE(717)] = 16421,
  [SMALL_STATE(718)] = 16429,
  [SMALL_STATE(719)] = 16437,
  [SMALL_STATE(720)] = 16445,
  [SMALL_STATE(721)] = 16453,
  [SMALL_STATE(722)] = 16461,
  [SMALL_STATE(723)] = 16469,
  [SMALL_STATE(724)] = 16477,
  [SMALL_STATE(725)] = 16485,
  [SMALL_STATE(726)] = 16493,
  [SMALL_STATE(727)] = 16501,
  [SMALL_STATE(728)] = 16509,
  [SMALL_STATE(729)] = 16517,
  [SMALL_STATE(730)] = 16525,
  [SMALL_STATE(731)] = 16533,
  [SMALL_STATE(732)] = 16541,
  [SMALL_STATE(733)] = 16549,
  [SMALL_STATE(734)] = 16557,
  [SMALL_STATE(735)] = 16565,
  [SMALL_STATE(736)] = 16573,
  [SMALL_STATE(737)] = 16581,
  [SMALL_STATE(738)] = 16589,
  [SMALL_STATE(739)] = 16597,
  [SMALL_STATE(740)] = 16605,
  [SMALL_STATE(741)] = 16613,
  [SMALL_STATE(742)] = 16621,
  [SMALL_STATE(743)] = 16629,
  [SMALL_STATE(744)] = 16637,
  [SMALL_STATE(745)] = 16645,
  [SMALL_STATE(746)] = 16653,
  [SMALL_STATE(747)] = 16661,
  [SMALL_STATE(748)] = 16669,
  [SMALL_STATE(749)] = 16677,
  [SMALL_STATE(750)] = 16685,
  [SMALL_STATE(751)] = 16693,
  [SMALL_STATE(752)] = 16701,
  [SMALL_STATE(753)] = 16709,
  [SMALL_STATE(754)] = 16717,
  [SMALL_STATE(755)] = 16725,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(346),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(52),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(346),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(52),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(563),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(93),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(617),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(350),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(65),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(346),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(350),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(65),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(30),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(350),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(65),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(551),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(38),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(705),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(704),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(697),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(695),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(694),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(688),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(486),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(677),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(490),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(45),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(157),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 6),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(140),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(134),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(194),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(698),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(645),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(587),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(174),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(544),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(279),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(149),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(533),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(386),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(624),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(660),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(151),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(150),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(142),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(142),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(131),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(137),
  [986] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(465),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(418),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(14),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(341),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(520),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(749),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(360),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(368),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1536] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
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
