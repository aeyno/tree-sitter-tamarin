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
#define STATE_COUNT 753
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 15,
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
  [31] = 28,
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
  [45] = 32,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 33,
  [50] = 42,
  [51] = 51,
  [52] = 38,
  [53] = 37,
  [54] = 54,
  [55] = 34,
  [56] = 36,
  [57] = 57,
  [58] = 58,
  [59] = 46,
  [60] = 60,
  [61] = 48,
  [62] = 62,
  [63] = 47,
  [64] = 54,
  [65] = 65,
  [66] = 44,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 57,
  [73] = 68,
  [74] = 74,
  [75] = 58,
  [76] = 76,
  [77] = 77,
  [78] = 69,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 87,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 88,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 112,
  [116] = 107,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 112,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 111,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 119,
  [131] = 131,
  [132] = 111,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 35,
  [148] = 148,
  [149] = 143,
  [150] = 150,
  [151] = 151,
  [152] = 151,
  [153] = 153,
  [154] = 39,
  [155] = 155,
  [156] = 156,
  [157] = 153,
  [158] = 150,
  [159] = 153,
  [160] = 150,
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
  [175] = 60,
  [176] = 176,
  [177] = 43,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 90,
  [182] = 182,
  [183] = 74,
  [184] = 184,
  [185] = 185,
  [186] = 94,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 188,
  [197] = 192,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 96,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 91,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 39,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 208,
  [221] = 221,
  [222] = 222,
  [223] = 217,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 222,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 212,
  [235] = 213,
  [236] = 236,
  [237] = 214,
  [238] = 98,
  [239] = 83,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 105,
  [244] = 244,
  [245] = 102,
  [246] = 100,
  [247] = 104,
  [248] = 92,
  [249] = 249,
  [250] = 250,
  [251] = 80,
  [252] = 249,
  [253] = 86,
  [254] = 89,
  [255] = 101,
  [256] = 256,
  [257] = 106,
  [258] = 79,
  [259] = 99,
  [260] = 81,
  [261] = 231,
  [262] = 262,
  [263] = 263,
  [264] = 195,
  [265] = 180,
  [266] = 188,
  [267] = 180,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 188,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 195,
  [279] = 187,
  [280] = 192,
  [281] = 281,
  [282] = 282,
  [283] = 263,
  [284] = 284,
  [285] = 190,
  [286] = 274,
  [287] = 287,
  [288] = 192,
  [289] = 284,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 272,
  [295] = 187,
  [296] = 296,
  [297] = 297,
  [298] = 60,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 301,
  [304] = 304,
  [305] = 305,
  [306] = 305,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 307,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 297,
  [317] = 309,
  [318] = 314,
  [319] = 302,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 43,
  [324] = 299,
  [325] = 310,
  [326] = 326,
  [327] = 327,
  [328] = 326,
  [329] = 315,
  [330] = 320,
  [331] = 331,
  [332] = 304,
  [333] = 313,
  [334] = 300,
  [335] = 331,
  [336] = 336,
  [337] = 312,
  [338] = 321,
  [339] = 74,
  [340] = 340,
  [341] = 341,
  [342] = 340,
  [343] = 343,
  [344] = 195,
  [345] = 345,
  [346] = 180,
  [347] = 76,
  [348] = 71,
  [349] = 349,
  [350] = 341,
  [351] = 345,
  [352] = 77,
  [353] = 353,
  [354] = 187,
  [355] = 85,
  [356] = 89,
  [357] = 105,
  [358] = 83,
  [359] = 80,
  [360] = 360,
  [361] = 91,
  [362] = 92,
  [363] = 104,
  [364] = 101,
  [365] = 106,
  [366] = 360,
  [367] = 99,
  [368] = 79,
  [369] = 100,
  [370] = 102,
  [371] = 98,
  [372] = 250,
  [373] = 97,
  [374] = 81,
  [375] = 84,
  [376] = 93,
  [377] = 86,
  [378] = 378,
  [379] = 378,
  [380] = 113,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 43,
  [385] = 385,
  [386] = 386,
  [387] = 114,
  [388] = 123,
  [389] = 236,
  [390] = 390,
  [391] = 118,
  [392] = 102,
  [393] = 393,
  [394] = 79,
  [395] = 99,
  [396] = 396,
  [397] = 100,
  [398] = 250,
  [399] = 89,
  [400] = 136,
  [401] = 393,
  [402] = 402,
  [403] = 74,
  [404] = 155,
  [405] = 249,
  [406] = 98,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 381,
  [413] = 140,
  [414] = 382,
  [415] = 415,
  [416] = 386,
  [417] = 390,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 141,
  [422] = 422,
  [423] = 423,
  [424] = 137,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 418,
  [430] = 430,
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
  [455] = 447,
  [456] = 456,
  [457] = 457,
  [458] = 443,
  [459] = 433,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 434,
  [465] = 453,
  [466] = 466,
  [467] = 467,
  [468] = 445,
  [469] = 446,
  [470] = 448,
  [471] = 449,
  [472] = 450,
  [473] = 451,
  [474] = 448,
  [475] = 438,
  [476] = 452,
  [477] = 456,
  [478] = 478,
  [479] = 479,
  [480] = 460,
  [481] = 449,
  [482] = 450,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 445,
  [492] = 446,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 454,
  [499] = 499,
  [500] = 500,
  [501] = 499,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 432,
  [506] = 496,
  [507] = 507,
  [508] = 508,
  [509] = 463,
  [510] = 462,
  [511] = 461,
  [512] = 512,
  [513] = 513,
  [514] = 508,
  [515] = 515,
  [516] = 451,
  [517] = 503,
  [518] = 452,
  [519] = 500,
  [520] = 439,
  [521] = 521,
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
  [534] = 529,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 522,
  [540] = 540,
  [541] = 541,
  [542] = 293,
  [543] = 540,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 528,
  [550] = 531,
  [551] = 537,
  [552] = 415,
  [553] = 553,
  [554] = 538,
  [555] = 555,
  [556] = 277,
  [557] = 557,
  [558] = 407,
  [559] = 559,
  [560] = 560,
  [561] = 426,
  [562] = 409,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 428,
  [567] = 565,
  [568] = 431,
  [569] = 269,
  [570] = 565,
  [571] = 268,
  [572] = 536,
  [573] = 521,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 521,
  [578] = 578,
  [579] = 96,
  [580] = 580,
  [581] = 581,
  [582] = 531,
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
  [607] = 584,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 586,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 597,
  [623] = 614,
  [624] = 624,
  [625] = 625,
  [626] = 584,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 594,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 616,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 629,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 643,
  [653] = 653,
  [654] = 636,
  [655] = 586,
  [656] = 656,
  [657] = 657,
  [658] = 617,
  [659] = 659,
  [660] = 619,
  [661] = 661,
  [662] = 662,
  [663] = 650,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 586,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 588,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 621,
  [676] = 676,
  [677] = 611,
  [678] = 612,
  [679] = 679,
  [680] = 680,
  [681] = 648,
  [682] = 682,
  [683] = 683,
  [684] = 634,
  [685] = 620,
  [686] = 683,
  [687] = 687,
  [688] = 688,
  [689] = 661,
  [690] = 690,
  [691] = 691,
  [692] = 588,
  [693] = 693,
  [694] = 694,
  [695] = 635,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 688,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 645,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 606,
  [712] = 710,
  [713] = 713,
  [714] = 617,
  [715] = 680,
  [716] = 665,
  [717] = 647,
  [718] = 619,
  [719] = 719,
  [720] = 720,
  [721] = 697,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 642,
  [727] = 646,
  [728] = 674,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 703,
  [734] = 734,
  [735] = 613,
  [736] = 736,
  [737] = 725,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 640,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 720,
  [746] = 743,
  [747] = 719,
  [748] = 664,
  [749] = 687,
  [750] = 587,
  [751] = 751,
  [752] = 618,
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
      if (lookahead == 'a') ADVANCE(275);
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
      if (lookahead == 'u') ADVANCE(402);
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
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(56)
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
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(68)
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
      if (lookahead == '\\') SKIP(24)
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
      if (lookahead == '.') ADVANCE(791);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(849);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '>') ADVANCE(850);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(16)
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
      if (lookahead == 'm') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'q') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(402);
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
      if (lookahead == '\\') SKIP(18)
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
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(438);
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
      if (lookahead == '\\') SKIP(22)
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
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(404);
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
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(861);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(412);
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
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(448);
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
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(102);
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
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(413);
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
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(420);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(420);
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
      if (lookahead == 'g') ADVANCE(231);
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
      if (lookahead == 'h') ADVANCE(422);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(461);
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
      if (lookahead == 'i') ADVANCE(403);
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
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(410);
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
      if (lookahead == 'i') ADVANCE(415);
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
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(430);
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
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(449);
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
      if (lookahead == 'l') ADVANCE(433);
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
      if (lookahead == 'm') ADVANCE(184);
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
      if (lookahead == 'q') ADVANCE(451);
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
      if (lookahead == 'n') ADVANCE(431);
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
      if (lookahead == 'o') ADVANCE(378);
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
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(444);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(447);
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
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(233);
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
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(750);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(276);
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
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 461:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 462:
      if (lookahead == 'x') ADVANCE(756);
      END_STATE();
    case 463:
      if (lookahead == 'x') ADVANCE(421);
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
      if (lookahead == 'u') ADVANCE(418);
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
  [30] = {.lex_state = 51, .external_lex_state = 1},
  [31] = {.lex_state = 52, .external_lex_state = 1},
  [32] = {.lex_state = 47, .external_lex_state = 1},
  [33] = {.lex_state = 47, .external_lex_state = 1},
  [34] = {.lex_state = 47, .external_lex_state = 1},
  [35] = {.lex_state = 51, .external_lex_state = 1},
  [36] = {.lex_state = 47, .external_lex_state = 1},
  [37] = {.lex_state = 47, .external_lex_state = 1},
  [38] = {.lex_state = 47, .external_lex_state = 1},
  [39] = {.lex_state = 48, .external_lex_state = 1},
  [40] = {.lex_state = 52, .external_lex_state = 1},
  [41] = {.lex_state = 52, .external_lex_state = 1},
  [42] = {.lex_state = 47, .external_lex_state = 1},
  [43] = {.lex_state = 49, .external_lex_state = 1},
  [44] = {.lex_state = 47, .external_lex_state = 1},
  [45] = {.lex_state = 52, .external_lex_state = 1},
  [46] = {.lex_state = 47, .external_lex_state = 1},
  [47] = {.lex_state = 47, .external_lex_state = 1},
  [48] = {.lex_state = 47, .external_lex_state = 1},
  [49] = {.lex_state = 52, .external_lex_state = 1},
  [50] = {.lex_state = 52, .external_lex_state = 1},
  [51] = {.lex_state = 56, .external_lex_state = 1},
  [52] = {.lex_state = 52, .external_lex_state = 1},
  [53] = {.lex_state = 52, .external_lex_state = 1},
  [54] = {.lex_state = 47, .external_lex_state = 1},
  [55] = {.lex_state = 52, .external_lex_state = 1},
  [56] = {.lex_state = 52, .external_lex_state = 1},
  [57] = {.lex_state = 47, .external_lex_state = 1},
  [58] = {.lex_state = 47, .external_lex_state = 1},
  [59] = {.lex_state = 52, .external_lex_state = 1},
  [60] = {.lex_state = 48, .external_lex_state = 1},
  [61] = {.lex_state = 52, .external_lex_state = 1},
  [62] = {.lex_state = 47, .external_lex_state = 1},
  [63] = {.lex_state = 52, .external_lex_state = 1},
  [64] = {.lex_state = 52, .external_lex_state = 1},
  [65] = {.lex_state = 56, .external_lex_state = 1},
  [66] = {.lex_state = 52, .external_lex_state = 1},
  [67] = {.lex_state = 56, .external_lex_state = 1},
  [68] = {.lex_state = 47, .external_lex_state = 1},
  [69] = {.lex_state = 47, .external_lex_state = 1},
  [70] = {.lex_state = 52, .external_lex_state = 1},
  [71] = {.lex_state = 48, .external_lex_state = 1},
  [72] = {.lex_state = 52, .external_lex_state = 1},
  [73] = {.lex_state = 52, .external_lex_state = 1},
  [74] = {.lex_state = 48, .external_lex_state = 1},
  [75] = {.lex_state = 52, .external_lex_state = 1},
  [76] = {.lex_state = 48, .external_lex_state = 1},
  [77] = {.lex_state = 48, .external_lex_state = 1},
  [78] = {.lex_state = 52, .external_lex_state = 1},
  [79] = {.lex_state = 48, .external_lex_state = 1},
  [80] = {.lex_state = 48, .external_lex_state = 1},
  [81] = {.lex_state = 48, .external_lex_state = 1},
  [82] = {.lex_state = 53, .external_lex_state = 1},
  [83] = {.lex_state = 48, .external_lex_state = 1},
  [84] = {.lex_state = 48, .external_lex_state = 1},
  [85] = {.lex_state = 48, .external_lex_state = 1},
  [86] = {.lex_state = 48, .external_lex_state = 1},
  [87] = {.lex_state = 53, .external_lex_state = 1},
  [88] = {.lex_state = 53, .external_lex_state = 1},
  [89] = {.lex_state = 48, .external_lex_state = 1},
  [90] = {.lex_state = 51, .external_lex_state = 1},
  [91] = {.lex_state = 48, .external_lex_state = 1},
  [92] = {.lex_state = 48, .external_lex_state = 1},
  [93] = {.lex_state = 48, .external_lex_state = 1},
  [94] = {.lex_state = 51, .external_lex_state = 1},
  [95] = {.lex_state = 53, .external_lex_state = 1},
  [96] = {.lex_state = 51, .external_lex_state = 1},
  [97] = {.lex_state = 48, .external_lex_state = 1},
  [98] = {.lex_state = 48, .external_lex_state = 1},
  [99] = {.lex_state = 48, .external_lex_state = 1},
  [100] = {.lex_state = 48, .external_lex_state = 1},
  [101] = {.lex_state = 48, .external_lex_state = 1},
  [102] = {.lex_state = 48, .external_lex_state = 1},
  [103] = {.lex_state = 53, .external_lex_state = 1},
  [104] = {.lex_state = 48, .external_lex_state = 1},
  [105] = {.lex_state = 48, .external_lex_state = 1},
  [106] = {.lex_state = 48, .external_lex_state = 1},
  [107] = {.lex_state = 53, .external_lex_state = 1},
  [108] = {.lex_state = 68, .external_lex_state = 1},
  [109] = {.lex_state = 53, .external_lex_state = 1},
  [110] = {.lex_state = 53, .external_lex_state = 1},
  [111] = {.lex_state = 53, .external_lex_state = 1},
  [112] = {.lex_state = 53, .external_lex_state = 1},
  [113] = {.lex_state = 48, .external_lex_state = 1},
  [114] = {.lex_state = 48, .external_lex_state = 1},
  [115] = {.lex_state = 53, .external_lex_state = 1},
  [116] = {.lex_state = 53, .external_lex_state = 1},
  [117] = {.lex_state = 68, .external_lex_state = 1},
  [118] = {.lex_state = 48, .external_lex_state = 1},
  [119] = {.lex_state = 53, .external_lex_state = 1},
  [120] = {.lex_state = 53, .external_lex_state = 1},
  [121] = {.lex_state = 68, .external_lex_state = 1},
  [122] = {.lex_state = 53, .external_lex_state = 1},
  [123] = {.lex_state = 48, .external_lex_state = 1},
  [124] = {.lex_state = 46, .external_lex_state = 1},
  [125] = {.lex_state = 68, .external_lex_state = 1},
  [126] = {.lex_state = 53, .external_lex_state = 1},
  [127] = {.lex_state = 53, .external_lex_state = 1},
  [128] = {.lex_state = 46, .external_lex_state = 1},
  [129] = {.lex_state = 46, .external_lex_state = 1},
  [130] = {.lex_state = 53, .external_lex_state = 1},
  [131] = {.lex_state = 53, .external_lex_state = 1},
  [132] = {.lex_state = 53, .external_lex_state = 1},
  [133] = {.lex_state = 53, .external_lex_state = 1},
  [134] = {.lex_state = 53, .external_lex_state = 1},
  [135] = {.lex_state = 50, .external_lex_state = 1},
  [136] = {.lex_state = 48, .external_lex_state = 1},
  [137] = {.lex_state = 47, .external_lex_state = 1},
  [138] = {.lex_state = 53, .external_lex_state = 1},
  [139] = {.lex_state = 53, .external_lex_state = 1},
  [140] = {.lex_state = 47, .external_lex_state = 1},
  [141] = {.lex_state = 47, .external_lex_state = 1},
  [142] = {.lex_state = 53, .external_lex_state = 1},
  [143] = {.lex_state = 53, .external_lex_state = 1},
  [144] = {.lex_state = 48, .external_lex_state = 1},
  [145] = {.lex_state = 69, .external_lex_state = 1},
  [146] = {.lex_state = 53, .external_lex_state = 1},
  [147] = {.lex_state = 48, .external_lex_state = 1},
  [148] = {.lex_state = 69, .external_lex_state = 1},
  [149] = {.lex_state = 53, .external_lex_state = 1},
  [150] = {.lex_state = 53, .external_lex_state = 1},
  [151] = {.lex_state = 53, .external_lex_state = 1},
  [152] = {.lex_state = 53, .external_lex_state = 1},
  [153] = {.lex_state = 53, .external_lex_state = 1},
  [154] = {.lex_state = 56, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 53, .external_lex_state = 1},
  [157] = {.lex_state = 53, .external_lex_state = 1},
  [158] = {.lex_state = 53, .external_lex_state = 1},
  [159] = {.lex_state = 53, .external_lex_state = 1},
  [160] = {.lex_state = 53, .external_lex_state = 1},
  [161] = {.lex_state = 49, .external_lex_state = 1},
  [162] = {.lex_state = 49, .external_lex_state = 1},
  [163] = {.lex_state = 69, .external_lex_state = 1},
  [164] = {.lex_state = 51, .external_lex_state = 1},
  [165] = {.lex_state = 48, .external_lex_state = 1},
  [166] = {.lex_state = 48, .external_lex_state = 1},
  [167] = {.lex_state = 70, .external_lex_state = 1},
  [168] = {.lex_state = 49, .external_lex_state = 1},
  [169] = {.lex_state = 54, .external_lex_state = 1},
  [170] = {.lex_state = 70, .external_lex_state = 1},
  [171] = {.lex_state = 70, .external_lex_state = 1},
  [172] = {.lex_state = 70, .external_lex_state = 1},
  [173] = {.lex_state = 53, .external_lex_state = 1},
  [174] = {.lex_state = 53, .external_lex_state = 1},
  [175] = {.lex_state = 56, .external_lex_state = 1},
  [176] = {.lex_state = 49, .external_lex_state = 1},
  [177] = {.lex_state = 56, .external_lex_state = 1},
  [178] = {.lex_state = 51, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 51, .external_lex_state = 1},
  [181] = {.lex_state = 48, .external_lex_state = 1},
  [182] = {.lex_state = 56, .external_lex_state = 1},
  [183] = {.lex_state = 56, .external_lex_state = 1},
  [184] = {.lex_state = 56, .external_lex_state = 1},
  [185] = {.lex_state = 56, .external_lex_state = 1},
  [186] = {.lex_state = 48, .external_lex_state = 1},
  [187] = {.lex_state = 51, .external_lex_state = 1},
  [188] = {.lex_state = 51, .external_lex_state = 1},
  [189] = {.lex_state = 56, .external_lex_state = 1},
  [190] = {.lex_state = 51, .external_lex_state = 1},
  [191] = {.lex_state = 56, .external_lex_state = 1},
  [192] = {.lex_state = 51, .external_lex_state = 1},
  [193] = {.lex_state = 56, .external_lex_state = 1},
  [194] = {.lex_state = 56, .external_lex_state = 1},
  [195] = {.lex_state = 51, .external_lex_state = 1},
  [196] = {.lex_state = 51, .external_lex_state = 1},
  [197] = {.lex_state = 51, .external_lex_state = 1},
  [198] = {.lex_state = 56, .external_lex_state = 1},
  [199] = {.lex_state = 56, .external_lex_state = 1},
  [200] = {.lex_state = 56, .external_lex_state = 1},
  [201] = {.lex_state = 56, .external_lex_state = 1},
  [202] = {.lex_state = 71, .external_lex_state = 1},
  [203] = {.lex_state = 48, .external_lex_state = 1},
  [204] = {.lex_state = 56, .external_lex_state = 1},
  [205] = {.lex_state = 56, .external_lex_state = 1},
  [206] = {.lex_state = 56, .external_lex_state = 1},
  [207] = {.lex_state = 56, .external_lex_state = 1},
  [208] = {.lex_state = 56, .external_lex_state = 1},
  [209] = {.lex_state = 51, .external_lex_state = 1},
  [210] = {.lex_state = 56, .external_lex_state = 1},
  [211] = {.lex_state = 71, .external_lex_state = 1},
  [212] = {.lex_state = 56, .external_lex_state = 1},
  [213] = {.lex_state = 56, .external_lex_state = 1},
  [214] = {.lex_state = 56, .external_lex_state = 1},
  [215] = {.lex_state = 55, .external_lex_state = 1},
  [216] = {.lex_state = 51, .external_lex_state = 1},
  [217] = {.lex_state = 71, .external_lex_state = 1},
  [218] = {.lex_state = 54, .external_lex_state = 1},
  [219] = {.lex_state = 51, .external_lex_state = 1},
  [220] = {.lex_state = 71, .external_lex_state = 1},
  [221] = {.lex_state = 51, .external_lex_state = 1},
  [222] = {.lex_state = 56, .external_lex_state = 1},
  [223] = {.lex_state = 56, .external_lex_state = 1},
  [224] = {.lex_state = 51, .external_lex_state = 1},
  [225] = {.lex_state = 51, .external_lex_state = 1},
  [226] = {.lex_state = 56, .external_lex_state = 1},
  [227] = {.lex_state = 51, .external_lex_state = 1},
  [228] = {.lex_state = 56, .external_lex_state = 1},
  [229] = {.lex_state = 71, .external_lex_state = 1},
  [230] = {.lex_state = 54, .external_lex_state = 1},
  [231] = {.lex_state = 71, .external_lex_state = 1},
  [232] = {.lex_state = 51, .external_lex_state = 1},
  [233] = {.lex_state = 56, .external_lex_state = 1},
  [234] = {.lex_state = 71, .external_lex_state = 1},
  [235] = {.lex_state = 71, .external_lex_state = 1},
  [236] = {.lex_state = 54, .external_lex_state = 1},
  [237] = {.lex_state = 71, .external_lex_state = 1},
  [238] = {.lex_state = 56, .external_lex_state = 1},
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
  [249] = {.lex_state = 51, .external_lex_state = 1},
  [250] = {.lex_state = 51, .external_lex_state = 1},
  [251] = {.lex_state = 56, .external_lex_state = 1},
  [252] = {.lex_state = 51, .external_lex_state = 1},
  [253] = {.lex_state = 56, .external_lex_state = 1},
  [254] = {.lex_state = 56, .external_lex_state = 1},
  [255] = {.lex_state = 56, .external_lex_state = 1},
  [256] = {.lex_state = 51, .external_lex_state = 1},
  [257] = {.lex_state = 56, .external_lex_state = 1},
  [258] = {.lex_state = 56, .external_lex_state = 1},
  [259] = {.lex_state = 56, .external_lex_state = 1},
  [260] = {.lex_state = 56, .external_lex_state = 1},
  [261] = {.lex_state = 56, .external_lex_state = 1},
  [262] = {.lex_state = 56, .external_lex_state = 1},
  [263] = {.lex_state = 49, .external_lex_state = 1},
  [264] = {.lex_state = 41, .external_lex_state = 1},
  [265] = {.lex_state = 41, .external_lex_state = 1},
  [266] = {.lex_state = 41, .external_lex_state = 1},
  [267] = {.lex_state = 51, .external_lex_state = 1},
  [268] = {.lex_state = 56, .external_lex_state = 1},
  [269] = {.lex_state = 56, .external_lex_state = 1},
  [270] = {.lex_state = 51, .external_lex_state = 1},
  [271] = {.lex_state = 56, .external_lex_state = 1},
  [272] = {.lex_state = 53, .external_lex_state = 1},
  [273] = {.lex_state = 41, .external_lex_state = 1},
  [274] = {.lex_state = 49, .external_lex_state = 1},
  [275] = {.lex_state = 56, .external_lex_state = 1},
  [276] = {.lex_state = 56, .external_lex_state = 1},
  [277] = {.lex_state = 56, .external_lex_state = 1},
  [278] = {.lex_state = 51, .external_lex_state = 1},
  [279] = {.lex_state = 41, .external_lex_state = 1},
  [280] = {.lex_state = 41, .external_lex_state = 1},
  [281] = {.lex_state = 49, .external_lex_state = 1},
  [282] = {.lex_state = 56, .external_lex_state = 1},
  [283] = {.lex_state = 56, .external_lex_state = 1},
  [284] = {.lex_state = 49, .external_lex_state = 1},
  [285] = {.lex_state = 41, .external_lex_state = 1},
  [286] = {.lex_state = 56, .external_lex_state = 1},
  [287] = {.lex_state = 56, .external_lex_state = 1},
  [288] = {.lex_state = 41, .external_lex_state = 1},
  [289] = {.lex_state = 49, .external_lex_state = 1},
  [290] = {.lex_state = 53, .external_lex_state = 1},
  [291] = {.lex_state = 49, .external_lex_state = 1},
  [292] = {.lex_state = 56, .external_lex_state = 1},
  [293] = {.lex_state = 56, .external_lex_state = 1},
  [294] = {.lex_state = 53, .external_lex_state = 1},
  [295] = {.lex_state = 51, .external_lex_state = 1},
  [296] = {.lex_state = 56, .external_lex_state = 1},
  [297] = {.lex_state = 44, .external_lex_state = 1},
  [298] = {.lex_state = 55, .external_lex_state = 1},
  [299] = {.lex_state = 45, .external_lex_state = 1},
  [300] = {.lex_state = 53, .external_lex_state = 1},
  [301] = {.lex_state = 44, .external_lex_state = 1},
  [302] = {.lex_state = 49, .external_lex_state = 1},
  [303] = {.lex_state = 44, .external_lex_state = 1},
  [304] = {.lex_state = 44, .external_lex_state = 1},
  [305] = {.lex_state = 44, .external_lex_state = 1},
  [306] = {.lex_state = 44, .external_lex_state = 1},
  [307] = {.lex_state = 44, .external_lex_state = 1},
  [308] = {.lex_state = 49, .external_lex_state = 1},
  [309] = {.lex_state = 44, .external_lex_state = 1},
  [310] = {.lex_state = 44, .external_lex_state = 1},
  [311] = {.lex_state = 44, .external_lex_state = 1},
  [312] = {.lex_state = 45, .external_lex_state = 1},
  [313] = {.lex_state = 44, .external_lex_state = 1},
  [314] = {.lex_state = 44, .external_lex_state = 1},
  [315] = {.lex_state = 45, .external_lex_state = 1},
  [316] = {.lex_state = 44, .external_lex_state = 1},
  [317] = {.lex_state = 44, .external_lex_state = 1},
  [318] = {.lex_state = 44, .external_lex_state = 1},
  [319] = {.lex_state = 49, .external_lex_state = 1},
  [320] = {.lex_state = 45, .external_lex_state = 1},
  [321] = {.lex_state = 44, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 55, .external_lex_state = 1},
  [324] = {.lex_state = 45, .external_lex_state = 1},
  [325] = {.lex_state = 44, .external_lex_state = 1},
  [326] = {.lex_state = 44, .external_lex_state = 1},
  [327] = {.lex_state = 49, .external_lex_state = 1},
  [328] = {.lex_state = 44, .external_lex_state = 1},
  [329] = {.lex_state = 45, .external_lex_state = 1},
  [330] = {.lex_state = 45, .external_lex_state = 1},
  [331] = {.lex_state = 45, .external_lex_state = 1},
  [332] = {.lex_state = 44, .external_lex_state = 1},
  [333] = {.lex_state = 44, .external_lex_state = 1},
  [334] = {.lex_state = 53, .external_lex_state = 1},
  [335] = {.lex_state = 45, .external_lex_state = 1},
  [336] = {.lex_state = 49, .external_lex_state = 1},
  [337] = {.lex_state = 45, .external_lex_state = 1},
  [338] = {.lex_state = 44, .external_lex_state = 1},
  [339] = {.lex_state = 55, .external_lex_state = 1},
  [340] = {.lex_state = 45, .external_lex_state = 1},
  [341] = {.lex_state = 44, .external_lex_state = 1},
  [342] = {.lex_state = 44, .external_lex_state = 1},
  [343] = {.lex_state = 49, .external_lex_state = 1},
  [344] = {.lex_state = 41, .external_lex_state = 1},
  [345] = {.lex_state = 49, .external_lex_state = 1},
  [346] = {.lex_state = 41, .external_lex_state = 1},
  [347] = {.lex_state = 55, .external_lex_state = 1},
  [348] = {.lex_state = 55, .external_lex_state = 1},
  [349] = {.lex_state = 49, .external_lex_state = 1},
  [350] = {.lex_state = 45, .external_lex_state = 1},
  [351] = {.lex_state = 49, .external_lex_state = 1},
  [352] = {.lex_state = 55, .external_lex_state = 1},
  [353] = {.lex_state = 49, .external_lex_state = 1},
  [354] = {.lex_state = 41, .external_lex_state = 1},
  [355] = {.lex_state = 55, .external_lex_state = 1},
  [356] = {.lex_state = 55, .external_lex_state = 1},
  [357] = {.lex_state = 55, .external_lex_state = 1},
  [358] = {.lex_state = 55, .external_lex_state = 1},
  [359] = {.lex_state = 55, .external_lex_state = 1},
  [360] = {.lex_state = 44, .external_lex_state = 1},
  [361] = {.lex_state = 55, .external_lex_state = 1},
  [362] = {.lex_state = 55, .external_lex_state = 1},
  [363] = {.lex_state = 55, .external_lex_state = 1},
  [364] = {.lex_state = 55, .external_lex_state = 1},
  [365] = {.lex_state = 55, .external_lex_state = 1},
  [366] = {.lex_state = 44, .external_lex_state = 1},
  [367] = {.lex_state = 55, .external_lex_state = 1},
  [368] = {.lex_state = 55, .external_lex_state = 1},
  [369] = {.lex_state = 55, .external_lex_state = 1},
  [370] = {.lex_state = 55, .external_lex_state = 1},
  [371] = {.lex_state = 55, .external_lex_state = 1},
  [372] = {.lex_state = 51, .external_lex_state = 1},
  [373] = {.lex_state = 55, .external_lex_state = 1},
  [374] = {.lex_state = 55, .external_lex_state = 1},
  [375] = {.lex_state = 55, .external_lex_state = 1},
  [376] = {.lex_state = 55, .external_lex_state = 1},
  [377] = {.lex_state = 55, .external_lex_state = 1},
  [378] = {.lex_state = 49, .external_lex_state = 1},
  [379] = {.lex_state = 49, .external_lex_state = 1},
  [380] = {.lex_state = 55, .external_lex_state = 1},
  [381] = {.lex_state = 0, .external_lex_state = 1},
  [382] = {.lex_state = 0, .external_lex_state = 1},
  [383] = {.lex_state = 53, .external_lex_state = 1},
  [384] = {.lex_state = 53, .external_lex_state = 1},
  [385] = {.lex_state = 47, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 55, .external_lex_state = 1},
  [388] = {.lex_state = 55, .external_lex_state = 1},
  [389] = {.lex_state = 53, .external_lex_state = 1},
  [390] = {.lex_state = 0, .external_lex_state = 1},
  [391] = {.lex_state = 55, .external_lex_state = 1},
  [392] = {.lex_state = 53, .external_lex_state = 1},
  [393] = {.lex_state = 44, .external_lex_state = 1},
  [394] = {.lex_state = 53, .external_lex_state = 1},
  [395] = {.lex_state = 53, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 53, .external_lex_state = 1},
  [398] = {.lex_state = 41, .external_lex_state = 1},
  [399] = {.lex_state = 53, .external_lex_state = 1},
  [400] = {.lex_state = 55, .external_lex_state = 1},
  [401] = {.lex_state = 44, .external_lex_state = 1},
  [402] = {.lex_state = 53, .external_lex_state = 1},
  [403] = {.lex_state = 53, .external_lex_state = 1},
  [404] = {.lex_state = 53, .external_lex_state = 1},
  [405] = {.lex_state = 47, .external_lex_state = 1},
  [406] = {.lex_state = 53, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 49, .external_lex_state = 1},
  [409] = {.lex_state = 0, .external_lex_state = 1},
  [410] = {.lex_state = 49, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 41, .external_lex_state = 1},
  [413] = {.lex_state = 50, .external_lex_state = 1},
  [414] = {.lex_state = 41, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 41, .external_lex_state = 1},
  [417] = {.lex_state = 41, .external_lex_state = 1},
  [418] = {.lex_state = 48, .external_lex_state = 1},
  [419] = {.lex_state = 53, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 50, .external_lex_state = 1},
  [422] = {.lex_state = 0, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 50, .external_lex_state = 1},
  [425] = {.lex_state = 50, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 48, .external_lex_state = 1},
  [428] = {.lex_state = 0, .external_lex_state = 1},
  [429] = {.lex_state = 48, .external_lex_state = 1},
  [430] = {.lex_state = 50, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 0, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 49, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 53, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 53, .external_lex_state = 1},
  [441] = {.lex_state = 53, .external_lex_state = 1},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 0, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 0, .external_lex_state = 1},
  [448] = {.lex_state = 0, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 0, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 0, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 0, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 0, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 0, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 49, .external_lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 1},
  [466] = {.lex_state = 53, .external_lex_state = 1},
  [467] = {.lex_state = 53, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 0, .external_lex_state = 1},
  [471] = {.lex_state = 0, .external_lex_state = 1},
  [472] = {.lex_state = 0, .external_lex_state = 1},
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
  [483] = {.lex_state = 49, .external_lex_state = 1},
  [484] = {.lex_state = 49, .external_lex_state = 1},
  [485] = {.lex_state = 0, .external_lex_state = 1},
  [486] = {.lex_state = 0, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 53, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 0, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 0, .external_lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 1},
  [496] = {.lex_state = 0, .external_lex_state = 1},
  [497] = {.lex_state = 42, .external_lex_state = 1},
  [498] = {.lex_state = 41, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 49, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 0, .external_lex_state = 1},
  [503] = {.lex_state = 0, .external_lex_state = 1},
  [504] = {.lex_state = 53, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 0, .external_lex_state = 1},
  [507] = {.lex_state = 49, .external_lex_state = 1},
  [508] = {.lex_state = 0, .external_lex_state = 1},
  [509] = {.lex_state = 0, .external_lex_state = 1},
  [510] = {.lex_state = 41, .external_lex_state = 1},
  [511] = {.lex_state = 0, .external_lex_state = 1},
  [512] = {.lex_state = 53, .external_lex_state = 1},
  [513] = {.lex_state = 0, .external_lex_state = 1},
  [514] = {.lex_state = 0, .external_lex_state = 1},
  [515] = {.lex_state = 0, .external_lex_state = 1},
  [516] = {.lex_state = 0, .external_lex_state = 1},
  [517] = {.lex_state = 0, .external_lex_state = 1},
  [518] = {.lex_state = 0, .external_lex_state = 1},
  [519] = {.lex_state = 49, .external_lex_state = 1},
  [520] = {.lex_state = 41, .external_lex_state = 1},
  [521] = {.lex_state = 49, .external_lex_state = 1},
  [522] = {.lex_state = 41, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 0, .external_lex_state = 1},
  [525] = {.lex_state = 42, .external_lex_state = 1},
  [526] = {.lex_state = 0, .external_lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 1},
  [528] = {.lex_state = 41, .external_lex_state = 1},
  [529] = {.lex_state = 41, .external_lex_state = 1},
  [530] = {.lex_state = 0, .external_lex_state = 1},
  [531] = {.lex_state = 49, .external_lex_state = 1},
  [532] = {.lex_state = 53, .external_lex_state = 1},
  [533] = {.lex_state = 0, .external_lex_state = 1},
  [534] = {.lex_state = 41, .external_lex_state = 1},
  [535] = {.lex_state = 0, .external_lex_state = 1},
  [536] = {.lex_state = 41, .external_lex_state = 1},
  [537] = {.lex_state = 41, .external_lex_state = 1},
  [538] = {.lex_state = 41, .external_lex_state = 1},
  [539] = {.lex_state = 41, .external_lex_state = 1},
  [540] = {.lex_state = 732, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 0, .external_lex_state = 1},
  [543] = {.lex_state = 732, .external_lex_state = 1},
  [544] = {.lex_state = 0, .external_lex_state = 1},
  [545] = {.lex_state = 0, .external_lex_state = 1},
  [546] = {.lex_state = 53, .external_lex_state = 1},
  [547] = {.lex_state = 42, .external_lex_state = 1},
  [548] = {.lex_state = 48, .external_lex_state = 1},
  [549] = {.lex_state = 41, .external_lex_state = 1},
  [550] = {.lex_state = 49, .external_lex_state = 1},
  [551] = {.lex_state = 41, .external_lex_state = 1},
  [552] = {.lex_state = 41, .external_lex_state = 1},
  [553] = {.lex_state = 42, .external_lex_state = 1},
  [554] = {.lex_state = 0, .external_lex_state = 1},
  [555] = {.lex_state = 0, .external_lex_state = 1},
  [556] = {.lex_state = 0, .external_lex_state = 1},
  [557] = {.lex_state = 0, .external_lex_state = 1},
  [558] = {.lex_state = 41, .external_lex_state = 1},
  [559] = {.lex_state = 42, .external_lex_state = 1},
  [560] = {.lex_state = 0, .external_lex_state = 1},
  [561] = {.lex_state = 41, .external_lex_state = 1},
  [562] = {.lex_state = 41, .external_lex_state = 1},
  [563] = {.lex_state = 0, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 0, .external_lex_state = 1},
  [566] = {.lex_state = 41, .external_lex_state = 1},
  [567] = {.lex_state = 0, .external_lex_state = 1},
  [568] = {.lex_state = 41, .external_lex_state = 1},
  [569] = {.lex_state = 0, .external_lex_state = 1},
  [570] = {.lex_state = 0, .external_lex_state = 1},
  [571] = {.lex_state = 0, .external_lex_state = 1},
  [572] = {.lex_state = 41, .external_lex_state = 1},
  [573] = {.lex_state = 49, .external_lex_state = 1},
  [574] = {.lex_state = 0, .external_lex_state = 1},
  [575] = {.lex_state = 50, .external_lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 1},
  [577] = {.lex_state = 49, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 47, .external_lex_state = 1},
  [580] = {.lex_state = 47, .external_lex_state = 1},
  [581] = {.lex_state = 0, .external_lex_state = 1},
  [582] = {.lex_state = 49, .external_lex_state = 1},
  [583] = {.lex_state = 0, .external_lex_state = 1},
  [584] = {.lex_state = 0, .external_lex_state = 1},
  [585] = {.lex_state = 42, .external_lex_state = 1},
  [586] = {.lex_state = 53, .external_lex_state = 1},
  [587] = {.lex_state = 0, .external_lex_state = 1},
  [588] = {.lex_state = 53, .external_lex_state = 1},
  [589] = {.lex_state = 0, .external_lex_state = 1},
  [590] = {.lex_state = 41, .external_lex_state = 1},
  [591] = {.lex_state = 0, .external_lex_state = 1},
  [592] = {.lex_state = 0, .external_lex_state = 1},
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
  [604] = {.lex_state = 0, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 0, .external_lex_state = 1},
  [607] = {.lex_state = 0, .external_lex_state = 1},
  [608] = {.lex_state = 53, .external_lex_state = 1},
  [609] = {.lex_state = 0, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 0, .external_lex_state = 1},
  [612] = {.lex_state = 0, .external_lex_state = 1},
  [613] = {.lex_state = 0, .external_lex_state = 1},
  [614] = {.lex_state = 53, .external_lex_state = 1},
  [615] = {.lex_state = 53, .external_lex_state = 1},
  [616] = {.lex_state = 0, .external_lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 1},
  [618] = {.lex_state = 53, .external_lex_state = 1},
  [619] = {.lex_state = 0, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 0, .external_lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 53, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 53, .external_lex_state = 1},
  [628] = {.lex_state = 0, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 53, .external_lex_state = 1},
  [632] = {.lex_state = 0, .external_lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 1},
  [634] = {.lex_state = 0, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 1},
  [637] = {.lex_state = 47, .external_lex_state = 1},
  [638] = {.lex_state = 0, .external_lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 1},
  [640] = {.lex_state = 0, .external_lex_state = 1},
  [641] = {.lex_state = 47, .external_lex_state = 1},
  [642] = {.lex_state = 0, .external_lex_state = 1},
  [643] = {.lex_state = 0, .external_lex_state = 1},
  [644] = {.lex_state = 0, .external_lex_state = 1},
  [645] = {.lex_state = 41, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 0, .external_lex_state = 1},
  [648] = {.lex_state = 0, .external_lex_state = 1},
  [649] = {.lex_state = 0, .external_lex_state = 1},
  [650] = {.lex_state = 0, .external_lex_state = 1},
  [651] = {.lex_state = 53, .external_lex_state = 1},
  [652] = {.lex_state = 0, .external_lex_state = 1},
  [653] = {.lex_state = 0, .external_lex_state = 1},
  [654] = {.lex_state = 0, .external_lex_state = 1},
  [655] = {.lex_state = 53, .external_lex_state = 1},
  [656] = {.lex_state = 0, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 0, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 0, .external_lex_state = 1},
  [661] = {.lex_state = 0, .external_lex_state = 1},
  [662] = {.lex_state = 42, .external_lex_state = 1},
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 41, .external_lex_state = 1},
  [666] = {.lex_state = 49, .external_lex_state = 1},
  [667] = {.lex_state = 53, .external_lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 842, .external_lex_state = 1},
  [671] = {.lex_state = 53, .external_lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 1},
  [673] = {.lex_state = 0, .external_lex_state = 1},
  [674] = {.lex_state = 732, .external_lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 1},
  [676] = {.lex_state = 53, .external_lex_state = 1},
  [677] = {.lex_state = 0, .external_lex_state = 1},
  [678] = {.lex_state = 0, .external_lex_state = 1},
  [679] = {.lex_state = 42, .external_lex_state = 1},
  [680] = {.lex_state = 53, .external_lex_state = 1},
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
  [693] = {.lex_state = 0, .external_lex_state = 1},
  [694] = {.lex_state = 0, .external_lex_state = 1},
  [695] = {.lex_state = 0, .external_lex_state = 1},
  [696] = {.lex_state = 0, .external_lex_state = 1},
  [697] = {.lex_state = 41, .external_lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 1},
  [699] = {.lex_state = 0, .external_lex_state = 1},
  [700] = {.lex_state = 0, .external_lex_state = 1},
  [701] = {.lex_state = 0, .external_lex_state = 1},
  [702] = {.lex_state = 41, .external_lex_state = 1},
  [703] = {.lex_state = 0, .external_lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 1},
  [705] = {.lex_state = 0, .external_lex_state = 1},
  [706] = {.lex_state = 41, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 1},
  [709] = {.lex_state = 0, .external_lex_state = 1},
  [710] = {.lex_state = 41, .external_lex_state = 1},
  [711] = {.lex_state = 0, .external_lex_state = 1},
  [712] = {.lex_state = 41, .external_lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 1},
  [715] = {.lex_state = 53, .external_lex_state = 1},
  [716] = {.lex_state = 41, .external_lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 1},
  [718] = {.lex_state = 0, .external_lex_state = 1},
  [719] = {.lex_state = 41, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 41, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 0, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 0, .external_lex_state = 1},
  [727] = {.lex_state = 0, .external_lex_state = 1},
  [728] = {.lex_state = 732, .external_lex_state = 1},
  [729] = {.lex_state = 0, .external_lex_state = 1},
  [730] = {.lex_state = 0, .external_lex_state = 1},
  [731] = {.lex_state = 0, .external_lex_state = 1},
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
  [747] = {.lex_state = 41, .external_lex_state = 1},
  [748] = {.lex_state = 0, .external_lex_state = 1},
  [749] = {.lex_state = 0, .external_lex_state = 1},
  [750] = {.lex_state = 0, .external_lex_state = 1},
  [751] = {.lex_state = 53, .external_lex_state = 1},
  [752] = {.lex_state = 53, .external_lex_state = 1},
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
    [sym_source_file] = STATE(729),
    [sym_security_protocol_theory] = STATE(724),
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(442), 1,
      sym_formula,
    STATE(530), 1,
      sym_fact,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(642), 1,
      sym_goal,
    STATE(662), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(442), 1,
      sym_formula,
    STATE(530), 1,
      sym_fact,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(726), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(497), 1,
      sym_node_var,
    STATE(525), 1,
      sym__msetterm,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(669), 1,
      sym_fact,
    STATE(739), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(195), 1,
      sym_conjunction,
    STATE(196), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(227), 1,
      sym_formula,
    STATE(250), 1,
      sym_disjunction,
    STATE(252), 1,
      sym_imp,
    STATE(334), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(656), 1,
      sym_formula,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(195), 1,
      sym_conjunction,
    STATE(196), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(227), 1,
      sym_formula,
    STATE(249), 1,
      sym_imp,
    STATE(250), 1,
      sym_disjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(553), 1,
      sym_node_var,
    STATE(593), 1,
      sym_formula,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
      sym_fact,
    STATE(734), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(553), 1,
      sym_node_var,
    STATE(604), 1,
      sym_formula,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
      sym_fact,
    STATE(731), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
      sym_fact,
    STATE(696), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(544), 1,
      sym_formula,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(405), 1,
      sym_imp,
    STATE(525), 1,
      sym__msetterm,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(669), 1,
      sym_fact,
    STATE(739), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(225), 1,
      sym_imp,
    STATE(273), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(344), 1,
      sym_conjunction,
    STATE(398), 1,
      sym_disjunction,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(224), 1,
      sym_imp,
    STATE(273), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(344), 1,
      sym_conjunction,
    STATE(398), 1,
      sym_disjunction,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(224), 1,
      sym_imp,
    STATE(278), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(372), 1,
      sym_disjunction,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(225), 1,
      sym_imp,
    STATE(250), 1,
      sym_disjunction,
    STATE(264), 1,
      sym_conjunction,
    STATE(266), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(221), 1,
      sym_conjunction,
    STATE(266), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(221), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(221), 1,
      sym_conjunction,
    STATE(273), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(188), 1,
      sym_negation,
    STATE(209), 1,
      sym_atom,
    STATE(221), 1,
      sym_conjunction,
    STATE(334), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(219), 1,
      sym_negation,
    STATE(300), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(209), 1,
      sym_atom,
    STATE(219), 1,
      sym_negation,
    STATE(334), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(256), 1,
      sym_atom,
    STATE(300), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
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
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(256), 1,
      sym_atom,
    STATE(334), 1,
      sym_quantifier,
    STATE(553), 1,
      sym_node_var,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(662), 1,
      sym__msetterm,
    STATE(669), 1,
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
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [2848] = 8,
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(62), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(51), 7,
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
    ACTIONS(55), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(62), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(58), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(53), 12,
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
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(62), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(51), 7,
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
  [2980] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(94), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(65), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(63), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3019] = 8,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(31), 2,
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
    ACTIONS(53), 11,
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
  [3062] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(75), 20,
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
  [3099] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(83), 2,
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
  [3136] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
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
  [3173] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(94), 2,
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
  [3212] = 8,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(100), 12,
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
  [3255] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
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
  [3292] = 7,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(121), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(114), 12,
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
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(126), 19,
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
    ACTIONS(138), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(31), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(140), 7,
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
  [3417] = 8,
    ACTIONS(138), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(31), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(140), 7,
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
  [3460] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(75), 20,
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
  [3497] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(144), 21,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
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
  [3529] = 5,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    STATE(54), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [3565] = 5,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(75), 19,
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
  [3601] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(156), 20,
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
  [3633] = 5,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(160), 20,
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
  [3669] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(164), 20,
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
  [3701] = 5,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(83), 2,
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
  [3737] = 5,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(75), 19,
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
  [3773] = 14,
    ACTIONS(168), 1,
      anon_sym_end,
    ACTIONS(170), 1,
      sym_ident,
    ACTIONS(172), 1,
      anon_sym_functions,
    ACTIONS(174), 1,
      anon_sym_equations,
    ACTIONS(176), 1,
      anon_sym_builtins,
    ACTIONS(178), 1,
      anon_sym_heuristic,
    ACTIONS(180), 1,
      anon_sym_tactic,
    ACTIONS(182), 1,
      anon_sym_rule,
    ACTIONS(184), 1,
      anon_sym_restriction,
    ACTIONS(186), 1,
      anon_sym_lemma,
    STATE(202), 1,
      sym_simple_rule,
    STATE(672), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(65), 11,
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
  [3827] = 7,
    ACTIONS(188), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(72), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(191), 7,
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
  [3867] = 5,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
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
  [3903] = 5,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP,
    STATE(54), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(194), 20,
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
  [3939] = 5,
    ACTIONS(201), 1,
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
  [3975] = 8,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(204), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(78), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(100), 11,
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
  [4017] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(194), 20,
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
  [4048] = 4,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(210), 20,
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
  [4081] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(156), 19,
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
  [4112] = 5,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(220), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(216), 19,
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
  [4147] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(164), 19,
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
  [4178] = 4,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(222), 20,
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
  [4211] = 5,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      anon_sym_AMP,
    STATE(66), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(160), 19,
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
  [4246] = 5,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(226), 1,
      anon_sym_AMP,
    STATE(64), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(194), 19,
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
  [4281] = 13,
    ACTIONS(170), 1,
      sym_ident,
    ACTIONS(172), 1,
      anon_sym_functions,
    ACTIONS(174), 1,
      anon_sym_equations,
    ACTIONS(176), 1,
      anon_sym_builtins,
    ACTIONS(178), 1,
      anon_sym_heuristic,
    ACTIONS(180), 1,
      anon_sym_tactic,
    ACTIONS(182), 1,
      anon_sym_rule,
    ACTIONS(184), 1,
      anon_sym_restriction,
    ACTIONS(186), 1,
      anon_sym_lemma,
    ACTIONS(229), 1,
      anon_sym_end,
    STATE(202), 1,
      sym_simple_rule,
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
  [4332] = 5,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      anon_sym_AMP,
    STATE(64), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [4367] = 13,
    ACTIONS(231), 1,
      anon_sym_end,
    ACTIONS(233), 1,
      sym_ident,
    ACTIONS(236), 1,
      anon_sym_functions,
    ACTIONS(239), 1,
      anon_sym_equations,
    ACTIONS(242), 1,
      anon_sym_builtins,
    ACTIONS(245), 1,
      anon_sym_heuristic,
    ACTIONS(248), 1,
      anon_sym_tactic,
    ACTIONS(251), 1,
      anon_sym_rule,
    ACTIONS(254), 1,
      anon_sym_restriction,
    ACTIONS(257), 1,
      anon_sym_lemma,
    STATE(202), 1,
      sym_simple_rule,
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
  [4418] = 4,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(260), 20,
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
  [4451] = 3,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(260), 20,
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
  [4481] = 4,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(222), 19,
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
  [4513] = 5,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(273), 1,
      anon_sym_CARET,
    STATE(77), 1,
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
  [4547] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(194), 19,
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
    ACTIONS(275), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(260), 19,
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
  [4609] = 4,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_DOT,
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
    ACTIONS(267), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(210), 19,
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
  [4673] = 5,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(286), 1,
      anon_sym_EQ,
    STATE(71), 1,
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
  [4707] = 5,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(292), 1,
      anon_sym_CARET,
    STATE(77), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(288), 18,
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
  [4741] = 3,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(260), 19,
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
  [4770] = 3,
    ACTIONS(297), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(295), 19,
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
  [4799] = 3,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 19,
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
  [4828] = 3,
    ACTIONS(305), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(303), 19,
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
  [4857] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(479), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [4912] = 3,
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
  [4941] = 3,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(288), 19,
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
  [4970] = 5,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(321), 1,
      anon_sym_STAR,
    STATE(97), 1,
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
  [5003] = 3,
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
  [5032] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(453), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5087] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(511), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5142] = 3,
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
  [5171] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(333), 20,
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
  [5198] = 3,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(335), 19,
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
  [5227] = 3,
    ACTIONS(341), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(339), 19,
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
  [5256] = 5,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(347), 1,
      anon_sym_STAR,
    STATE(93), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 17,
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
  [5289] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(350), 20,
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
  [5316] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(465), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5371] = 2,
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
  [5398] = 5,
    ACTIONS(321), 1,
      anon_sym_STAR,
    ACTIONS(358), 1,
      anon_sym_EQ,
    STATE(93), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 17,
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
  [5431] = 3,
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
  [5460] = 3,
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
  [5489] = 3,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(216), 19,
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
  [5518] = 3,
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
  [5547] = 3,
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
  [5576] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(461), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5631] = 3,
    ACTIONS(380), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(378), 19,
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
  [5660] = 3,
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
  [5689] = 3,
    ACTIONS(388), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(386), 19,
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
  [5718] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(516), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5770] = 8,
    ACTIONS(392), 1,
      anon_sym_SOLVED,
    ACTIONS(394), 1,
      anon_sym_by,
    ACTIONS(398), 1,
      anon_sym_solve,
    STATE(271), 1,
      sym_proof_skeleton,
    STATE(289), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
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
  [5808] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(451), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5860] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(232), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5912] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(658), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [5964] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(482), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6016] = 3,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 18,
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
  [6044] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    STATE(114), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(400), 15,
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
  [6076] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(450), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6128] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(473), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6180] = 8,
    ACTIONS(392), 1,
      anon_sym_SOLVED,
    ACTIONS(394), 1,
      anon_sym_by,
    ACTIONS(398), 1,
      anon_sym_solve,
    STATE(262), 1,
      sym_proof_skeleton,
    STATE(289), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(407), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6218] = 5,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(114), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(409), 15,
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
  [6250] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(471), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6302] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(481), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6354] = 8,
    ACTIONS(392), 1,
      anon_sym_SOLVED,
    ACTIONS(394), 1,
      anon_sym_by,
    ACTIONS(398), 1,
      anon_sym_solve,
    STATE(289), 1,
      sym_proof_method,
    STATE(296), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(415), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6392] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(472), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6444] = 5,
    ACTIONS(419), 1,
      anon_sym_EQ,
    STATE(118), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(417), 15,
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
  [6476] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(421), 17,
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
  [6504] = 8,
    ACTIONS(392), 1,
      anon_sym_SOLVED,
    ACTIONS(394), 1,
      anon_sym_by,
    ACTIONS(398), 1,
      anon_sym_solve,
    STATE(275), 1,
      sym_proof_skeleton,
    STATE(289), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(425), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6542] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(714), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6594] = 15,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(347), 1,
      sym_term,
    STATE(355), 1,
      sym__expterm,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym_msg_var,
    STATE(388), 1,
      sym__multterm,
    STATE(424), 1,
      sym__xorterm,
    STATE(575), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6646] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(439), 17,
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
  [6674] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(443), 17,
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
  [6702] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(449), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6754] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(422), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6806] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(137), 1,
      sym__xorterm,
    STATE(617), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6858] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__multterm,
    STATE(135), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6907] = 14,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(135), 1,
      sym__xorterm,
    STATE(347), 1,
      sym_term,
    STATE(355), 1,
      sym__expterm,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym_msg_var,
    STATE(388), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [6956] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(447), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
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
  [6983] = 3,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 17,
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
  [7010] = 5,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    STATE(141), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(451), 14,
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
  [7040] = 13,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(85), 1,
      sym__expterm,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(136), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7086] = 13,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(347), 1,
      sym_term,
    STATE(355), 1,
      sym__expterm,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym_msg_var,
    STATE(400), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7132] = 5,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(449), 14,
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
  [7162] = 5,
    ACTIONS(455), 1,
      anon_sym_PLUS,
    ACTIONS(462), 1,
      anon_sym_EQ,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(460), 14,
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
  [7192] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(242), 1,
      sym_equation,
    STATE(585), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7235] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_term,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(113), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7278] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(468), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(147), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(186), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(466), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7309] = 6,
    ACTIONS(472), 1,
      anon_sym_prio,
    ACTIONS(474), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(163), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(167), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(470), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7340] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    STATE(184), 1,
      sym_equation,
    STATE(585), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7383] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(481), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(147), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(186), 2,
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
  [7414] = 6,
    ACTIONS(472), 1,
      anon_sym_prio,
    ACTIONS(474), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(163), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(172), 2,
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
  [7445] = 12,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(347), 1,
      sym_term,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym_msg_var,
    STATE(380), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7488] = 11,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym_msg_var,
    STATE(374), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7528] = 11,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym_msg_var,
    STATE(375), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7568] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_term,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7608] = 11,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LT,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_TILDE,
    STATE(238), 1,
      sym_msg_var,
    STATE(243), 1,
      sym_nonnode_var,
    STATE(255), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(239), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7648] = 7,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [7680] = 4,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(506), 12,
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
  [7706] = 11,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LT,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_TILDE,
    STATE(238), 1,
      sym_msg_var,
    STATE(241), 1,
      sym_term,
    STATE(243), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(239), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7746] = 11,
    ACTIONS(427), 1,
      sym_ident,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      anon_sym_TILDE,
    STATE(357), 1,
      sym_nonnode_var,
    STATE(364), 1,
      sym_term,
    STATE(371), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(358), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7786] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(98), 1,
      sym_msg_var,
    STATE(105), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7826] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(307), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_msg_var,
    STATE(101), 1,
      sym_term,
    STATE(105), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(83), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7866] = 11,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LT,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_TILDE,
    STATE(238), 1,
      sym_msg_var,
    STATE(243), 1,
      sym_nonnode_var,
    STATE(260), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(239), 5,
      sym_tuple_term,
      sym_binary_app,
      sym_nested,
      sym_app,
      sym_literal,
  [7906] = 8,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    ACTIONS(514), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(62), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(516), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7939] = 8,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(41), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(522), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7972] = 4,
    ACTIONS(526), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(163), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(524), 11,
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
  [7997] = 4,
    ACTIONS(529), 1,
      anon_sym_COLON,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(531), 12,
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
  [8022] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(144), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(186), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(466), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8049] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(30), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(94), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(535), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [8076] = 4,
    ACTIONS(474), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(171), 2,
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
  [8100] = 7,
    ACTIONS(514), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(62), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(516), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8130] = 7,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(126), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8160] = 4,
    ACTIONS(474), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(171), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(470), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8184] = 4,
    ACTIONS(547), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(171), 2,
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
  [8208] = 4,
    ACTIONS(474), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(171), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(550), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8232] = 4,
    STATE(173), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(552), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(554), 10,
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
  [8256] = 4,
    STATE(173), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(557), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(559), 10,
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
  [8280] = 5,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(218), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8306] = 7,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    STATE(70), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(522), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [8336] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(146), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8358] = 3,
    ACTIONS(565), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(443), 12,
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
  [8380] = 4,
    STATE(174), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(440), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(567), 10,
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
  [8403] = 3,
    STATE(187), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(569), 11,
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
  [8424] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(571), 12,
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
  [8443] = 4,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(573), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8466] = 4,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_DOT,
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
  [8489] = 4,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(579), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8512] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_variants_repeat1,
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
  [8535] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(588), 12,
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
  [8554] = 4,
    STATE(187), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(590), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [8577] = 4,
    STATE(197), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(595), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8600] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
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
  [8621] = 4,
    STATE(190), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(603), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8644] = 4,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_LBRACKprivate_RBRACK,
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
  [8667] = 3,
    STATE(190), 1,
      aux_sym_conjunction_repeat1,
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
  [8688] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_functions_repeat1,
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
  [8711] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(620), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8734] = 3,
    STATE(180), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(625), 11,
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
  [8755] = 3,
    STATE(192), 1,
      aux_sym_conjunction_repeat1,
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
  [8776] = 4,
    STATE(190), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(597), 2,
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
  [8799] = 4,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(204), 1,
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
  [8822] = 4,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(629), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8845] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(631), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8868] = 4,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_variants_repeat1,
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
  [8891] = 4,
    ACTIONS(640), 1,
      anon_sym_variants,
    STATE(287), 1,
      sym_variants,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(638), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8914] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(642), 12,
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
  [8933] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(204), 1,
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
  [8956] = 4,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_built_ins_repeat1,
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
  [8979] = 4,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_built_ins_repeat1,
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
  [9002] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(337), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9022] = 3,
    ACTIONS(657), 1,
      anon_sym_COMMA,
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
  [9042] = 2,
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
  [9060] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
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
  [9080] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(661), 11,
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
  [9098] = 3,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9118] = 3,
    ACTIONS(671), 1,
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
  [9138] = 3,
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
  [9158] = 7,
    ACTIONS(677), 1,
      anon_sym_COLON,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(128), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(126), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9186] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(685), 11,
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
  [9204] = 2,
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
  [9222] = 5,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    STATE(409), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(386), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9246] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(603), 11,
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
  [9264] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(655), 11,
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
  [9282] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(590), 11,
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
  [9300] = 3,
    ACTIONS(695), 1,
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
  [9320] = 3,
    ACTIONS(697), 1,
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
  [9340] = 2,
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
  [9358] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(701), 11,
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
  [9376] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
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
  [9396] = 2,
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
  [9414] = 3,
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
  [9434] = 2,
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
  [9452] = 5,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    STATE(407), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(299), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9476] = 2,
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
  [9494] = 2,
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
  [9512] = 3,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(717), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9532] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(665), 11,
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
  [9550] = 2,
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
  [9568] = 5,
    ACTIONS(220), 1,
      anon_sym_DOT,
    ACTIONS(721), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(216), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9592] = 2,
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
  [9610] = 3,
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
  [9630] = 3,
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
  [9650] = 3,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(620), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9670] = 3,
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
  [9690] = 3,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(631), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9710] = 3,
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
  [9730] = 3,
    ACTIONS(731), 1,
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
  [9750] = 3,
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
  [9770] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(218), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9790] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(380), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9810] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(341), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9830] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(733), 11,
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
  [9848] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(735), 11,
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
  [9866] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(301), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9886] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(733), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9906] = 3,
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
  [9926] = 3,
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
  [9946] = 3,
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
  [9966] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(739), 11,
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
  [9984] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(388), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10004] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10024] = 3,
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
  [10044] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10064] = 3,
    ACTIONS(741), 1,
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
  [10084] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(425), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10101] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(743), 10,
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
  [10118] = 3,
    STATE(265), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(625), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10137] = 3,
    STATE(279), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(569), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10156] = 3,
    STATE(280), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(595), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10175] = 4,
    STATE(295), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(569), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10196] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(747), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10213] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(749), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10230] = 3,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(715), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10249] = 2,
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
  [10266] = 8,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(757), 1,
      anon_sym_DOT,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(290), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(402), 2,
      sym_node_var,
      sym_nonnode_var,
  [10295] = 4,
    STATE(288), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(763), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(595), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10316] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(765), 10,
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
  [10333] = 2,
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
  [10350] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 10,
      anon_sym_end,
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
  [10384] = 4,
    STATE(267), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(625), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10405] = 4,
    STATE(279), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(590), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [10426] = 3,
    STATE(285), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(614), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10445] = 3,
    STATE(240), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(774), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [10464] = 2,
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
  [10481] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(778), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10498] = 8,
    ACTIONS(780), 1,
      anon_sym_SOLVED,
    ACTIONS(782), 1,
      anon_sym_by,
    ACTIONS(784), 1,
      anon_sym_case,
    ACTIONS(788), 1,
      anon_sym_solve,
    STATE(284), 1,
      sym_proof_method,
    STATE(556), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10527] = 4,
    STATE(285), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(603), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10548] = 2,
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
  [10565] = 2,
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
  [10582] = 4,
    STATE(285), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(763), 2,
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
  [10603] = 8,
    ACTIONS(788), 1,
      anon_sym_solve,
    ACTIONS(797), 1,
      anon_sym_SOLVED,
    ACTIONS(799), 1,
      anon_sym_by,
    ACTIONS(801), 1,
      anon_sym_case,
    STATE(277), 1,
      sym_proof_skeleton,
    STATE(289), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10632] = 8,
    ACTIONS(803), 1,
      sym_ident,
    ACTIONS(806), 1,
      anon_sym_DOT,
    ACTIONS(808), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(290), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(402), 2,
      sym_node_var,
      sym_nonnode_var,
  [10661] = 3,
    STATE(205), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(774), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [10680] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(814), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10697] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(816), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10714] = 8,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(759), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      anon_sym_DOT,
    STATE(406), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(290), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(402), 2,
      sym_node_var,
      sym_nonnode_var,
  [10743] = 4,
    STATE(295), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(820), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(590), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10764] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(407), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10781] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(684), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10809] = 5,
    ACTIONS(827), 1,
      anon_sym_COLON,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(218), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(216), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10831] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(835), 1,
      anon_sym_BANG,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(706), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10859] = 7,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(294), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(402), 2,
      sym_node_var,
      sym_nonnode_var,
  [10885] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(636), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10913] = 7,
    ACTIONS(780), 1,
      anon_sym_SOLVED,
    ACTIONS(782), 1,
      anon_sym_by,
    ACTIONS(788), 1,
      anon_sym_solve,
    STATE(284), 1,
      sym_proof_method,
    STATE(456), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10939] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(654), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10967] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(735), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10995] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(652), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11023] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
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
  [11051] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(650), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11079] = 7,
    ACTIONS(780), 1,
      anon_sym_SOLVED,
    ACTIONS(782), 1,
      anon_sym_by,
    ACTIONS(788), 1,
      anon_sym_solve,
    STATE(284), 1,
      sym_proof_method,
    STATE(557), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11105] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(647), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11133] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(644), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11161] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(663), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11189] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(855), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(710), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11217] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(639), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11245] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(703), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11273] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(861), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(697), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11301] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(634), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11329] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
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
  [11357] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(733), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11385] = 7,
    ACTIONS(780), 1,
      anon_sym_SOLVED,
    ACTIONS(782), 1,
      anon_sym_by,
    ACTIONS(788), 1,
      anon_sym_solve,
    STATE(284), 1,
      sym_proof_method,
    STATE(477), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11411] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(869), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(747), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11439] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
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
  [11467] = 3,
    STATE(580), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(873), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [11485] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(146), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(144), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11503] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(875), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(645), 1,
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
  [11531] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(629), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11559] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(727), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11587] = 6,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    ACTIONS(885), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(887), 1,
      anon_sym_heuristic_EQ,
    STATE(526), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(881), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11611] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
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
  [11639] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(891), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
      sym_builtin_facts,
    STATE(721), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11667] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(893), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
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
  [11695] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(895), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(665), 1,
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
  [11723] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(613), 1,
      sym_facts,
    STATE(621), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11751] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(616), 1,
      sym_facts,
    STATE(621), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11779] = 7,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(272), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(402), 2,
      sym_node_var,
      sym_nonnode_var,
  [11805] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(901), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
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
  [11833] = 6,
    ACTIONS(885), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(887), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    STATE(526), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(881), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11857] = 8,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(905), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(498), 1,
      sym_fact,
    STATE(675), 1,
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
  [11885] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    STATE(737), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11913] = 4,
    ACTIONS(909), 1,
      anon_sym_DOT,
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
  [11932] = 7,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(911), 1,
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
  [11957] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    STATE(554), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11982] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(554), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12007] = 5,
    ACTIONS(885), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(887), 1,
      anon_sym_heuristic_EQ,
    STATE(526), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(881), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12028] = 4,
    STATE(346), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(625), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12047] = 3,
    STATE(45), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(522), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [12064] = 4,
    STATE(354), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(569), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12083] = 5,
    ACTIONS(917), 1,
      anon_sym_CARET,
    STATE(348), 1,
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
  [12104] = 5,
    ACTIONS(917), 1,
      anon_sym_CARET,
    STATE(352), 1,
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
  [12125] = 5,
    ACTIONS(885), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(887), 1,
      anon_sym_heuristic_EQ,
    STATE(486), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(881), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [12146] = 7,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_BANG,
    ACTIONS(913), 1,
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
  [12171] = 3,
    STATE(32), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(516), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [12188] = 5,
    ACTIONS(919), 1,
      anon_sym_CARET,
    STATE(352), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(290), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12209] = 7,
    ACTIONS(922), 1,
      anon_sym_presort,
    ACTIONS(924), 1,
      anon_sym_prio,
    ACTIONS(926), 1,
      anon_sym_deprio,
    STATE(385), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(145), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(170), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12234] = 4,
    STATE(354), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(928), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(590), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [12253] = 5,
    ACTIONS(931), 1,
      anon_sym_STAR,
    STATE(373), 1,
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
  [12273] = 3,
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
  [12289] = 3,
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
  [12305] = 3,
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
  [12321] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(301), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(299), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12337] = 6,
    ACTIONS(831), 1,
      sym_ident,
    ACTIONS(835), 1,
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
  [12359] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(337), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(335), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12375] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(341), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(339), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12391] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(380), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(378), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12407] = 3,
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
  [12423] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(388), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(386), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12439] = 6,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(823), 1,
      sym_ident,
    STATE(554), 1,
      sym_fact,
    STATE(621), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12461] = 3,
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
  [12477] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(295), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12493] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(218), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(216), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12509] = 3,
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
  [12525] = 3,
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
  [12541] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(933), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(735), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [12557] = 5,
    ACTIONS(931), 1,
      anon_sym_STAR,
    STATE(376), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(358), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12577] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(305), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(303), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12593] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(290), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(288), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12609] = 5,
    ACTIONS(935), 1,
      anon_sym_STAR,
    STATE(376), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(345), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12629] = 3,
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
  [12645] = 4,
    ACTIONS(788), 1,
      anon_sym_solve,
    STATE(556), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12662] = 4,
    ACTIONS(940), 1,
      anon_sym_solve,
    STATE(277), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(938), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12679] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(345), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12694] = 4,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    STATE(415), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(942), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12711] = 4,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    STATE(407), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12728] = 3,
    ACTIONS(944), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(126), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12743] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(144), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12756] = 5,
    ACTIONS(924), 1,
      anon_sym_prio,
    ACTIONS(926), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(148), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(167), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12775] = 4,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    STATE(409), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12792] = 6,
    ACTIONS(400), 1,
      anon_sym_PLUS,
    ACTIONS(946), 1,
      anon_sym_XOR,
    ACTIONS(949), 1,
      anon_sym_13,
    STATE(387), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(402), 2,
      sym_ident,
      anon_sym_in,
  [12813] = 6,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(952), 1,
      anon_sym_XOR,
    ACTIONS(954), 1,
      anon_sym_13,
    STATE(391), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(419), 2,
      sym_ident,
      anon_sym_in,
  [12834] = 3,
    ACTIONS(956), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(216), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12849] = 4,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    STATE(431), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12866] = 6,
    ACTIONS(409), 1,
      anon_sym_PLUS,
    ACTIONS(952), 1,
      anon_sym_XOR,
    ACTIONS(954), 1,
      anon_sym_13,
    STATE(387), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(411), 2,
      sym_ident,
      anon_sym_in,
  [12887] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(372), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12899] = 4,
    ACTIONS(960), 1,
      sym_ident,
    STATE(612), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12915] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(295), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12927] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(364), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12939] = 4,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12955] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(216), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12967] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(967), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(735), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [12981] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12993] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(402), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [13007] = 4,
    ACTIONS(969), 1,
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
  [13023] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(971), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13035] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13047] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(506), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13059] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(733), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [13073] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(360), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13085] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13096] = 4,
    ACTIONS(975), 1,
      anon_sym_RBRACK,
    STATE(535), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13111] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13122] = 4,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    STATE(535), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13137] = 4,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    STATE(603), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13152] = 4,
    ACTIONS(985), 1,
      anon_sym_LBRACK,
    STATE(552), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13167] = 4,
    ACTIONS(987), 1,
      anon_sym_PLUS,
    STATE(413), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(447), 2,
      sym_ident,
      anon_sym_in,
  [13182] = 4,
    ACTIONS(985), 1,
      anon_sym_LBRACK,
    STATE(558), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13197] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13208] = 4,
    ACTIONS(985), 1,
      anon_sym_LBRACK,
    STATE(562), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13223] = 4,
    ACTIONS(985), 1,
      anon_sym_LBRACK,
    STATE(568), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13238] = 3,
    STATE(480), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(990), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13251] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(992), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [13262] = 4,
    ACTIONS(994), 1,
      anon_sym_DQUOTE,
    STATE(722), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13277] = 4,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    STATE(413), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(462), 2,
      sym_ident,
      anon_sym_in,
  [13292] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13303] = 4,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(599), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_all_DASHtraces,
      anon_sym_exists_DASHtrace,
  [13318] = 4,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    STATE(421), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(453), 2,
      sym_ident,
      anon_sym_in,
  [13333] = 5,
    ACTIONS(1000), 1,
      sym_ident,
    ACTIONS(1003), 1,
      anon_sym_in,
    STATE(425), 1,
      aux_sym_let_block_repeat1,
    STATE(679), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13350] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1005), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13361] = 3,
    STATE(527), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(990), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13374] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13385] = 3,
    STATE(460), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(990), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [13398] = 5,
    ACTIONS(1009), 1,
      sym_ident,
    ACTIONS(1011), 1,
      anon_sym_in,
    STATE(425), 1,
      aux_sym_let_block_repeat1,
    STATE(679), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13415] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1013), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [13426] = 4,
    ACTIONS(1015), 1,
      anon_sym_COLON,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    STATE(664), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13440] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13454] = 3,
    ACTIONS(1023), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13466] = 4,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
    STATE(435), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13480] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    STATE(436), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13494] = 4,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    ACTIONS(1039), 1,
      anon_sym_msg,
    STATE(559), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13508] = 4,
    ACTIONS(1041), 1,
      sym_ident,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
    STATE(618), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13522] = 4,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13536] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_ident,
    STATE(657), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13550] = 4,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
    ACTIONS(1049), 1,
      sym_ident,
    STATE(596), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13564] = 4,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_2,
    STATE(485), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13578] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACK,
    STATE(436), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13592] = 4,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    ACTIONS(1061), 1,
      anon_sym_2,
    STATE(444), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13606] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13620] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13634] = 4,
    ACTIONS(1068), 1,
      anon_sym_next,
    ACTIONS(1070), 1,
      anon_sym_qed,
    STATE(457), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13648] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_GT,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13662] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13676] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    STATE(446), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13690] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_GT,
    STATE(448), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13704] = 4,
    ACTIONS(1080), 1,
      aux_sym_arity_token1,
    ACTIONS(1082), 1,
      anon_sym_msg,
    STATE(298), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13718] = 4,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    STATE(509), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13732] = 4,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RBRACK,
    STATE(439), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13746] = 4,
    ACTIONS(1068), 1,
      anon_sym_next,
    ACTIONS(1088), 1,
      anon_sym_qed,
    STATE(457), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13760] = 4,
    ACTIONS(1068), 1,
      anon_sym_next,
    ACTIONS(1090), 1,
      anon_sym_qed,
    STATE(455), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13774] = 4,
    ACTIONS(1092), 1,
      anon_sym_next,
    ACTIONS(1095), 1,
      anon_sym_qed,
    STATE(457), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13788] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RBRACK,
    STATE(436), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13802] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13816] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13830] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13844] = 4,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
    STATE(462), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13858] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13872] = 3,
    ACTIONS(1023), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1110), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13884] = 4,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    STATE(463), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13898] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_ident,
    STATE(700), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13912] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_ident,
    STATE(609), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13926] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13940] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RBRACE,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13954] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_GT,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13968] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13982] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RBRACE,
    STATE(469), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13996] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_GT,
    STATE(470), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14010] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_GT,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14024] = 4,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
    ACTIONS(1126), 1,
      sym_ident,
    STATE(752), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14038] = 4,
    ACTIONS(1128), 1,
      aux_sym_arity_token1,
    ACTIONS(1130), 1,
      anon_sym_msg,
    STATE(175), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14052] = 4,
    ACTIONS(1068), 1,
      anon_sym_next,
    ACTIONS(1132), 1,
      anon_sym_qed,
    STATE(447), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14066] = 3,
    STATE(535), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14078] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14092] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
    STATE(443), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14106] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14120] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14134] = 3,
    STATE(653), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1142), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14146] = 3,
    STATE(707), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1142), 2,
      anon_sym_smallest,
      anon_sym_id,
  [14158] = 4,
    ACTIONS(1053), 1,
      anon_sym_2,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14172] = 4,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
    STATE(495), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14186] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RBRACK,
    STATE(487), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14200] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_ident,
    STATE(270), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14214] = 4,
    ACTIONS(1155), 1,
      anon_sym_COLON,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
    STATE(708), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14228] = 4,
    ACTIONS(1159), 1,
      anon_sym_COLON,
    ACTIONS(1161), 1,
      anon_sym_LBRACK,
    STATE(713), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14242] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14256] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14270] = 4,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    ACTIONS(1039), 1,
      anon_sym_msg,
    STATE(236), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14284] = 4,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14298] = 4,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14312] = 4,
    ACTIONS(1171), 1,
      anon_sym_LBRACK,
    ACTIONS(1173), 1,
      anon_sym_let,
    STATE(741), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14326] = 3,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [14338] = 4,
    ACTIONS(1086), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    STATE(520), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14352] = 4,
    ACTIONS(1173), 1,
      anon_sym_let,
    ACTIONS(1181), 1,
      anon_sym_LBRACK,
    STATE(743), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14366] = 3,
    ACTIONS(1183), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1185), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14378] = 4,
    ACTIONS(1173), 1,
      anon_sym_let,
    ACTIONS(1187), 1,
      anon_sym_LBRACK,
    STATE(746), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14392] = 4,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RBRACK,
    STATE(494), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14406] = 4,
    ACTIONS(1173), 1,
      anon_sym_let,
    ACTIONS(1193), 1,
      anon_sym_LBRACK,
    STATE(745), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14420] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_ident,
    STATE(232), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14434] = 4,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    ACTIONS(1195), 1,
      anon_sym_COLON,
    STATE(748), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14448] = 4,
    ACTIONS(1173), 1,
      anon_sym_let,
    ACTIONS(1197), 1,
      anon_sym_LBRACK,
    STATE(640), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14462] = 3,
    STATE(502), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [14474] = 4,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    ACTIONS(1199), 1,
      anon_sym_COLON,
    STATE(587), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14488] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14502] = 4,
    ACTIONS(1108), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14516] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14530] = 4,
    ACTIONS(1206), 1,
      sym_ident,
    STATE(430), 1,
      aux_sym_let_block_repeat1,
    STATE(679), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14544] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14558] = 4,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    STATE(750), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14572] = 4,
    ACTIONS(1161), 1,
      anon_sym_LBRACK,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    STATE(610), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14586] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_GT,
    STATE(474), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14600] = 4,
    ACTIONS(1173), 1,
      anon_sym_let,
    ACTIONS(1216), 1,
      anon_sym_LBRACK,
    STATE(720), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14614] = 4,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    ACTIONS(1039), 1,
      anon_sym_msg,
    STATE(60), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14628] = 3,
    ACTIONS(1183), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1218), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14640] = 4,
    ACTIONS(913), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14654] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1222), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14663] = 3,
    ACTIONS(1224), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1226), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14674] = 3,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    STATE(682), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14685] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14694] = 3,
    ACTIONS(1230), 1,
      anon_sym_EQ,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14705] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14714] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1035), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14723] = 3,
    ACTIONS(893), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1234), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14734] = 3,
    ACTIONS(901), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1236), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14745] = 3,
    ACTIONS(1238), 1,
      anon_sym_,
    ACTIONS(1240), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14756] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14765] = 3,
    ACTIONS(1242), 1,
      sym_ident,
    STATE(244), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14776] = 3,
    ACTIONS(1244), 1,
      aux_sym_arity_token1,
    STATE(191), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14787] = 3,
    ACTIONS(895), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1246), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14798] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1030), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14807] = 3,
    ACTIONS(905), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1248), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14818] = 3,
    ACTIONS(833), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1250), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14829] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14838] = 3,
    ACTIONS(1252), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1254), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14849] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1256), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1258), 1,
      sym_comment,
    STATE(594), 1,
      sym_param,
  [14862] = 3,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    STATE(659), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14873] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1260), 2,
      anon_sym_next,
      anon_sym_qed,
  [14882] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1256), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1258), 1,
      sym_comment,
    STATE(632), 1,
      sym_param,
  [14895] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1059), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [14904] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1262), 2,
      anon_sym_left,
      anon_sym_right,
  [14913] = 3,
    ACTIONS(1242), 1,
      sym_ident,
    STATE(193), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14924] = 3,
    ACTIONS(126), 1,
      anon_sym_EQ,
    ACTIONS(1264), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14935] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1266), 2,
      anon_sym_E,
      anon_sym_AC,
  [14944] = 3,
    ACTIONS(869), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1268), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14955] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1270), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14964] = 3,
    ACTIONS(875), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1272), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14975] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14984] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [14993] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15002] = 3,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    STATE(178), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15013] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1274), 2,
      anon_sym_next,
      anon_sym_qed,
  [15022] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1276), 2,
      anon_sym_next,
      anon_sym_qed,
  [15031] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15040] = 3,
    ACTIONS(216), 1,
      anon_sym_EQ,
    ACTIONS(220), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15051] = 3,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    STATE(124), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15062] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15071] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15080] = 3,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    STATE(625), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15091] = 3,
    ACTIONS(1278), 1,
      anon_sym_rule,
    STATE(226), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15102] = 3,
    ACTIONS(1128), 1,
      aux_sym_arity_token1,
    STATE(254), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15113] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15122] = 3,
    ACTIONS(1080), 1,
      aux_sym_arity_token1,
    STATE(356), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15133] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1013), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [15142] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1280), 2,
      anon_sym_next,
      anon_sym_qed,
  [15151] = 3,
    ACTIONS(1037), 1,
      aux_sym_arity_token1,
    STATE(89), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15162] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1282), 2,
      anon_sym_next,
      anon_sym_qed,
  [15171] = 3,
    ACTIONS(855), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1284), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15182] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1218), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [15191] = 3,
    ACTIONS(1278), 1,
      anon_sym_rule,
    STATE(201), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15202] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1286), 2,
      sym_ident,
      anon_sym_in,
  [15211] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15220] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [15229] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15238] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15247] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1294), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [15256] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15265] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1296), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [15274] = 2,
    ACTIONS(1298), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15282] = 2,
    ACTIONS(1300), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15290] = 2,
    ACTIONS(1302), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15298] = 2,
    ACTIONS(1304), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15306] = 2,
    ACTIONS(1306), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15314] = 2,
    ACTIONS(1308), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15322] = 2,
    ACTIONS(1310), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15330] = 2,
    ACTIONS(1312), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15338] = 2,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15346] = 2,
    ACTIONS(1316), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15354] = 2,
    ACTIONS(1318), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15362] = 2,
    ACTIONS(1320), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15370] = 2,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15378] = 2,
    ACTIONS(1324), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15386] = 2,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15394] = 2,
    ACTIONS(1328), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15402] = 2,
    ACTIONS(994), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15410] = 2,
    ACTIONS(1330), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15418] = 2,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15426] = 2,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15434] = 2,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15442] = 2,
    ACTIONS(1336), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15450] = 2,
    ACTIONS(1338), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15458] = 2,
    ACTIONS(1340), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15466] = 2,
    ACTIONS(1342), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15474] = 2,
    ACTIONS(1344), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15482] = 2,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15490] = 2,
    ACTIONS(1348), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15498] = 2,
    ACTIONS(1350), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15506] = 2,
    ACTIONS(1352), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15514] = 2,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15522] = 2,
    ACTIONS(1354), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15530] = 2,
    ACTIONS(1356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15538] = 2,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15546] = 2,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15554] = 2,
    ACTIONS(1360), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15562] = 2,
    ACTIONS(1362), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15570] = 2,
    ACTIONS(1364), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15578] = 2,
    ACTIONS(1366), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15586] = 2,
    ACTIONS(1368), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15594] = 2,
    ACTIONS(1370), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15602] = 2,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15610] = 2,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15618] = 2,
    ACTIONS(1376), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15626] = 2,
    ACTIONS(1378), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15634] = 2,
    ACTIONS(1380), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15642] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15650] = 2,
    ACTIONS(1382), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15658] = 2,
    ACTIONS(1384), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15666] = 2,
    ACTIONS(1386), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15674] = 2,
    ACTIONS(1023), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15682] = 2,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15690] = 2,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15698] = 2,
    ACTIONS(1390), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15706] = 2,
    ACTIONS(1392), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15714] = 2,
    ACTIONS(1394), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15722] = 2,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15730] = 2,
    ACTIONS(1187), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15738] = 2,
    ACTIONS(1396), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15746] = 2,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15754] = 2,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15762] = 2,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15770] = 2,
    ACTIONS(855), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15778] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15786] = 2,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15794] = 2,
    ACTIONS(1400), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15802] = 2,
    ACTIONS(1402), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15810] = 2,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15818] = 2,
    ACTIONS(1404), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15826] = 2,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15834] = 2,
    ACTIONS(1406), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15842] = 2,
    ACTIONS(1408), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15850] = 2,
    ACTIONS(1410), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15858] = 2,
    ACTIONS(1412), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15866] = 2,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15874] = 2,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15882] = 2,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15890] = 2,
    ACTIONS(1420), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15898] = 2,
    ACTIONS(1422), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15906] = 2,
    ACTIONS(1230), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15914] = 2,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15922] = 2,
    ACTIONS(1199), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15930] = 2,
    ACTIONS(869), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15938] = 2,
    ACTIONS(1424), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15946] = 2,
    ACTIONS(1426), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15954] = 2,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15962] = 2,
    ACTIONS(1177), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15970] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1258), 1,
      sym_comment,
    ACTIONS(1430), 1,
      aux_sym_formal_comment_token1,
  [15980] = 2,
    ACTIONS(1432), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15988] = 2,
    ACTIONS(1434), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15996] = 2,
    ACTIONS(1436), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16004] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1258), 1,
      sym_comment,
    ACTIONS(1438), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16014] = 2,
    ACTIONS(1440), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16022] = 2,
    ACTIONS(1442), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16030] = 2,
    ACTIONS(1444), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16038] = 2,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16046] = 2,
    ACTIONS(1448), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16054] = 2,
    ACTIONS(1450), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16062] = 2,
    ACTIONS(1452), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16070] = 2,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16078] = 2,
    ACTIONS(1456), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16086] = 2,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16094] = 2,
    ACTIONS(1458), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16102] = 2,
    ACTIONS(1460), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16110] = 2,
    ACTIONS(1462), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16118] = 2,
    ACTIONS(1464), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16126] = 2,
    ACTIONS(1466), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16134] = 2,
    ACTIONS(1468), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16142] = 2,
    ACTIONS(1470), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16150] = 2,
    ACTIONS(1472), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16158] = 2,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16166] = 2,
    ACTIONS(1476), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16174] = 2,
    ACTIONS(1478), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16182] = 2,
    ACTIONS(1480), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16190] = 2,
    ACTIONS(1482), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16198] = 2,
    ACTIONS(1484), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16206] = 2,
    ACTIONS(1486), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16214] = 2,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16222] = 2,
    ACTIONS(1490), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16230] = 2,
    ACTIONS(1492), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16238] = 2,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16246] = 2,
    ACTIONS(1494), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16254] = 2,
    ACTIONS(1496), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16262] = 2,
    ACTIONS(905), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16270] = 2,
    ACTIONS(1498), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16278] = 2,
    ACTIONS(1500), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16286] = 2,
    ACTIONS(1502), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16294] = 2,
    ACTIONS(895), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16302] = 2,
    ACTIONS(1504), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16310] = 2,
    ACTIONS(901), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16318] = 2,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16326] = 2,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16334] = 2,
    ACTIONS(1506), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16342] = 2,
    ACTIONS(893), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16350] = 2,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16358] = 2,
    ACTIONS(1508), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16366] = 2,
    ACTIONS(891), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16374] = 2,
    ACTIONS(1510), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16382] = 2,
    ACTIONS(1512), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16390] = 2,
    ACTIONS(1514), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16398] = 2,
    ACTIONS(1516), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16406] = 2,
    ACTIONS(1518), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16414] = 2,
    ACTIONS(1520), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16422] = 2,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16430] = 2,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16438] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1258), 1,
      sym_comment,
    ACTIONS(1524), 1,
      aux_sym_oracle_goal_ranking_token1,
  [16448] = 2,
    ACTIONS(1526), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16456] = 2,
    ACTIONS(1528), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16464] = 2,
    ACTIONS(1530), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16472] = 2,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16480] = 2,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16488] = 2,
    ACTIONS(1534), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16496] = 2,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16504] = 2,
    ACTIONS(1536), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16512] = 2,
    ACTIONS(1538), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16520] = 2,
    ACTIONS(1540), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16528] = 2,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16536] = 2,
    ACTIONS(1544), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16544] = 2,
    ACTIONS(1181), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16552] = 2,
    ACTIONS(1546), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16560] = 2,
    ACTIONS(1193), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16568] = 2,
    ACTIONS(1183), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16576] = 2,
    ACTIONS(1548), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16584] = 2,
    ACTIONS(1216), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16592] = 2,
    ACTIONS(861), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16600] = 2,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16608] = 2,
    ACTIONS(1550), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16616] = 2,
    ACTIONS(1552), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16624] = 2,
    ACTIONS(1554), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [16632] = 2,
    ACTIONS(1556), 1,
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
  [SMALL_STATE(31)] = 3019,
  [SMALL_STATE(32)] = 3062,
  [SMALL_STATE(33)] = 3099,
  [SMALL_STATE(34)] = 3136,
  [SMALL_STATE(35)] = 3173,
  [SMALL_STATE(36)] = 3212,
  [SMALL_STATE(37)] = 3255,
  [SMALL_STATE(38)] = 3292,
  [SMALL_STATE(39)] = 3333,
  [SMALL_STATE(40)] = 3374,
  [SMALL_STATE(41)] = 3417,
  [SMALL_STATE(42)] = 3460,
  [SMALL_STATE(43)] = 3497,
  [SMALL_STATE(44)] = 3529,
  [SMALL_STATE(45)] = 3565,
  [SMALL_STATE(46)] = 3601,
  [SMALL_STATE(47)] = 3633,
  [SMALL_STATE(48)] = 3669,
  [SMALL_STATE(49)] = 3701,
  [SMALL_STATE(50)] = 3737,
  [SMALL_STATE(51)] = 3773,
  [SMALL_STATE(52)] = 3827,
  [SMALL_STATE(53)] = 3867,
  [SMALL_STATE(54)] = 3903,
  [SMALL_STATE(55)] = 3939,
  [SMALL_STATE(56)] = 3975,
  [SMALL_STATE(57)] = 4017,
  [SMALL_STATE(58)] = 4048,
  [SMALL_STATE(59)] = 4081,
  [SMALL_STATE(60)] = 4112,
  [SMALL_STATE(61)] = 4147,
  [SMALL_STATE(62)] = 4178,
  [SMALL_STATE(63)] = 4211,
  [SMALL_STATE(64)] = 4246,
  [SMALL_STATE(65)] = 4281,
  [SMALL_STATE(66)] = 4332,
  [SMALL_STATE(67)] = 4367,
  [SMALL_STATE(68)] = 4418,
  [SMALL_STATE(69)] = 4451,
  [SMALL_STATE(70)] = 4481,
  [SMALL_STATE(71)] = 4513,
  [SMALL_STATE(72)] = 4547,
  [SMALL_STATE(73)] = 4577,
  [SMALL_STATE(74)] = 4609,
  [SMALL_STATE(75)] = 4641,
  [SMALL_STATE(76)] = 4673,
  [SMALL_STATE(77)] = 4707,
  [SMALL_STATE(78)] = 4741,
  [SMALL_STATE(79)] = 4770,
  [SMALL_STATE(80)] = 4799,
  [SMALL_STATE(81)] = 4828,
  [SMALL_STATE(82)] = 4857,
  [SMALL_STATE(83)] = 4912,
  [SMALL_STATE(84)] = 4941,
  [SMALL_STATE(85)] = 4970,
  [SMALL_STATE(86)] = 5003,
  [SMALL_STATE(87)] = 5032,
  [SMALL_STATE(88)] = 5087,
  [SMALL_STATE(89)] = 5142,
  [SMALL_STATE(90)] = 5171,
  [SMALL_STATE(91)] = 5198,
  [SMALL_STATE(92)] = 5227,
  [SMALL_STATE(93)] = 5256,
  [SMALL_STATE(94)] = 5289,
  [SMALL_STATE(95)] = 5316,
  [SMALL_STATE(96)] = 5371,
  [SMALL_STATE(97)] = 5398,
  [SMALL_STATE(98)] = 5431,
  [SMALL_STATE(99)] = 5460,
  [SMALL_STATE(100)] = 5489,
  [SMALL_STATE(101)] = 5518,
  [SMALL_STATE(102)] = 5547,
  [SMALL_STATE(103)] = 5576,
  [SMALL_STATE(104)] = 5631,
  [SMALL_STATE(105)] = 5660,
  [SMALL_STATE(106)] = 5689,
  [SMALL_STATE(107)] = 5718,
  [SMALL_STATE(108)] = 5770,
  [SMALL_STATE(109)] = 5808,
  [SMALL_STATE(110)] = 5860,
  [SMALL_STATE(111)] = 5912,
  [SMALL_STATE(112)] = 5964,
  [SMALL_STATE(113)] = 6016,
  [SMALL_STATE(114)] = 6044,
  [SMALL_STATE(115)] = 6076,
  [SMALL_STATE(116)] = 6128,
  [SMALL_STATE(117)] = 6180,
  [SMALL_STATE(118)] = 6218,
  [SMALL_STATE(119)] = 6250,
  [SMALL_STATE(120)] = 6302,
  [SMALL_STATE(121)] = 6354,
  [SMALL_STATE(122)] = 6392,
  [SMALL_STATE(123)] = 6444,
  [SMALL_STATE(124)] = 6476,
  [SMALL_STATE(125)] = 6504,
  [SMALL_STATE(126)] = 6542,
  [SMALL_STATE(127)] = 6594,
  [SMALL_STATE(128)] = 6646,
  [SMALL_STATE(129)] = 6674,
  [SMALL_STATE(130)] = 6702,
  [SMALL_STATE(131)] = 6754,
  [SMALL_STATE(132)] = 6806,
  [SMALL_STATE(133)] = 6858,
  [SMALL_STATE(134)] = 6907,
  [SMALL_STATE(135)] = 6956,
  [SMALL_STATE(136)] = 6983,
  [SMALL_STATE(137)] = 7010,
  [SMALL_STATE(138)] = 7040,
  [SMALL_STATE(139)] = 7086,
  [SMALL_STATE(140)] = 7132,
  [SMALL_STATE(141)] = 7162,
  [SMALL_STATE(142)] = 7192,
  [SMALL_STATE(143)] = 7235,
  [SMALL_STATE(144)] = 7278,
  [SMALL_STATE(145)] = 7309,
  [SMALL_STATE(146)] = 7340,
  [SMALL_STATE(147)] = 7383,
  [SMALL_STATE(148)] = 7414,
  [SMALL_STATE(149)] = 7445,
  [SMALL_STATE(150)] = 7488,
  [SMALL_STATE(151)] = 7528,
  [SMALL_STATE(152)] = 7568,
  [SMALL_STATE(153)] = 7608,
  [SMALL_STATE(154)] = 7648,
  [SMALL_STATE(155)] = 7680,
  [SMALL_STATE(156)] = 7706,
  [SMALL_STATE(157)] = 7746,
  [SMALL_STATE(158)] = 7786,
  [SMALL_STATE(159)] = 7826,
  [SMALL_STATE(160)] = 7866,
  [SMALL_STATE(161)] = 7906,
  [SMALL_STATE(162)] = 7939,
  [SMALL_STATE(163)] = 7972,
  [SMALL_STATE(164)] = 7997,
  [SMALL_STATE(165)] = 8022,
  [SMALL_STATE(166)] = 8049,
  [SMALL_STATE(167)] = 8076,
  [SMALL_STATE(168)] = 8100,
  [SMALL_STATE(169)] = 8130,
  [SMALL_STATE(170)] = 8160,
  [SMALL_STATE(171)] = 8184,
  [SMALL_STATE(172)] = 8208,
  [SMALL_STATE(173)] = 8232,
  [SMALL_STATE(174)] = 8256,
  [SMALL_STATE(175)] = 8280,
  [SMALL_STATE(176)] = 8306,
  [SMALL_STATE(177)] = 8336,
  [SMALL_STATE(178)] = 8358,
  [SMALL_STATE(179)] = 8380,
  [SMALL_STATE(180)] = 8403,
  [SMALL_STATE(181)] = 8424,
  [SMALL_STATE(182)] = 8443,
  [SMALL_STATE(183)] = 8466,
  [SMALL_STATE(184)] = 8489,
  [SMALL_STATE(185)] = 8512,
  [SMALL_STATE(186)] = 8535,
  [SMALL_STATE(187)] = 8554,
  [SMALL_STATE(188)] = 8577,
  [SMALL_STATE(189)] = 8600,
  [SMALL_STATE(190)] = 8621,
  [SMALL_STATE(191)] = 8644,
  [SMALL_STATE(192)] = 8667,
  [SMALL_STATE(193)] = 8688,
  [SMALL_STATE(194)] = 8711,
  [SMALL_STATE(195)] = 8734,
  [SMALL_STATE(196)] = 8755,
  [SMALL_STATE(197)] = 8776,
  [SMALL_STATE(198)] = 8799,
  [SMALL_STATE(199)] = 8822,
  [SMALL_STATE(200)] = 8845,
  [SMALL_STATE(201)] = 8868,
  [SMALL_STATE(202)] = 8891,
  [SMALL_STATE(203)] = 8914,
  [SMALL_STATE(204)] = 8933,
  [SMALL_STATE(205)] = 8956,
  [SMALL_STATE(206)] = 8979,
  [SMALL_STATE(207)] = 9002,
  [SMALL_STATE(208)] = 9022,
  [SMALL_STATE(209)] = 9042,
  [SMALL_STATE(210)] = 9060,
  [SMALL_STATE(211)] = 9080,
  [SMALL_STATE(212)] = 9098,
  [SMALL_STATE(213)] = 9118,
  [SMALL_STATE(214)] = 9138,
  [SMALL_STATE(215)] = 9158,
  [SMALL_STATE(216)] = 9186,
  [SMALL_STATE(217)] = 9204,
  [SMALL_STATE(218)] = 9222,
  [SMALL_STATE(219)] = 9246,
  [SMALL_STATE(220)] = 9264,
  [SMALL_STATE(221)] = 9282,
  [SMALL_STATE(222)] = 9300,
  [SMALL_STATE(223)] = 9320,
  [SMALL_STATE(224)] = 9340,
  [SMALL_STATE(225)] = 9358,
  [SMALL_STATE(226)] = 9376,
  [SMALL_STATE(227)] = 9396,
  [SMALL_STATE(228)] = 9414,
  [SMALL_STATE(229)] = 9434,
  [SMALL_STATE(230)] = 9452,
  [SMALL_STATE(231)] = 9476,
  [SMALL_STATE(232)] = 9494,
  [SMALL_STATE(233)] = 9512,
  [SMALL_STATE(234)] = 9532,
  [SMALL_STATE(235)] = 9550,
  [SMALL_STATE(236)] = 9568,
  [SMALL_STATE(237)] = 9592,
  [SMALL_STATE(238)] = 9610,
  [SMALL_STATE(239)] = 9630,
  [SMALL_STATE(240)] = 9650,
  [SMALL_STATE(241)] = 9670,
  [SMALL_STATE(242)] = 9690,
  [SMALL_STATE(243)] = 9710,
  [SMALL_STATE(244)] = 9730,
  [SMALL_STATE(245)] = 9750,
  [SMALL_STATE(246)] = 9770,
  [SMALL_STATE(247)] = 9790,
  [SMALL_STATE(248)] = 9810,
  [SMALL_STATE(249)] = 9830,
  [SMALL_STATE(250)] = 9848,
  [SMALL_STATE(251)] = 9866,
  [SMALL_STATE(252)] = 9886,
  [SMALL_STATE(253)] = 9906,
  [SMALL_STATE(254)] = 9926,
  [SMALL_STATE(255)] = 9946,
  [SMALL_STATE(256)] = 9966,
  [SMALL_STATE(257)] = 9984,
  [SMALL_STATE(258)] = 10004,
  [SMALL_STATE(259)] = 10024,
  [SMALL_STATE(260)] = 10044,
  [SMALL_STATE(261)] = 10064,
  [SMALL_STATE(262)] = 10084,
  [SMALL_STATE(263)] = 10101,
  [SMALL_STATE(264)] = 10118,
  [SMALL_STATE(265)] = 10137,
  [SMALL_STATE(266)] = 10156,
  [SMALL_STATE(267)] = 10175,
  [SMALL_STATE(268)] = 10196,
  [SMALL_STATE(269)] = 10213,
  [SMALL_STATE(270)] = 10230,
  [SMALL_STATE(271)] = 10249,
  [SMALL_STATE(272)] = 10266,
  [SMALL_STATE(273)] = 10295,
  [SMALL_STATE(274)] = 10316,
  [SMALL_STATE(275)] = 10333,
  [SMALL_STATE(276)] = 10350,
  [SMALL_STATE(277)] = 10367,
  [SMALL_STATE(278)] = 10384,
  [SMALL_STATE(279)] = 10405,
  [SMALL_STATE(280)] = 10426,
  [SMALL_STATE(281)] = 10445,
  [SMALL_STATE(282)] = 10464,
  [SMALL_STATE(283)] = 10481,
  [SMALL_STATE(284)] = 10498,
  [SMALL_STATE(285)] = 10527,
  [SMALL_STATE(286)] = 10548,
  [SMALL_STATE(287)] = 10565,
  [SMALL_STATE(288)] = 10582,
  [SMALL_STATE(289)] = 10603,
  [SMALL_STATE(290)] = 10632,
  [SMALL_STATE(291)] = 10661,
  [SMALL_STATE(292)] = 10680,
  [SMALL_STATE(293)] = 10697,
  [SMALL_STATE(294)] = 10714,
  [SMALL_STATE(295)] = 10743,
  [SMALL_STATE(296)] = 10764,
  [SMALL_STATE(297)] = 10781,
  [SMALL_STATE(298)] = 10809,
  [SMALL_STATE(299)] = 10831,
  [SMALL_STATE(300)] = 10859,
  [SMALL_STATE(301)] = 10885,
  [SMALL_STATE(302)] = 10913,
  [SMALL_STATE(303)] = 10939,
  [SMALL_STATE(304)] = 10967,
  [SMALL_STATE(305)] = 10995,
  [SMALL_STATE(306)] = 11023,
  [SMALL_STATE(307)] = 11051,
  [SMALL_STATE(308)] = 11079,
  [SMALL_STATE(309)] = 11105,
  [SMALL_STATE(310)] = 11133,
  [SMALL_STATE(311)] = 11161,
  [SMALL_STATE(312)] = 11189,
  [SMALL_STATE(313)] = 11217,
  [SMALL_STATE(314)] = 11245,
  [SMALL_STATE(315)] = 11273,
  [SMALL_STATE(316)] = 11301,
  [SMALL_STATE(317)] = 11329,
  [SMALL_STATE(318)] = 11357,
  [SMALL_STATE(319)] = 11385,
  [SMALL_STATE(320)] = 11411,
  [SMALL_STATE(321)] = 11439,
  [SMALL_STATE(322)] = 11467,
  [SMALL_STATE(323)] = 11485,
  [SMALL_STATE(324)] = 11503,
  [SMALL_STATE(325)] = 11531,
  [SMALL_STATE(326)] = 11559,
  [SMALL_STATE(327)] = 11587,
  [SMALL_STATE(328)] = 11611,
  [SMALL_STATE(329)] = 11639,
  [SMALL_STATE(330)] = 11667,
  [SMALL_STATE(331)] = 11695,
  [SMALL_STATE(332)] = 11723,
  [SMALL_STATE(333)] = 11751,
  [SMALL_STATE(334)] = 11779,
  [SMALL_STATE(335)] = 11805,
  [SMALL_STATE(336)] = 11833,
  [SMALL_STATE(337)] = 11857,
  [SMALL_STATE(338)] = 11885,
  [SMALL_STATE(339)] = 11913,
  [SMALL_STATE(340)] = 11932,
  [SMALL_STATE(341)] = 11957,
  [SMALL_STATE(342)] = 11982,
  [SMALL_STATE(343)] = 12007,
  [SMALL_STATE(344)] = 12028,
  [SMALL_STATE(345)] = 12047,
  [SMALL_STATE(346)] = 12064,
  [SMALL_STATE(347)] = 12083,
  [SMALL_STATE(348)] = 12104,
  [SMALL_STATE(349)] = 12125,
  [SMALL_STATE(350)] = 12146,
  [SMALL_STATE(351)] = 12171,
  [SMALL_STATE(352)] = 12188,
  [SMALL_STATE(353)] = 12209,
  [SMALL_STATE(354)] = 12234,
  [SMALL_STATE(355)] = 12253,
  [SMALL_STATE(356)] = 12273,
  [SMALL_STATE(357)] = 12289,
  [SMALL_STATE(358)] = 12305,
  [SMALL_STATE(359)] = 12321,
  [SMALL_STATE(360)] = 12337,
  [SMALL_STATE(361)] = 12359,
  [SMALL_STATE(362)] = 12375,
  [SMALL_STATE(363)] = 12391,
  [SMALL_STATE(364)] = 12407,
  [SMALL_STATE(365)] = 12423,
  [SMALL_STATE(366)] = 12439,
  [SMALL_STATE(367)] = 12461,
  [SMALL_STATE(368)] = 12477,
  [SMALL_STATE(369)] = 12493,
  [SMALL_STATE(370)] = 12509,
  [SMALL_STATE(371)] = 12525,
  [SMALL_STATE(372)] = 12541,
  [SMALL_STATE(373)] = 12557,
  [SMALL_STATE(374)] = 12577,
  [SMALL_STATE(375)] = 12593,
  [SMALL_STATE(376)] = 12609,
  [SMALL_STATE(377)] = 12629,
  [SMALL_STATE(378)] = 12645,
  [SMALL_STATE(379)] = 12662,
  [SMALL_STATE(380)] = 12679,
  [SMALL_STATE(381)] = 12694,
  [SMALL_STATE(382)] = 12711,
  [SMALL_STATE(383)] = 12728,
  [SMALL_STATE(384)] = 12743,
  [SMALL_STATE(385)] = 12756,
  [SMALL_STATE(386)] = 12775,
  [SMALL_STATE(387)] = 12792,
  [SMALL_STATE(388)] = 12813,
  [SMALL_STATE(389)] = 12834,
  [SMALL_STATE(390)] = 12849,
  [SMALL_STATE(391)] = 12866,
  [SMALL_STATE(392)] = 12887,
  [SMALL_STATE(393)] = 12899,
  [SMALL_STATE(394)] = 12915,
  [SMALL_STATE(395)] = 12927,
  [SMALL_STATE(396)] = 12939,
  [SMALL_STATE(397)] = 12955,
  [SMALL_STATE(398)] = 12967,
  [SMALL_STATE(399)] = 12981,
  [SMALL_STATE(400)] = 12993,
  [SMALL_STATE(401)] = 13007,
  [SMALL_STATE(402)] = 13023,
  [SMALL_STATE(403)] = 13035,
  [SMALL_STATE(404)] = 13047,
  [SMALL_STATE(405)] = 13059,
  [SMALL_STATE(406)] = 13073,
  [SMALL_STATE(407)] = 13085,
  [SMALL_STATE(408)] = 13096,
  [SMALL_STATE(409)] = 13111,
  [SMALL_STATE(410)] = 13122,
  [SMALL_STATE(411)] = 13137,
  [SMALL_STATE(412)] = 13152,
  [SMALL_STATE(413)] = 13167,
  [SMALL_STATE(414)] = 13182,
  [SMALL_STATE(415)] = 13197,
  [SMALL_STATE(416)] = 13208,
  [SMALL_STATE(417)] = 13223,
  [SMALL_STATE(418)] = 13238,
  [SMALL_STATE(419)] = 13251,
  [SMALL_STATE(420)] = 13262,
  [SMALL_STATE(421)] = 13277,
  [SMALL_STATE(422)] = 13292,
  [SMALL_STATE(423)] = 13303,
  [SMALL_STATE(424)] = 13318,
  [SMALL_STATE(425)] = 13333,
  [SMALL_STATE(426)] = 13350,
  [SMALL_STATE(427)] = 13361,
  [SMALL_STATE(428)] = 13374,
  [SMALL_STATE(429)] = 13385,
  [SMALL_STATE(430)] = 13398,
  [SMALL_STATE(431)] = 13415,
  [SMALL_STATE(432)] = 13426,
  [SMALL_STATE(433)] = 13440,
  [SMALL_STATE(434)] = 13454,
  [SMALL_STATE(435)] = 13466,
  [SMALL_STATE(436)] = 13480,
  [SMALL_STATE(437)] = 13494,
  [SMALL_STATE(438)] = 13508,
  [SMALL_STATE(439)] = 13522,
  [SMALL_STATE(440)] = 13536,
  [SMALL_STATE(441)] = 13550,
  [SMALL_STATE(442)] = 13564,
  [SMALL_STATE(443)] = 13578,
  [SMALL_STATE(444)] = 13592,
  [SMALL_STATE(445)] = 13606,
  [SMALL_STATE(446)] = 13620,
  [SMALL_STATE(447)] = 13634,
  [SMALL_STATE(448)] = 13648,
  [SMALL_STATE(449)] = 13662,
  [SMALL_STATE(450)] = 13676,
  [SMALL_STATE(451)] = 13690,
  [SMALL_STATE(452)] = 13704,
  [SMALL_STATE(453)] = 13718,
  [SMALL_STATE(454)] = 13732,
  [SMALL_STATE(455)] = 13746,
  [SMALL_STATE(456)] = 13760,
  [SMALL_STATE(457)] = 13774,
  [SMALL_STATE(458)] = 13788,
  [SMALL_STATE(459)] = 13802,
  [SMALL_STATE(460)] = 13816,
  [SMALL_STATE(461)] = 13830,
  [SMALL_STATE(462)] = 13844,
  [SMALL_STATE(463)] = 13858,
  [SMALL_STATE(464)] = 13872,
  [SMALL_STATE(465)] = 13884,
  [SMALL_STATE(466)] = 13898,
  [SMALL_STATE(467)] = 13912,
  [SMALL_STATE(468)] = 13926,
  [SMALL_STATE(469)] = 13940,
  [SMALL_STATE(470)] = 13954,
  [SMALL_STATE(471)] = 13968,
  [SMALL_STATE(472)] = 13982,
  [SMALL_STATE(473)] = 13996,
  [SMALL_STATE(474)] = 14010,
  [SMALL_STATE(475)] = 14024,
  [SMALL_STATE(476)] = 14038,
  [SMALL_STATE(477)] = 14052,
  [SMALL_STATE(478)] = 14066,
  [SMALL_STATE(479)] = 14078,
  [SMALL_STATE(480)] = 14092,
  [SMALL_STATE(481)] = 14106,
  [SMALL_STATE(482)] = 14120,
  [SMALL_STATE(483)] = 14134,
  [SMALL_STATE(484)] = 14146,
  [SMALL_STATE(485)] = 14158,
  [SMALL_STATE(486)] = 14172,
  [SMALL_STATE(487)] = 14186,
  [SMALL_STATE(488)] = 14200,
  [SMALL_STATE(489)] = 14214,
  [SMALL_STATE(490)] = 14228,
  [SMALL_STATE(491)] = 14242,
  [SMALL_STATE(492)] = 14256,
  [SMALL_STATE(493)] = 14270,
  [SMALL_STATE(494)] = 14284,
  [SMALL_STATE(495)] = 14298,
  [SMALL_STATE(496)] = 14312,
  [SMALL_STATE(497)] = 14326,
  [SMALL_STATE(498)] = 14338,
  [SMALL_STATE(499)] = 14352,
  [SMALL_STATE(500)] = 14366,
  [SMALL_STATE(501)] = 14378,
  [SMALL_STATE(502)] = 14392,
  [SMALL_STATE(503)] = 14406,
  [SMALL_STATE(504)] = 14420,
  [SMALL_STATE(505)] = 14434,
  [SMALL_STATE(506)] = 14448,
  [SMALL_STATE(507)] = 14462,
  [SMALL_STATE(508)] = 14474,
  [SMALL_STATE(509)] = 14488,
  [SMALL_STATE(510)] = 14502,
  [SMALL_STATE(511)] = 14516,
  [SMALL_STATE(512)] = 14530,
  [SMALL_STATE(513)] = 14544,
  [SMALL_STATE(514)] = 14558,
  [SMALL_STATE(515)] = 14572,
  [SMALL_STATE(516)] = 14586,
  [SMALL_STATE(517)] = 14600,
  [SMALL_STATE(518)] = 14614,
  [SMALL_STATE(519)] = 14628,
  [SMALL_STATE(520)] = 14640,
  [SMALL_STATE(521)] = 14654,
  [SMALL_STATE(522)] = 14663,
  [SMALL_STATE(523)] = 14674,
  [SMALL_STATE(524)] = 14685,
  [SMALL_STATE(525)] = 14694,
  [SMALL_STATE(526)] = 14705,
  [SMALL_STATE(527)] = 14714,
  [SMALL_STATE(528)] = 14723,
  [SMALL_STATE(529)] = 14734,
  [SMALL_STATE(530)] = 14745,
  [SMALL_STATE(531)] = 14756,
  [SMALL_STATE(532)] = 14765,
  [SMALL_STATE(533)] = 14776,
  [SMALL_STATE(534)] = 14787,
  [SMALL_STATE(535)] = 14798,
  [SMALL_STATE(536)] = 14807,
  [SMALL_STATE(537)] = 14818,
  [SMALL_STATE(538)] = 14829,
  [SMALL_STATE(539)] = 14838,
  [SMALL_STATE(540)] = 14849,
  [SMALL_STATE(541)] = 14862,
  [SMALL_STATE(542)] = 14873,
  [SMALL_STATE(543)] = 14882,
  [SMALL_STATE(544)] = 14895,
  [SMALL_STATE(545)] = 14904,
  [SMALL_STATE(546)] = 14913,
  [SMALL_STATE(547)] = 14924,
  [SMALL_STATE(548)] = 14935,
  [SMALL_STATE(549)] = 14944,
  [SMALL_STATE(550)] = 14955,
  [SMALL_STATE(551)] = 14964,
  [SMALL_STATE(552)] = 14975,
  [SMALL_STATE(553)] = 14984,
  [SMALL_STATE(554)] = 14993,
  [SMALL_STATE(555)] = 15002,
  [SMALL_STATE(556)] = 15013,
  [SMALL_STATE(557)] = 15022,
  [SMALL_STATE(558)] = 15031,
  [SMALL_STATE(559)] = 15040,
  [SMALL_STATE(560)] = 15051,
  [SMALL_STATE(561)] = 15062,
  [SMALL_STATE(562)] = 15071,
  [SMALL_STATE(563)] = 15080,
  [SMALL_STATE(564)] = 15091,
  [SMALL_STATE(565)] = 15102,
  [SMALL_STATE(566)] = 15113,
  [SMALL_STATE(567)] = 15122,
  [SMALL_STATE(568)] = 15133,
  [SMALL_STATE(569)] = 15142,
  [SMALL_STATE(570)] = 15151,
  [SMALL_STATE(571)] = 15162,
  [SMALL_STATE(572)] = 15171,
  [SMALL_STATE(573)] = 15182,
  [SMALL_STATE(574)] = 15191,
  [SMALL_STATE(575)] = 15202,
  [SMALL_STATE(576)] = 15211,
  [SMALL_STATE(577)] = 15220,
  [SMALL_STATE(578)] = 15229,
  [SMALL_STATE(579)] = 15238,
  [SMALL_STATE(580)] = 15247,
  [SMALL_STATE(581)] = 15256,
  [SMALL_STATE(582)] = 15265,
  [SMALL_STATE(583)] = 15274,
  [SMALL_STATE(584)] = 15282,
  [SMALL_STATE(585)] = 15290,
  [SMALL_STATE(586)] = 15298,
  [SMALL_STATE(587)] = 15306,
  [SMALL_STATE(588)] = 15314,
  [SMALL_STATE(589)] = 15322,
  [SMALL_STATE(590)] = 15330,
  [SMALL_STATE(591)] = 15338,
  [SMALL_STATE(592)] = 15346,
  [SMALL_STATE(593)] = 15354,
  [SMALL_STATE(594)] = 15362,
  [SMALL_STATE(595)] = 15370,
  [SMALL_STATE(596)] = 15378,
  [SMALL_STATE(597)] = 15386,
  [SMALL_STATE(598)] = 15394,
  [SMALL_STATE(599)] = 15402,
  [SMALL_STATE(600)] = 15410,
  [SMALL_STATE(601)] = 15418,
  [SMALL_STATE(602)] = 15426,
  [SMALL_STATE(603)] = 15434,
  [SMALL_STATE(604)] = 15442,
  [SMALL_STATE(605)] = 15450,
  [SMALL_STATE(606)] = 15458,
  [SMALL_STATE(607)] = 15466,
  [SMALL_STATE(608)] = 15474,
  [SMALL_STATE(609)] = 15482,
  [SMALL_STATE(610)] = 15490,
  [SMALL_STATE(611)] = 15498,
  [SMALL_STATE(612)] = 15506,
  [SMALL_STATE(613)] = 15514,
  [SMALL_STATE(614)] = 15522,
  [SMALL_STATE(615)] = 15530,
  [SMALL_STATE(616)] = 15538,
  [SMALL_STATE(617)] = 15546,
  [SMALL_STATE(618)] = 15554,
  [SMALL_STATE(619)] = 15562,
  [SMALL_STATE(620)] = 15570,
  [SMALL_STATE(621)] = 15578,
  [SMALL_STATE(622)] = 15586,
  [SMALL_STATE(623)] = 15594,
  [SMALL_STATE(624)] = 15602,
  [SMALL_STATE(625)] = 15610,
  [SMALL_STATE(626)] = 15618,
  [SMALL_STATE(627)] = 15626,
  [SMALL_STATE(628)] = 15634,
  [SMALL_STATE(629)] = 15642,
  [SMALL_STATE(630)] = 15650,
  [SMALL_STATE(631)] = 15658,
  [SMALL_STATE(632)] = 15666,
  [SMALL_STATE(633)] = 15674,
  [SMALL_STATE(634)] = 15682,
  [SMALL_STATE(635)] = 15690,
  [SMALL_STATE(636)] = 15698,
  [SMALL_STATE(637)] = 15706,
  [SMALL_STATE(638)] = 15714,
  [SMALL_STATE(639)] = 15722,
  [SMALL_STATE(640)] = 15730,
  [SMALL_STATE(641)] = 15738,
  [SMALL_STATE(642)] = 15746,
  [SMALL_STATE(643)] = 15754,
  [SMALL_STATE(644)] = 15762,
  [SMALL_STATE(645)] = 15770,
  [SMALL_STATE(646)] = 15778,
  [SMALL_STATE(647)] = 15786,
  [SMALL_STATE(648)] = 15794,
  [SMALL_STATE(649)] = 15802,
  [SMALL_STATE(650)] = 15810,
  [SMALL_STATE(651)] = 15818,
  [SMALL_STATE(652)] = 15826,
  [SMALL_STATE(653)] = 15834,
  [SMALL_STATE(654)] = 15842,
  [SMALL_STATE(655)] = 15850,
  [SMALL_STATE(656)] = 15858,
  [SMALL_STATE(657)] = 15866,
  [SMALL_STATE(658)] = 15874,
  [SMALL_STATE(659)] = 15882,
  [SMALL_STATE(660)] = 15890,
  [SMALL_STATE(661)] = 15898,
  [SMALL_STATE(662)] = 15906,
  [SMALL_STATE(663)] = 15914,
  [SMALL_STATE(664)] = 15922,
  [SMALL_STATE(665)] = 15930,
  [SMALL_STATE(666)] = 15938,
  [SMALL_STATE(667)] = 15946,
  [SMALL_STATE(668)] = 15954,
  [SMALL_STATE(669)] = 15962,
  [SMALL_STATE(670)] = 15970,
  [SMALL_STATE(671)] = 15980,
  [SMALL_STATE(672)] = 15988,
  [SMALL_STATE(673)] = 15996,
  [SMALL_STATE(674)] = 16004,
  [SMALL_STATE(675)] = 16014,
  [SMALL_STATE(676)] = 16022,
  [SMALL_STATE(677)] = 16030,
  [SMALL_STATE(678)] = 16038,
  [SMALL_STATE(679)] = 16046,
  [SMALL_STATE(680)] = 16054,
  [SMALL_STATE(681)] = 16062,
  [SMALL_STATE(682)] = 16070,
  [SMALL_STATE(683)] = 16078,
  [SMALL_STATE(684)] = 16086,
  [SMALL_STATE(685)] = 16094,
  [SMALL_STATE(686)] = 16102,
  [SMALL_STATE(687)] = 16110,
  [SMALL_STATE(688)] = 16118,
  [SMALL_STATE(689)] = 16126,
  [SMALL_STATE(690)] = 16134,
  [SMALL_STATE(691)] = 16142,
  [SMALL_STATE(692)] = 16150,
  [SMALL_STATE(693)] = 16158,
  [SMALL_STATE(694)] = 16166,
  [SMALL_STATE(695)] = 16174,
  [SMALL_STATE(696)] = 16182,
  [SMALL_STATE(697)] = 16190,
  [SMALL_STATE(698)] = 16198,
  [SMALL_STATE(699)] = 16206,
  [SMALL_STATE(700)] = 16214,
  [SMALL_STATE(701)] = 16222,
  [SMALL_STATE(702)] = 16230,
  [SMALL_STATE(703)] = 16238,
  [SMALL_STATE(704)] = 16246,
  [SMALL_STATE(705)] = 16254,
  [SMALL_STATE(706)] = 16262,
  [SMALL_STATE(707)] = 16270,
  [SMALL_STATE(708)] = 16278,
  [SMALL_STATE(709)] = 16286,
  [SMALL_STATE(710)] = 16294,
  [SMALL_STATE(711)] = 16302,
  [SMALL_STATE(712)] = 16310,
  [SMALL_STATE(713)] = 16318,
  [SMALL_STATE(714)] = 16326,
  [SMALL_STATE(715)] = 16334,
  [SMALL_STATE(716)] = 16342,
  [SMALL_STATE(717)] = 16350,
  [SMALL_STATE(718)] = 16358,
  [SMALL_STATE(719)] = 16366,
  [SMALL_STATE(720)] = 16374,
  [SMALL_STATE(721)] = 16382,
  [SMALL_STATE(722)] = 16390,
  [SMALL_STATE(723)] = 16398,
  [SMALL_STATE(724)] = 16406,
  [SMALL_STATE(725)] = 16414,
  [SMALL_STATE(726)] = 16422,
  [SMALL_STATE(727)] = 16430,
  [SMALL_STATE(728)] = 16438,
  [SMALL_STATE(729)] = 16448,
  [SMALL_STATE(730)] = 16456,
  [SMALL_STATE(731)] = 16464,
  [SMALL_STATE(732)] = 16472,
  [SMALL_STATE(733)] = 16480,
  [SMALL_STATE(734)] = 16488,
  [SMALL_STATE(735)] = 16496,
  [SMALL_STATE(736)] = 16504,
  [SMALL_STATE(737)] = 16512,
  [SMALL_STATE(738)] = 16520,
  [SMALL_STATE(739)] = 16528,
  [SMALL_STATE(740)] = 16536,
  [SMALL_STATE(741)] = 16544,
  [SMALL_STATE(742)] = 16552,
  [SMALL_STATE(743)] = 16560,
  [SMALL_STATE(744)] = 16568,
  [SMALL_STATE(745)] = 16576,
  [SMALL_STATE(746)] = 16584,
  [SMALL_STATE(747)] = 16592,
  [SMALL_STATE(748)] = 16600,
  [SMALL_STATE(749)] = 16608,
  [SMALL_STATE(750)] = 16616,
  [SMALL_STATE(751)] = 16624,
  [SMALL_STATE(752)] = 16632,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(351),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(48),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(345),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(61),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(540),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(96),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(635),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(351),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(48),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(351),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(345),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(61),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(38),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(543),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(345),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(61),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(52),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(702),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(701),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(694),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(693),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(691),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(690),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(438),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(676),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(441),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(36),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(56),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(152),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 6),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(143),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(138),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(133),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(203),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(695),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(740),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(742),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(173),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(564),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(281),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(142),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(532),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(383),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(623),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(655),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(151),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(149),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(139),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(139),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(131),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(134),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(547),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(478),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(427),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(13),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(666),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(366),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(343),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(360),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1526] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
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
