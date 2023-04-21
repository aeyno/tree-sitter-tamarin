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
#define STATE_COUNT 728
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 248
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
  sym_nested = 203,
  sym_app = 204,
  sym_literal = 205,
  sym_nonnode_var = 206,
  sym_facts = 207,
  sym_builtin_facts = 208,
  sym_fact = 209,
  sym_fact_annotes = 210,
  sym_fact_annote = 211,
  sym_formula = 212,
  sym_imp = 213,
  sym_disjunction = 214,
  sym_conjunction = 215,
  sym_negation = 216,
  sym_atom = 217,
  sym_lvar = 218,
  sym_quantifier = 219,
  aux_sym_body_repeat1 = 220,
  aux_sym_functions_repeat1 = 221,
  aux_sym_equations_repeat1 = 222,
  aux_sym_built_ins_repeat1 = 223,
  aux_sym_global_heuristic_repeat1 = 224,
  aux_sym_tactic_repeat1 = 225,
  aux_sym_tactic_repeat2 = 226,
  aux_sym_prio_repeat1 = 227,
  aux_sym_function_repeat1 = 228,
  aux_sym_and_function_repeat1 = 229,
  aux_sym_not_function_repeat1 = 230,
  aux_sym_variants_repeat1 = 231,
  aux_sym_rule_attrs_repeat1 = 232,
  aux_sym_let_block_repeat1 = 233,
  aux_sym_lemma_attrs_repeat1 = 234,
  aux_sym_proof_skeleton_repeat1 = 235,
  aux_sym_goal_repeat1 = 236,
  aux_sym_natural_subscr_repeat1 = 237,
  aux_sym_tuple_term_repeat1 = 238,
  aux_sym__msetterm_repeat1 = 239,
  aux_sym__xorterm_repeat1 = 240,
  aux_sym__multterm_repeat1 = 241,
  aux_sym__expterm_repeat1 = 242,
  aux_sym_facts_repeat1 = 243,
  aux_sym_fact_annotes_repeat1 = 244,
  aux_sym_disjunction_repeat1 = 245,
  aux_sym_conjunction_repeat1 = 246,
  aux_sym_atom_repeat1 = 247,
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
  [14] = 5,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 28,
  [41] = 41,
  [42] = 37,
  [43] = 30,
  [44] = 44,
  [45] = 31,
  [46] = 46,
  [47] = 41,
  [48] = 38,
  [49] = 49,
  [50] = 33,
  [51] = 51,
  [52] = 39,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 49,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
  [62] = 51,
  [63] = 63,
  [64] = 44,
  [65] = 46,
  [66] = 66,
  [67] = 67,
  [68] = 60,
  [69] = 69,
  [70] = 63,
  [71] = 67,
  [72] = 59,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 73,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 89,
  [101] = 92,
  [102] = 102,
  [103] = 103,
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
  [117] = 116,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 115,
  [122] = 122,
  [123] = 123,
  [124] = 118,
  [125] = 118,
  [126] = 115,
  [127] = 116,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 133,
  [134] = 35,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 141,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 66,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 148,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 69,
  [165] = 58,
  [166] = 166,
  [167] = 75,
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
  [181] = 170,
  [182] = 79,
  [183] = 183,
  [184] = 184,
  [185] = 183,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 74,
  [195] = 81,
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
  [207] = 197,
  [208] = 199,
  [209] = 209,
  [210] = 210,
  [211] = 209,
  [212] = 85,
  [213] = 204,
  [214] = 109,
  [215] = 88,
  [216] = 96,
  [217] = 217,
  [218] = 206,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 224,
  [228] = 228,
  [229] = 97,
  [230] = 95,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 228,
  [235] = 107,
  [236] = 108,
  [237] = 237,
  [238] = 110,
  [239] = 82,
  [240] = 240,
  [241] = 106,
  [242] = 105,
  [243] = 243,
  [244] = 103,
  [245] = 102,
  [246] = 243,
  [247] = 247,
  [248] = 180,
  [249] = 249,
  [250] = 188,
  [251] = 251,
  [252] = 170,
  [253] = 253,
  [254] = 170,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 188,
  [264] = 264,
  [265] = 174,
  [266] = 266,
  [267] = 267,
  [268] = 261,
  [269] = 179,
  [270] = 270,
  [271] = 183,
  [272] = 272,
  [273] = 253,
  [274] = 258,
  [275] = 275,
  [276] = 257,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 179,
  [281] = 174,
  [282] = 183,
  [283] = 66,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 284,
  [288] = 69,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 294,
  [297] = 297,
  [298] = 298,
  [299] = 58,
  [300] = 300,
  [301] = 301,
  [302] = 285,
  [303] = 298,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 289,
  [308] = 306,
  [309] = 309,
  [310] = 301,
  [311] = 311,
  [312] = 305,
  [313] = 286,
  [314] = 297,
  [315] = 315,
  [316] = 316,
  [317] = 292,
  [318] = 300,
  [319] = 309,
  [320] = 291,
  [321] = 311,
  [322] = 290,
  [323] = 304,
  [324] = 324,
  [325] = 325,
  [326] = 179,
  [327] = 174,
  [328] = 328,
  [329] = 76,
  [330] = 330,
  [331] = 80,
  [332] = 188,
  [333] = 75,
  [334] = 334,
  [335] = 335,
  [336] = 330,
  [337] = 78,
  [338] = 93,
  [339] = 339,
  [340] = 339,
  [341] = 88,
  [342] = 94,
  [343] = 95,
  [344] = 106,
  [345] = 104,
  [346] = 247,
  [347] = 102,
  [348] = 103,
  [349] = 108,
  [350] = 87,
  [351] = 107,
  [352] = 85,
  [353] = 105,
  [354] = 82,
  [355] = 110,
  [356] = 97,
  [357] = 96,
  [358] = 109,
  [359] = 112,
  [360] = 113,
  [361] = 361,
  [362] = 362,
  [363] = 226,
  [364] = 364,
  [365] = 365,
  [366] = 58,
  [367] = 364,
  [368] = 368,
  [369] = 119,
  [370] = 370,
  [371] = 123,
  [372] = 372,
  [373] = 142,
  [374] = 75,
  [375] = 130,
  [376] = 107,
  [377] = 97,
  [378] = 247,
  [379] = 109,
  [380] = 380,
  [381] = 106,
  [382] = 88,
  [383] = 243,
  [384] = 380,
  [385] = 385,
  [386] = 82,
  [387] = 135,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 362,
  [395] = 372,
  [396] = 396,
  [397] = 370,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 132,
  [404] = 388,
  [405] = 405,
  [406] = 406,
  [407] = 368,
  [408] = 408,
  [409] = 409,
  [410] = 138,
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
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 424,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 418,
  [443] = 443,
  [444] = 444,
  [445] = 443,
  [446] = 446,
  [447] = 447,
  [448] = 438,
  [449] = 432,
  [450] = 450,
  [451] = 451,
  [452] = 414,
  [453] = 426,
  [454] = 454,
  [455] = 421,
  [456] = 416,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 451,
  [462] = 422,
  [463] = 458,
  [464] = 460,
  [465] = 439,
  [466] = 436,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 450,
  [472] = 440,
  [473] = 473,
  [474] = 474,
  [475] = 469,
  [476] = 439,
  [477] = 460,
  [478] = 458,
  [479] = 479,
  [480] = 451,
  [481] = 428,
  [482] = 425,
  [483] = 419,
  [484] = 484,
  [485] = 469,
  [486] = 486,
  [487] = 441,
  [488] = 437,
  [489] = 489,
  [490] = 490,
  [491] = 423,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 391,
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
  [510] = 497,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 513,
  [519] = 519,
  [520] = 520,
  [521] = 514,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 277,
  [529] = 529,
  [530] = 516,
  [531] = 505,
  [532] = 532,
  [533] = 507,
  [534] = 534,
  [535] = 535,
  [536] = 74,
  [537] = 398,
  [538] = 538,
  [539] = 539,
  [540] = 525,
  [541] = 266,
  [542] = 542,
  [543] = 396,
  [544] = 506,
  [545] = 513,
  [546] = 546,
  [547] = 392,
  [548] = 515,
  [549] = 516,
  [550] = 524,
  [551] = 405,
  [552] = 524,
  [553] = 406,
  [554] = 249,
  [555] = 555,
  [556] = 270,
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
  [600] = 600,
  [601] = 601,
  [602] = 597,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 601,
  [611] = 611,
  [612] = 571,
  [613] = 613,
  [614] = 570,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 563,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 611,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 600,
  [628] = 628,
  [629] = 629,
  [630] = 626,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 594,
  [635] = 635,
  [636] = 636,
  [637] = 596,
  [638] = 638,
  [639] = 598,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 621,
  [644] = 594,
  [645] = 597,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 625,
  [652] = 652,
  [653] = 595,
  [654] = 593,
  [655] = 655,
  [656] = 656,
  [657] = 580,
  [658] = 658,
  [659] = 569,
  [660] = 660,
  [661] = 562,
  [662] = 662,
  [663] = 616,
  [664] = 635,
  [665] = 665,
  [666] = 650,
  [667] = 598,
  [668] = 648,
  [669] = 596,
  [670] = 670,
  [671] = 629,
  [672] = 665,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 631,
  [679] = 679,
  [680] = 680,
  [681] = 579,
  [682] = 682,
  [683] = 633,
  [684] = 670,
  [685] = 685,
  [686] = 575,
  [687] = 568,
  [688] = 594,
  [689] = 689,
  [690] = 565,
  [691] = 561,
  [692] = 648,
  [693] = 693,
  [694] = 619,
  [695] = 695,
  [696] = 638,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 620,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 591,
  [709] = 709,
  [710] = 577,
  [711] = 711,
  [712] = 567,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 655,
  [717] = 717,
  [718] = 613,
  [719] = 719,
  [720] = 589,
  [721] = 721,
  [722] = 722,
  [723] = 682,
  [724] = 724,
  [725] = 647,
  [726] = 726,
  [727] = 701,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(480);
      if (lookahead == '!') ADVANCE(870);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '*') ADVANCE(855);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(689);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '>') ADVANCE(849);
      if (lookahead == '@') ADVANCE(821);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(709);
      if (lookahead == 'E') ADVANCE(783);
      if (lookahead == 'F') ADVANCE(882);
      if (lookahead == 'I') ADVANCE(711);
      if (lookahead == 'O') ADVANCE(737);
      if (lookahead == 'P') ADVANCE(713);
      if (lookahead == 'S') ADVANCE(715);
      if (lookahead == 'T') ADVANCE(885);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(773);
      if (lookahead == '\\') SKIP(479)
      if (lookahead == ']') ADVANCE(774);
      if (lookahead == '^') ADVANCE(856);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(725);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == 'q') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == '}') ADVANCE(746);
      if (lookahead == '~') ADVANCE(863);
      if (lookahead == 172) ADVANCE(880);
      if (lookahead == 8320) ADVANCE(827);
      if (lookahead == 8321) ADVANCE(828);
      if (lookahead == 8322) ADVANCE(829);
      if (lookahead == 8323) ADVANCE(830);
      if (lookahead == 8324) ADVANCE(831);
      if (lookahead == 8325) ADVANCE(832);
      if (lookahead == 8326) ADVANCE(833);
      if (lookahead == 8327) ADVANCE(834);
      if (lookahead == 8328) ADVANCE(835);
      if (lookahead == 8329) ADVANCE(836);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8704) ADVANCE(894);
      if (lookahead == 8707) ADVANCE(891);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == 8853) ADVANCE(853);
      if (lookahead == 8868) ADVANCE(884);
      if (lookahead == 8869) ADVANCE(881);
      if (lookahead == 9654) ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
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
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(56)
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
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(68)
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
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(53)
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
      if (lookahead == '!') ADVANCE(870);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(847);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'A') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'T') ADVANCE(886);
      if (lookahead == '[') ADVANCE(773);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == '~') ADVANCE(862);
      if (lookahead == 172) ADVANCE(880);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8704) ADVANCE(894);
      if (lookahead == 8707) ADVANCE(891);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == 8868) ADVANCE(884);
      if (lookahead == 8869) ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(870);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(847);
      if (lookahead == '=') ADVANCE(694);
      if (lookahead == 'A') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'T') ADVANCE(886);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == '~') ADVANCE(862);
      if (lookahead == 172) ADVANCE(880);
      if (lookahead == 8704) ADVANCE(894);
      if (lookahead == 8707) ADVANCE(891);
      if (lookahead == 8868) ADVANCE(884);
      if (lookahead == 8869) ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(870);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(847);
      if (lookahead == 'A') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'T') ADVANCE(886);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == '~') ADVANCE(862);
      if (lookahead == 8704) ADVANCE(894);
      if (lookahead == 8707) ADVANCE(891);
      if (lookahead == 8868) ADVANCE(884);
      if (lookahead == 8869) ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(870);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(870);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == '~') ADVANCE(861);
      if (lookahead == 8320) ADVANCE(827);
      if (lookahead == 8321) ADVANCE(828);
      if (lookahead == 8322) ADVANCE(829);
      if (lookahead == 8323) ADVANCE(830);
      if (lookahead == 8324) ADVANCE(831);
      if (lookahead == 8325) ADVANCE(832);
      if (lookahead == 8326) ADVANCE(833);
      if (lookahead == 8327) ADVANCE(834);
      if (lookahead == 8328) ADVANCE(835);
      if (lookahead == 8329) ADVANCE(836);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '>') ADVANCE(849);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == '~') ADVANCE(470);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '>') ADVANCE(849);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(774);
      if (lookahead == '^') ADVANCE(856);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'q') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '{') ADVANCE(744);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == 8853) ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '>') ADVANCE(849);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(709);
      if (lookahead == 'E') ADVANCE(782);
      if (lookahead == 'I') ADVANCE(711);
      if (lookahead == 'O') ADVANCE(736);
      if (lookahead == 'P') ADVANCE(713);
      if (lookahead == 'S') ADVANCE(715);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(774);
      if (lookahead == '^') ADVANCE(856);
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(725);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == 8853) ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '>') ADVANCE(849);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(710);
      if (lookahead == 'I') ADVANCE(712);
      if (lookahead == 'O') ADVANCE(738);
      if (lookahead == 'P') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(716);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'c') ADVANCE(718);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead == 'p') ADVANCE(722);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == 8658) ADVANCE(877);
      if (lookahead == 8660) ADVANCE(875);
      if (lookahead == 8741) ADVANCE(823);
      if (lookahead == 8743) ADVANCE(879);
      if (lookahead == 8744) ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '&') ADVANCE(752);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 53:
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(847);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '~') ADVANCE(862);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(847);
      if (lookahead == '=') ADVANCE(694);
      if (lookahead == '@') ADVANCE(821);
      if (lookahead == 'X') ADVANCE(97);
      if (lookahead == '[') ADVANCE(773);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '^') ADVANCE(856);
      if (lookahead == 8853) ADVANCE(853);
      if (lookahead == 9654) ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == 'X') ADVANCE(499);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == 8853) ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '[') ADVANCE(358);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(837);
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
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(440);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(896);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(498);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'b') ADVANCE(672);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'p') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(799);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(786);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(787);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(775);
      if (lookahead == '[') ADVANCE(776);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(874);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(876);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(822);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(777);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(784);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(803);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(308);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(341);
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
      if (lookahead == 'N') ADVANCE(128);
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
      if (lookahead == 'R') ADVANCE(851);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 101:
      if (lookahead == 'V') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(690);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(356);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(194);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(194);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(860);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(707);
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
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(809);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(750);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'y') ADVANCE(805);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(462);
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
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(315);
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
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(466);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(791);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(699);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(703);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(706);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(702);
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
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(864);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(460);
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
      if (lookahead == 'y') ADVANCE(805);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(402);
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
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(409);
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
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(414);
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
      if (lookahead == 'l') ADVANCE(892);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(288);
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
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(432);
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
      if (lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'q') ADVANCE(450);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(792);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(700);
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
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(742);
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
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(380);
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
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(323);
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
      if (lookahead == 'p') ADVANCE(873);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(446);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(465);
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
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(778);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(692);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 459:
      if (lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 460:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 461:
      if (lookahead == 'x') ADVANCE(755);
      END_STATE();
    case 462:
      if (lookahead == 'x') ADVANCE(420);
      END_STATE();
    case 463:
      if (lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 464:
      if (lookahead == 'y') ADVANCE(481);
      END_STATE();
    case 465:
      if (lookahead == 'y') ADVANCE(810);
      END_STATE();
    case 466:
      if (lookahead == 'y') ADVANCE(812);
      END_STATE();
    case 467:
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 469:
      if (lookahead == '}') ADVANCE(846);
      END_STATE();
    case 470:
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 471:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(895);
      END_STATE();
    case 472:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
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
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(896);
      if (lookahead == '\r') ADVANCE(897);
      END_STATE();
    case 478:
      if (eof) ADVANCE(480);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 479:
      if (eof) ADVANCE(480);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(478)
      END_STATE();
    case 480:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(543);
      if (lookahead == 's') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'u') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead == 'o') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead == 'r') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead == 'q') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(557);
      if (lookahead == 'y') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(896);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(731);
      if (lookahead == '\r') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(735);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(735);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (lookahead == '"') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(733);
      if (lookahead != 0) ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(732);
      if (lookahead == '\\') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(735);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(735);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(730);
      if (lookahead == '\r') ADVANCE(734);
      if (lookahead == '"') ADVANCE(896);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(730);
      if (lookahead == '"') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(733);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(837);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(889);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_all_DASHtrace);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(841);
      if (lookahead == '\r') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(845);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(845);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(845);
      if (lookahead == '*') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(843);
      if (lookahead != 0) ADVANCE(840);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(842);
      if (lookahead == '\\') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(845);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(845);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(844);
      if (lookahead == '*') ADVANCE(896);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(840);
      if (lookahead == '*') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(846);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(858);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead == '~') ADVANCE(81);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_In);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_Out);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_Out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_Fr);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_Fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(477);
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
  [34] = {.lex_state = 52, .external_lex_state = 1},
  [35] = {.lex_state = 51, .external_lex_state = 1},
  [36] = {.lex_state = 52, .external_lex_state = 1},
  [37] = {.lex_state = 47, .external_lex_state = 1},
  [38] = {.lex_state = 47, .external_lex_state = 1},
  [39] = {.lex_state = 47, .external_lex_state = 1},
  [40] = {.lex_state = 52, .external_lex_state = 1},
  [41] = {.lex_state = 47, .external_lex_state = 1},
  [42] = {.lex_state = 52, .external_lex_state = 1},
  [43] = {.lex_state = 52, .external_lex_state = 1},
  [44] = {.lex_state = 47, .external_lex_state = 1},
  [45] = {.lex_state = 52, .external_lex_state = 1},
  [46] = {.lex_state = 47, .external_lex_state = 1},
  [47] = {.lex_state = 52, .external_lex_state = 1},
  [48] = {.lex_state = 52, .external_lex_state = 1},
  [49] = {.lex_state = 47, .external_lex_state = 1},
  [50] = {.lex_state = 52, .external_lex_state = 1},
  [51] = {.lex_state = 47, .external_lex_state = 1},
  [52] = {.lex_state = 52, .external_lex_state = 1},
  [53] = {.lex_state = 56, .external_lex_state = 1},
  [54] = {.lex_state = 47, .external_lex_state = 1},
  [55] = {.lex_state = 56, .external_lex_state = 1},
  [56] = {.lex_state = 56, .external_lex_state = 1},
  [57] = {.lex_state = 52, .external_lex_state = 1},
  [58] = {.lex_state = 49, .external_lex_state = 1},
  [59] = {.lex_state = 47, .external_lex_state = 1},
  [60] = {.lex_state = 47, .external_lex_state = 1},
  [61] = {.lex_state = 52, .external_lex_state = 1},
  [62] = {.lex_state = 52, .external_lex_state = 1},
  [63] = {.lex_state = 47, .external_lex_state = 1},
  [64] = {.lex_state = 52, .external_lex_state = 1},
  [65] = {.lex_state = 52, .external_lex_state = 1},
  [66] = {.lex_state = 48, .external_lex_state = 1},
  [67] = {.lex_state = 47, .external_lex_state = 1},
  [68] = {.lex_state = 52, .external_lex_state = 1},
  [69] = {.lex_state = 48, .external_lex_state = 1},
  [70] = {.lex_state = 52, .external_lex_state = 1},
  [71] = {.lex_state = 52, .external_lex_state = 1},
  [72] = {.lex_state = 52, .external_lex_state = 1},
  [73] = {.lex_state = 47, .external_lex_state = 1},
  [74] = {.lex_state = 51, .external_lex_state = 1},
  [75] = {.lex_state = 48, .external_lex_state = 1},
  [76] = {.lex_state = 48, .external_lex_state = 1},
  [77] = {.lex_state = 52, .external_lex_state = 1},
  [78] = {.lex_state = 48, .external_lex_state = 1},
  [79] = {.lex_state = 51, .external_lex_state = 1},
  [80] = {.lex_state = 48, .external_lex_state = 1},
  [81] = {.lex_state = 51, .external_lex_state = 1},
  [82] = {.lex_state = 48, .external_lex_state = 1},
  [83] = {.lex_state = 68, .external_lex_state = 1},
  [84] = {.lex_state = 68, .external_lex_state = 1},
  [85] = {.lex_state = 48, .external_lex_state = 1},
  [86] = {.lex_state = 46, .external_lex_state = 1},
  [87] = {.lex_state = 48, .external_lex_state = 1},
  [88] = {.lex_state = 48, .external_lex_state = 1},
  [89] = {.lex_state = 53, .external_lex_state = 1},
  [90] = {.lex_state = 68, .external_lex_state = 1},
  [91] = {.lex_state = 46, .external_lex_state = 1},
  [92] = {.lex_state = 53, .external_lex_state = 1},
  [93] = {.lex_state = 48, .external_lex_state = 1},
  [94] = {.lex_state = 48, .external_lex_state = 1},
  [95] = {.lex_state = 48, .external_lex_state = 1},
  [96] = {.lex_state = 48, .external_lex_state = 1},
  [97] = {.lex_state = 48, .external_lex_state = 1},
  [98] = {.lex_state = 68, .external_lex_state = 1},
  [99] = {.lex_state = 46, .external_lex_state = 1},
  [100] = {.lex_state = 53, .external_lex_state = 1},
  [101] = {.lex_state = 53, .external_lex_state = 1},
  [102] = {.lex_state = 48, .external_lex_state = 1},
  [103] = {.lex_state = 48, .external_lex_state = 1},
  [104] = {.lex_state = 48, .external_lex_state = 1},
  [105] = {.lex_state = 48, .external_lex_state = 1},
  [106] = {.lex_state = 48, .external_lex_state = 1},
  [107] = {.lex_state = 48, .external_lex_state = 1},
  [108] = {.lex_state = 48, .external_lex_state = 1},
  [109] = {.lex_state = 48, .external_lex_state = 1},
  [110] = {.lex_state = 48, .external_lex_state = 1},
  [111] = {.lex_state = 53, .external_lex_state = 1},
  [112] = {.lex_state = 48, .external_lex_state = 1},
  [113] = {.lex_state = 48, .external_lex_state = 1},
  [114] = {.lex_state = 53, .external_lex_state = 1},
  [115] = {.lex_state = 53, .external_lex_state = 1},
  [116] = {.lex_state = 53, .external_lex_state = 1},
  [117] = {.lex_state = 53, .external_lex_state = 1},
  [118] = {.lex_state = 53, .external_lex_state = 1},
  [119] = {.lex_state = 48, .external_lex_state = 1},
  [120] = {.lex_state = 53, .external_lex_state = 1},
  [121] = {.lex_state = 53, .external_lex_state = 1},
  [122] = {.lex_state = 53, .external_lex_state = 1},
  [123] = {.lex_state = 48, .external_lex_state = 1},
  [124] = {.lex_state = 53, .external_lex_state = 1},
  [125] = {.lex_state = 53, .external_lex_state = 1},
  [126] = {.lex_state = 53, .external_lex_state = 1},
  [127] = {.lex_state = 53, .external_lex_state = 1},
  [128] = {.lex_state = 53, .external_lex_state = 1},
  [129] = {.lex_state = 50, .external_lex_state = 1},
  [130] = {.lex_state = 48, .external_lex_state = 1},
  [131] = {.lex_state = 53, .external_lex_state = 1},
  [132] = {.lex_state = 47, .external_lex_state = 1},
  [133] = {.lex_state = 69, .external_lex_state = 1},
  [134] = {.lex_state = 49, .external_lex_state = 1},
  [135] = {.lex_state = 47, .external_lex_state = 1},
  [136] = {.lex_state = 49, .external_lex_state = 1},
  [137] = {.lex_state = 69, .external_lex_state = 1},
  [138] = {.lex_state = 47, .external_lex_state = 1},
  [139] = {.lex_state = 53, .external_lex_state = 1},
  [140] = {.lex_state = 53, .external_lex_state = 1},
  [141] = {.lex_state = 53, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 53, .external_lex_state = 1},
  [144] = {.lex_state = 53, .external_lex_state = 1},
  [145] = {.lex_state = 53, .external_lex_state = 1},
  [146] = {.lex_state = 49, .external_lex_state = 1},
  [147] = {.lex_state = 53, .external_lex_state = 1},
  [148] = {.lex_state = 53, .external_lex_state = 1},
  [149] = {.lex_state = 56, .external_lex_state = 1},
  [150] = {.lex_state = 48, .external_lex_state = 1},
  [151] = {.lex_state = 48, .external_lex_state = 1},
  [152] = {.lex_state = 49, .external_lex_state = 1},
  [153] = {.lex_state = 53, .external_lex_state = 1},
  [154] = {.lex_state = 69, .external_lex_state = 1},
  [155] = {.lex_state = 51, .external_lex_state = 1},
  [156] = {.lex_state = 70, .external_lex_state = 1},
  [157] = {.lex_state = 70, .external_lex_state = 1},
  [158] = {.lex_state = 46, .external_lex_state = 1},
  [159] = {.lex_state = 48, .external_lex_state = 1},
  [160] = {.lex_state = 48, .external_lex_state = 1},
  [161] = {.lex_state = 70, .external_lex_state = 1},
  [162] = {.lex_state = 46, .external_lex_state = 1},
  [163] = {.lex_state = 70, .external_lex_state = 1},
  [164] = {.lex_state = 56, .external_lex_state = 1},
  [165] = {.lex_state = 56, .external_lex_state = 1},
  [166] = {.lex_state = 51, .external_lex_state = 1},
  [167] = {.lex_state = 56, .external_lex_state = 1},
  [168] = {.lex_state = 56, .external_lex_state = 1},
  [169] = {.lex_state = 56, .external_lex_state = 1},
  [170] = {.lex_state = 51, .external_lex_state = 1},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 54, .external_lex_state = 1},
  [173] = {.lex_state = 56, .external_lex_state = 1},
  [174] = {.lex_state = 51, .external_lex_state = 1},
  [175] = {.lex_state = 56, .external_lex_state = 1},
  [176] = {.lex_state = 56, .external_lex_state = 1},
  [177] = {.lex_state = 71, .external_lex_state = 1},
  [178] = {.lex_state = 56, .external_lex_state = 1},
  [179] = {.lex_state = 51, .external_lex_state = 1},
  [180] = {.lex_state = 51, .external_lex_state = 1},
  [181] = {.lex_state = 51, .external_lex_state = 1},
  [182] = {.lex_state = 49, .external_lex_state = 1},
  [183] = {.lex_state = 51, .external_lex_state = 1},
  [184] = {.lex_state = 56, .external_lex_state = 1},
  [185] = {.lex_state = 51, .external_lex_state = 1},
  [186] = {.lex_state = 56, .external_lex_state = 1},
  [187] = {.lex_state = 56, .external_lex_state = 1},
  [188] = {.lex_state = 51, .external_lex_state = 1},
  [189] = {.lex_state = 56, .external_lex_state = 1},
  [190] = {.lex_state = 56, .external_lex_state = 1},
  [191] = {.lex_state = 56, .external_lex_state = 1},
  [192] = {.lex_state = 56, .external_lex_state = 1},
  [193] = {.lex_state = 56, .external_lex_state = 1},
  [194] = {.lex_state = 49, .external_lex_state = 1},
  [195] = {.lex_state = 49, .external_lex_state = 1},
  [196] = {.lex_state = 56, .external_lex_state = 1},
  [197] = {.lex_state = 71, .external_lex_state = 1},
  [198] = {.lex_state = 51, .external_lex_state = 1},
  [199] = {.lex_state = 56, .external_lex_state = 1},
  [200] = {.lex_state = 56, .external_lex_state = 1},
  [201] = {.lex_state = 51, .external_lex_state = 1},
  [202] = {.lex_state = 56, .external_lex_state = 1},
  [203] = {.lex_state = 54, .external_lex_state = 1},
  [204] = {.lex_state = 56, .external_lex_state = 1},
  [205] = {.lex_state = 54, .external_lex_state = 1},
  [206] = {.lex_state = 56, .external_lex_state = 1},
  [207] = {.lex_state = 56, .external_lex_state = 1},
  [208] = {.lex_state = 71, .external_lex_state = 1},
  [209] = {.lex_state = 71, .external_lex_state = 1},
  [210] = {.lex_state = 51, .external_lex_state = 1},
  [211] = {.lex_state = 56, .external_lex_state = 1},
  [212] = {.lex_state = 56, .external_lex_state = 1},
  [213] = {.lex_state = 71, .external_lex_state = 1},
  [214] = {.lex_state = 56, .external_lex_state = 1},
  [215] = {.lex_state = 56, .external_lex_state = 1},
  [216] = {.lex_state = 56, .external_lex_state = 1},
  [217] = {.lex_state = 51, .external_lex_state = 1},
  [218] = {.lex_state = 71, .external_lex_state = 1},
  [219] = {.lex_state = 51, .external_lex_state = 1},
  [220] = {.lex_state = 51, .external_lex_state = 1},
  [221] = {.lex_state = 51, .external_lex_state = 1},
  [222] = {.lex_state = 56, .external_lex_state = 1},
  [223] = {.lex_state = 71, .external_lex_state = 1},
  [224] = {.lex_state = 56, .external_lex_state = 1},
  [225] = {.lex_state = 51, .external_lex_state = 1},
  [226] = {.lex_state = 54, .external_lex_state = 1},
  [227] = {.lex_state = 71, .external_lex_state = 1},
  [228] = {.lex_state = 56, .external_lex_state = 1},
  [229] = {.lex_state = 56, .external_lex_state = 1},
  [230] = {.lex_state = 56, .external_lex_state = 1},
  [231] = {.lex_state = 56, .external_lex_state = 1},
  [232] = {.lex_state = 56, .external_lex_state = 1},
  [233] = {.lex_state = 56, .external_lex_state = 1},
  [234] = {.lex_state = 71, .external_lex_state = 1},
  [235] = {.lex_state = 56, .external_lex_state = 1},
  [236] = {.lex_state = 56, .external_lex_state = 1},
  [237] = {.lex_state = 56, .external_lex_state = 1},
  [238] = {.lex_state = 56, .external_lex_state = 1},
  [239] = {.lex_state = 56, .external_lex_state = 1},
  [240] = {.lex_state = 51, .external_lex_state = 1},
  [241] = {.lex_state = 56, .external_lex_state = 1},
  [242] = {.lex_state = 56, .external_lex_state = 1},
  [243] = {.lex_state = 51, .external_lex_state = 1},
  [244] = {.lex_state = 56, .external_lex_state = 1},
  [245] = {.lex_state = 56, .external_lex_state = 1},
  [246] = {.lex_state = 51, .external_lex_state = 1},
  [247] = {.lex_state = 51, .external_lex_state = 1},
  [248] = {.lex_state = 41, .external_lex_state = 1},
  [249] = {.lex_state = 56, .external_lex_state = 1},
  [250] = {.lex_state = 41, .external_lex_state = 1},
  [251] = {.lex_state = 56, .external_lex_state = 1},
  [252] = {.lex_state = 41, .external_lex_state = 1},
  [253] = {.lex_state = 48, .external_lex_state = 1},
  [254] = {.lex_state = 41, .external_lex_state = 1},
  [255] = {.lex_state = 56, .external_lex_state = 1},
  [256] = {.lex_state = 48, .external_lex_state = 1},
  [257] = {.lex_state = 56, .external_lex_state = 1},
  [258] = {.lex_state = 48, .external_lex_state = 1},
  [259] = {.lex_state = 56, .external_lex_state = 1},
  [260] = {.lex_state = 48, .external_lex_state = 1},
  [261] = {.lex_state = 46, .external_lex_state = 1},
  [262] = {.lex_state = 51, .external_lex_state = 1},
  [263] = {.lex_state = 51, .external_lex_state = 1},
  [264] = {.lex_state = 56, .external_lex_state = 1},
  [265] = {.lex_state = 41, .external_lex_state = 1},
  [266] = {.lex_state = 56, .external_lex_state = 1},
  [267] = {.lex_state = 56, .external_lex_state = 1},
  [268] = {.lex_state = 46, .external_lex_state = 1},
  [269] = {.lex_state = 41, .external_lex_state = 1},
  [270] = {.lex_state = 56, .external_lex_state = 1},
  [271] = {.lex_state = 41, .external_lex_state = 1},
  [272] = {.lex_state = 56, .external_lex_state = 1},
  [273] = {.lex_state = 56, .external_lex_state = 1},
  [274] = {.lex_state = 48, .external_lex_state = 1},
  [275] = {.lex_state = 56, .external_lex_state = 1},
  [276] = {.lex_state = 48, .external_lex_state = 1},
  [277] = {.lex_state = 56, .external_lex_state = 1},
  [278] = {.lex_state = 56, .external_lex_state = 1},
  [279] = {.lex_state = 46, .external_lex_state = 1},
  [280] = {.lex_state = 51, .external_lex_state = 1},
  [281] = {.lex_state = 51, .external_lex_state = 1},
  [282] = {.lex_state = 41, .external_lex_state = 1},
  [283] = {.lex_state = 55, .external_lex_state = 1},
  [284] = {.lex_state = 44, .external_lex_state = 1},
  [285] = {.lex_state = 44, .external_lex_state = 1},
  [286] = {.lex_state = 44, .external_lex_state = 1},
  [287] = {.lex_state = 44, .external_lex_state = 1},
  [288] = {.lex_state = 55, .external_lex_state = 1},
  [289] = {.lex_state = 44, .external_lex_state = 1},
  [290] = {.lex_state = 44, .external_lex_state = 1},
  [291] = {.lex_state = 45, .external_lex_state = 1},
  [292] = {.lex_state = 44, .external_lex_state = 1},
  [293] = {.lex_state = 48, .external_lex_state = 1},
  [294] = {.lex_state = 44, .external_lex_state = 1},
  [295] = {.lex_state = 48, .external_lex_state = 1},
  [296] = {.lex_state = 44, .external_lex_state = 1},
  [297] = {.lex_state = 45, .external_lex_state = 1},
  [298] = {.lex_state = 45, .external_lex_state = 1},
  [299] = {.lex_state = 55, .external_lex_state = 1},
  [300] = {.lex_state = 45, .external_lex_state = 1},
  [301] = {.lex_state = 44, .external_lex_state = 1},
  [302] = {.lex_state = 44, .external_lex_state = 1},
  [303] = {.lex_state = 45, .external_lex_state = 1},
  [304] = {.lex_state = 44, .external_lex_state = 1},
  [305] = {.lex_state = 44, .external_lex_state = 1},
  [306] = {.lex_state = 46, .external_lex_state = 1},
  [307] = {.lex_state = 44, .external_lex_state = 1},
  [308] = {.lex_state = 46, .external_lex_state = 1},
  [309] = {.lex_state = 44, .external_lex_state = 1},
  [310] = {.lex_state = 44, .external_lex_state = 1},
  [311] = {.lex_state = 45, .external_lex_state = 1},
  [312] = {.lex_state = 44, .external_lex_state = 1},
  [313] = {.lex_state = 44, .external_lex_state = 1},
  [314] = {.lex_state = 45, .external_lex_state = 1},
  [315] = {.lex_state = 48, .external_lex_state = 1},
  [316] = {.lex_state = 48, .external_lex_state = 1},
  [317] = {.lex_state = 44, .external_lex_state = 1},
  [318] = {.lex_state = 45, .external_lex_state = 1},
  [319] = {.lex_state = 44, .external_lex_state = 1},
  [320] = {.lex_state = 45, .external_lex_state = 1},
  [321] = {.lex_state = 45, .external_lex_state = 1},
  [322] = {.lex_state = 44, .external_lex_state = 1},
  [323] = {.lex_state = 44, .external_lex_state = 1},
  [324] = {.lex_state = 48, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 41, .external_lex_state = 1},
  [327] = {.lex_state = 41, .external_lex_state = 1},
  [328] = {.lex_state = 48, .external_lex_state = 1},
  [329] = {.lex_state = 55, .external_lex_state = 1},
  [330] = {.lex_state = 48, .external_lex_state = 1},
  [331] = {.lex_state = 55, .external_lex_state = 1},
  [332] = {.lex_state = 41, .external_lex_state = 1},
  [333] = {.lex_state = 55, .external_lex_state = 1},
  [334] = {.lex_state = 48, .external_lex_state = 1},
  [335] = {.lex_state = 48, .external_lex_state = 1},
  [336] = {.lex_state = 48, .external_lex_state = 1},
  [337] = {.lex_state = 55, .external_lex_state = 1},
  [338] = {.lex_state = 55, .external_lex_state = 1},
  [339] = {.lex_state = 44, .external_lex_state = 1},
  [340] = {.lex_state = 44, .external_lex_state = 1},
  [341] = {.lex_state = 55, .external_lex_state = 1},
  [342] = {.lex_state = 55, .external_lex_state = 1},
  [343] = {.lex_state = 55, .external_lex_state = 1},
  [344] = {.lex_state = 55, .external_lex_state = 1},
  [345] = {.lex_state = 55, .external_lex_state = 1},
  [346] = {.lex_state = 51, .external_lex_state = 1},
  [347] = {.lex_state = 55, .external_lex_state = 1},
  [348] = {.lex_state = 55, .external_lex_state = 1},
  [349] = {.lex_state = 55, .external_lex_state = 1},
  [350] = {.lex_state = 55, .external_lex_state = 1},
  [351] = {.lex_state = 55, .external_lex_state = 1},
  [352] = {.lex_state = 55, .external_lex_state = 1},
  [353] = {.lex_state = 55, .external_lex_state = 1},
  [354] = {.lex_state = 55, .external_lex_state = 1},
  [355] = {.lex_state = 55, .external_lex_state = 1},
  [356] = {.lex_state = 55, .external_lex_state = 1},
  [357] = {.lex_state = 55, .external_lex_state = 1},
  [358] = {.lex_state = 55, .external_lex_state = 1},
  [359] = {.lex_state = 55, .external_lex_state = 1},
  [360] = {.lex_state = 55, .external_lex_state = 1},
  [361] = {.lex_state = 47, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 1},
  [363] = {.lex_state = 46, .external_lex_state = 1},
  [364] = {.lex_state = 48, .external_lex_state = 1},
  [365] = {.lex_state = 46, .external_lex_state = 1},
  [366] = {.lex_state = 46, .external_lex_state = 1},
  [367] = {.lex_state = 48, .external_lex_state = 1},
  [368] = {.lex_state = 0, .external_lex_state = 1},
  [369] = {.lex_state = 55, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 55, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 1},
  [373] = {.lex_state = 46, .external_lex_state = 1},
  [374] = {.lex_state = 46, .external_lex_state = 1},
  [375] = {.lex_state = 55, .external_lex_state = 1},
  [376] = {.lex_state = 46, .external_lex_state = 1},
  [377] = {.lex_state = 46, .external_lex_state = 1},
  [378] = {.lex_state = 41, .external_lex_state = 1},
  [379] = {.lex_state = 46, .external_lex_state = 1},
  [380] = {.lex_state = 44, .external_lex_state = 1},
  [381] = {.lex_state = 46, .external_lex_state = 1},
  [382] = {.lex_state = 46, .external_lex_state = 1},
  [383] = {.lex_state = 47, .external_lex_state = 1},
  [384] = {.lex_state = 44, .external_lex_state = 1},
  [385] = {.lex_state = 46, .external_lex_state = 1},
  [386] = {.lex_state = 46, .external_lex_state = 1},
  [387] = {.lex_state = 50, .external_lex_state = 1},
  [388] = {.lex_state = 49, .external_lex_state = 1},
  [389] = {.lex_state = 50, .external_lex_state = 1},
  [390] = {.lex_state = 49, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 0, .external_lex_state = 1},
  [393] = {.lex_state = 0, .external_lex_state = 1},
  [394] = {.lex_state = 41, .external_lex_state = 1},
  [395] = {.lex_state = 41, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 41, .external_lex_state = 1},
  [398] = {.lex_state = 0, .external_lex_state = 1},
  [399] = {.lex_state = 0, .external_lex_state = 1},
  [400] = {.lex_state = 46, .external_lex_state = 1},
  [401] = {.lex_state = 0, .external_lex_state = 1},
  [402] = {.lex_state = 48, .external_lex_state = 1},
  [403] = {.lex_state = 50, .external_lex_state = 1},
  [404] = {.lex_state = 49, .external_lex_state = 1},
  [405] = {.lex_state = 0, .external_lex_state = 1},
  [406] = {.lex_state = 0, .external_lex_state = 1},
  [407] = {.lex_state = 41, .external_lex_state = 1},
  [408] = {.lex_state = 48, .external_lex_state = 1},
  [409] = {.lex_state = 0, .external_lex_state = 1},
  [410] = {.lex_state = 50, .external_lex_state = 1},
  [411] = {.lex_state = 50, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 46, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 46, .external_lex_state = 1},
  [418] = {.lex_state = 0, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 0, .external_lex_state = 1},
  [422] = {.lex_state = 46, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 0, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 42, .external_lex_state = 1},
  [428] = {.lex_state = 41, .external_lex_state = 1},
  [429] = {.lex_state = 46, .external_lex_state = 1},
  [430] = {.lex_state = 0, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 0, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 0, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 48, .external_lex_state = 1},
  [441] = {.lex_state = 41, .external_lex_state = 1},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 48, .external_lex_state = 1},
  [444] = {.lex_state = 0, .external_lex_state = 1},
  [445] = {.lex_state = 48, .external_lex_state = 1},
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
  [457] = {.lex_state = 46, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 46, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 0, .external_lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 48, .external_lex_state = 1},
  [471] = {.lex_state = 0, .external_lex_state = 1},
  [472] = {.lex_state = 48, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 48, .external_lex_state = 1},
  [475] = {.lex_state = 0, .external_lex_state = 1},
  [476] = {.lex_state = 0, .external_lex_state = 1},
  [477] = {.lex_state = 0, .external_lex_state = 1},
  [478] = {.lex_state = 0, .external_lex_state = 1},
  [479] = {.lex_state = 48, .external_lex_state = 1},
  [480] = {.lex_state = 0, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 0, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 0, .external_lex_state = 1},
  [485] = {.lex_state = 0, .external_lex_state = 1},
  [486] = {.lex_state = 46, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 41, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 0, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 48, .external_lex_state = 1},
  [493] = {.lex_state = 46, .external_lex_state = 1},
  [494] = {.lex_state = 46, .external_lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 1},
  [496] = {.lex_state = 41, .external_lex_state = 1},
  [497] = {.lex_state = 41, .external_lex_state = 1},
  [498] = {.lex_state = 0, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 0, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 0, .external_lex_state = 1},
  [503] = {.lex_state = 46, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 41, .external_lex_state = 1},
  [506] = {.lex_state = 41, .external_lex_state = 1},
  [507] = {.lex_state = 41, .external_lex_state = 1},
  [508] = {.lex_state = 49, .external_lex_state = 1},
  [509] = {.lex_state = 0, .external_lex_state = 1},
  [510] = {.lex_state = 41, .external_lex_state = 1},
  [511] = {.lex_state = 0, .external_lex_state = 1},
  [512] = {.lex_state = 46, .external_lex_state = 1},
  [513] = {.lex_state = 48, .external_lex_state = 1},
  [514] = {.lex_state = 41, .external_lex_state = 1},
  [515] = {.lex_state = 731, .external_lex_state = 1},
  [516] = {.lex_state = 48, .external_lex_state = 1},
  [517] = {.lex_state = 0, .external_lex_state = 1},
  [518] = {.lex_state = 48, .external_lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 1},
  [520] = {.lex_state = 0, .external_lex_state = 1},
  [521] = {.lex_state = 41, .external_lex_state = 1},
  [522] = {.lex_state = 42, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 0, .external_lex_state = 1},
  [525] = {.lex_state = 41, .external_lex_state = 1},
  [526] = {.lex_state = 42, .external_lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 1},
  [528] = {.lex_state = 0, .external_lex_state = 1},
  [529] = {.lex_state = 0, .external_lex_state = 1},
  [530] = {.lex_state = 48, .external_lex_state = 1},
  [531] = {.lex_state = 41, .external_lex_state = 1},
  [532] = {.lex_state = 0, .external_lex_state = 1},
  [533] = {.lex_state = 41, .external_lex_state = 1},
  [534] = {.lex_state = 50, .external_lex_state = 1},
  [535] = {.lex_state = 0, .external_lex_state = 1},
  [536] = {.lex_state = 47, .external_lex_state = 1},
  [537] = {.lex_state = 41, .external_lex_state = 1},
  [538] = {.lex_state = 42, .external_lex_state = 1},
  [539] = {.lex_state = 0, .external_lex_state = 1},
  [540] = {.lex_state = 0, .external_lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 1},
  [542] = {.lex_state = 42, .external_lex_state = 1},
  [543] = {.lex_state = 41, .external_lex_state = 1},
  [544] = {.lex_state = 41, .external_lex_state = 1},
  [545] = {.lex_state = 48, .external_lex_state = 1},
  [546] = {.lex_state = 0, .external_lex_state = 1},
  [547] = {.lex_state = 41, .external_lex_state = 1},
  [548] = {.lex_state = 731, .external_lex_state = 1},
  [549] = {.lex_state = 48, .external_lex_state = 1},
  [550] = {.lex_state = 0, .external_lex_state = 1},
  [551] = {.lex_state = 41, .external_lex_state = 1},
  [552] = {.lex_state = 0, .external_lex_state = 1},
  [553] = {.lex_state = 41, .external_lex_state = 1},
  [554] = {.lex_state = 0, .external_lex_state = 1},
  [555] = {.lex_state = 0, .external_lex_state = 1},
  [556] = {.lex_state = 0, .external_lex_state = 1},
  [557] = {.lex_state = 47, .external_lex_state = 1},
  [558] = {.lex_state = 46, .external_lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 1},
  [560] = {.lex_state = 0, .external_lex_state = 1},
  [561] = {.lex_state = 41, .external_lex_state = 1},
  [562] = {.lex_state = 0, .external_lex_state = 1},
  [563] = {.lex_state = 0, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 46, .external_lex_state = 1},
  [566] = {.lex_state = 0, .external_lex_state = 1},
  [567] = {.lex_state = 0, .external_lex_state = 1},
  [568] = {.lex_state = 41, .external_lex_state = 1},
  [569] = {.lex_state = 0, .external_lex_state = 1},
  [570] = {.lex_state = 0, .external_lex_state = 1},
  [571] = {.lex_state = 0, .external_lex_state = 1},
  [572] = {.lex_state = 0, .external_lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 1},
  [574] = {.lex_state = 0, .external_lex_state = 1},
  [575] = {.lex_state = 0, .external_lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 41, .external_lex_state = 1},
  [580] = {.lex_state = 0, .external_lex_state = 1},
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
  [592] = {.lex_state = 0, .external_lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 1},
  [594] = {.lex_state = 46, .external_lex_state = 1},
  [595] = {.lex_state = 0, .external_lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 1},
  [597] = {.lex_state = 0, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 1},
  [601] = {.lex_state = 46, .external_lex_state = 1},
  [602] = {.lex_state = 0, .external_lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 1},
  [604] = {.lex_state = 0, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 0, .external_lex_state = 1},
  [607] = {.lex_state = 42, .external_lex_state = 1},
  [608] = {.lex_state = 0, .external_lex_state = 1},
  [609] = {.lex_state = 0, .external_lex_state = 1},
  [610] = {.lex_state = 46, .external_lex_state = 1},
  [611] = {.lex_state = 0, .external_lex_state = 1},
  [612] = {.lex_state = 0, .external_lex_state = 1},
  [613] = {.lex_state = 0, .external_lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 1},
  [615] = {.lex_state = 0, .external_lex_state = 1},
  [616] = {.lex_state = 0, .external_lex_state = 1},
  [617] = {.lex_state = 42, .external_lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 1},
  [619] = {.lex_state = 41, .external_lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 1},
  [621] = {.lex_state = 0, .external_lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 0, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 46, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 0, .external_lex_state = 1},
  [632] = {.lex_state = 0, .external_lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 1},
  [634] = {.lex_state = 46, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 46, .external_lex_state = 1},
  [637] = {.lex_state = 0, .external_lex_state = 1},
  [638] = {.lex_state = 41, .external_lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 1},
  [640] = {.lex_state = 0, .external_lex_state = 1},
  [641] = {.lex_state = 0, .external_lex_state = 1},
  [642] = {.lex_state = 0, .external_lex_state = 1},
  [643] = {.lex_state = 0, .external_lex_state = 1},
  [644] = {.lex_state = 46, .external_lex_state = 1},
  [645] = {.lex_state = 0, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 0, .external_lex_state = 1},
  [648] = {.lex_state = 46, .external_lex_state = 1},
  [649] = {.lex_state = 0, .external_lex_state = 1},
  [650] = {.lex_state = 731, .external_lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 1},
  [652] = {.lex_state = 47, .external_lex_state = 1},
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
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 0, .external_lex_state = 1},
  [665] = {.lex_state = 0, .external_lex_state = 1},
  [666] = {.lex_state = 731, .external_lex_state = 1},
  [667] = {.lex_state = 0, .external_lex_state = 1},
  [668] = {.lex_state = 46, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 0, .external_lex_state = 1},
  [671] = {.lex_state = 0, .external_lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 1},
  [673] = {.lex_state = 0, .external_lex_state = 1},
  [674] = {.lex_state = 0, .external_lex_state = 1},
  [675] = {.lex_state = 46, .external_lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 1},
  [677] = {.lex_state = 0, .external_lex_state = 1},
  [678] = {.lex_state = 0, .external_lex_state = 1},
  [679] = {.lex_state = 0, .external_lex_state = 1},
  [680] = {.lex_state = 47, .external_lex_state = 1},
  [681] = {.lex_state = 41, .external_lex_state = 1},
  [682] = {.lex_state = 0, .external_lex_state = 1},
  [683] = {.lex_state = 0, .external_lex_state = 1},
  [684] = {.lex_state = 0, .external_lex_state = 1},
  [685] = {.lex_state = 42, .external_lex_state = 1},
  [686] = {.lex_state = 0, .external_lex_state = 1},
  [687] = {.lex_state = 41, .external_lex_state = 1},
  [688] = {.lex_state = 46, .external_lex_state = 1},
  [689] = {.lex_state = 0, .external_lex_state = 1},
  [690] = {.lex_state = 46, .external_lex_state = 1},
  [691] = {.lex_state = 41, .external_lex_state = 1},
  [692] = {.lex_state = 46, .external_lex_state = 1},
  [693] = {.lex_state = 0, .external_lex_state = 1},
  [694] = {.lex_state = 41, .external_lex_state = 1},
  [695] = {.lex_state = 0, .external_lex_state = 1},
  [696] = {.lex_state = 41, .external_lex_state = 1},
  [697] = {.lex_state = 41, .external_lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 1},
  [699] = {.lex_state = 0, .external_lex_state = 1},
  [700] = {.lex_state = 46, .external_lex_state = 1},
  [701] = {.lex_state = 46, .external_lex_state = 1},
  [702] = {.lex_state = 0, .external_lex_state = 1},
  [703] = {.lex_state = 0, .external_lex_state = 1},
  [704] = {.lex_state = 46, .external_lex_state = 1},
  [705] = {.lex_state = 0, .external_lex_state = 1},
  [706] = {.lex_state = 841, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 1},
  [709] = {.lex_state = 46, .external_lex_state = 1},
  [710] = {.lex_state = 0, .external_lex_state = 1},
  [711] = {.lex_state = 0, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 1},
  [716] = {.lex_state = 0, .external_lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 1},
  [718] = {.lex_state = 0, .external_lex_state = 1},
  [719] = {.lex_state = 41, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 0, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 0, .external_lex_state = 1},
  [724] = {.lex_state = 0, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 0, .external_lex_state = 1},
  [727] = {.lex_state = 46, .external_lex_state = 1},
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
    [sym_source_file] = STATE(726),
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(430), 1,
      sym_formula,
    STATE(526), 1,
      sym_node_var,
    STATE(527), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(621), 1,
      sym_goal,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [123] = 37,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(430), 1,
      sym_formula,
    STATE(526), 1,
      sym_node_var,
    STATE(527), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
      sym_builtin_facts,
    STATE(643), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [246] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(500), 1,
      sym_formula,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [363] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(170), 1,
      sym_negation,
    STATE(179), 1,
      sym_conjunction,
    STATE(198), 1,
      sym_atom,
    STATE(210), 1,
      sym_formula,
    STATE(243), 1,
      sym_imp,
    STATE(247), 1,
      sym_disjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [480] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(605), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [597] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(542), 1,
      sym__msetterm,
    STATE(588), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [714] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(560), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [831] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(603), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [948] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(586), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1065] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(564), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1182] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(427), 1,
      sym_node_var,
    STATE(542), 1,
      sym__msetterm,
    STATE(588), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1299] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(383), 1,
      sym_imp,
    STATE(526), 1,
      sym_node_var,
    STATE(573), 1,
      sym_formula,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1416] = 35,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(170), 1,
      sym_negation,
    STATE(179), 1,
      sym_conjunction,
    STATE(198), 1,
      sym_atom,
    STATE(210), 1,
      sym_formula,
    STATE(246), 1,
      sym_imp,
    STATE(247), 1,
      sym_disjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1533] = 34,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(220), 1,
      sym_imp,
    STATE(254), 1,
      sym_negation,
    STATE(308), 1,
      sym_quantifier,
    STATE(326), 1,
      sym_conjunction,
    STATE(378), 1,
      sym_disjunction,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1647] = 34,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(221), 1,
      sym_imp,
    STATE(247), 1,
      sym_disjunction,
    STATE(252), 1,
      sym_negation,
    STATE(269), 1,
      sym_conjunction,
    STATE(308), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1761] = 34,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(221), 1,
      sym_imp,
    STATE(254), 1,
      sym_negation,
    STATE(308), 1,
      sym_quantifier,
    STATE(326), 1,
      sym_conjunction,
    STATE(378), 1,
      sym_disjunction,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1875] = 34,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(220), 1,
      sym_imp,
    STATE(280), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(346), 1,
      sym_disjunction,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1989] = 32,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(170), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(219), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2097] = 32,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(219), 1,
      sym_conjunction,
    STATE(254), 1,
      sym_negation,
    STATE(308), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2205] = 32,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(181), 1,
      sym_negation,
    STATE(198), 1,
      sym_atom,
    STATE(219), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2313] = 32,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(219), 1,
      sym_conjunction,
    STATE(252), 1,
      sym_negation,
    STATE(308), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2421] = 31,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(217), 1,
      sym_negation,
    STATE(308), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2526] = 31,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(198), 1,
      sym_atom,
    STATE(217), 1,
      sym_negation,
    STATE(306), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2631] = 28,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(240), 1,
      sym_atom,
    STATE(308), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2727] = 28,
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
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(240), 1,
      sym_atom,
    STATE(306), 1,
      sym_quantifier,
    STATE(526), 1,
      sym_node_var,
    STATE(606), 1,
      sym_fact,
    STATE(607), 1,
      sym__msetterm,
    STATE(625), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2823] = 8,
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(51), 1,
      sym_not_function,
    STATE(60), 1,
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
  [2867] = 8,
    ACTIONS(55), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(51), 1,
      sym_not_function,
    STATE(60), 1,
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
  [2911] = 8,
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(51), 1,
      sym_not_function,
    STATE(60), 1,
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
  [2955] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(63), 20,
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
  [2992] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 20,
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
  [3029] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(81), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(75), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(73), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3068] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(79), 20,
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
  [3105] = 8,
    ACTIONS(88), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(90), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(86), 11,
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
  [3148] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(35), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(81), 2,
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
  [3187] = 8,
    ACTIONS(88), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(90), 7,
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
  [3230] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 20,
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
  [3267] = 8,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(51), 1,
      sym_not_function,
    STATE(73), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(109), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(102), 12,
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
  [3310] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(112), 20,
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
  [3347] = 8,
    ACTIONS(116), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(40), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(119), 7,
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
  [3390] = 7,
    ACTIONS(126), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(63), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(129), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(122), 12,
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
  [3431] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 19,
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
  [3467] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(63), 19,
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
  [3503] = 5,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP,
    STATE(54), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(134), 20,
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
  [3539] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 19,
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
  [3575] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(140), 20,
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
  [3607] = 7,
    ACTIONS(144), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(70), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(147), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(122), 11,
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
  [3647] = 8,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(150), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    STATE(77), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(153), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(102), 11,
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
  [3689] = 3,
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
  [3721] = 5,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(79), 19,
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
  [3757] = 5,
    ACTIONS(138), 1,
      anon_sym_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(163), 20,
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
  [3793] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(112), 19,
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
  [3829] = 14,
    ACTIONS(167), 1,
      anon_sym_end,
    ACTIONS(169), 1,
      sym_ident,
    ACTIONS(171), 1,
      anon_sym_functions,
    ACTIONS(173), 1,
      anon_sym_equations,
    ACTIONS(175), 1,
      anon_sym_builtins,
    ACTIONS(177), 1,
      anon_sym_heuristic,
    ACTIONS(179), 1,
      anon_sym_tactic,
    ACTIONS(181), 1,
      anon_sym_rule,
    ACTIONS(183), 1,
      anon_sym_restriction,
    ACTIONS(185), 1,
      anon_sym_lemma,
    STATE(177), 1,
      sym_simple_rule,
    STATE(707), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(55), 11,
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
  [3883] = 5,
    ACTIONS(189), 1,
      anon_sym_PIPE,
    ACTIONS(191), 1,
      anon_sym_AMP,
    STATE(54), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(187), 20,
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
  [3919] = 13,
    ACTIONS(169), 1,
      sym_ident,
    ACTIONS(171), 1,
      anon_sym_functions,
    ACTIONS(173), 1,
      anon_sym_equations,
    ACTIONS(175), 1,
      anon_sym_builtins,
    ACTIONS(177), 1,
      anon_sym_heuristic,
    ACTIONS(179), 1,
      anon_sym_tactic,
    ACTIONS(181), 1,
      anon_sym_rule,
    ACTIONS(183), 1,
      anon_sym_restriction,
    ACTIONS(185), 1,
      anon_sym_lemma,
    ACTIONS(194), 1,
      anon_sym_end,
    STATE(177), 1,
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
  [3970] = 13,
    ACTIONS(196), 1,
      anon_sym_end,
    ACTIONS(198), 1,
      sym_ident,
    ACTIONS(201), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_equations,
    ACTIONS(207), 1,
      anon_sym_builtins,
    ACTIONS(210), 1,
      anon_sym_heuristic,
    ACTIONS(213), 1,
      anon_sym_tactic,
    ACTIONS(216), 1,
      anon_sym_rule,
    ACTIONS(219), 1,
      anon_sym_restriction,
    ACTIONS(222), 1,
      anon_sym_lemma,
    STATE(177), 1,
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
  [4021] = 3,
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
  [4052] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(225), 20,
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
  [4083] = 4,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    STATE(67), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(229), 20,
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
  [4116] = 4,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(233), 20,
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
  [4149] = 5,
    ACTIONS(189), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_AMP,
    STATE(61), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(187), 19,
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
  [4184] = 5,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(238), 1,
      anon_sym_AMP,
    STATE(64), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(163), 19,
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
  [4219] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(187), 20,
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
  [4250] = 5,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    ACTIONS(238), 1,
      anon_sym_AMP,
    STATE(61), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(134), 19,
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
  [4285] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(140), 19,
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
  [4316] = 6,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 18,
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
  [4353] = 4,
    ACTIONS(252), 1,
      anon_sym_PIPE,
    STATE(67), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(250), 20,
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
  [4386] = 4,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(233), 19,
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
  [4418] = 5,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 18,
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
  [4452] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(187), 19,
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
  [4482] = 4,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(250), 19,
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
  [4514] = 4,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(229), 19,
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
  [4546] = 3,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(250), 20,
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
  [4576] = 2,
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
  [4603] = 4,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_DOT,
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
  [4634] = 5,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_CARET,
    STATE(78), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 17,
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
  [4667] = 3,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(250), 19,
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
  [4696] = 5,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(78), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 17,
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
  [4729] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(291), 20,
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
  [4756] = 5,
    ACTIONS(282), 1,
      anon_sym_CARET,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(293), 17,
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
  [4789] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(297), 20,
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
  [4816] = 3,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 18,
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
  [4844] = 8,
    ACTIONS(305), 1,
      anon_sym_SOLVED,
    ACTIONS(307), 1,
      anon_sym_by,
    ACTIONS(311), 1,
      anon_sym_solve,
    STATE(251), 1,
      sym_proof_skeleton,
    STATE(274), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
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
  [4882] = 8,
    ACTIONS(305), 1,
      anon_sym_SOLVED,
    ACTIONS(307), 1,
      anon_sym_by,
    ACTIONS(311), 1,
      anon_sym_solve,
    STATE(264), 1,
      sym_proof_skeleton,
    STATE(274), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
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
  [4920] = 3,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(315), 18,
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
  [4948] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(319), 17,
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
  [4976] = 5,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      anon_sym_STAR,
    STATE(104), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 16,
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
  [5008] = 3,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 18,
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
  [5036] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(419), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5090] = 8,
    ACTIONS(305), 1,
      anon_sym_SOLVED,
    ACTIONS(307), 1,
      anon_sym_by,
    ACTIONS(311), 1,
      anon_sym_solve,
    STATE(255), 1,
      sym_proof_skeleton,
    STATE(274), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(339), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5128] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(341), 17,
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
  [5156] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(432), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5210] = 5,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      anon_sym_STAR,
    STATE(93), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(347), 16,
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
  [5242] = 3,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(284), 18,
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
  [5270] = 3,
    ACTIONS(356), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(354), 18,
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
  [5298] = 3,
    ACTIONS(360), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(358), 18,
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
  [5326] = 3,
    ACTIONS(364), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(362), 18,
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
  [5354] = 8,
    ACTIONS(305), 1,
      anon_sym_SOLVED,
    ACTIONS(307), 1,
      anon_sym_by,
    ACTIONS(311), 1,
      anon_sym_solve,
    STATE(274), 1,
      sym_proof_method,
    STATE(275), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
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
  [5392] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(368), 17,
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
  [5420] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(483), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5474] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(449), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5528] = 3,
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
  [5556] = 3,
    ACTIONS(382), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(380), 18,
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
  [5584] = 5,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(93), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(384), 16,
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
  [5616] = 3,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(388), 18,
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
  [5644] = 3,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 18,
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
  [5672] = 3,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 18,
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
  [5700] = 3,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(396), 18,
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
  [5728] = 3,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 18,
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
  [5756] = 3,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(404), 18,
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
  [5784] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(412), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5838] = 5,
    ACTIONS(410), 1,
      anon_sym_EQ,
    STATE(113), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(408), 14,
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
  [5869] = 5,
    ACTIONS(416), 1,
      anon_sym_EQ,
    STATE(113), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(414), 14,
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
  [5900] = 15,
    ACTIONS(421), 1,
      sym_ident,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      anon_sym_TILDE,
    STATE(331), 1,
      sym_term,
    STATE(350), 1,
      sym__expterm,
    STATE(351), 1,
      sym_msg_var,
    STATE(355), 1,
      sym_nonnode_var,
    STATE(369), 1,
      sym__multterm,
    STATE(410), 1,
      sym__xorterm,
    STATE(534), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(349), 4,
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
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(439), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
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
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
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
    STATE(108), 4,
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
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(477), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6104] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(637), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6155] = 5,
    ACTIONS(435), 1,
      anon_sym_EQ,
    STATE(112), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(433), 14,
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
  [6186] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(225), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6237] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(476), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6288] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(467), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6339] = 3,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(347), 17,
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
  [6366] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(669), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6417] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(596), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6468] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(465), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6519] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
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
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6570] = 14,
    ACTIONS(421), 1,
      sym_ident,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      anon_sym_TILDE,
    STATE(129), 1,
      sym__xorterm,
    STATE(331), 1,
      sym_term,
    STATE(350), 1,
      sym__expterm,
    STATE(351), 1,
      sym_msg_var,
    STATE(355), 1,
      sym_nonnode_var,
    STATE(369), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(349), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6618] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(437), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(439), 14,
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
  [6644] = 3,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(414), 16,
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
  [6670] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(119), 1,
      sym__multterm,
    STATE(129), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6718] = 5,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(441), 1,
      anon_sym_PLUS,
    STATE(132), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(439), 13,
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
  [6747] = 6,
    ACTIONS(446), 1,
      anon_sym_prio,
    ACTIONS(448), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(154), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(157), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
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
  [6778] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(455), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(134), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(195), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(452), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6809] = 5,
    ACTIONS(460), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_PLUS,
    STATE(132), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(458), 13,
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
  [6838] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(468), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(134), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(195), 2,
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
  [6869] = 6,
    ACTIONS(446), 1,
      anon_sym_prio,
    ACTIONS(448), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(154), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(163), 2,
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
  [6900] = 5,
    ACTIONS(462), 1,
      anon_sym_PLUS,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(135), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(472), 13,
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
  [6929] = 13,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(130), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6974] = 13,
    ACTIONS(421), 1,
      sym_ident,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      anon_sym_TILDE,
    STATE(331), 1,
      sym_term,
    STATE(350), 1,
      sym__expterm,
    STATE(351), 1,
      sym_msg_var,
    STATE(355), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(349), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7019] = 12,
    ACTIONS(421), 1,
      sym_ident,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      anon_sym_TILDE,
    STATE(331), 1,
      sym_term,
    STATE(351), 1,
      sym_msg_var,
    STATE(355), 1,
      sym_nonnode_var,
    STATE(371), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(349), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7061] = 4,
    ACTIONS(480), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(476), 12,
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
  [7087] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(233), 1,
      sym_equation,
    STATE(685), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7129] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(184), 1,
      sym_equation,
    STATE(685), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7171] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    STATE(123), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7213] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(32), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(81), 2,
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
  [7240] = 11,
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
    STATE(232), 1,
      sym_term,
    STATE(235), 1,
      sym_msg_var,
    STATE(238), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(236), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7279] = 11,
    ACTIONS(421), 1,
      sym_ident,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      anon_sym_TILDE,
    STATE(342), 1,
      sym_term,
    STATE(351), 1,
      sym_msg_var,
    STATE(355), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(349), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7318] = 6,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [7347] = 8,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(51), 1,
      sym_not_function,
    STATE(60), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(508), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7380] = 8,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    ACTIONS(512), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(34), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(514), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7413] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(136), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(195), 2,
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
  [7440] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_term,
    STATE(107), 1,
      sym_msg_var,
    STATE(110), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7479] = 4,
    ACTIONS(518), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(154), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(516), 11,
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
  [7504] = 4,
    ACTIONS(521), 1,
      anon_sym_COLON,
    ACTIONS(525), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(523), 12,
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
  [7529] = 4,
    ACTIONS(529), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(156), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(527), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7553] = 4,
    ACTIONS(448), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(156), 2,
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
  [7577] = 4,
    STATE(158), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(532), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(534), 10,
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
  [7601] = 7,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_function_name,
    STATE(51), 1,
      sym_not_function,
    STATE(60), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(508), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7631] = 7,
    ACTIONS(512), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_function_name,
    STATE(62), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(36), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(514), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7661] = 4,
    ACTIONS(448), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(156), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
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
  [7685] = 4,
    STATE(158), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(537), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(539), 10,
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
  [7709] = 4,
    ACTIONS(448), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(156), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(541), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7733] = 5,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(545), 1,
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
  [7759] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(227), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7781] = 3,
    ACTIONS(547), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 12,
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
  [7803] = 4,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_DOT,
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
  [7826] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [7849] = 4,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(556), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7872] = 3,
    STATE(185), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(560), 11,
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
  [7893] = 4,
    STATE(162), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(429), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [7916] = 6,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(242), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7943] = 4,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(570), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7966] = 4,
    STATE(174), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(574), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [7989] = 4,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_built_ins_repeat1,
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
  [8012] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(581), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8035] = 4,
    ACTIONS(587), 1,
      anon_sym_variants,
    STATE(272), 1,
      sym_variants,
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
  [8058] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_built_ins_repeat1,
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
  [8081] = 3,
    STATE(188), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(594), 11,
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
  [8102] = 4,
    STATE(180), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(596), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8125] = 4,
    STATE(183), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(560), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8148] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(603), 12,
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
  [8167] = 4,
    STATE(180), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(605), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8190] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_equations_repeat1,
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
  [8213] = 3,
    STATE(180), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(605), 11,
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
  [8234] = 4,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(609), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8257] = 4,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(611), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8280] = 3,
    STATE(174), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(615), 11,
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
  [8301] = 4,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_variants_repeat1,
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
  [8324] = 4,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_functions_repeat1,
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
  [8347] = 4,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_LBRACKprivate_RBRACK,
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
  [8370] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
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
  [8391] = 4,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_variants_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(637), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8414] = 2,
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
  [8433] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(641), 12,
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
  [8452] = 3,
    ACTIONS(643), 1,
      anon_sym_COMMA,
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
  [8472] = 2,
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
  [8490] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(647), 11,
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
  [8508] = 3,
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
  [8528] = 3,
    ACTIONS(653), 1,
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
  [8548] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(655), 11,
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
  [8566] = 3,
    ACTIONS(659), 1,
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
  [8586] = 5,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(392), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(358), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8610] = 3,
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
  [8630] = 5,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(396), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(315), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8654] = 3,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(671), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8674] = 3,
    ACTIONS(675), 1,
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
  [8694] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(649), 11,
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
  [8712] = 2,
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
  [8730] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(679), 11,
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
  [8748] = 3,
    ACTIONS(681), 1,
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
  [8768] = 3,
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
  [8788] = 2,
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
  [8806] = 3,
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
  [8826] = 3,
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
  [8846] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(360), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8866] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(596), 11,
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
  [8884] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(671), 11,
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
  [8902] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(574), 11,
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
  [8920] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(683), 11,
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
  [8938] = 2,
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
  [8956] = 3,
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
  [8976] = 2,
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
  [8994] = 3,
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
  [9014] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(695), 11,
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
  [9032] = 5,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(697), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(259), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9056] = 2,
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
  [9074] = 3,
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
  [9094] = 3,
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
  [9114] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9134] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
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
  [9154] = 3,
    ACTIONS(707), 1,
      anon_sym_COMMA,
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
  [9174] = 3,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [9194] = 2,
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
  [9212] = 3,
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
  [9232] = 3,
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
  [9252] = 3,
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
  [9272] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
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
  [9292] = 3,
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
  [9312] = 2,
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
  [9330] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
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
  [9350] = 3,
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
  [9370] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(717), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9390] = 3,
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
  [9410] = 3,
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
  [9430] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(717), 11,
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
  [9448] = 2,
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
  [9466] = 4,
    STATE(248), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(596), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9487] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(726), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9504] = 3,
    STATE(265), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(615), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9523] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(728), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9540] = 3,
    STATE(271), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(560), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9559] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(730), 10,
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
  [9576] = 4,
    STATE(282), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(560), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9597] = 2,
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
  [9614] = 3,
    STATE(231), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(734), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [9633] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(736), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9650] = 8,
    ACTIONS(738), 1,
      anon_sym_SOLVED,
    ACTIONS(740), 1,
      anon_sym_by,
    ACTIONS(742), 1,
      anon_sym_case,
    ACTIONS(746), 1,
      anon_sym_solve,
    STATE(258), 1,
      sym_proof_method,
    STATE(541), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(744), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9679] = 2,
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
  [9696] = 3,
    STATE(175), 1,
      sym_built_in,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(734), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [9715] = 8,
    ACTIONS(750), 1,
      sym_ident,
    ACTIONS(752), 1,
      anon_sym_DOT,
    ACTIONS(754), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(279), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(385), 2,
      sym_node_var,
      sym_nonnode_var,
  [9744] = 3,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(695), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9763] = 4,
    STATE(281), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(615), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9784] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(339), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9801] = 4,
    STATE(265), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(762), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(574), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [9822] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(765), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9839] = 2,
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
  [9856] = 8,
    ACTIONS(750), 1,
      sym_ident,
    ACTIONS(754), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(376), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(279), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(385), 2,
      sym_node_var,
      sym_nonnode_var,
  [9885] = 3,
    STATE(250), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(594), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9904] = 2,
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
  [9921] = 3,
    STATE(248), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(605), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9940] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(773), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9957] = 2,
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
  [9974] = 8,
    ACTIONS(746), 1,
      anon_sym_solve,
    ACTIONS(777), 1,
      anon_sym_SOLVED,
    ACTIONS(779), 1,
      anon_sym_by,
    ACTIONS(781), 1,
      anon_sym_case,
    STATE(266), 1,
      sym_proof_skeleton,
    STATE(274), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(744), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10003] = 2,
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
  [10020] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(783), 10,
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
  [10037] = 2,
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
  [10054] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(787), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10071] = 8,
    ACTIONS(789), 1,
      sym_ident,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(794), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(279), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(385), 2,
      sym_node_var,
      sym_nonnode_var,
  [10100] = 4,
    STATE(263), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(594), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10121] = 4,
    STATE(281), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(800), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(574), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10142] = 4,
    STATE(248), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(605), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10163] = 6,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(807), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(244), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(242), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10188] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10216] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(591), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10244] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(618), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10272] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10300] = 5,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
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
  [10322] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10350] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10378] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(829), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(831), 1,
      anon_sym_BANG,
    STATE(488), 1,
      sym_fact,
    STATE(638), 1,
      sym_facts,
    STATE(651), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10406] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
      sym_builtin_facts,
    STATE(630), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10434] = 7,
    ACTIONS(738), 1,
      anon_sym_SOLVED,
    ACTIONS(740), 1,
      anon_sym_by,
    ACTIONS(746), 1,
      anon_sym_solve,
    STATE(258), 1,
      sym_proof_method,
    STATE(416), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(744), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10460] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(570), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10488] = 7,
    ACTIONS(738), 1,
      anon_sym_SOLVED,
    ACTIONS(740), 1,
      anon_sym_by,
    ACTIONS(746), 1,
      anon_sym_solve,
    STATE(258), 1,
      sym_proof_method,
    STATE(456), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(744), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10514] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(614), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10542] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(839), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(579), 1,
      sym_facts,
    STATE(651), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10570] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(841), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(568), 1,
      sym_facts,
    STATE(651), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10598] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(227), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(225), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10616] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(619), 1,
      sym_facts,
    STATE(651), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10644] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(611), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10672] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10700] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(651), 1,
      sym_builtin_facts,
    STATE(687), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10728] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
      sym_builtin_facts,
    STATE(702), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10756] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10784] = 7,
    ACTIONS(750), 1,
      sym_ident,
    ACTIONS(754), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(268), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(385), 2,
      sym_node_var,
      sym_nonnode_var,
  [10810] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(567), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10838] = 7,
    ACTIONS(750), 1,
      sym_ident,
    ACTIONS(754), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(261), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(385), 2,
      sym_node_var,
      sym_nonnode_var,
  [10864] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
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
  [10892] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(623), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10920] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(861), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(561), 1,
      sym_facts,
    STATE(651), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10948] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
      sym_builtin_facts,
    STATE(683), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10976] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(563), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11004] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(867), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(651), 1,
      sym_builtin_facts,
    STATE(681), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11032] = 7,
    ACTIONS(738), 1,
      anon_sym_SOLVED,
    ACTIONS(740), 1,
      anon_sym_by,
    ACTIONS(746), 1,
      anon_sym_solve,
    STATE(258), 1,
      sym_proof_method,
    STATE(499), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(744), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11058] = 6,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(873), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(875), 1,
      anon_sym_heuristic_EQ,
    STATE(555), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(869), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11082] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
      sym_builtin_facts,
    STATE(626), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11110] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(879), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(651), 1,
      sym_builtin_facts,
    STATE(694), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11138] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(625), 1,
      sym_builtin_facts,
    STATE(631), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11166] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(883), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(651), 1,
      sym_builtin_facts,
    STATE(696), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11194] = 8,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    ACTIONS(885), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(488), 1,
      sym_fact,
    STATE(651), 1,
      sym_builtin_facts,
    STATE(691), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11222] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(577), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11250] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_fact,
    STATE(620), 1,
      sym_facts,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11278] = 6,
    ACTIONS(873), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(875), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(555), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(869), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11302] = 3,
    STATE(557), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(893), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [11320] = 4,
    STATE(332), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(594), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11339] = 4,
    STATE(327), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(574), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11358] = 7,
    ACTIONS(900), 1,
      anon_sym_presort,
    ACTIONS(902), 1,
      anon_sym_prio,
    ACTIONS(904), 1,
      anon_sym_deprio,
    STATE(361), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(133), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(161), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [11383] = 5,
    ACTIONS(906), 1,
      anon_sym_CARET,
    STATE(337), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(280), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11404] = 3,
    STATE(42), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(514), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [11421] = 5,
    ACTIONS(906), 1,
      anon_sym_CARET,
    STATE(329), 1,
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
  [11442] = 4,
    STATE(327), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(615), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11461] = 4,
    ACTIONS(908), 1,
      anon_sym_DOT,
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
  [11480] = 5,
    ACTIONS(873), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(875), 1,
      anon_sym_heuristic_EQ,
    STATE(473), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(869), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11501] = 5,
    ACTIONS(873), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(875), 1,
      anon_sym_heuristic_EQ,
    STATE(555), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(869), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11522] = 3,
    STATE(37), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(508), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [11539] = 5,
    ACTIONS(910), 1,
      anon_sym_CARET,
    STATE(337), 1,
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
  [11560] = 5,
    ACTIONS(913), 1,
      anon_sym_STAR,
    STATE(338), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(349), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11580] = 6,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    STATE(540), 1,
      sym_fact,
    STATE(625), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11602] = 6,
    ACTIONS(827), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_BANG,
    STATE(525), 1,
      sym_fact,
    STATE(651), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11624] = 3,
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
  [11640] = 3,
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
  [11656] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(356), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(354), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11672] = 3,
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
  [11688] = 5,
    ACTIONS(916), 1,
      anon_sym_STAR,
    STATE(338), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(386), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11708] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(721), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [11724] = 3,
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
  [11740] = 3,
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
  [11756] = 3,
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
  [11772] = 5,
    ACTIONS(916), 1,
      anon_sym_STAR,
    STATE(345), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(325), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11792] = 3,
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
  [11808] = 3,
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
  [11824] = 3,
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
  [11840] = 3,
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
  [11856] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(406), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(404), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11872] = 3,
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
  [11888] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(360), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(358), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11904] = 3,
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
  [11920] = 6,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    ACTIONS(920), 1,
      anon_sym_XOR,
    ACTIONS(922), 1,
      anon_sym_13,
    STATE(360), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(410), 2,
      sym_ident,
      anon_sym_in,
  [11941] = 6,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    ACTIONS(924), 1,
      anon_sym_XOR,
    ACTIONS(927), 1,
      anon_sym_13,
    STATE(360), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(416), 2,
      sym_ident,
      anon_sym_in,
  [11962] = 5,
    ACTIONS(902), 1,
      anon_sym_prio,
    ACTIONS(904), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(137), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(157), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [11981] = 4,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(398), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(930), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11998] = 3,
    ACTIONS(932), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12013] = 4,
    ACTIONS(936), 1,
      anon_sym_solve,
    STATE(266), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(934), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12030] = 3,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(242), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12045] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(225), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12058] = 4,
    ACTIONS(746), 1,
      anon_sym_solve,
    STATE(541), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(744), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12075] = 4,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(406), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12092] = 6,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(920), 1,
      anon_sym_XOR,
    ACTIONS(922), 1,
      anon_sym_13,
    STATE(359), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(435), 2,
      sym_ident,
      anon_sym_in,
  [12113] = 4,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(396), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12130] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(349), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12145] = 4,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(392), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12162] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(476), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12174] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12186] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(416), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12200] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(392), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12212] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(362), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12224] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(721), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [12238] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(400), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12250] = 4,
    ACTIONS(944), 1,
      sym_ident,
    STATE(654), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12266] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(259), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12278] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12290] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(946), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(717), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [12304] = 4,
    ACTIONS(948), 1,
      sym_ident,
    STATE(593), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12320] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(950), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12332] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12344] = 4,
    ACTIONS(952), 1,
      anon_sym_PLUS,
    STATE(403), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(460), 2,
      sym_ident,
      anon_sym_in,
  [12359] = 3,
    STATE(424), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(954), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12372] = 5,
    ACTIONS(956), 1,
      sym_ident,
    ACTIONS(959), 1,
      anon_sym_in,
    STATE(389), 1,
      aux_sym_let_block_repeat1,
    STATE(617), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12389] = 3,
    STATE(502), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(954), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12402] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(961), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12413] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12424] = 4,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    STATE(640), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12439] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(537), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(930), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12454] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(547), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12469] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12480] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(543), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12495] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12506] = 4,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    STATE(599), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12521] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(971), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12532] = 4,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12547] = 4,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
    STATE(546), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(980), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12562] = 4,
    ACTIONS(982), 1,
      anon_sym_PLUS,
    STATE(403), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(437), 2,
      sym_ident,
      anon_sym_in,
  [12577] = 3,
    STATE(434), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(954), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12590] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(985), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12601] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(987), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12612] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(553), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12627] = 4,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    STATE(546), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(980), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12642] = 4,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    STATE(584), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12657] = 4,
    ACTIONS(952), 1,
      anon_sym_PLUS,
    STATE(387), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(474), 2,
      sym_ident,
      anon_sym_in,
  [12672] = 5,
    ACTIONS(993), 1,
      sym_ident,
    ACTIONS(995), 1,
      anon_sym_in,
    STATE(389), 1,
      aux_sym_let_block_repeat1,
    STATE(617), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12689] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12703] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_ident,
    STATE(262), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12717] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12731] = 4,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(1007), 1,
      anon_sym_2,
    STATE(433), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12745] = 4,
    ACTIONS(1009), 1,
      anon_sym_next,
    ACTIONS(1011), 1,
      anon_sym_qed,
    STATE(436), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12759] = 4,
    ACTIONS(1013), 1,
      sym_ident,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    STATE(700), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12773] = 4,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    ACTIONS(1019), 1,
      anon_sym_let,
    STATE(589), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12787] = 4,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12801] = 4,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12815] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12829] = 4,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    ACTIONS(1028), 1,
      sym_ident,
    STATE(701), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12843] = 4,
    ACTIONS(1019), 1,
      anon_sym_let,
    ACTIONS(1030), 1,
      anon_sym_LBRACK,
    STATE(716), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12857] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12871] = 4,
    ACTIONS(1019), 1,
      anon_sym_let,
    ACTIONS(1036), 1,
      anon_sym_LBRACK,
    STATE(718), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12885] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12899] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [12911] = 4,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(428), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12925] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_ident,
    STATE(674), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12939] = 4,
    ACTIONS(1007), 1,
      anon_sym_2,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12953] = 4,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12967] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12981] = 4,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    ACTIONS(1055), 1,
      anon_sym_2,
    STATE(433), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12995] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
    STATE(453), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13009] = 4,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    ACTIONS(1062), 1,
      anon_sym_msg,
    STATE(538), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13023] = 4,
    ACTIONS(1009), 1,
      anon_sym_next,
    ACTIONS(1064), 1,
      anon_sym_qed,
    STATE(446), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13037] = 4,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RBRACK,
    STATE(487), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13051] = 4,
    ACTIONS(1070), 1,
      anon_sym_COLON,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    STATE(682), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13065] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_GT,
    STATE(463), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13079] = 3,
    ACTIONS(1076), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13091] = 4,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(428), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13105] = 4,
    ACTIONS(1019), 1,
      anon_sym_let,
    ACTIONS(1084), 1,
      anon_sym_LBRACK,
    STATE(720), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13119] = 3,
    ACTIONS(1086), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13131] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13145] = 3,
    ACTIONS(1086), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13157] = 4,
    ACTIONS(1094), 1,
      anon_sym_next,
    ACTIONS(1097), 1,
      anon_sym_qed,
    STATE(446), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13171] = 4,
    ACTIONS(1099), 1,
      anon_sym_COLON,
    ACTIONS(1101), 1,
      anon_sym_LBRACK,
    STATE(677), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13185] = 4,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1103), 1,
      anon_sym_COLON,
    STATE(723), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13199] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13213] = 4,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    STATE(725), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13227] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13241] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13255] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13269] = 4,
    ACTIONS(1115), 1,
      anon_sym_COLON,
    ACTIONS(1117), 1,
      anon_sym_LBRACK,
    STATE(676), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13283] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13297] = 4,
    ACTIONS(1009), 1,
      anon_sym_next,
    ACTIONS(1119), 1,
      anon_sym_qed,
    STATE(466), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13311] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_ident,
    STATE(693), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13325] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13339] = 4,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13353] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13367] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13381] = 4,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    ACTIONS(1129), 1,
      sym_ident,
    STATE(727), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13395] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13409] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13423] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_GT,
    STATE(458), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13437] = 4,
    ACTIONS(1009), 1,
      anon_sym_next,
    ACTIONS(1137), 1,
      anon_sym_qed,
    STATE(446), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13451] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13461] = 4,
    ACTIONS(1117), 1,
      anon_sym_LBRACK,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    STATE(632), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13475] = 4,
    ACTIONS(1141), 1,
      aux_sym_arity_token1,
    ACTIONS(1143), 1,
      anon_sym_msg,
    STATE(164), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13489] = 3,
    STATE(582), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1145), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13501] = 4,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1147), 1,
      anon_sym_COLON,
    STATE(647), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13515] = 3,
    ACTIONS(1076), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1149), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13527] = 4,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RBRACK,
    STATE(459), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13541] = 3,
    STATE(581), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1145), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13553] = 4,
    ACTIONS(1155), 1,
      aux_sym_arity_token1,
    ACTIONS(1157), 1,
      anon_sym_msg,
    STATE(288), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13567] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_GT,
    STATE(478), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13581] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13595] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_GT,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13609] = 3,
    STATE(546), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(980), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13621] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13635] = 4,
    ACTIONS(1047), 1,
      anon_sym_RBRACK,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13649] = 4,
    ACTIONS(1019), 1,
      anon_sym_let,
    ACTIONS(1170), 1,
      anon_sym_LBRACK,
    STATE(613), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13663] = 4,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13677] = 4,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
    STATE(431), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13691] = 4,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    ACTIONS(1062), 1,
      anon_sym_msg,
    STATE(69), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13705] = 4,
    ACTIONS(1176), 1,
      sym_ident,
    STATE(411), 1,
      aux_sym_let_block_repeat1,
    STATE(617), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13719] = 4,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    STATE(481), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13733] = 4,
    ACTIONS(1068), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13747] = 4,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RBRACK,
    STATE(489), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13761] = 4,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RBRACK,
    STATE(490), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13775] = 4,
    ACTIONS(1019), 1,
      anon_sym_let,
    ACTIONS(1188), 1,
      anon_sym_LBRACK,
    STATE(655), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13789] = 3,
    STATE(484), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(980), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13801] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_ident,
    STATE(225), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13815] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_ident,
    STATE(576), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13829] = 4,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    ACTIONS(1062), 1,
      anon_sym_msg,
    STATE(226), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13843] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(961), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13852] = 3,
    ACTIONS(839), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1190), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13863] = 3,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    STATE(698), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13874] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1192), 2,
      anon_sym_next,
      anon_sym_qed,
  [13883] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1053), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [13892] = 3,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    STATE(673), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13903] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13912] = 3,
    ACTIONS(1194), 1,
      sym_ident,
    STATE(186), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13923] = 3,
    ACTIONS(1196), 1,
      anon_sym_rule,
    STATE(187), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13934] = 3,
    ACTIONS(879), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1198), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13945] = 3,
    ACTIONS(885), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1200), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13956] = 3,
    ACTIONS(849), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1202), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13967] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1204), 2,
      anon_sym_E,
      anon_sym_AC,
  [13976] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1206), 2,
      anon_sym_left,
      anon_sym_right,
  [13985] = 3,
    ACTIONS(867), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1208), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13996] = 3,
    ACTIONS(1210), 1,
      aux_sym_arity_token1,
    STATE(191), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14007] = 3,
    ACTIONS(1194), 1,
      sym_ident,
    STATE(196), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14018] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1149), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14027] = 3,
    ACTIONS(1212), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1214), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14038] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1216), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1218), 1,
      sym_comment,
    STATE(612), 1,
      sym_param,
  [14051] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1220), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14060] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14069] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1224), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14078] = 3,
    ACTIONS(1196), 1,
      anon_sym_rule,
    STATE(200), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14089] = 3,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    STATE(559), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14100] = 3,
    ACTIONS(1226), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1228), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14111] = 3,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(1230), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14122] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14131] = 3,
    ACTIONS(1141), 1,
      aux_sym_arity_token1,
    STATE(229), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14142] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1047), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14151] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [14160] = 3,
    ACTIONS(1234), 1,
      anon_sym_,
    ACTIONS(1236), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14171] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1238), 2,
      anon_sym_next,
      anon_sym_qed,
  [14180] = 3,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    STATE(86), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14191] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1240), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14200] = 3,
    ACTIONS(843), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1242), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14211] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14220] = 3,
    ACTIONS(841), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1244), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14231] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1246), 2,
      sym_ident,
      anon_sym_in,
  [14240] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14249] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [14258] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14267] = 3,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14278] = 3,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    STATE(166), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14289] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1047), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14298] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1250), 2,
      anon_sym_next,
      anon_sym_qed,
  [14307] = 3,
    ACTIONS(1252), 1,
      anon_sym_EQ,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14318] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14327] = 3,
    ACTIONS(861), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1256), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14338] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1258), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14347] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14356] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14365] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1216), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1218), 1,
      sym_comment,
    STATE(571), 1,
      sym_param,
  [14378] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14387] = 3,
    ACTIONS(1060), 1,
      aux_sym_arity_token1,
    STATE(97), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14398] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(985), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14407] = 3,
    ACTIONS(1155), 1,
      aux_sym_arity_token1,
    STATE(356), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14418] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(987), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14427] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1260), 2,
      anon_sym_next,
      anon_sym_qed,
  [14436] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14445] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1262), 2,
      anon_sym_next,
      anon_sym_qed,
  [14454] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1264), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [14463] = 2,
    ACTIONS(1266), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14471] = 2,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14479] = 2,
    ACTIONS(1270), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14487] = 2,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14495] = 2,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14503] = 2,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14511] = 2,
    ACTIONS(1274), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14519] = 2,
    ACTIONS(1276), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14527] = 2,
    ACTIONS(1076), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14535] = 2,
    ACTIONS(1278), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14543] = 2,
    ACTIONS(861), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14551] = 2,
    ACTIONS(1280), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14559] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14567] = 2,
    ACTIONS(1282), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14575] = 2,
    ACTIONS(1284), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14583] = 2,
    ACTIONS(1286), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14591] = 2,
    ACTIONS(1288), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14599] = 2,
    ACTIONS(1290), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14607] = 2,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14615] = 2,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14623] = 2,
    ACTIONS(1294), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14631] = 2,
    ACTIONS(841), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14639] = 2,
    ACTIONS(1296), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14647] = 2,
    ACTIONS(1298), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14655] = 2,
    ACTIONS(1300), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14663] = 2,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14671] = 2,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14679] = 2,
    ACTIONS(1306), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14687] = 2,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14695] = 2,
    ACTIONS(1310), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14703] = 2,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14711] = 2,
    ACTIONS(1314), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14719] = 2,
    ACTIONS(1316), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14727] = 2,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14735] = 2,
    ACTIONS(1318), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14743] = 2,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14751] = 2,
    ACTIONS(1322), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14759] = 2,
    ACTIONS(1324), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14767] = 2,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14775] = 2,
    ACTIONS(1328), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14783] = 2,
    ACTIONS(1330), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14791] = 2,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14799] = 2,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14807] = 2,
    ACTIONS(1334), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14815] = 2,
    ACTIONS(1336), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14823] = 2,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14831] = 2,
    ACTIONS(1340), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14839] = 2,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14847] = 2,
    ACTIONS(1042), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14855] = 2,
    ACTIONS(1252), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14863] = 2,
    ACTIONS(1344), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14871] = 2,
    ACTIONS(1346), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14879] = 2,
    ACTIONS(1348), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14887] = 2,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14895] = 2,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14903] = 2,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14911] = 2,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14919] = 2,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14927] = 2,
    ACTIONS(1354), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14935] = 2,
    ACTIONS(1356), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14943] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14951] = 2,
    ACTIONS(829), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14959] = 2,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14967] = 2,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14975] = 2,
    ACTIONS(1360), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14983] = 2,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14991] = 2,
    ACTIONS(1086), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14999] = 2,
    ACTIONS(1362), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15007] = 2,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15015] = 2,
    ACTIONS(1364), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15023] = 2,
    ACTIONS(1366), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15031] = 2,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15039] = 2,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15047] = 2,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15055] = 2,
    ACTIONS(1368), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15063] = 2,
    ACTIONS(1370), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15071] = 2,
    ACTIONS(1372), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15079] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15087] = 2,
    ACTIONS(1376), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15095] = 2,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15103] = 2,
    ACTIONS(1380), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15111] = 2,
    ACTIONS(1382), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15119] = 2,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15127] = 2,
    ACTIONS(1384), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15135] = 2,
    ACTIONS(1386), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15143] = 2,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15151] = 2,
    ACTIONS(1390), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15159] = 2,
    ACTIONS(1392), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15167] = 2,
    ACTIONS(1394), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15175] = 2,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15183] = 2,
    ACTIONS(1398), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15191] = 2,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15199] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1218), 1,
      sym_comment,
    ACTIONS(1402), 1,
      aux_sym_oracle_goal_ranking_token1,
  [15209] = 2,
    ACTIONS(1404), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15217] = 2,
    ACTIONS(1406), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15225] = 2,
    ACTIONS(1408), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15233] = 2,
    ACTIONS(1410), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15241] = 2,
    ACTIONS(1170), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15249] = 2,
    ACTIONS(1412), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15257] = 2,
    ACTIONS(1414), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15265] = 2,
    ACTIONS(1416), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15273] = 2,
    ACTIONS(1418), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15281] = 2,
    ACTIONS(1420), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15289] = 2,
    ACTIONS(1422), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15297] = 2,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15305] = 2,
    ACTIONS(1426), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15313] = 2,
    ACTIONS(1428), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15321] = 2,
    ACTIONS(1430), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15329] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1218), 1,
      sym_comment,
    ACTIONS(1432), 1,
      aux_sym_oracle_goal_ranking_token1,
  [15339] = 2,
    ACTIONS(1434), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15347] = 2,
    ACTIONS(1436), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15355] = 2,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15363] = 2,
    ACTIONS(1438), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15371] = 2,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15379] = 2,
    ACTIONS(1440), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15387] = 2,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15395] = 2,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15403] = 2,
    ACTIONS(1446), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15411] = 2,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15419] = 2,
    ACTIONS(1448), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15427] = 2,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15435] = 2,
    ACTIONS(1450), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15443] = 2,
    ACTIONS(1452), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15451] = 2,
    ACTIONS(849), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15459] = 2,
    ACTIONS(1147), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15467] = 2,
    ACTIONS(1454), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15475] = 2,
    ACTIONS(1456), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15483] = 2,
    ACTIONS(1458), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15491] = 2,
    ACTIONS(1460), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15499] = 2,
    ACTIONS(885), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15507] = 2,
    ACTIONS(1462), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15515] = 2,
    ACTIONS(1464), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15523] = 2,
    ACTIONS(1466), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15531] = 2,
    ACTIONS(879), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15539] = 2,
    ACTIONS(1468), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15547] = 2,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15555] = 2,
    ACTIONS(883), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15563] = 2,
    ACTIONS(1472), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15571] = 2,
    ACTIONS(1474), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15579] = 2,
    ACTIONS(1476), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15587] = 2,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15595] = 2,
    ACTIONS(1480), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15603] = 2,
    ACTIONS(1482), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15611] = 2,
    ACTIONS(1484), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15619] = 2,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15627] = 2,
    ACTIONS(1486), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15635] = 2,
    ACTIONS(1488), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15643] = 2,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15651] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1218), 1,
      sym_comment,
    ACTIONS(1492), 1,
      aux_sym_formal_comment_token1,
  [15661] = 2,
    ACTIONS(1494), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15669] = 2,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15677] = 2,
    ACTIONS(1496), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15685] = 2,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15693] = 2,
    ACTIONS(1498), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15701] = 2,
    ACTIONS(1500), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15709] = 2,
    ACTIONS(1502), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15717] = 2,
    ACTIONS(1504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15725] = 2,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15733] = 2,
    ACTIONS(1036), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15741] = 2,
    ACTIONS(1508), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15749] = 2,
    ACTIONS(1084), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15757] = 2,
    ACTIONS(1510), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15765] = 2,
    ACTIONS(1512), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15773] = 2,
    ACTIONS(1514), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15781] = 2,
    ACTIONS(1516), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15789] = 2,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15797] = 2,
    ACTIONS(1518), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15805] = 2,
    ACTIONS(1520), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15813] = 2,
    ACTIONS(1522), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15821] = 2,
    ACTIONS(1524), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 123,
  [SMALL_STATE(4)] = 246,
  [SMALL_STATE(5)] = 363,
  [SMALL_STATE(6)] = 480,
  [SMALL_STATE(7)] = 597,
  [SMALL_STATE(8)] = 714,
  [SMALL_STATE(9)] = 831,
  [SMALL_STATE(10)] = 948,
  [SMALL_STATE(11)] = 1065,
  [SMALL_STATE(12)] = 1182,
  [SMALL_STATE(13)] = 1299,
  [SMALL_STATE(14)] = 1416,
  [SMALL_STATE(15)] = 1533,
  [SMALL_STATE(16)] = 1647,
  [SMALL_STATE(17)] = 1761,
  [SMALL_STATE(18)] = 1875,
  [SMALL_STATE(19)] = 1989,
  [SMALL_STATE(20)] = 2097,
  [SMALL_STATE(21)] = 2205,
  [SMALL_STATE(22)] = 2313,
  [SMALL_STATE(23)] = 2421,
  [SMALL_STATE(24)] = 2526,
  [SMALL_STATE(25)] = 2631,
  [SMALL_STATE(26)] = 2727,
  [SMALL_STATE(27)] = 2823,
  [SMALL_STATE(28)] = 2867,
  [SMALL_STATE(29)] = 2911,
  [SMALL_STATE(30)] = 2955,
  [SMALL_STATE(31)] = 2992,
  [SMALL_STATE(32)] = 3029,
  [SMALL_STATE(33)] = 3068,
  [SMALL_STATE(34)] = 3105,
  [SMALL_STATE(35)] = 3148,
  [SMALL_STATE(36)] = 3187,
  [SMALL_STATE(37)] = 3230,
  [SMALL_STATE(38)] = 3267,
  [SMALL_STATE(39)] = 3310,
  [SMALL_STATE(40)] = 3347,
  [SMALL_STATE(41)] = 3390,
  [SMALL_STATE(42)] = 3431,
  [SMALL_STATE(43)] = 3467,
  [SMALL_STATE(44)] = 3503,
  [SMALL_STATE(45)] = 3539,
  [SMALL_STATE(46)] = 3575,
  [SMALL_STATE(47)] = 3607,
  [SMALL_STATE(48)] = 3647,
  [SMALL_STATE(49)] = 3689,
  [SMALL_STATE(50)] = 3721,
  [SMALL_STATE(51)] = 3757,
  [SMALL_STATE(52)] = 3793,
  [SMALL_STATE(53)] = 3829,
  [SMALL_STATE(54)] = 3883,
  [SMALL_STATE(55)] = 3919,
  [SMALL_STATE(56)] = 3970,
  [SMALL_STATE(57)] = 4021,
  [SMALL_STATE(58)] = 4052,
  [SMALL_STATE(59)] = 4083,
  [SMALL_STATE(60)] = 4116,
  [SMALL_STATE(61)] = 4149,
  [SMALL_STATE(62)] = 4184,
  [SMALL_STATE(63)] = 4219,
  [SMALL_STATE(64)] = 4250,
  [SMALL_STATE(65)] = 4285,
  [SMALL_STATE(66)] = 4316,
  [SMALL_STATE(67)] = 4353,
  [SMALL_STATE(68)] = 4386,
  [SMALL_STATE(69)] = 4418,
  [SMALL_STATE(70)] = 4452,
  [SMALL_STATE(71)] = 4482,
  [SMALL_STATE(72)] = 4514,
  [SMALL_STATE(73)] = 4546,
  [SMALL_STATE(74)] = 4576,
  [SMALL_STATE(75)] = 4603,
  [SMALL_STATE(76)] = 4634,
  [SMALL_STATE(77)] = 4667,
  [SMALL_STATE(78)] = 4696,
  [SMALL_STATE(79)] = 4729,
  [SMALL_STATE(80)] = 4756,
  [SMALL_STATE(81)] = 4789,
  [SMALL_STATE(82)] = 4816,
  [SMALL_STATE(83)] = 4844,
  [SMALL_STATE(84)] = 4882,
  [SMALL_STATE(85)] = 4920,
  [SMALL_STATE(86)] = 4948,
  [SMALL_STATE(87)] = 4976,
  [SMALL_STATE(88)] = 5008,
  [SMALL_STATE(89)] = 5036,
  [SMALL_STATE(90)] = 5090,
  [SMALL_STATE(91)] = 5128,
  [SMALL_STATE(92)] = 5156,
  [SMALL_STATE(93)] = 5210,
  [SMALL_STATE(94)] = 5242,
  [SMALL_STATE(95)] = 5270,
  [SMALL_STATE(96)] = 5298,
  [SMALL_STATE(97)] = 5326,
  [SMALL_STATE(98)] = 5354,
  [SMALL_STATE(99)] = 5392,
  [SMALL_STATE(100)] = 5420,
  [SMALL_STATE(101)] = 5474,
  [SMALL_STATE(102)] = 5528,
  [SMALL_STATE(103)] = 5556,
  [SMALL_STATE(104)] = 5584,
  [SMALL_STATE(105)] = 5616,
  [SMALL_STATE(106)] = 5644,
  [SMALL_STATE(107)] = 5672,
  [SMALL_STATE(108)] = 5700,
  [SMALL_STATE(109)] = 5728,
  [SMALL_STATE(110)] = 5756,
  [SMALL_STATE(111)] = 5784,
  [SMALL_STATE(112)] = 5838,
  [SMALL_STATE(113)] = 5869,
  [SMALL_STATE(114)] = 5900,
  [SMALL_STATE(115)] = 5951,
  [SMALL_STATE(116)] = 6002,
  [SMALL_STATE(117)] = 6053,
  [SMALL_STATE(118)] = 6104,
  [SMALL_STATE(119)] = 6155,
  [SMALL_STATE(120)] = 6186,
  [SMALL_STATE(121)] = 6237,
  [SMALL_STATE(122)] = 6288,
  [SMALL_STATE(123)] = 6339,
  [SMALL_STATE(124)] = 6366,
  [SMALL_STATE(125)] = 6417,
  [SMALL_STATE(126)] = 6468,
  [SMALL_STATE(127)] = 6519,
  [SMALL_STATE(128)] = 6570,
  [SMALL_STATE(129)] = 6618,
  [SMALL_STATE(130)] = 6644,
  [SMALL_STATE(131)] = 6670,
  [SMALL_STATE(132)] = 6718,
  [SMALL_STATE(133)] = 6747,
  [SMALL_STATE(134)] = 6778,
  [SMALL_STATE(135)] = 6809,
  [SMALL_STATE(136)] = 6838,
  [SMALL_STATE(137)] = 6869,
  [SMALL_STATE(138)] = 6900,
  [SMALL_STATE(139)] = 6929,
  [SMALL_STATE(140)] = 6974,
  [SMALL_STATE(141)] = 7019,
  [SMALL_STATE(142)] = 7061,
  [SMALL_STATE(143)] = 7087,
  [SMALL_STATE(144)] = 7129,
  [SMALL_STATE(145)] = 7171,
  [SMALL_STATE(146)] = 7213,
  [SMALL_STATE(147)] = 7240,
  [SMALL_STATE(148)] = 7279,
  [SMALL_STATE(149)] = 7318,
  [SMALL_STATE(150)] = 7347,
  [SMALL_STATE(151)] = 7380,
  [SMALL_STATE(152)] = 7413,
  [SMALL_STATE(153)] = 7440,
  [SMALL_STATE(154)] = 7479,
  [SMALL_STATE(155)] = 7504,
  [SMALL_STATE(156)] = 7529,
  [SMALL_STATE(157)] = 7553,
  [SMALL_STATE(158)] = 7577,
  [SMALL_STATE(159)] = 7601,
  [SMALL_STATE(160)] = 7631,
  [SMALL_STATE(161)] = 7661,
  [SMALL_STATE(162)] = 7685,
  [SMALL_STATE(163)] = 7709,
  [SMALL_STATE(164)] = 7733,
  [SMALL_STATE(165)] = 7759,
  [SMALL_STATE(166)] = 7781,
  [SMALL_STATE(167)] = 7803,
  [SMALL_STATE(168)] = 7826,
  [SMALL_STATE(169)] = 7849,
  [SMALL_STATE(170)] = 7872,
  [SMALL_STATE(171)] = 7893,
  [SMALL_STATE(172)] = 7916,
  [SMALL_STATE(173)] = 7943,
  [SMALL_STATE(174)] = 7966,
  [SMALL_STATE(175)] = 7989,
  [SMALL_STATE(176)] = 8012,
  [SMALL_STATE(177)] = 8035,
  [SMALL_STATE(178)] = 8058,
  [SMALL_STATE(179)] = 8081,
  [SMALL_STATE(180)] = 8102,
  [SMALL_STATE(181)] = 8125,
  [SMALL_STATE(182)] = 8148,
  [SMALL_STATE(183)] = 8167,
  [SMALL_STATE(184)] = 8190,
  [SMALL_STATE(185)] = 8213,
  [SMALL_STATE(186)] = 8234,
  [SMALL_STATE(187)] = 8257,
  [SMALL_STATE(188)] = 8280,
  [SMALL_STATE(189)] = 8301,
  [SMALL_STATE(190)] = 8324,
  [SMALL_STATE(191)] = 8347,
  [SMALL_STATE(192)] = 8370,
  [SMALL_STATE(193)] = 8391,
  [SMALL_STATE(194)] = 8414,
  [SMALL_STATE(195)] = 8433,
  [SMALL_STATE(196)] = 8452,
  [SMALL_STATE(197)] = 8472,
  [SMALL_STATE(198)] = 8490,
  [SMALL_STATE(199)] = 8508,
  [SMALL_STATE(200)] = 8528,
  [SMALL_STATE(201)] = 8548,
  [SMALL_STATE(202)] = 8566,
  [SMALL_STATE(203)] = 8586,
  [SMALL_STATE(204)] = 8610,
  [SMALL_STATE(205)] = 8630,
  [SMALL_STATE(206)] = 8654,
  [SMALL_STATE(207)] = 8674,
  [SMALL_STATE(208)] = 8694,
  [SMALL_STATE(209)] = 8712,
  [SMALL_STATE(210)] = 8730,
  [SMALL_STATE(211)] = 8748,
  [SMALL_STATE(212)] = 8768,
  [SMALL_STATE(213)] = 8788,
  [SMALL_STATE(214)] = 8806,
  [SMALL_STATE(215)] = 8826,
  [SMALL_STATE(216)] = 8846,
  [SMALL_STATE(217)] = 8866,
  [SMALL_STATE(218)] = 8884,
  [SMALL_STATE(219)] = 8902,
  [SMALL_STATE(220)] = 8920,
  [SMALL_STATE(221)] = 8938,
  [SMALL_STATE(222)] = 8956,
  [SMALL_STATE(223)] = 8976,
  [SMALL_STATE(224)] = 8994,
  [SMALL_STATE(225)] = 9014,
  [SMALL_STATE(226)] = 9032,
  [SMALL_STATE(227)] = 9056,
  [SMALL_STATE(228)] = 9074,
  [SMALL_STATE(229)] = 9094,
  [SMALL_STATE(230)] = 9114,
  [SMALL_STATE(231)] = 9134,
  [SMALL_STATE(232)] = 9154,
  [SMALL_STATE(233)] = 9174,
  [SMALL_STATE(234)] = 9194,
  [SMALL_STATE(235)] = 9212,
  [SMALL_STATE(236)] = 9232,
  [SMALL_STATE(237)] = 9252,
  [SMALL_STATE(238)] = 9272,
  [SMALL_STATE(239)] = 9292,
  [SMALL_STATE(240)] = 9312,
  [SMALL_STATE(241)] = 9330,
  [SMALL_STATE(242)] = 9350,
  [SMALL_STATE(243)] = 9370,
  [SMALL_STATE(244)] = 9390,
  [SMALL_STATE(245)] = 9410,
  [SMALL_STATE(246)] = 9430,
  [SMALL_STATE(247)] = 9448,
  [SMALL_STATE(248)] = 9466,
  [SMALL_STATE(249)] = 9487,
  [SMALL_STATE(250)] = 9504,
  [SMALL_STATE(251)] = 9523,
  [SMALL_STATE(252)] = 9540,
  [SMALL_STATE(253)] = 9559,
  [SMALL_STATE(254)] = 9576,
  [SMALL_STATE(255)] = 9597,
  [SMALL_STATE(256)] = 9614,
  [SMALL_STATE(257)] = 9633,
  [SMALL_STATE(258)] = 9650,
  [SMALL_STATE(259)] = 9679,
  [SMALL_STATE(260)] = 9696,
  [SMALL_STATE(261)] = 9715,
  [SMALL_STATE(262)] = 9744,
  [SMALL_STATE(263)] = 9763,
  [SMALL_STATE(264)] = 9784,
  [SMALL_STATE(265)] = 9801,
  [SMALL_STATE(266)] = 9822,
  [SMALL_STATE(267)] = 9839,
  [SMALL_STATE(268)] = 9856,
  [SMALL_STATE(269)] = 9885,
  [SMALL_STATE(270)] = 9904,
  [SMALL_STATE(271)] = 9921,
  [SMALL_STATE(272)] = 9940,
  [SMALL_STATE(273)] = 9957,
  [SMALL_STATE(274)] = 9974,
  [SMALL_STATE(275)] = 10003,
  [SMALL_STATE(276)] = 10020,
  [SMALL_STATE(277)] = 10037,
  [SMALL_STATE(278)] = 10054,
  [SMALL_STATE(279)] = 10071,
  [SMALL_STATE(280)] = 10100,
  [SMALL_STATE(281)] = 10121,
  [SMALL_STATE(282)] = 10142,
  [SMALL_STATE(283)] = 10163,
  [SMALL_STATE(284)] = 10188,
  [SMALL_STATE(285)] = 10216,
  [SMALL_STATE(286)] = 10244,
  [SMALL_STATE(287)] = 10272,
  [SMALL_STATE(288)] = 10300,
  [SMALL_STATE(289)] = 10322,
  [SMALL_STATE(290)] = 10350,
  [SMALL_STATE(291)] = 10378,
  [SMALL_STATE(292)] = 10406,
  [SMALL_STATE(293)] = 10434,
  [SMALL_STATE(294)] = 10460,
  [SMALL_STATE(295)] = 10488,
  [SMALL_STATE(296)] = 10514,
  [SMALL_STATE(297)] = 10542,
  [SMALL_STATE(298)] = 10570,
  [SMALL_STATE(299)] = 10598,
  [SMALL_STATE(300)] = 10616,
  [SMALL_STATE(301)] = 10644,
  [SMALL_STATE(302)] = 10672,
  [SMALL_STATE(303)] = 10700,
  [SMALL_STATE(304)] = 10728,
  [SMALL_STATE(305)] = 10756,
  [SMALL_STATE(306)] = 10784,
  [SMALL_STATE(307)] = 10810,
  [SMALL_STATE(308)] = 10838,
  [SMALL_STATE(309)] = 10864,
  [SMALL_STATE(310)] = 10892,
  [SMALL_STATE(311)] = 10920,
  [SMALL_STATE(312)] = 10948,
  [SMALL_STATE(313)] = 10976,
  [SMALL_STATE(314)] = 11004,
  [SMALL_STATE(315)] = 11032,
  [SMALL_STATE(316)] = 11058,
  [SMALL_STATE(317)] = 11082,
  [SMALL_STATE(318)] = 11110,
  [SMALL_STATE(319)] = 11138,
  [SMALL_STATE(320)] = 11166,
  [SMALL_STATE(321)] = 11194,
  [SMALL_STATE(322)] = 11222,
  [SMALL_STATE(323)] = 11250,
  [SMALL_STATE(324)] = 11278,
  [SMALL_STATE(325)] = 11302,
  [SMALL_STATE(326)] = 11320,
  [SMALL_STATE(327)] = 11339,
  [SMALL_STATE(328)] = 11358,
  [SMALL_STATE(329)] = 11383,
  [SMALL_STATE(330)] = 11404,
  [SMALL_STATE(331)] = 11421,
  [SMALL_STATE(332)] = 11442,
  [SMALL_STATE(333)] = 11461,
  [SMALL_STATE(334)] = 11480,
  [SMALL_STATE(335)] = 11501,
  [SMALL_STATE(336)] = 11522,
  [SMALL_STATE(337)] = 11539,
  [SMALL_STATE(338)] = 11560,
  [SMALL_STATE(339)] = 11580,
  [SMALL_STATE(340)] = 11602,
  [SMALL_STATE(341)] = 11624,
  [SMALL_STATE(342)] = 11640,
  [SMALL_STATE(343)] = 11656,
  [SMALL_STATE(344)] = 11672,
  [SMALL_STATE(345)] = 11688,
  [SMALL_STATE(346)] = 11708,
  [SMALL_STATE(347)] = 11724,
  [SMALL_STATE(348)] = 11740,
  [SMALL_STATE(349)] = 11756,
  [SMALL_STATE(350)] = 11772,
  [SMALL_STATE(351)] = 11792,
  [SMALL_STATE(352)] = 11808,
  [SMALL_STATE(353)] = 11824,
  [SMALL_STATE(354)] = 11840,
  [SMALL_STATE(355)] = 11856,
  [SMALL_STATE(356)] = 11872,
  [SMALL_STATE(357)] = 11888,
  [SMALL_STATE(358)] = 11904,
  [SMALL_STATE(359)] = 11920,
  [SMALL_STATE(360)] = 11941,
  [SMALL_STATE(361)] = 11962,
  [SMALL_STATE(362)] = 11981,
  [SMALL_STATE(363)] = 11998,
  [SMALL_STATE(364)] = 12013,
  [SMALL_STATE(365)] = 12030,
  [SMALL_STATE(366)] = 12045,
  [SMALL_STATE(367)] = 12058,
  [SMALL_STATE(368)] = 12075,
  [SMALL_STATE(369)] = 12092,
  [SMALL_STATE(370)] = 12113,
  [SMALL_STATE(371)] = 12130,
  [SMALL_STATE(372)] = 12145,
  [SMALL_STATE(373)] = 12162,
  [SMALL_STATE(374)] = 12174,
  [SMALL_STATE(375)] = 12186,
  [SMALL_STATE(376)] = 12200,
  [SMALL_STATE(377)] = 12212,
  [SMALL_STATE(378)] = 12224,
  [SMALL_STATE(379)] = 12238,
  [SMALL_STATE(380)] = 12250,
  [SMALL_STATE(381)] = 12266,
  [SMALL_STATE(382)] = 12278,
  [SMALL_STATE(383)] = 12290,
  [SMALL_STATE(384)] = 12304,
  [SMALL_STATE(385)] = 12320,
  [SMALL_STATE(386)] = 12332,
  [SMALL_STATE(387)] = 12344,
  [SMALL_STATE(388)] = 12359,
  [SMALL_STATE(389)] = 12372,
  [SMALL_STATE(390)] = 12389,
  [SMALL_STATE(391)] = 12402,
  [SMALL_STATE(392)] = 12413,
  [SMALL_STATE(393)] = 12424,
  [SMALL_STATE(394)] = 12439,
  [SMALL_STATE(395)] = 12454,
  [SMALL_STATE(396)] = 12469,
  [SMALL_STATE(397)] = 12480,
  [SMALL_STATE(398)] = 12495,
  [SMALL_STATE(399)] = 12506,
  [SMALL_STATE(400)] = 12521,
  [SMALL_STATE(401)] = 12532,
  [SMALL_STATE(402)] = 12547,
  [SMALL_STATE(403)] = 12562,
  [SMALL_STATE(404)] = 12577,
  [SMALL_STATE(405)] = 12590,
  [SMALL_STATE(406)] = 12601,
  [SMALL_STATE(407)] = 12612,
  [SMALL_STATE(408)] = 12627,
  [SMALL_STATE(409)] = 12642,
  [SMALL_STATE(410)] = 12657,
  [SMALL_STATE(411)] = 12672,
  [SMALL_STATE(412)] = 12689,
  [SMALL_STATE(413)] = 12703,
  [SMALL_STATE(414)] = 12717,
  [SMALL_STATE(415)] = 12731,
  [SMALL_STATE(416)] = 12745,
  [SMALL_STATE(417)] = 12759,
  [SMALL_STATE(418)] = 12773,
  [SMALL_STATE(419)] = 12787,
  [SMALL_STATE(420)] = 12801,
  [SMALL_STATE(421)] = 12815,
  [SMALL_STATE(422)] = 12829,
  [SMALL_STATE(423)] = 12843,
  [SMALL_STATE(424)] = 12857,
  [SMALL_STATE(425)] = 12871,
  [SMALL_STATE(426)] = 12885,
  [SMALL_STATE(427)] = 12899,
  [SMALL_STATE(428)] = 12911,
  [SMALL_STATE(429)] = 12925,
  [SMALL_STATE(430)] = 12939,
  [SMALL_STATE(431)] = 12953,
  [SMALL_STATE(432)] = 12967,
  [SMALL_STATE(433)] = 12981,
  [SMALL_STATE(434)] = 12995,
  [SMALL_STATE(435)] = 13009,
  [SMALL_STATE(436)] = 13023,
  [SMALL_STATE(437)] = 13037,
  [SMALL_STATE(438)] = 13051,
  [SMALL_STATE(439)] = 13065,
  [SMALL_STATE(440)] = 13079,
  [SMALL_STATE(441)] = 13091,
  [SMALL_STATE(442)] = 13105,
  [SMALL_STATE(443)] = 13119,
  [SMALL_STATE(444)] = 13131,
  [SMALL_STATE(445)] = 13145,
  [SMALL_STATE(446)] = 13157,
  [SMALL_STATE(447)] = 13171,
  [SMALL_STATE(448)] = 13185,
  [SMALL_STATE(449)] = 13199,
  [SMALL_STATE(450)] = 13213,
  [SMALL_STATE(451)] = 13227,
  [SMALL_STATE(452)] = 13241,
  [SMALL_STATE(453)] = 13255,
  [SMALL_STATE(454)] = 13269,
  [SMALL_STATE(455)] = 13283,
  [SMALL_STATE(456)] = 13297,
  [SMALL_STATE(457)] = 13311,
  [SMALL_STATE(458)] = 13325,
  [SMALL_STATE(459)] = 13339,
  [SMALL_STATE(460)] = 13353,
  [SMALL_STATE(461)] = 13367,
  [SMALL_STATE(462)] = 13381,
  [SMALL_STATE(463)] = 13395,
  [SMALL_STATE(464)] = 13409,
  [SMALL_STATE(465)] = 13423,
  [SMALL_STATE(466)] = 13437,
  [SMALL_STATE(467)] = 13451,
  [SMALL_STATE(468)] = 13461,
  [SMALL_STATE(469)] = 13475,
  [SMALL_STATE(470)] = 13489,
  [SMALL_STATE(471)] = 13501,
  [SMALL_STATE(472)] = 13515,
  [SMALL_STATE(473)] = 13527,
  [SMALL_STATE(474)] = 13541,
  [SMALL_STATE(475)] = 13553,
  [SMALL_STATE(476)] = 13567,
  [SMALL_STATE(477)] = 13581,
  [SMALL_STATE(478)] = 13595,
  [SMALL_STATE(479)] = 13609,
  [SMALL_STATE(480)] = 13621,
  [SMALL_STATE(481)] = 13635,
  [SMALL_STATE(482)] = 13649,
  [SMALL_STATE(483)] = 13663,
  [SMALL_STATE(484)] = 13677,
  [SMALL_STATE(485)] = 13691,
  [SMALL_STATE(486)] = 13705,
  [SMALL_STATE(487)] = 13719,
  [SMALL_STATE(488)] = 13733,
  [SMALL_STATE(489)] = 13747,
  [SMALL_STATE(490)] = 13761,
  [SMALL_STATE(491)] = 13775,
  [SMALL_STATE(492)] = 13789,
  [SMALL_STATE(493)] = 13801,
  [SMALL_STATE(494)] = 13815,
  [SMALL_STATE(495)] = 13829,
  [SMALL_STATE(496)] = 13843,
  [SMALL_STATE(497)] = 13852,
  [SMALL_STATE(498)] = 13863,
  [SMALL_STATE(499)] = 13874,
  [SMALL_STATE(500)] = 13883,
  [SMALL_STATE(501)] = 13892,
  [SMALL_STATE(502)] = 13903,
  [SMALL_STATE(503)] = 13912,
  [SMALL_STATE(504)] = 13923,
  [SMALL_STATE(505)] = 13934,
  [SMALL_STATE(506)] = 13945,
  [SMALL_STATE(507)] = 13956,
  [SMALL_STATE(508)] = 13967,
  [SMALL_STATE(509)] = 13976,
  [SMALL_STATE(510)] = 13985,
  [SMALL_STATE(511)] = 13996,
  [SMALL_STATE(512)] = 14007,
  [SMALL_STATE(513)] = 14018,
  [SMALL_STATE(514)] = 14027,
  [SMALL_STATE(515)] = 14038,
  [SMALL_STATE(516)] = 14051,
  [SMALL_STATE(517)] = 14060,
  [SMALL_STATE(518)] = 14069,
  [SMALL_STATE(519)] = 14078,
  [SMALL_STATE(520)] = 14089,
  [SMALL_STATE(521)] = 14100,
  [SMALL_STATE(522)] = 14111,
  [SMALL_STATE(523)] = 14122,
  [SMALL_STATE(524)] = 14131,
  [SMALL_STATE(525)] = 14142,
  [SMALL_STATE(526)] = 14151,
  [SMALL_STATE(527)] = 14160,
  [SMALL_STATE(528)] = 14171,
  [SMALL_STATE(529)] = 14180,
  [SMALL_STATE(530)] = 14191,
  [SMALL_STATE(531)] = 14200,
  [SMALL_STATE(532)] = 14211,
  [SMALL_STATE(533)] = 14220,
  [SMALL_STATE(534)] = 14231,
  [SMALL_STATE(535)] = 14240,
  [SMALL_STATE(536)] = 14249,
  [SMALL_STATE(537)] = 14258,
  [SMALL_STATE(538)] = 14267,
  [SMALL_STATE(539)] = 14278,
  [SMALL_STATE(540)] = 14289,
  [SMALL_STATE(541)] = 14298,
  [SMALL_STATE(542)] = 14307,
  [SMALL_STATE(543)] = 14318,
  [SMALL_STATE(544)] = 14327,
  [SMALL_STATE(545)] = 14338,
  [SMALL_STATE(546)] = 14347,
  [SMALL_STATE(547)] = 14356,
  [SMALL_STATE(548)] = 14365,
  [SMALL_STATE(549)] = 14378,
  [SMALL_STATE(550)] = 14387,
  [SMALL_STATE(551)] = 14398,
  [SMALL_STATE(552)] = 14407,
  [SMALL_STATE(553)] = 14418,
  [SMALL_STATE(554)] = 14427,
  [SMALL_STATE(555)] = 14436,
  [SMALL_STATE(556)] = 14445,
  [SMALL_STATE(557)] = 14454,
  [SMALL_STATE(558)] = 14463,
  [SMALL_STATE(559)] = 14471,
  [SMALL_STATE(560)] = 14479,
  [SMALL_STATE(561)] = 14487,
  [SMALL_STATE(562)] = 14495,
  [SMALL_STATE(563)] = 14503,
  [SMALL_STATE(564)] = 14511,
  [SMALL_STATE(565)] = 14519,
  [SMALL_STATE(566)] = 14527,
  [SMALL_STATE(567)] = 14535,
  [SMALL_STATE(568)] = 14543,
  [SMALL_STATE(569)] = 14551,
  [SMALL_STATE(570)] = 14559,
  [SMALL_STATE(571)] = 14567,
  [SMALL_STATE(572)] = 14575,
  [SMALL_STATE(573)] = 14583,
  [SMALL_STATE(574)] = 14591,
  [SMALL_STATE(575)] = 14599,
  [SMALL_STATE(576)] = 14607,
  [SMALL_STATE(577)] = 14615,
  [SMALL_STATE(578)] = 14623,
  [SMALL_STATE(579)] = 14631,
  [SMALL_STATE(580)] = 14639,
  [SMALL_STATE(581)] = 14647,
  [SMALL_STATE(582)] = 14655,
  [SMALL_STATE(583)] = 14663,
  [SMALL_STATE(584)] = 14671,
  [SMALL_STATE(585)] = 14679,
  [SMALL_STATE(586)] = 14687,
  [SMALL_STATE(587)] = 14695,
  [SMALL_STATE(588)] = 14703,
  [SMALL_STATE(589)] = 14711,
  [SMALL_STATE(590)] = 14719,
  [SMALL_STATE(591)] = 14727,
  [SMALL_STATE(592)] = 14735,
  [SMALL_STATE(593)] = 14743,
  [SMALL_STATE(594)] = 14751,
  [SMALL_STATE(595)] = 14759,
  [SMALL_STATE(596)] = 14767,
  [SMALL_STATE(597)] = 14775,
  [SMALL_STATE(598)] = 14783,
  [SMALL_STATE(599)] = 14791,
  [SMALL_STATE(600)] = 14799,
  [SMALL_STATE(601)] = 14807,
  [SMALL_STATE(602)] = 14815,
  [SMALL_STATE(603)] = 14823,
  [SMALL_STATE(604)] = 14831,
  [SMALL_STATE(605)] = 14839,
  [SMALL_STATE(606)] = 14847,
  [SMALL_STATE(607)] = 14855,
  [SMALL_STATE(608)] = 14863,
  [SMALL_STATE(609)] = 14871,
  [SMALL_STATE(610)] = 14879,
  [SMALL_STATE(611)] = 14887,
  [SMALL_STATE(612)] = 14895,
  [SMALL_STATE(613)] = 14903,
  [SMALL_STATE(614)] = 14911,
  [SMALL_STATE(615)] = 14919,
  [SMALL_STATE(616)] = 14927,
  [SMALL_STATE(617)] = 14935,
  [SMALL_STATE(618)] = 14943,
  [SMALL_STATE(619)] = 14951,
  [SMALL_STATE(620)] = 14959,
  [SMALL_STATE(621)] = 14967,
  [SMALL_STATE(622)] = 14975,
  [SMALL_STATE(623)] = 14983,
  [SMALL_STATE(624)] = 14991,
  [SMALL_STATE(625)] = 14999,
  [SMALL_STATE(626)] = 15007,
  [SMALL_STATE(627)] = 15015,
  [SMALL_STATE(628)] = 15023,
  [SMALL_STATE(629)] = 15031,
  [SMALL_STATE(630)] = 15039,
  [SMALL_STATE(631)] = 15047,
  [SMALL_STATE(632)] = 15055,
  [SMALL_STATE(633)] = 15063,
  [SMALL_STATE(634)] = 15071,
  [SMALL_STATE(635)] = 15079,
  [SMALL_STATE(636)] = 15087,
  [SMALL_STATE(637)] = 15095,
  [SMALL_STATE(638)] = 15103,
  [SMALL_STATE(639)] = 15111,
  [SMALL_STATE(640)] = 15119,
  [SMALL_STATE(641)] = 15127,
  [SMALL_STATE(642)] = 15135,
  [SMALL_STATE(643)] = 15143,
  [SMALL_STATE(644)] = 15151,
  [SMALL_STATE(645)] = 15159,
  [SMALL_STATE(646)] = 15167,
  [SMALL_STATE(647)] = 15175,
  [SMALL_STATE(648)] = 15183,
  [SMALL_STATE(649)] = 15191,
  [SMALL_STATE(650)] = 15199,
  [SMALL_STATE(651)] = 15209,
  [SMALL_STATE(652)] = 15217,
  [SMALL_STATE(653)] = 15225,
  [SMALL_STATE(654)] = 15233,
  [SMALL_STATE(655)] = 15241,
  [SMALL_STATE(656)] = 15249,
  [SMALL_STATE(657)] = 15257,
  [SMALL_STATE(658)] = 15265,
  [SMALL_STATE(659)] = 15273,
  [SMALL_STATE(660)] = 15281,
  [SMALL_STATE(661)] = 15289,
  [SMALL_STATE(662)] = 15297,
  [SMALL_STATE(663)] = 15305,
  [SMALL_STATE(664)] = 15313,
  [SMALL_STATE(665)] = 15321,
  [SMALL_STATE(666)] = 15329,
  [SMALL_STATE(667)] = 15339,
  [SMALL_STATE(668)] = 15347,
  [SMALL_STATE(669)] = 15355,
  [SMALL_STATE(670)] = 15363,
  [SMALL_STATE(671)] = 15371,
  [SMALL_STATE(672)] = 15379,
  [SMALL_STATE(673)] = 15387,
  [SMALL_STATE(674)] = 15395,
  [SMALL_STATE(675)] = 15403,
  [SMALL_STATE(676)] = 15411,
  [SMALL_STATE(677)] = 15419,
  [SMALL_STATE(678)] = 15427,
  [SMALL_STATE(679)] = 15435,
  [SMALL_STATE(680)] = 15443,
  [SMALL_STATE(681)] = 15451,
  [SMALL_STATE(682)] = 15459,
  [SMALL_STATE(683)] = 15467,
  [SMALL_STATE(684)] = 15475,
  [SMALL_STATE(685)] = 15483,
  [SMALL_STATE(686)] = 15491,
  [SMALL_STATE(687)] = 15499,
  [SMALL_STATE(688)] = 15507,
  [SMALL_STATE(689)] = 15515,
  [SMALL_STATE(690)] = 15523,
  [SMALL_STATE(691)] = 15531,
  [SMALL_STATE(692)] = 15539,
  [SMALL_STATE(693)] = 15547,
  [SMALL_STATE(694)] = 15555,
  [SMALL_STATE(695)] = 15563,
  [SMALL_STATE(696)] = 15571,
  [SMALL_STATE(697)] = 15579,
  [SMALL_STATE(698)] = 15587,
  [SMALL_STATE(699)] = 15595,
  [SMALL_STATE(700)] = 15603,
  [SMALL_STATE(701)] = 15611,
  [SMALL_STATE(702)] = 15619,
  [SMALL_STATE(703)] = 15627,
  [SMALL_STATE(704)] = 15635,
  [SMALL_STATE(705)] = 15643,
  [SMALL_STATE(706)] = 15651,
  [SMALL_STATE(707)] = 15661,
  [SMALL_STATE(708)] = 15669,
  [SMALL_STATE(709)] = 15677,
  [SMALL_STATE(710)] = 15685,
  [SMALL_STATE(711)] = 15693,
  [SMALL_STATE(712)] = 15701,
  [SMALL_STATE(713)] = 15709,
  [SMALL_STATE(714)] = 15717,
  [SMALL_STATE(715)] = 15725,
  [SMALL_STATE(716)] = 15733,
  [SMALL_STATE(717)] = 15741,
  [SMALL_STATE(718)] = 15749,
  [SMALL_STATE(719)] = 15757,
  [SMALL_STATE(720)] = 15765,
  [SMALL_STATE(721)] = 15773,
  [SMALL_STATE(722)] = 15781,
  [SMALL_STATE(723)] = 15789,
  [SMALL_STATE(724)] = 15797,
  [SMALL_STATE(725)] = 15805,
  [SMALL_STATE(726)] = 15813,
  [SMALL_STATE(727)] = 15821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(336),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(548),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(74),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(684),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(336),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(46),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(330),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(65),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(336),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(330),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(65),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(330),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(65),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(515),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(41),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(719),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(717),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(715),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(714),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(713),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(711),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(422),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(709),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(417),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(47),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(38),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(48),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(153),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(145),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(139),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(131),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(194),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(670),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(660),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(658),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(158),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(143),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(256),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(519),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(512),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(365),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(601),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(634),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(148),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(141),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(140),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(140),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(522),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(122),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(128),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(390),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(340),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(4),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(656),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(339),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(479),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(335),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1522] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
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
