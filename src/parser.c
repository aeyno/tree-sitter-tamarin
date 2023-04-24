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
#define STATE_COUNT 732
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
  [14] = 7,
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
  [40] = 40,
  [41] = 29,
  [42] = 35,
  [43] = 30,
  [44] = 33,
  [45] = 45,
  [46] = 34,
  [47] = 47,
  [48] = 38,
  [49] = 32,
  [50] = 50,
  [51] = 51,
  [52] = 31,
  [53] = 53,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 47,
  [58] = 54,
  [59] = 50,
  [60] = 60,
  [61] = 53,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 65,
  [72] = 64,
  [73] = 56,
  [74] = 74,
  [75] = 68,
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
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 89,
  [111] = 99,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 116,
  [119] = 115,
  [120] = 115,
  [121] = 121,
  [122] = 122,
  [123] = 114,
  [124] = 124,
  [125] = 114,
  [126] = 116,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 40,
  [137] = 137,
  [138] = 138,
  [139] = 135,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 142,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 146,
  [149] = 149,
  [150] = 66,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 62,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 70,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 80,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 172,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 74,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 76,
  [185] = 185,
  [186] = 186,
  [187] = 79,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 182,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 97,
  [199] = 96,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 95,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 205,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 208,
  [218] = 218,
  [219] = 219,
  [220] = 94,
  [221] = 101,
  [222] = 201,
  [223] = 209,
  [224] = 87,
  [225] = 213,
  [226] = 91,
  [227] = 82,
  [228] = 228,
  [229] = 229,
  [230] = 92,
  [231] = 231,
  [232] = 207,
  [233] = 210,
  [234] = 109,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 100,
  [239] = 239,
  [240] = 108,
  [241] = 241,
  [242] = 242,
  [243] = 215,
  [244] = 103,
  [245] = 106,
  [246] = 246,
  [247] = 203,
  [248] = 194,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 172,
  [257] = 257,
  [258] = 66,
  [259] = 259,
  [260] = 181,
  [261] = 188,
  [262] = 262,
  [263] = 173,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 266,
  [269] = 269,
  [270] = 172,
  [271] = 271,
  [272] = 249,
  [273] = 181,
  [274] = 194,
  [275] = 275,
  [276] = 276,
  [277] = 182,
  [278] = 278,
  [279] = 269,
  [280] = 182,
  [281] = 173,
  [282] = 282,
  [283] = 251,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 284,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 291,
  [295] = 295,
  [296] = 285,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 295,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 303,
  [307] = 297,
  [308] = 287,
  [309] = 309,
  [310] = 310,
  [311] = 301,
  [312] = 312,
  [313] = 286,
  [314] = 62,
  [315] = 290,
  [316] = 316,
  [317] = 316,
  [318] = 293,
  [319] = 309,
  [320] = 298,
  [321] = 312,
  [322] = 289,
  [323] = 299,
  [324] = 70,
  [325] = 305,
  [326] = 326,
  [327] = 80,
  [328] = 328,
  [329] = 326,
  [330] = 330,
  [331] = 331,
  [332] = 331,
  [333] = 333,
  [334] = 194,
  [335] = 78,
  [336] = 336,
  [337] = 173,
  [338] = 77,
  [339] = 81,
  [340] = 181,
  [341] = 328,
  [342] = 91,
  [343] = 107,
  [344] = 106,
  [345] = 92,
  [346] = 95,
  [347] = 347,
  [348] = 103,
  [349] = 82,
  [350] = 104,
  [351] = 96,
  [352] = 101,
  [353] = 242,
  [354] = 94,
  [355] = 105,
  [356] = 347,
  [357] = 108,
  [358] = 97,
  [359] = 87,
  [360] = 93,
  [361] = 109,
  [362] = 100,
  [363] = 363,
  [364] = 122,
  [365] = 365,
  [366] = 112,
  [367] = 367,
  [368] = 368,
  [369] = 121,
  [370] = 370,
  [371] = 365,
  [372] = 229,
  [373] = 373,
  [374] = 62,
  [375] = 124,
  [376] = 376,
  [377] = 215,
  [378] = 242,
  [379] = 87,
  [380] = 91,
  [381] = 381,
  [382] = 94,
  [383] = 109,
  [384] = 384,
  [385] = 82,
  [386] = 95,
  [387] = 381,
  [388] = 80,
  [389] = 130,
  [390] = 145,
  [391] = 391,
  [392] = 133,
  [393] = 393,
  [394] = 370,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 138,
  [402] = 402,
  [403] = 373,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 132,
  [408] = 376,
  [409] = 368,
  [410] = 396,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 416,
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
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 431,
  [438] = 438,
  [439] = 439,
  [440] = 424,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 438,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 429,
  [451] = 439,
  [452] = 452,
  [453] = 452,
  [454] = 427,
  [455] = 423,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 428,
  [461] = 435,
  [462] = 462,
  [463] = 425,
  [464] = 458,
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
  [476] = 446,
  [477] = 445,
  [478] = 467,
  [479] = 443,
  [480] = 480,
  [481] = 441,
  [482] = 482,
  [483] = 483,
  [484] = 456,
  [485] = 485,
  [486] = 472,
  [487] = 441,
  [488] = 488,
  [489] = 434,
  [490] = 490,
  [491] = 447,
  [492] = 492,
  [493] = 443,
  [494] = 438,
  [495] = 446,
  [496] = 445,
  [497] = 466,
  [498] = 475,
  [499] = 499,
  [500] = 500,
  [501] = 276,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 508,
  [511] = 511,
  [512] = 512,
  [513] = 509,
  [514] = 503,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 521,
  [523] = 253,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 414,
  [530] = 530,
  [531] = 530,
  [532] = 532,
  [533] = 533,
  [534] = 397,
  [535] = 535,
  [536] = 509,
  [537] = 400,
  [538] = 402,
  [539] = 511,
  [540] = 540,
  [541] = 415,
  [542] = 412,
  [543] = 267,
  [544] = 544,
  [545] = 275,
  [546] = 505,
  [547] = 502,
  [548] = 508,
  [549] = 549,
  [550] = 76,
  [551] = 551,
  [552] = 552,
  [553] = 516,
  [554] = 554,
  [555] = 555,
  [556] = 544,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 505,
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
  [601] = 590,
  [602] = 585,
  [603] = 603,
  [604] = 604,
  [605] = 594,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 598,
  [611] = 611,
  [612] = 595,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 603,
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
  [634] = 634,
  [635] = 635,
  [636] = 635,
  [637] = 631,
  [638] = 592,
  [639] = 639,
  [640] = 640,
  [641] = 595,
  [642] = 642,
  [643] = 598,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 633,
  [648] = 592,
  [649] = 594,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 608,
  [655] = 588,
  [656] = 656,
  [657] = 596,
  [658] = 597,
  [659] = 659,
  [660] = 660,
  [661] = 620,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 646,
  [670] = 670,
  [671] = 592,
  [672] = 652,
  [673] = 652,
  [674] = 666,
  [675] = 668,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 630,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 615,
  [684] = 684,
  [685] = 562,
  [686] = 686,
  [687] = 617,
  [688] = 688,
  [689] = 689,
  [690] = 659,
  [691] = 691,
  [692] = 692,
  [693] = 667,
  [694] = 694,
  [695] = 695,
  [696] = 663,
  [697] = 627,
  [698] = 689,
  [699] = 699,
  [700] = 664,
  [701] = 701,
  [702] = 691,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 571,
  [707] = 707,
  [708] = 708,
  [709] = 625,
  [710] = 710,
  [711] = 711,
  [712] = 600,
  [713] = 713,
  [714] = 642,
  [715] = 715,
  [716] = 704,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 589,
  [721] = 721,
  [722] = 566,
  [723] = 694,
  [724] = 604,
  [725] = 725,
  [726] = 726,
  [727] = 656,
  [728] = 695,
  [729] = 583,
  [730] = 665,
  [731] = 686,
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
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(55)
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
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(52)
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
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(53)
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
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(54)
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
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == '{') ADVANCE(56);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(59);
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
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '<') ADVANCE(848);
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '|') ADVANCE(751);
      if (lookahead == '~') ADVANCE(861);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '\\') SKIP(10)
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
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '$') ADVANCE(859);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '<') ADVANCE(847);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '~') ADVANCE(862);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 53:
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ')') ADVANCE(785);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(66);
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
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '+') ADVANCE(850);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == 'X') ADVANCE(499);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == 8853) ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(780);
      if (lookahead == ',') ADVANCE(688);
      if (lookahead == '.') ADVANCE(790);
      if (lookahead == '/') ADVANCE(66);
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
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(837);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(440);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(896);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(710);
      if (lookahead == 'I') ADVANCE(712);
      if (lookahead == 'O') ADVANCE(738);
      if (lookahead == 'P') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(716);
      if (lookahead == '\\') SKIP(12)
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(498);
      if (lookahead == '\\') SKIP(24)
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == '/') ADVANCE(66);
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
      if (lookahead == 'c') ADVANCE(63);
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
      if (lookahead == 'c') ADVANCE(65);
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
      if (lookahead == 'e') ADVANCE(60);
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
      if (lookahead == 'g') ADVANCE(62);
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
      if (lookahead == 'l') ADVANCE(61);
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
      if (lookahead == 'r') ADVANCE(58);
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
      if (lookahead == 's') ADVANCE(64);
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
  [32] = {.lex_state = 47, .external_lex_state = 1},
  [33] = {.lex_state = 47, .external_lex_state = 1},
  [34] = {.lex_state = 47, .external_lex_state = 1},
  [35] = {.lex_state = 47, .external_lex_state = 1},
  [36] = {.lex_state = 51, .external_lex_state = 1},
  [37] = {.lex_state = 67, .external_lex_state = 1},
  [38] = {.lex_state = 47, .external_lex_state = 1},
  [39] = {.lex_state = 51, .external_lex_state = 1},
  [40] = {.lex_state = 67, .external_lex_state = 1},
  [41] = {.lex_state = 51, .external_lex_state = 1},
  [42] = {.lex_state = 51, .external_lex_state = 1},
  [43] = {.lex_state = 51, .external_lex_state = 1},
  [44] = {.lex_state = 51, .external_lex_state = 1},
  [45] = {.lex_state = 55, .external_lex_state = 1},
  [46] = {.lex_state = 51, .external_lex_state = 1},
  [47] = {.lex_state = 47, .external_lex_state = 1},
  [48] = {.lex_state = 51, .external_lex_state = 1},
  [49] = {.lex_state = 51, .external_lex_state = 1},
  [50] = {.lex_state = 47, .external_lex_state = 1},
  [51] = {.lex_state = 47, .external_lex_state = 1},
  [52] = {.lex_state = 51, .external_lex_state = 1},
  [53] = {.lex_state = 47, .external_lex_state = 1},
  [54] = {.lex_state = 47, .external_lex_state = 1},
  [55] = {.lex_state = 51, .external_lex_state = 1},
  [56] = {.lex_state = 47, .external_lex_state = 1},
  [57] = {.lex_state = 51, .external_lex_state = 1},
  [58] = {.lex_state = 51, .external_lex_state = 1},
  [59] = {.lex_state = 51, .external_lex_state = 1},
  [60] = {.lex_state = 55, .external_lex_state = 1},
  [61] = {.lex_state = 51, .external_lex_state = 1},
  [62] = {.lex_state = 49, .external_lex_state = 1},
  [63] = {.lex_state = 55, .external_lex_state = 1},
  [64] = {.lex_state = 47, .external_lex_state = 1},
  [65] = {.lex_state = 47, .external_lex_state = 1},
  [66] = {.lex_state = 48, .external_lex_state = 1},
  [67] = {.lex_state = 47, .external_lex_state = 1},
  [68] = {.lex_state = 47, .external_lex_state = 1},
  [69] = {.lex_state = 51, .external_lex_state = 1},
  [70] = {.lex_state = 48, .external_lex_state = 1},
  [71] = {.lex_state = 51, .external_lex_state = 1},
  [72] = {.lex_state = 51, .external_lex_state = 1},
  [73] = {.lex_state = 51, .external_lex_state = 1},
  [74] = {.lex_state = 67, .external_lex_state = 1},
  [75] = {.lex_state = 51, .external_lex_state = 1},
  [76] = {.lex_state = 67, .external_lex_state = 1},
  [77] = {.lex_state = 48, .external_lex_state = 1},
  [78] = {.lex_state = 48, .external_lex_state = 1},
  [79] = {.lex_state = 67, .external_lex_state = 1},
  [80] = {.lex_state = 48, .external_lex_state = 1},
  [81] = {.lex_state = 48, .external_lex_state = 1},
  [82] = {.lex_state = 48, .external_lex_state = 1},
  [83] = {.lex_state = 52, .external_lex_state = 1},
  [84] = {.lex_state = 46, .external_lex_state = 1},
  [85] = {.lex_state = 46, .external_lex_state = 1},
  [86] = {.lex_state = 68, .external_lex_state = 1},
  [87] = {.lex_state = 48, .external_lex_state = 1},
  [88] = {.lex_state = 68, .external_lex_state = 1},
  [89] = {.lex_state = 52, .external_lex_state = 1},
  [90] = {.lex_state = 68, .external_lex_state = 1},
  [91] = {.lex_state = 48, .external_lex_state = 1},
  [92] = {.lex_state = 48, .external_lex_state = 1},
  [93] = {.lex_state = 48, .external_lex_state = 1},
  [94] = {.lex_state = 48, .external_lex_state = 1},
  [95] = {.lex_state = 48, .external_lex_state = 1},
  [96] = {.lex_state = 48, .external_lex_state = 1},
  [97] = {.lex_state = 48, .external_lex_state = 1},
  [98] = {.lex_state = 68, .external_lex_state = 1},
  [99] = {.lex_state = 52, .external_lex_state = 1},
  [100] = {.lex_state = 48, .external_lex_state = 1},
  [101] = {.lex_state = 48, .external_lex_state = 1},
  [102] = {.lex_state = 46, .external_lex_state = 1},
  [103] = {.lex_state = 48, .external_lex_state = 1},
  [104] = {.lex_state = 48, .external_lex_state = 1},
  [105] = {.lex_state = 48, .external_lex_state = 1},
  [106] = {.lex_state = 48, .external_lex_state = 1},
  [107] = {.lex_state = 48, .external_lex_state = 1},
  [108] = {.lex_state = 48, .external_lex_state = 1},
  [109] = {.lex_state = 48, .external_lex_state = 1},
  [110] = {.lex_state = 52, .external_lex_state = 1},
  [111] = {.lex_state = 52, .external_lex_state = 1},
  [112] = {.lex_state = 48, .external_lex_state = 1},
  [113] = {.lex_state = 52, .external_lex_state = 1},
  [114] = {.lex_state = 52, .external_lex_state = 1},
  [115] = {.lex_state = 52, .external_lex_state = 1},
  [116] = {.lex_state = 52, .external_lex_state = 1},
  [117] = {.lex_state = 52, .external_lex_state = 1},
  [118] = {.lex_state = 52, .external_lex_state = 1},
  [119] = {.lex_state = 52, .external_lex_state = 1},
  [120] = {.lex_state = 52, .external_lex_state = 1},
  [121] = {.lex_state = 48, .external_lex_state = 1},
  [122] = {.lex_state = 48, .external_lex_state = 1},
  [123] = {.lex_state = 52, .external_lex_state = 1},
  [124] = {.lex_state = 48, .external_lex_state = 1},
  [125] = {.lex_state = 52, .external_lex_state = 1},
  [126] = {.lex_state = 52, .external_lex_state = 1},
  [127] = {.lex_state = 52, .external_lex_state = 1},
  [128] = {.lex_state = 50, .external_lex_state = 1},
  [129] = {.lex_state = 52, .external_lex_state = 1},
  [130] = {.lex_state = 48, .external_lex_state = 1},
  [131] = {.lex_state = 52, .external_lex_state = 1},
  [132] = {.lex_state = 47, .external_lex_state = 1},
  [133] = {.lex_state = 47, .external_lex_state = 1},
  [134] = {.lex_state = 69, .external_lex_state = 1},
  [135] = {.lex_state = 52, .external_lex_state = 1},
  [136] = {.lex_state = 49, .external_lex_state = 1},
  [137] = {.lex_state = 49, .external_lex_state = 1},
  [138] = {.lex_state = 47, .external_lex_state = 1},
  [139] = {.lex_state = 52, .external_lex_state = 1},
  [140] = {.lex_state = 69, .external_lex_state = 1},
  [141] = {.lex_state = 52, .external_lex_state = 1},
  [142] = {.lex_state = 52, .external_lex_state = 1},
  [143] = {.lex_state = 52, .external_lex_state = 1},
  [144] = {.lex_state = 52, .external_lex_state = 1},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 52, .external_lex_state = 1},
  [147] = {.lex_state = 48, .external_lex_state = 1},
  [148] = {.lex_state = 52, .external_lex_state = 1},
  [149] = {.lex_state = 49, .external_lex_state = 1},
  [150] = {.lex_state = 55, .external_lex_state = 1},
  [151] = {.lex_state = 49, .external_lex_state = 1},
  [152] = {.lex_state = 51, .external_lex_state = 1},
  [153] = {.lex_state = 48, .external_lex_state = 1},
  [154] = {.lex_state = 52, .external_lex_state = 1},
  [155] = {.lex_state = 69, .external_lex_state = 1},
  [156] = {.lex_state = 55, .external_lex_state = 1},
  [157] = {.lex_state = 51, .external_lex_state = 1},
  [158] = {.lex_state = 48, .external_lex_state = 1},
  [159] = {.lex_state = 70, .external_lex_state = 1},
  [160] = {.lex_state = 48, .external_lex_state = 1},
  [161] = {.lex_state = 52, .external_lex_state = 1},
  [162] = {.lex_state = 52, .external_lex_state = 1},
  [163] = {.lex_state = 70, .external_lex_state = 1},
  [164] = {.lex_state = 70, .external_lex_state = 1},
  [165] = {.lex_state = 55, .external_lex_state = 1},
  [166] = {.lex_state = 70, .external_lex_state = 1},
  [167] = {.lex_state = 55, .external_lex_state = 1},
  [168] = {.lex_state = 55, .external_lex_state = 1},
  [169] = {.lex_state = 55, .external_lex_state = 1},
  [170] = {.lex_state = 53, .external_lex_state = 1},
  [171] = {.lex_state = 55, .external_lex_state = 1},
  [172] = {.lex_state = 51, .external_lex_state = 1},
  [173] = {.lex_state = 51, .external_lex_state = 1},
  [174] = {.lex_state = 55, .external_lex_state = 1},
  [175] = {.lex_state = 51, .external_lex_state = 1},
  [176] = {.lex_state = 55, .external_lex_state = 1},
  [177] = {.lex_state = 55, .external_lex_state = 1},
  [178] = {.lex_state = 55, .external_lex_state = 1},
  [179] = {.lex_state = 55, .external_lex_state = 1},
  [180] = {.lex_state = 49, .external_lex_state = 1},
  [181] = {.lex_state = 51, .external_lex_state = 1},
  [182] = {.lex_state = 51, .external_lex_state = 1},
  [183] = {.lex_state = 55, .external_lex_state = 1},
  [184] = {.lex_state = 49, .external_lex_state = 1},
  [185] = {.lex_state = 55, .external_lex_state = 1},
  [186] = {.lex_state = 55, .external_lex_state = 1},
  [187] = {.lex_state = 49, .external_lex_state = 1},
  [188] = {.lex_state = 51, .external_lex_state = 1},
  [189] = {.lex_state = 55, .external_lex_state = 1},
  [190] = {.lex_state = 55, .external_lex_state = 1},
  [191] = {.lex_state = 55, .external_lex_state = 1},
  [192] = {.lex_state = 51, .external_lex_state = 1},
  [193] = {.lex_state = 71, .external_lex_state = 1},
  [194] = {.lex_state = 51, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 51, .external_lex_state = 1},
  [197] = {.lex_state = 55, .external_lex_state = 1},
  [198] = {.lex_state = 55, .external_lex_state = 1},
  [199] = {.lex_state = 55, .external_lex_state = 1},
  [200] = {.lex_state = 55, .external_lex_state = 1},
  [201] = {.lex_state = 55, .external_lex_state = 1},
  [202] = {.lex_state = 55, .external_lex_state = 1},
  [203] = {.lex_state = 55, .external_lex_state = 1},
  [204] = {.lex_state = 55, .external_lex_state = 1},
  [205] = {.lex_state = 71, .external_lex_state = 1},
  [206] = {.lex_state = 51, .external_lex_state = 1},
  [207] = {.lex_state = 55, .external_lex_state = 1},
  [208] = {.lex_state = 55, .external_lex_state = 1},
  [209] = {.lex_state = 71, .external_lex_state = 1},
  [210] = {.lex_state = 55, .external_lex_state = 1},
  [211] = {.lex_state = 55, .external_lex_state = 1},
  [212] = {.lex_state = 55, .external_lex_state = 1},
  [213] = {.lex_state = 71, .external_lex_state = 1},
  [214] = {.lex_state = 51, .external_lex_state = 1},
  [215] = {.lex_state = 51, .external_lex_state = 1},
  [216] = {.lex_state = 55, .external_lex_state = 1},
  [217] = {.lex_state = 71, .external_lex_state = 1},
  [218] = {.lex_state = 53, .external_lex_state = 1},
  [219] = {.lex_state = 55, .external_lex_state = 1},
  [220] = {.lex_state = 55, .external_lex_state = 1},
  [221] = {.lex_state = 55, .external_lex_state = 1},
  [222] = {.lex_state = 71, .external_lex_state = 1},
  [223] = {.lex_state = 55, .external_lex_state = 1},
  [224] = {.lex_state = 55, .external_lex_state = 1},
  [225] = {.lex_state = 55, .external_lex_state = 1},
  [226] = {.lex_state = 55, .external_lex_state = 1},
  [227] = {.lex_state = 55, .external_lex_state = 1},
  [228] = {.lex_state = 53, .external_lex_state = 1},
  [229] = {.lex_state = 53, .external_lex_state = 1},
  [230] = {.lex_state = 55, .external_lex_state = 1},
  [231] = {.lex_state = 51, .external_lex_state = 1},
  [232] = {.lex_state = 71, .external_lex_state = 1},
  [233] = {.lex_state = 71, .external_lex_state = 1},
  [234] = {.lex_state = 55, .external_lex_state = 1},
  [235] = {.lex_state = 51, .external_lex_state = 1},
  [236] = {.lex_state = 51, .external_lex_state = 1},
  [237] = {.lex_state = 51, .external_lex_state = 1},
  [238] = {.lex_state = 55, .external_lex_state = 1},
  [239] = {.lex_state = 51, .external_lex_state = 1},
  [240] = {.lex_state = 55, .external_lex_state = 1},
  [241] = {.lex_state = 55, .external_lex_state = 1},
  [242] = {.lex_state = 51, .external_lex_state = 1},
  [243] = {.lex_state = 51, .external_lex_state = 1},
  [244] = {.lex_state = 55, .external_lex_state = 1},
  [245] = {.lex_state = 55, .external_lex_state = 1},
  [246] = {.lex_state = 51, .external_lex_state = 1},
  [247] = {.lex_state = 71, .external_lex_state = 1},
  [248] = {.lex_state = 41, .external_lex_state = 1},
  [249] = {.lex_state = 48, .external_lex_state = 1},
  [250] = {.lex_state = 55, .external_lex_state = 1},
  [251] = {.lex_state = 48, .external_lex_state = 1},
  [252] = {.lex_state = 55, .external_lex_state = 1},
  [253] = {.lex_state = 55, .external_lex_state = 1},
  [254] = {.lex_state = 55, .external_lex_state = 1},
  [255] = {.lex_state = 52, .external_lex_state = 1},
  [256] = {.lex_state = 41, .external_lex_state = 1},
  [257] = {.lex_state = 55, .external_lex_state = 1},
  [258] = {.lex_state = 54, .external_lex_state = 1},
  [259] = {.lex_state = 55, .external_lex_state = 1},
  [260] = {.lex_state = 51, .external_lex_state = 1},
  [261] = {.lex_state = 41, .external_lex_state = 1},
  [262] = {.lex_state = 55, .external_lex_state = 1},
  [263] = {.lex_state = 51, .external_lex_state = 1},
  [264] = {.lex_state = 48, .external_lex_state = 1},
  [265] = {.lex_state = 51, .external_lex_state = 1},
  [266] = {.lex_state = 52, .external_lex_state = 1},
  [267] = {.lex_state = 55, .external_lex_state = 1},
  [268] = {.lex_state = 52, .external_lex_state = 1},
  [269] = {.lex_state = 48, .external_lex_state = 1},
  [270] = {.lex_state = 41, .external_lex_state = 1},
  [271] = {.lex_state = 55, .external_lex_state = 1},
  [272] = {.lex_state = 48, .external_lex_state = 1},
  [273] = {.lex_state = 41, .external_lex_state = 1},
  [274] = {.lex_state = 51, .external_lex_state = 1},
  [275] = {.lex_state = 55, .external_lex_state = 1},
  [276] = {.lex_state = 55, .external_lex_state = 1},
  [277] = {.lex_state = 41, .external_lex_state = 1},
  [278] = {.lex_state = 55, .external_lex_state = 1},
  [279] = {.lex_state = 55, .external_lex_state = 1},
  [280] = {.lex_state = 41, .external_lex_state = 1},
  [281] = {.lex_state = 41, .external_lex_state = 1},
  [282] = {.lex_state = 48, .external_lex_state = 1},
  [283] = {.lex_state = 55, .external_lex_state = 1},
  [284] = {.lex_state = 44, .external_lex_state = 1},
  [285] = {.lex_state = 44, .external_lex_state = 1},
  [286] = {.lex_state = 44, .external_lex_state = 1},
  [287] = {.lex_state = 44, .external_lex_state = 1},
  [288] = {.lex_state = 44, .external_lex_state = 1},
  [289] = {.lex_state = 44, .external_lex_state = 1},
  [290] = {.lex_state = 44, .external_lex_state = 1},
  [291] = {.lex_state = 44, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 45, .external_lex_state = 1},
  [294] = {.lex_state = 44, .external_lex_state = 1},
  [295] = {.lex_state = 44, .external_lex_state = 1},
  [296] = {.lex_state = 44, .external_lex_state = 1},
  [297] = {.lex_state = 44, .external_lex_state = 1},
  [298] = {.lex_state = 45, .external_lex_state = 1},
  [299] = {.lex_state = 52, .external_lex_state = 1},
  [300] = {.lex_state = 44, .external_lex_state = 1},
  [301] = {.lex_state = 44, .external_lex_state = 1},
  [302] = {.lex_state = 48, .external_lex_state = 1},
  [303] = {.lex_state = 44, .external_lex_state = 1},
  [304] = {.lex_state = 48, .external_lex_state = 1},
  [305] = {.lex_state = 48, .external_lex_state = 1},
  [306] = {.lex_state = 44, .external_lex_state = 1},
  [307] = {.lex_state = 44, .external_lex_state = 1},
  [308] = {.lex_state = 44, .external_lex_state = 1},
  [309] = {.lex_state = 45, .external_lex_state = 1},
  [310] = {.lex_state = 48, .external_lex_state = 1},
  [311] = {.lex_state = 44, .external_lex_state = 1},
  [312] = {.lex_state = 45, .external_lex_state = 1},
  [313] = {.lex_state = 44, .external_lex_state = 1},
  [314] = {.lex_state = 54, .external_lex_state = 1},
  [315] = {.lex_state = 44, .external_lex_state = 1},
  [316] = {.lex_state = 45, .external_lex_state = 1},
  [317] = {.lex_state = 45, .external_lex_state = 1},
  [318] = {.lex_state = 45, .external_lex_state = 1},
  [319] = {.lex_state = 45, .external_lex_state = 1},
  [320] = {.lex_state = 45, .external_lex_state = 1},
  [321] = {.lex_state = 45, .external_lex_state = 1},
  [322] = {.lex_state = 44, .external_lex_state = 1},
  [323] = {.lex_state = 52, .external_lex_state = 1},
  [324] = {.lex_state = 54, .external_lex_state = 1},
  [325] = {.lex_state = 48, .external_lex_state = 1},
  [326] = {.lex_state = 44, .external_lex_state = 1},
  [327] = {.lex_state = 54, .external_lex_state = 1},
  [328] = {.lex_state = 45, .external_lex_state = 1},
  [329] = {.lex_state = 45, .external_lex_state = 1},
  [330] = {.lex_state = 48, .external_lex_state = 1},
  [331] = {.lex_state = 48, .external_lex_state = 1},
  [332] = {.lex_state = 48, .external_lex_state = 1},
  [333] = {.lex_state = 48, .external_lex_state = 1},
  [334] = {.lex_state = 41, .external_lex_state = 1},
  [335] = {.lex_state = 54, .external_lex_state = 1},
  [336] = {.lex_state = 48, .external_lex_state = 1},
  [337] = {.lex_state = 41, .external_lex_state = 1},
  [338] = {.lex_state = 54, .external_lex_state = 1},
  [339] = {.lex_state = 54, .external_lex_state = 1},
  [340] = {.lex_state = 41, .external_lex_state = 1},
  [341] = {.lex_state = 44, .external_lex_state = 1},
  [342] = {.lex_state = 54, .external_lex_state = 1},
  [343] = {.lex_state = 54, .external_lex_state = 1},
  [344] = {.lex_state = 54, .external_lex_state = 1},
  [345] = {.lex_state = 54, .external_lex_state = 1},
  [346] = {.lex_state = 54, .external_lex_state = 1},
  [347] = {.lex_state = 44, .external_lex_state = 1},
  [348] = {.lex_state = 54, .external_lex_state = 1},
  [349] = {.lex_state = 54, .external_lex_state = 1},
  [350] = {.lex_state = 54, .external_lex_state = 1},
  [351] = {.lex_state = 54, .external_lex_state = 1},
  [352] = {.lex_state = 54, .external_lex_state = 1},
  [353] = {.lex_state = 51, .external_lex_state = 1},
  [354] = {.lex_state = 54, .external_lex_state = 1},
  [355] = {.lex_state = 54, .external_lex_state = 1},
  [356] = {.lex_state = 44, .external_lex_state = 1},
  [357] = {.lex_state = 54, .external_lex_state = 1},
  [358] = {.lex_state = 54, .external_lex_state = 1},
  [359] = {.lex_state = 54, .external_lex_state = 1},
  [360] = {.lex_state = 54, .external_lex_state = 1},
  [361] = {.lex_state = 54, .external_lex_state = 1},
  [362] = {.lex_state = 54, .external_lex_state = 1},
  [363] = {.lex_state = 47, .external_lex_state = 1},
  [364] = {.lex_state = 54, .external_lex_state = 1},
  [365] = {.lex_state = 48, .external_lex_state = 1},
  [366] = {.lex_state = 54, .external_lex_state = 1},
  [367] = {.lex_state = 52, .external_lex_state = 1},
  [368] = {.lex_state = 0, .external_lex_state = 1},
  [369] = {.lex_state = 54, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 48, .external_lex_state = 1},
  [372] = {.lex_state = 52, .external_lex_state = 1},
  [373] = {.lex_state = 0, .external_lex_state = 1},
  [374] = {.lex_state = 52, .external_lex_state = 1},
  [375] = {.lex_state = 54, .external_lex_state = 1},
  [376] = {.lex_state = 0, .external_lex_state = 1},
  [377] = {.lex_state = 47, .external_lex_state = 1},
  [378] = {.lex_state = 41, .external_lex_state = 1},
  [379] = {.lex_state = 52, .external_lex_state = 1},
  [380] = {.lex_state = 52, .external_lex_state = 1},
  [381] = {.lex_state = 44, .external_lex_state = 1},
  [382] = {.lex_state = 52, .external_lex_state = 1},
  [383] = {.lex_state = 52, .external_lex_state = 1},
  [384] = {.lex_state = 52, .external_lex_state = 1},
  [385] = {.lex_state = 52, .external_lex_state = 1},
  [386] = {.lex_state = 52, .external_lex_state = 1},
  [387] = {.lex_state = 44, .external_lex_state = 1},
  [388] = {.lex_state = 52, .external_lex_state = 1},
  [389] = {.lex_state = 54, .external_lex_state = 1},
  [390] = {.lex_state = 52, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 50, .external_lex_state = 1},
  [393] = {.lex_state = 48, .external_lex_state = 1},
  [394] = {.lex_state = 41, .external_lex_state = 1},
  [395] = {.lex_state = 52, .external_lex_state = 1},
  [396] = {.lex_state = 49, .external_lex_state = 1},
  [397] = {.lex_state = 0, .external_lex_state = 1},
  [398] = {.lex_state = 0, .external_lex_state = 1},
  [399] = {.lex_state = 49, .external_lex_state = 1},
  [400] = {.lex_state = 0, .external_lex_state = 1},
  [401] = {.lex_state = 50, .external_lex_state = 1},
  [402] = {.lex_state = 0, .external_lex_state = 1},
  [403] = {.lex_state = 41, .external_lex_state = 1},
  [404] = {.lex_state = 50, .external_lex_state = 1},
  [405] = {.lex_state = 50, .external_lex_state = 1},
  [406] = {.lex_state = 48, .external_lex_state = 1},
  [407] = {.lex_state = 50, .external_lex_state = 1},
  [408] = {.lex_state = 41, .external_lex_state = 1},
  [409] = {.lex_state = 41, .external_lex_state = 1},
  [410] = {.lex_state = 49, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 0, .external_lex_state = 1},
  [418] = {.lex_state = 42, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 52, .external_lex_state = 1},
  [422] = {.lex_state = 0, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 0, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 52, .external_lex_state = 1},
  [428] = {.lex_state = 0, .external_lex_state = 1},
  [429] = {.lex_state = 0, .external_lex_state = 1},
  [430] = {.lex_state = 0, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 52, .external_lex_state = 1},
  [433] = {.lex_state = 48, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 0, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 0, .external_lex_state = 1},
  [441] = {.lex_state = 0, .external_lex_state = 1},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 0, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 0, .external_lex_state = 1},
  [448] = {.lex_state = 48, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 0, .external_lex_state = 1},
  [451] = {.lex_state = 0, .external_lex_state = 1},
  [452] = {.lex_state = 48, .external_lex_state = 1},
  [453] = {.lex_state = 48, .external_lex_state = 1},
  [454] = {.lex_state = 52, .external_lex_state = 1},
  [455] = {.lex_state = 0, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 0, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 52, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 0, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 41, .external_lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 52, .external_lex_state = 1},
  [471] = {.lex_state = 52, .external_lex_state = 1},
  [472] = {.lex_state = 48, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 0, .external_lex_state = 1},
  [475] = {.lex_state = 41, .external_lex_state = 1},
  [476] = {.lex_state = 0, .external_lex_state = 1},
  [477] = {.lex_state = 0, .external_lex_state = 1},
  [478] = {.lex_state = 0, .external_lex_state = 1},
  [479] = {.lex_state = 0, .external_lex_state = 1},
  [480] = {.lex_state = 52, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 52, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 0, .external_lex_state = 1},
  [485] = {.lex_state = 0, .external_lex_state = 1},
  [486] = {.lex_state = 48, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 48, .external_lex_state = 1},
  [491] = {.lex_state = 41, .external_lex_state = 1},
  [492] = {.lex_state = 48, .external_lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 1},
  [496] = {.lex_state = 0, .external_lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 1},
  [498] = {.lex_state = 0, .external_lex_state = 1},
  [499] = {.lex_state = 0, .external_lex_state = 1},
  [500] = {.lex_state = 50, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 41, .external_lex_state = 1},
  [503] = {.lex_state = 41, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 47, .external_lex_state = 1},
  [507] = {.lex_state = 42, .external_lex_state = 1},
  [508] = {.lex_state = 48, .external_lex_state = 1},
  [509] = {.lex_state = 48, .external_lex_state = 1},
  [510] = {.lex_state = 48, .external_lex_state = 1},
  [511] = {.lex_state = 41, .external_lex_state = 1},
  [512] = {.lex_state = 0, .external_lex_state = 1},
  [513] = {.lex_state = 48, .external_lex_state = 1},
  [514] = {.lex_state = 41, .external_lex_state = 1},
  [515] = {.lex_state = 0, .external_lex_state = 1},
  [516] = {.lex_state = 731, .external_lex_state = 1},
  [517] = {.lex_state = 0, .external_lex_state = 1},
  [518] = {.lex_state = 42, .external_lex_state = 1},
  [519] = {.lex_state = 52, .external_lex_state = 1},
  [520] = {.lex_state = 0, .external_lex_state = 1},
  [521] = {.lex_state = 41, .external_lex_state = 1},
  [522] = {.lex_state = 0, .external_lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 1},
  [524] = {.lex_state = 0, .external_lex_state = 1},
  [525] = {.lex_state = 0, .external_lex_state = 1},
  [526] = {.lex_state = 0, .external_lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 1},
  [528] = {.lex_state = 42, .external_lex_state = 1},
  [529] = {.lex_state = 41, .external_lex_state = 1},
  [530] = {.lex_state = 41, .external_lex_state = 1},
  [531] = {.lex_state = 41, .external_lex_state = 1},
  [532] = {.lex_state = 0, .external_lex_state = 1},
  [533] = {.lex_state = 42, .external_lex_state = 1},
  [534] = {.lex_state = 41, .external_lex_state = 1},
  [535] = {.lex_state = 0, .external_lex_state = 1},
  [536] = {.lex_state = 48, .external_lex_state = 1},
  [537] = {.lex_state = 41, .external_lex_state = 1},
  [538] = {.lex_state = 41, .external_lex_state = 1},
  [539] = {.lex_state = 41, .external_lex_state = 1},
  [540] = {.lex_state = 0, .external_lex_state = 1},
  [541] = {.lex_state = 41, .external_lex_state = 1},
  [542] = {.lex_state = 41, .external_lex_state = 1},
  [543] = {.lex_state = 0, .external_lex_state = 1},
  [544] = {.lex_state = 41, .external_lex_state = 1},
  [545] = {.lex_state = 0, .external_lex_state = 1},
  [546] = {.lex_state = 0, .external_lex_state = 1},
  [547] = {.lex_state = 41, .external_lex_state = 1},
  [548] = {.lex_state = 48, .external_lex_state = 1},
  [549] = {.lex_state = 0, .external_lex_state = 1},
  [550] = {.lex_state = 47, .external_lex_state = 1},
  [551] = {.lex_state = 0, .external_lex_state = 1},
  [552] = {.lex_state = 49, .external_lex_state = 1},
  [553] = {.lex_state = 731, .external_lex_state = 1},
  [554] = {.lex_state = 0, .external_lex_state = 1},
  [555] = {.lex_state = 0, .external_lex_state = 1},
  [556] = {.lex_state = 41, .external_lex_state = 1},
  [557] = {.lex_state = 52, .external_lex_state = 1},
  [558] = {.lex_state = 0, .external_lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 1},
  [560] = {.lex_state = 0, .external_lex_state = 1},
  [561] = {.lex_state = 0, .external_lex_state = 1},
  [562] = {.lex_state = 41, .external_lex_state = 1},
  [563] = {.lex_state = 42, .external_lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 1},
  [565] = {.lex_state = 52, .external_lex_state = 1},
  [566] = {.lex_state = 0, .external_lex_state = 1},
  [567] = {.lex_state = 0, .external_lex_state = 1},
  [568] = {.lex_state = 0, .external_lex_state = 1},
  [569] = {.lex_state = 0, .external_lex_state = 1},
  [570] = {.lex_state = 0, .external_lex_state = 1},
  [571] = {.lex_state = 0, .external_lex_state = 1},
  [572] = {.lex_state = 0, .external_lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 1},
  [574] = {.lex_state = 52, .external_lex_state = 1},
  [575] = {.lex_state = 0, .external_lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 1},
  [579] = {.lex_state = 0, .external_lex_state = 1},
  [580] = {.lex_state = 0, .external_lex_state = 1},
  [581] = {.lex_state = 0, .external_lex_state = 1},
  [582] = {.lex_state = 42, .external_lex_state = 1},
  [583] = {.lex_state = 0, .external_lex_state = 1},
  [584] = {.lex_state = 0, .external_lex_state = 1},
  [585] = {.lex_state = 52, .external_lex_state = 1},
  [586] = {.lex_state = 0, .external_lex_state = 1},
  [587] = {.lex_state = 47, .external_lex_state = 1},
  [588] = {.lex_state = 0, .external_lex_state = 1},
  [589] = {.lex_state = 0, .external_lex_state = 1},
  [590] = {.lex_state = 0, .external_lex_state = 1},
  [591] = {.lex_state = 0, .external_lex_state = 1},
  [592] = {.lex_state = 52, .external_lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 1},
  [594] = {.lex_state = 0, .external_lex_state = 1},
  [595] = {.lex_state = 0, .external_lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 1},
  [597] = {.lex_state = 0, .external_lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 1},
  [602] = {.lex_state = 52, .external_lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 1},
  [604] = {.lex_state = 0, .external_lex_state = 1},
  [605] = {.lex_state = 0, .external_lex_state = 1},
  [606] = {.lex_state = 52, .external_lex_state = 1},
  [607] = {.lex_state = 0, .external_lex_state = 1},
  [608] = {.lex_state = 731, .external_lex_state = 1},
  [609] = {.lex_state = 0, .external_lex_state = 1},
  [610] = {.lex_state = 0, .external_lex_state = 1},
  [611] = {.lex_state = 0, .external_lex_state = 1},
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
  [622] = {.lex_state = 0, .external_lex_state = 1},
  [623] = {.lex_state = 0, .external_lex_state = 1},
  [624] = {.lex_state = 0, .external_lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 1},
  [628] = {.lex_state = 0, .external_lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 1},
  [631] = {.lex_state = 0, .external_lex_state = 1},
  [632] = {.lex_state = 47, .external_lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 1},
  [634] = {.lex_state = 0, .external_lex_state = 1},
  [635] = {.lex_state = 0, .external_lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 1},
  [637] = {.lex_state = 0, .external_lex_state = 1},
  [638] = {.lex_state = 52, .external_lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 1},
  [640] = {.lex_state = 52, .external_lex_state = 1},
  [641] = {.lex_state = 0, .external_lex_state = 1},
  [642] = {.lex_state = 0, .external_lex_state = 1},
  [643] = {.lex_state = 0, .external_lex_state = 1},
  [644] = {.lex_state = 0, .external_lex_state = 1},
  [645] = {.lex_state = 0, .external_lex_state = 1},
  [646] = {.lex_state = 0, .external_lex_state = 1},
  [647] = {.lex_state = 0, .external_lex_state = 1},
  [648] = {.lex_state = 52, .external_lex_state = 1},
  [649] = {.lex_state = 0, .external_lex_state = 1},
  [650] = {.lex_state = 0, .external_lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 1},
  [652] = {.lex_state = 52, .external_lex_state = 1},
  [653] = {.lex_state = 48, .external_lex_state = 1},
  [654] = {.lex_state = 731, .external_lex_state = 1},
  [655] = {.lex_state = 0, .external_lex_state = 1},
  [656] = {.lex_state = 0, .external_lex_state = 1},
  [657] = {.lex_state = 0, .external_lex_state = 1},
  [658] = {.lex_state = 0, .external_lex_state = 1},
  [659] = {.lex_state = 0, .external_lex_state = 1},
  [660] = {.lex_state = 0, .external_lex_state = 1},
  [661] = {.lex_state = 0, .external_lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 1},
  [663] = {.lex_state = 0, .external_lex_state = 1},
  [664] = {.lex_state = 41, .external_lex_state = 1},
  [665] = {.lex_state = 0, .external_lex_state = 1},
  [666] = {.lex_state = 0, .external_lex_state = 1},
  [667] = {.lex_state = 0, .external_lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 1},
  [669] = {.lex_state = 0, .external_lex_state = 1},
  [670] = {.lex_state = 42, .external_lex_state = 1},
  [671] = {.lex_state = 52, .external_lex_state = 1},
  [672] = {.lex_state = 52, .external_lex_state = 1},
  [673] = {.lex_state = 52, .external_lex_state = 1},
  [674] = {.lex_state = 0, .external_lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 1},
  [677] = {.lex_state = 0, .external_lex_state = 1},
  [678] = {.lex_state = 41, .external_lex_state = 1},
  [679] = {.lex_state = 0, .external_lex_state = 1},
  [680] = {.lex_state = 0, .external_lex_state = 1},
  [681] = {.lex_state = 0, .external_lex_state = 1},
  [682] = {.lex_state = 52, .external_lex_state = 1},
  [683] = {.lex_state = 0, .external_lex_state = 1},
  [684] = {.lex_state = 0, .external_lex_state = 1},
  [685] = {.lex_state = 41, .external_lex_state = 1},
  [686] = {.lex_state = 52, .external_lex_state = 1},
  [687] = {.lex_state = 0, .external_lex_state = 1},
  [688] = {.lex_state = 0, .external_lex_state = 1},
  [689] = {.lex_state = 41, .external_lex_state = 1},
  [690] = {.lex_state = 0, .external_lex_state = 1},
  [691] = {.lex_state = 41, .external_lex_state = 1},
  [692] = {.lex_state = 52, .external_lex_state = 1},
  [693] = {.lex_state = 0, .external_lex_state = 1},
  [694] = {.lex_state = 52, .external_lex_state = 1},
  [695] = {.lex_state = 41, .external_lex_state = 1},
  [696] = {.lex_state = 0, .external_lex_state = 1},
  [697] = {.lex_state = 0, .external_lex_state = 1},
  [698] = {.lex_state = 41, .external_lex_state = 1},
  [699] = {.lex_state = 841, .external_lex_state = 1},
  [700] = {.lex_state = 41, .external_lex_state = 1},
  [701] = {.lex_state = 0, .external_lex_state = 1},
  [702] = {.lex_state = 41, .external_lex_state = 1},
  [703] = {.lex_state = 52, .external_lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 1},
  [705] = {.lex_state = 0, .external_lex_state = 1},
  [706] = {.lex_state = 0, .external_lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 1},
  [709] = {.lex_state = 0, .external_lex_state = 1},
  [710] = {.lex_state = 0, .external_lex_state = 1},
  [711] = {.lex_state = 0, .external_lex_state = 1},
  [712] = {.lex_state = 0, .external_lex_state = 1},
  [713] = {.lex_state = 41, .external_lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 1},
  [716] = {.lex_state = 0, .external_lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 1},
  [718] = {.lex_state = 0, .external_lex_state = 1},
  [719] = {.lex_state = 0, .external_lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 1},
  [721] = {.lex_state = 0, .external_lex_state = 1},
  [722] = {.lex_state = 0, .external_lex_state = 1},
  [723] = {.lex_state = 52, .external_lex_state = 1},
  [724] = {.lex_state = 0, .external_lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 1},
  [726] = {.lex_state = 0, .external_lex_state = 1},
  [727] = {.lex_state = 0, .external_lex_state = 1},
  [728] = {.lex_state = 41, .external_lex_state = 1},
  [729] = {.lex_state = 0, .external_lex_state = 1},
  [730] = {.lex_state = 0, .external_lex_state = 1},
  [731] = {.lex_state = 52, .external_lex_state = 1},
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
    [sym_source_file] = STATE(725),
    [sym_security_protocol_theory] = STATE(718),
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(465), 1,
      sym_formula,
    STATE(518), 1,
      sym_node_var,
    STATE(526), 1,
      sym_fact,
    STATE(563), 1,
      sym__msetterm,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(709), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(465), 1,
      sym_formula,
    STATE(518), 1,
      sym_node_var,
    STATE(526), 1,
      sym_fact,
    STATE(563), 1,
      sym__msetterm,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(625), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(551), 1,
      sym_formula,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(572), 1,
      sym_formula,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(613), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(192), 1,
      sym_negation,
    STATE(194), 1,
      sym_conjunction,
    STATE(196), 1,
      sym_atom,
    STATE(214), 1,
      sym_formula,
    STATE(242), 1,
      sym_disjunction,
    STATE(243), 1,
      sym_imp,
    STATE(299), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(611), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(676), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(621), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(581), 1,
      sym_formula,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(418), 1,
      sym_node_var,
    STATE(507), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(377), 1,
      sym_imp,
    STATE(507), 1,
      sym__msetterm,
    STATE(518), 1,
      sym_node_var,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(192), 1,
      sym_negation,
    STATE(194), 1,
      sym_conjunction,
    STATE(196), 1,
      sym_atom,
    STATE(214), 1,
      sym_formula,
    STATE(215), 1,
      sym_imp,
    STATE(242), 1,
      sym_disjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1533] = 34,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(236), 1,
      sym_imp,
    STATE(274), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(353), 1,
      sym_disjunction,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(235), 1,
      sym_imp,
    STATE(242), 1,
      sym_disjunction,
    STATE(248), 1,
      sym_conjunction,
    STATE(280), 1,
      sym_negation,
    STATE(323), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(235), 1,
      sym_imp,
    STATE(277), 1,
      sym_negation,
    STATE(323), 1,
      sym_quantifier,
    STATE(334), 1,
      sym_conjunction,
    STATE(378), 1,
      sym_disjunction,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1875] = 34,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(236), 1,
      sym_imp,
    STATE(277), 1,
      sym_negation,
    STATE(323), 1,
      sym_quantifier,
    STATE(334), 1,
      sym_conjunction,
    STATE(378), 1,
      sym_disjunction,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1989] = 32,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(237), 1,
      sym_conjunction,
    STATE(280), 1,
      sym_negation,
    STATE(323), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2097] = 32,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(192), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(237), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(182), 1,
      sym_negation,
    STATE(196), 1,
      sym_atom,
    STATE(237), 1,
      sym_conjunction,
    STATE(299), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(237), 1,
      sym_conjunction,
    STATE(277), 1,
      sym_negation,
    STATE(323), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2421] = 31,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(239), 1,
      sym_negation,
    STATE(299), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2526] = 31,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_atom,
    STATE(239), 1,
      sym_negation,
    STATE(323), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(246), 1,
      sym_atom,
    STATE(323), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
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
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(246), 1,
      sym_atom,
    STATE(299), 1,
      sym_quantifier,
    STATE(518), 1,
      sym_node_var,
    STATE(563), 1,
      sym__msetterm,
    STATE(586), 1,
      sym_fact,
    STATE(588), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2823] = 8,
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(65), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
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
    ACTIONS(49), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(65), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
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
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(65), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(60), 7,
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
  [2955] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(68), 2,
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
  [2992] = 7,
    ACTIONS(74), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(64), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(70), 12,
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
  [3033] = 8,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    ACTIONS(84), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(87), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(80), 12,
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
  [3076] = 5,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(90), 20,
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
  [3113] = 5,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(96), 20,
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
  [3150] = 5,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(96), 20,
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
  [3187] = 8,
    ACTIONS(102), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(41), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(104), 7,
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
  [3230] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(40), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(74), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(108), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(106), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3269] = 5,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
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
  [3306] = 8,
    ACTIONS(102), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(41), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(104), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(116), 11,
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
  [3349] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(40), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(74), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(120), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(118), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3388] = 8,
    ACTIONS(126), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(41), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(129), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(55), 11,
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
  [3431] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(96), 19,
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
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(68), 2,
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
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(90), 19,
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
  [3539] = 14,
    ACTIONS(137), 1,
      anon_sym_end,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_functions,
    ACTIONS(143), 1,
      anon_sym_equations,
    ACTIONS(145), 1,
      anon_sym_builtins,
    ACTIONS(147), 1,
      anon_sym_heuristic,
    ACTIONS(149), 1,
      anon_sym_tactic,
    ACTIONS(151), 1,
      anon_sym_rule,
    ACTIONS(153), 1,
      anon_sym_restriction,
    ACTIONS(155), 1,
      anon_sym_lemma,
    STATE(193), 1,
      sym_simple_rule,
    STATE(701), 1,
      sym_body,
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
  [3593] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(96), 19,
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
  [3629] = 5,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    STATE(51), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(157), 20,
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
  [3665] = 5,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
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
  [3701] = 8,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    STATE(75), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(80), 11,
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
  [3743] = 5,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(169), 20,
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
  [3779] = 5,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(176), 20,
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
  [3815] = 7,
    ACTIONS(180), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(72), 1,
      sym_not_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(183), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(70), 11,
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
  [3855] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(186), 20,
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
  [3887] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(190), 20,
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
  [3919] = 5,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(194), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(176), 19,
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
  [3954] = 4,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 20,
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
  [3987] = 5,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(194), 1,
      anon_sym_AMP,
    STATE(55), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(157), 19,
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
  [4022] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(190), 19,
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
  [4053] = 5,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(169), 19,
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
  [4088] = 13,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_functions,
    ACTIONS(143), 1,
      anon_sym_equations,
    ACTIONS(145), 1,
      anon_sym_builtins,
    ACTIONS(147), 1,
      anon_sym_heuristic,
    ACTIONS(149), 1,
      anon_sym_tactic,
    ACTIONS(151), 1,
      anon_sym_rule,
    ACTIONS(153), 1,
      anon_sym_restriction,
    ACTIONS(155), 1,
      anon_sym_lemma,
    ACTIONS(204), 1,
      anon_sym_end,
    STATE(193), 1,
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
  [4139] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(186), 19,
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
  [4170] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(206), 20,
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
  [4201] = 13,
    ACTIONS(210), 1,
      anon_sym_end,
    ACTIONS(212), 1,
      sym_ident,
    ACTIONS(215), 1,
      anon_sym_functions,
    ACTIONS(218), 1,
      anon_sym_equations,
    ACTIONS(221), 1,
      anon_sym_builtins,
    ACTIONS(224), 1,
      anon_sym_heuristic,
    ACTIONS(227), 1,
      anon_sym_tactic,
    ACTIONS(230), 1,
      anon_sym_rule,
    ACTIONS(233), 1,
      anon_sym_restriction,
    ACTIONS(236), 1,
      anon_sym_lemma,
    STATE(193), 1,
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
  [4252] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(169), 20,
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
  [4283] = 4,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    STATE(67), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(239), 20,
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
  [4316] = 6,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(245), 18,
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
    ACTIONS(241), 1,
      anon_sym_PIPE,
    STATE(56), 1,
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
  [4386] = 3,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 20,
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
  [4416] = 4,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    STATE(73), 1,
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
  [4448] = 5,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_EQ,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 18,
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
  [4482] = 4,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(239), 19,
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
  [4514] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(169), 19,
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
  [4544] = 4,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_function_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 19,
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
  [4603] = 3,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(196), 19,
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
  [4632] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(272), 20,
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
  [4659] = 5,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      anon_sym_CARET,
    STATE(78), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 17,
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
  [4692] = 5,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(78), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 17,
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
  [4725] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(287), 20,
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
  [4752] = 4,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(289), 18,
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
  [4783] = 5,
    ACTIONS(278), 1,
      anon_sym_CARET,
    ACTIONS(297), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(295), 17,
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
  [4844] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(442), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4898] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(309), 17,
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
  [4926] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(313), 17,
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
  [4954] = 8,
    ACTIONS(319), 1,
      anon_sym_SOLVED,
    ACTIONS(321), 1,
      anon_sym_by,
    ACTIONS(325), 1,
      anon_sym_solve,
    STATE(249), 1,
      sym_proof_method,
    STATE(262), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
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
  [4992] = 3,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 18,
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
  [5020] = 8,
    ACTIONS(319), 1,
      anon_sym_SOLVED,
    ACTIONS(321), 1,
      anon_sym_by,
    ACTIONS(325), 1,
      anon_sym_solve,
    STATE(249), 1,
      sym_proof_method,
    STATE(278), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
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
  [5058] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(478), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5112] = 8,
    ACTIONS(319), 1,
      anon_sym_SOLVED,
    ACTIONS(321), 1,
      anon_sym_by,
    ACTIONS(325), 1,
      anon_sym_solve,
    STATE(249), 1,
      sym_proof_method,
    STATE(271), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(335), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5150] = 3,
    ACTIONS(339), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(337), 18,
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
  [5178] = 3,
    ACTIONS(343), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(341), 18,
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
  [5206] = 5,
    ACTIONS(347), 1,
      anon_sym_EQ,
    ACTIONS(349), 1,
      anon_sym_STAR,
    STATE(107), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(345), 16,
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
  [5238] = 3,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(351), 18,
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
  [5266] = 3,
    ACTIONS(357), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(355), 18,
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
  [5294] = 3,
    ACTIONS(361), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(359), 18,
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
  [5322] = 3,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(363), 18,
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
  [5350] = 8,
    ACTIONS(319), 1,
      anon_sym_SOLVED,
    ACTIONS(321), 1,
      anon_sym_by,
    ACTIONS(325), 1,
      anon_sym_solve,
    STATE(249), 1,
      sym_proof_method,
    STATE(250), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(367), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5388] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5442] = 3,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(371), 18,
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
  [5470] = 3,
    ACTIONS(377), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(375), 18,
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
  [5498] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(379), 17,
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
  [5526] = 3,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(383), 18,
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
  [5554] = 5,
    ACTIONS(389), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_STAR,
    STATE(104), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(387), 16,
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
  [5586] = 3,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 18,
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
  [5614] = 3,
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
  [5642] = 5,
    ACTIONS(349), 1,
      anon_sym_STAR,
    ACTIONS(400), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(398), 16,
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
  [5674] = 3,
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
  [5702] = 3,
    ACTIONS(263), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 18,
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
  [5730] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5784] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(497), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5838] = 5,
    ACTIONS(410), 1,
      anon_sym_EQ,
    STATE(112), 1,
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
  [5869] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(231), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5920] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(444), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5971] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(612), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6022] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6073] = 15,
    ACTIONS(415), 1,
      sym_ident,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_TILDE,
    STATE(339), 1,
      sym_term,
    STATE(346), 1,
      sym_msg_var,
    STATE(358), 1,
      sym_nonnode_var,
    STATE(360), 1,
      sym__expterm,
    STATE(369), 1,
      sym__multterm,
    STATE(401), 1,
      sym__xorterm,
    STATE(500), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(351), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6124] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(445), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6175] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6226] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(641), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6277] = 5,
    ACTIONS(429), 1,
      anon_sym_EQ,
    STATE(122), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(427), 14,
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
  [6308] = 5,
    ACTIONS(435), 1,
      anon_sym_EQ,
    STATE(112), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(431), 2,
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
  [6339] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(438), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6390] = 3,
    ACTIONS(389), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(387), 17,
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
  [6417] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(494), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
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
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(138), 1,
      sym__xorterm,
    STATE(496), 1,
      sym__msetterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
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
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
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
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6570] = 3,
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
  [6596] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(121), 1,
      sym__multterm,
    STATE(128), 1,
      sym__xorterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6644] = 3,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(408), 16,
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
    ACTIONS(415), 1,
      sym_ident,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_TILDE,
    STATE(128), 1,
      sym__xorterm,
    STATE(339), 1,
      sym_term,
    STATE(346), 1,
      sym_msg_var,
    STATE(358), 1,
      sym_nonnode_var,
    STATE(360), 1,
      sym__expterm,
    STATE(369), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(351), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6718] = 5,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    STATE(133), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(441), 13,
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
  [6747] = 5,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(447), 1,
      anon_sym_PLUS,
    STATE(133), 1,
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
  [6776] = 6,
    ACTIONS(452), 1,
      anon_sym_prio,
    ACTIONS(454), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(155), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(164), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(450), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6807] = 13,
    ACTIONS(415), 1,
      sym_ident,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_TILDE,
    STATE(339), 1,
      sym_term,
    STATE(346), 1,
      sym_msg_var,
    STATE(358), 1,
      sym_nonnode_var,
    STATE(360), 1,
      sym__expterm,
    STATE(389), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(351), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6852] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(461), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(136), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(180), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(458), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6883] = 6,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(468), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(136), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(180), 2,
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
  [6914] = 5,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    ACTIONS(472), 1,
      anon_sym_EQ,
    STATE(132), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(470), 13,
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
  [6943] = 13,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(93), 1,
      sym__expterm,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(130), 1,
      sym__multterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6988] = 6,
    ACTIONS(452), 1,
      anon_sym_prio,
    ACTIONS(454), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(155), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(166), 2,
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
  [7019] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(211), 1,
      sym_equation,
    STATE(670), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7061] = 12,
    ACTIONS(415), 1,
      sym_ident,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_TILDE,
    STATE(339), 1,
      sym_term,
    STATE(346), 1,
      sym_msg_var,
    STATE(358), 1,
      sym_nonnode_var,
    STATE(375), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(351), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7103] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(189), 1,
      sym_equation,
    STATE(670), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7145] = 12,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_term,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(124), 1,
      sym__expterm,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7187] = 4,
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
  [7213] = 11,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_msg_var,
    STATE(97), 1,
      sym_nonnode_var,
    STATE(105), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(96), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7252] = 8,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(39), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(486), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7285] = 11,
    ACTIONS(415), 1,
      sym_ident,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_TILDE,
    STATE(346), 1,
      sym_msg_var,
    STATE(355), 1,
      sym_term,
    STATE(358), 1,
      sym_nonnode_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(351), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7324] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(137), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(180), 2,
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
  [7351] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_COLON,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(247), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7380] = 5,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(37), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(74), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(494), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7407] = 4,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(500), 12,
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
  [7432] = 8,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(65), 1,
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
  [7465] = 11,
    ACTIONS(510), 1,
      sym_ident,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LT,
    ACTIONS(518), 1,
      anon_sym_DOLLAR,
    ACTIONS(520), 1,
      anon_sym_TILDE,
    STATE(198), 1,
      sym_nonnode_var,
    STATE(204), 1,
      sym_msg_var,
    STATE(216), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(199), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7504] = 4,
    ACTIONS(524), 1,
      anon_sym_prio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(155), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(522), 11,
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
  [7529] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(208), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7551] = 3,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(379), 12,
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
  [7573] = 7,
    ACTIONS(484), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_function_name,
    STATE(57), 1,
      sym_not_function,
    STATE(71), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(36), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(486), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7603] = 4,
    ACTIONS(531), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(159), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(529), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7627] = 7,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_function_name,
    STATE(47), 1,
      sym_not_function,
    STATE(65), 1,
      sym_and_function,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(28), 2,
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
  [7657] = 4,
    STATE(162), 1,
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
  [7681] = 4,
    STATE(162), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(538), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(540), 10,
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
  [7705] = 4,
    ACTIONS(454), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(159), 2,
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
  [7729] = 4,
    ACTIONS(454), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(159), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(543), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7753] = 5,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(263), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7779] = 4,
    ACTIONS(454), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(159), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(450), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7803] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
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
  [7824] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
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
  [7847] = 4,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(557), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7870] = 6,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(245), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7897] = 4,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(291), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7920] = 3,
    STATE(188), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(571), 11,
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
  [7941] = 3,
    STATE(181), 1,
      aux_sym_disjunction_repeat1,
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
  [7962] = 4,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_variants_repeat1,
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
  [7985] = 4,
    STATE(188), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(571), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8008] = 4,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_functions_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(582), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8031] = 4,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(587), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8054] = 4,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(592), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8077] = 4,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(596), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8100] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(600), 12,
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
  [8119] = 4,
    STATE(181), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(602), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [8142] = 4,
    STATE(175), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(607), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8165] = 4,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_variants_repeat1,
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
  [8188] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 12,
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
  [8207] = 4,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_equations_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(615), 10,
      anon_sym_end,
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
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(178), 1,
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
  [8253] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(622), 12,
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
  [8272] = 4,
    STATE(188), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(624), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8295] = 4,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(179), 1,
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
  [8318] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_functions_repeat1,
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
  [8341] = 4,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_variants_repeat1,
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
  [8364] = 3,
    STATE(172), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(607), 11,
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
  [8385] = 4,
    ACTIONS(637), 1,
      anon_sym_variants,
    STATE(252), 1,
      sym_variants,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(635), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8408] = 3,
    STATE(173), 1,
      aux_sym_disjunction_repeat1,
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
  [8429] = 4,
    STATE(161), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(432), 1,
      sym_natural_subscr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(641), 10,
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
  [8452] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(643), 11,
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
  [8470] = 3,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(582), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8490] = 3,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(365), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8510] = 3,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(361), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8530] = 3,
    ACTIONS(647), 1,
      anon_sym_COMMA,
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
  [8550] = 3,
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
  [8570] = 3,
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
  [8590] = 3,
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
  [8610] = 3,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(357), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8630] = 2,
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
  [8648] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(663), 11,
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
  [8666] = 3,
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
  [8686] = 3,
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
  [8706] = 2,
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
  [8724] = 3,
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
  [8744] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(615), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8764] = 3,
    ACTIONS(681), 1,
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
  [8784] = 2,
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
  [8802] = 2,
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
  [8820] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(687), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8840] = 3,
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
  [8860] = 2,
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
  [8878] = 5,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(402), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(341), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8902] = 3,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(587), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8922] = 3,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(353), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8942] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(377), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8962] = 2,
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
  [8980] = 3,
    ACTIONS(701), 1,
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
  [9000] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9020] = 3,
    ACTIONS(703), 1,
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
  [9040] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
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
  [9060] = 3,
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
  [9080] = 5,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(397), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(371), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9104] = 5,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(707), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(261), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9128] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9148] = 2,
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
  [9166] = 2,
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
  [9184] = 2,
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
  [9202] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(263), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9222] = 2,
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
  [9240] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(713), 11,
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
  [9258] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(602), 11,
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
  [9276] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(373), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9296] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(624), 11,
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
  [9314] = 3,
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
  [9334] = 3,
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
  [9354] = 2,
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
  [9372] = 2,
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
  [9390] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(385), 10,
      anon_sym_end,
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
  [9430] = 2,
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
  [9448] = 2,
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
  [9466] = 3,
    STATE(281), 1,
      aux_sym_disjunction_repeat1,
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
  [9485] = 8,
    ACTIONS(723), 1,
      anon_sym_SOLVED,
    ACTIONS(725), 1,
      anon_sym_by,
    ACTIONS(727), 1,
      anon_sym_case,
    ACTIONS(731), 1,
      anon_sym_solve,
    STATE(249), 1,
      sym_proof_method,
    STATE(276), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9514] = 2,
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
  [9531] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(733), 10,
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
  [9548] = 2,
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
  [9565] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(737), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9582] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(739), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9599] = 8,
    ACTIONS(741), 1,
      sym_ident,
    ACTIONS(744), 1,
      anon_sym_DOT,
    ACTIONS(746), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(255), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(384), 2,
      sym_node_var,
      sym_nonnode_var,
  [9628] = 4,
    STATE(261), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(571), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9649] = 2,
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
  [9666] = 6,
    ACTIONS(756), 1,
      anon_sym_COLON,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(247), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(245), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9691] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(762), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9708] = 4,
    STATE(260), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(764), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(602), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9729] = 4,
    STATE(261), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(624), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9750] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(770), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9767] = 4,
    STATE(260), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(573), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9788] = 3,
    STATE(186), 1,
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
  [9807] = 3,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(709), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9826] = 8,
    ACTIONS(778), 1,
      sym_ident,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(782), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(255), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(384), 2,
      sym_node_var,
      sym_nonnode_var,
  [9855] = 2,
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
  [9872] = 8,
    ACTIONS(778), 1,
      sym_ident,
    ACTIONS(782), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      anon_sym_DOT,
    STATE(386), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(255), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(384), 2,
      sym_node_var,
      sym_nonnode_var,
  [9901] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(790), 10,
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
  [9918] = 3,
    STATE(261), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(571), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9937] = 2,
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
  [9954] = 8,
    ACTIONS(731), 1,
      anon_sym_solve,
    ACTIONS(792), 1,
      anon_sym_SOLVED,
    ACTIONS(794), 1,
      anon_sym_by,
    ACTIONS(796), 1,
      anon_sym_case,
    STATE(272), 1,
      sym_proof_method,
    STATE(501), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9983] = 4,
    STATE(273), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(798), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(602), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [10004] = 4,
    STATE(263), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(639), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10025] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(801), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10042] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(803), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10059] = 4,
    STATE(256), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(607), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [10080] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(335), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10097] = 2,
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
  [10114] = 3,
    STATE(270), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(607), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [10133] = 3,
    STATE(273), 1,
      aux_sym_disjunction_repeat1,
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
  [10152] = 3,
    STATE(219), 1,
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
  [10171] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(807), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [10188] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(627), 1,
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
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10244] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(622), 1,
      sym_facts,
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
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10300] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10328] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10356] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10384] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(617), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10412] = 3,
    STATE(506), 1,
      sym_standard_goal_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(827), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [10430] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(833), 1,
      anon_sym_BANG,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    STATE(689), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10458] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10486] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(600), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10514] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10542] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(635), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10570] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
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
  [10598] = 7,
    ACTIONS(778), 1,
      sym_ident,
    ACTIONS(782), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(268), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(384), 2,
      sym_node_var,
      sym_nonnode_var,
  [10624] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10652] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10680] = 7,
    ACTIONS(731), 1,
      anon_sym_solve,
    ACTIONS(792), 1,
      anon_sym_SOLVED,
    ACTIONS(794), 1,
      anon_sym_by,
    STATE(272), 1,
      sym_proof_method,
    STATE(525), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10706] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10734] = 6,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(855), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(857), 1,
      anon_sym_heuristic_EQ,
    STATE(512), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(851), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10758] = 7,
    ACTIONS(731), 1,
      anon_sym_solve,
    ACTIONS(792), 1,
      anon_sym_SOLVED,
    ACTIONS(794), 1,
      anon_sym_by,
    STATE(272), 1,
      sym_proof_method,
    STATE(423), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10784] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(637), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10812] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10840] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [10868] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(865), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
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
  [10896] = 6,
    ACTIONS(855), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(857), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(851), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10920] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(571), 1,
      sym_facts,
    STATE(588), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [10948] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(871), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(562), 1,
      sym_facts,
    STATE(655), 1,
      sym_builtin_facts,
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
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(603), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11004] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(208), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(206), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11022] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
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
  [11050] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(877), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    STATE(664), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11078] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(879), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    STATE(700), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11106] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(881), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    STATE(698), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11134] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(883), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    STATE(695), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11162] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(885), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
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
  [11190] = 8,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(887), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(491), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    STATE(685), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11218] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    STATE(642), 1,
      sym_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11246] = 7,
    ACTIONS(778), 1,
      sym_ident,
    ACTIONS(782), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(266), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(384), 2,
      sym_node_var,
      sym_nonnode_var,
  [11272] = 5,
    ACTIONS(891), 1,
      anon_sym_COLON,
    ACTIONS(893), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(263), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(261), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11294] = 7,
    ACTIONS(731), 1,
      anon_sym_solve,
    ACTIONS(792), 1,
      anon_sym_SOLVED,
    ACTIONS(794), 1,
      anon_sym_by,
    STATE(272), 1,
      sym_proof_method,
    STATE(455), 1,
      sym_proof_skeleton,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [11320] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11345] = 4,
    ACTIONS(897), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(291), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(289), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11364] = 7,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(899), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(521), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11389] = 7,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    ACTIONS(895), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(521), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11414] = 5,
    ACTIONS(855), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(857), 1,
      anon_sym_heuristic_EQ,
    STATE(430), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(851), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11435] = 3,
    STATE(46), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(486), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [11452] = 3,
    STATE(34), 1,
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
  [11469] = 5,
    ACTIONS(855), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(857), 1,
      anon_sym_heuristic_EQ,
    STATE(512), 1,
      sym_lemma_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(851), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [11490] = 4,
    STATE(337), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(639), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11509] = 5,
    ACTIONS(903), 1,
      anon_sym_CARET,
    STATE(335), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(282), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11530] = 7,
    ACTIONS(906), 1,
      anon_sym_presort,
    ACTIONS(908), 1,
      anon_sym_prio,
    ACTIONS(910), 1,
      anon_sym_deprio,
    STATE(363), 1,
      sym_presort,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(140), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(163), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [11555] = 4,
    STATE(340), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(573), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11574] = 5,
    ACTIONS(912), 1,
      anon_sym_CARET,
    STATE(335), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(276), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11595] = 5,
    ACTIONS(912), 1,
      anon_sym_CARET,
    STATE(338), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(297), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11616] = 4,
    STATE(340), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(914), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(602), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [11635] = 7,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11660] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(339), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(337), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11676] = 5,
    ACTIONS(917), 1,
      anon_sym_STAR,
    STATE(350), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(400), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11696] = 3,
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
  [11712] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(343), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(341), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11728] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(357), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(355), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11744] = 6,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(833), 1,
      anon_sym_BANG,
    STATE(521), 1,
      sym_fact,
    STATE(655), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11766] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(385), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(383), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11782] = 3,
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
  [11798] = 5,
    ACTIONS(919), 1,
      anon_sym_STAR,
    STATE(350), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(389), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11818] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(361), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(359), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11834] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(377), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(375), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11850] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(922), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(719), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [11866] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(353), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(351), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11882] = 3,
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
  [11898] = 6,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      sym_ident,
    STATE(522), 1,
      sym_fact,
    STATE(588), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [11920] = 3,
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
  [11936] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(365), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(363), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11952] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(329), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(327), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [11968] = 5,
    ACTIONS(917), 1,
      anon_sym_STAR,
    STATE(343), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(347), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [11988] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(263), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(261), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12004] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(373), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(371), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [12020] = 5,
    ACTIONS(908), 1,
      anon_sym_prio,
    ACTIONS(910), 1,
      anon_sym_deprio,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(134), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(166), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [12039] = 6,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(924), 1,
      anon_sym_XOR,
    ACTIONS(926), 1,
      anon_sym_13,
    STATE(366), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(435), 2,
      sym_ident,
      anon_sym_in,
  [12060] = 4,
    ACTIONS(930), 1,
      anon_sym_solve,
    STATE(276), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(928), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12077] = 6,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      anon_sym_XOR,
    ACTIONS(935), 1,
      anon_sym_13,
    STATE(366), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(410), 2,
      sym_ident,
      anon_sym_in,
  [12098] = 3,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(245), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12113] = 4,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(412), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12130] = 6,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    ACTIONS(924), 1,
      anon_sym_XOR,
    ACTIONS(926), 1,
      anon_sym_13,
    STATE(364), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(429), 2,
      sym_ident,
      anon_sym_in,
  [12151] = 4,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(414), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(942), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12168] = 4,
    ACTIONS(731), 1,
      anon_sym_solve,
    STATE(501), 1,
      sym_proof_method,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [12185] = 3,
    ACTIONS(944), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12200] = 4,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(397), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12217] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(206), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12230] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(389), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12245] = 4,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(402), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(697), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12262] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(946), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(687), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [12276] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(948), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(719), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [12290] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(327), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12302] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(337), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12314] = 4,
    ACTIONS(950), 1,
      sym_ident,
    STATE(658), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12330] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(351), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12342] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(261), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12354] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(952), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12366] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(299), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12378] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(355), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12390] = 4,
    ACTIONS(954), 1,
      sym_ident,
    STATE(597), 1,
      sym_builtin_facts,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_In,
      anon_sym_Out,
      anon_sym_Fr,
  [12406] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(289), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12418] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(410), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [12432] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(476), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12444] = 4,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    STATE(616), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12459] = 4,
    ACTIONS(960), 1,
      anon_sym_PLUS,
    STATE(392), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(437), 2,
      sym_ident,
      anon_sym_in,
  [12474] = 4,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    STATE(504), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12489] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(529), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12504] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(969), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [12515] = 3,
    STATE(425), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(971), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12528] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(697), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12539] = 4,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12554] = 3,
    STATE(558), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(971), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12567] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(978), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12578] = 4,
    ACTIONS(980), 1,
      anon_sym_PLUS,
    STATE(407), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(472), 2,
      sym_ident,
      anon_sym_in,
  [12593] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12604] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(534), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12619] = 5,
    ACTIONS(982), 1,
      sym_ident,
    ACTIONS(984), 1,
      anon_sym_in,
    STATE(405), 1,
      aux_sym_let_block_repeat1,
    STATE(582), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12636] = 5,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(989), 1,
      anon_sym_in,
    STATE(405), 1,
      aux_sym_let_block_repeat1,
    STATE(582), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12653] = 4,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    STATE(504), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12668] = 4,
    ACTIONS(980), 1,
      anon_sym_PLUS,
    STATE(392), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(443), 2,
      sym_ident,
      anon_sym_in,
  [12683] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(538), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12698] = 4,
    ACTIONS(967), 1,
      anon_sym_LBRACK,
    STATE(542), 1,
      sym_fact_annotes,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12713] = 3,
    STATE(463), 1,
      sym_fact_annote,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(971), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [12726] = 4,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    STATE(576), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12741] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(995), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12752] = 4,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    STATE(570), 1,
      sym_trace_quantifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [12767] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12778] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(999), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [12789] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12803] = 4,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12817] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [12829] = 4,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    ACTIONS(1013), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12843] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12857] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      sym_ident,
    STATE(265), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12871] = 4,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(1021), 1,
      anon_sym_2,
    STATE(436), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12885] = 4,
    ACTIONS(1023), 1,
      anon_sym_next,
    ACTIONS(1025), 1,
      anon_sym_qed,
    STATE(439), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12899] = 4,
    ACTIONS(1027), 1,
      anon_sym_LBRACK,
    ACTIONS(1029), 1,
      anon_sym_let,
    STATE(566), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12913] = 4,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
    STATE(484), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12927] = 4,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12941] = 4,
    ACTIONS(1040), 1,
      sym_ident,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    STATE(731), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12955] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12969] = 4,
    ACTIONS(1029), 1,
      anon_sym_let,
    ACTIONS(1046), 1,
      anon_sym_LBRACK,
    STATE(589), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12983] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RBRACK,
    STATE(469), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [12997] = 4,
    ACTIONS(1052), 1,
      anon_sym_COLON,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    STATE(729), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13011] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      sym_ident,
    STATE(644), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13025] = 3,
    STATE(419), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13037] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    ACTIONS(1056), 1,
      anon_sym_COLON,
    STATE(727), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13051] = 4,
    ACTIONS(1029), 1,
      anon_sym_let,
    ACTIONS(1058), 1,
      anon_sym_LBRACK,
    STATE(724), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13065] = 4,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(1062), 1,
      anon_sym_2,
    STATE(436), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13079] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    STATE(583), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13093] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13107] = 4,
    ACTIONS(1023), 1,
      anon_sym_next,
    ACTIONS(1069), 1,
      anon_sym_qed,
    STATE(449), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13121] = 4,
    ACTIONS(1029), 1,
      anon_sym_let,
    ACTIONS(1071), 1,
      anon_sym_LBRACK,
    STATE(722), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13135] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13149] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13163] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_GT,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13177] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13191] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_GT,
    STATE(443), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13205] = 4,
    ACTIONS(1083), 1,
      aux_sym_arity_token1,
    ACTIONS(1085), 1,
      anon_sym_msg,
    STATE(324), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13219] = 4,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(498), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13233] = 3,
    STATE(504), 1,
      sym_rule_attr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [13245] = 4,
    ACTIONS(1091), 1,
      anon_sym_next,
    ACTIONS(1094), 1,
      anon_sym_qed,
    STATE(449), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13259] = 4,
    ACTIONS(1029), 1,
      anon_sym_let,
    ACTIONS(1096), 1,
      anon_sym_LBRACK,
    STATE(720), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13273] = 4,
    ACTIONS(1023), 1,
      anon_sym_next,
    ACTIONS(1098), 1,
      anon_sym_qed,
    STATE(449), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13287] = 3,
    ACTIONS(1100), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13299] = 3,
    ACTIONS(1100), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13311] = 4,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1106), 1,
      sym_ident,
    STATE(686), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13325] = 4,
    ACTIONS(1023), 1,
      anon_sym_next,
    ACTIONS(1108), 1,
      anon_sym_qed,
    STATE(451), 1,
      aux_sym_proof_skeleton_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13339] = 4,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13353] = 4,
    ACTIONS(1112), 1,
      anon_sym_COLON,
    ACTIONS(1114), 1,
      anon_sym_LBRACK,
    STATE(628), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13367] = 4,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13381] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      sym_ident,
    STATE(626), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13395] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13409] = 4,
    ACTIONS(1029), 1,
      anon_sym_let,
    ACTIONS(1123), 1,
      anon_sym_LBRACK,
    STATE(604), 1,
      sym_let_block,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13423] = 4,
    ACTIONS(1114), 1,
      anon_sym_LBRACK,
    ACTIONS(1125), 1,
      anon_sym_COLON,
    STATE(569), 1,
      sym_lemma_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13437] = 4,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
    STATE(456), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13451] = 4,
    ACTIONS(1119), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    STATE(464), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13465] = 4,
    ACTIONS(1021), 1,
      anon_sym_2,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_goal_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13479] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13493] = 4,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13507] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13521] = 4,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(474), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13535] = 4,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1138), 1,
      sym_ident,
    STATE(682), 1,
      sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13549] = 4,
    ACTIONS(1140), 1,
      sym_ident,
    STATE(404), 1,
      aux_sym_let_block_repeat1,
    STATE(582), 1,
      sym_msg_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13563] = 3,
    ACTIONS(1142), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13575] = 4,
    ACTIONS(1146), 1,
      anon_sym_COLON,
    ACTIONS(1148), 1,
      anon_sym_LBRACK,
    STATE(634), 1,
      sym_restriction_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13589] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RBRACK,
    STATE(474), 1,
      aux_sym_lemma_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13603] = 4,
    ACTIONS(899), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    STATE(464), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13617] = 4,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    ACTIONS(1159), 1,
      anon_sym_msg,
    STATE(70), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13631] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_GT,
    STATE(479), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13645] = 4,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13659] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_GT,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13673] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      sym_ident,
    STATE(231), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13687] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13701] = 4,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      sym_ident,
    STATE(651), 1,
      sym_node_var,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13715] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(976), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13725] = 4,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_fact_annotes_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13739] = 4,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    ACTIONS(1159), 1,
      anon_sym_msg,
    STATE(229), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13753] = 3,
    ACTIONS(1142), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13765] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13779] = 4,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RBRACK,
    STATE(488), 1,
      aux_sym_rule_attrs_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13793] = 4,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    ACTIONS(1178), 1,
      anon_sym_COLON,
    STATE(656), 1,
      sym_rule_attrs,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13807] = 3,
    STATE(726), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13819] = 4,
    ACTIONS(1089), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13833] = 3,
    STATE(619), 1,
      sym_post_ranking,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_smallest,
      anon_sym_id,
  [13845] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_GT,
    STATE(398), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13859] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13873] = 4,
    ACTIONS(1188), 1,
      aux_sym_arity_token1,
    ACTIONS(1190), 1,
      anon_sym_msg,
    STATE(165), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13887] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_GT,
    STATE(493), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13901] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13915] = 4,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      aux_sym_facts_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13929] = 4,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    ACTIONS(1159), 1,
      anon_sym_msg,
    STATE(528), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13943] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1196), 2,
      sym_ident,
      anon_sym_in,
  [13952] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1198), 2,
      anon_sym_next,
      anon_sym_qed,
  [13961] = 3,
    ACTIONS(881), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1200), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13972] = 3,
    ACTIONS(883), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1202), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [13983] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13992] = 3,
    ACTIONS(1188), 1,
      aux_sym_arity_token1,
    STATE(220), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14003] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1204), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [14012] = 3,
    ACTIONS(1206), 1,
      anon_sym_EQ,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14023] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1210), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14032] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1212), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14041] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14050] = 3,
    ACTIONS(885), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1214), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14061] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14070] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14079] = 3,
    ACTIONS(865), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1216), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14090] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14099] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1220), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1222), 1,
      sym_comment,
    STATE(683), 1,
      sym_param,
  [14112] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14121] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [14130] = 3,
    ACTIONS(1224), 1,
      sym_ident,
    STATE(197), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14141] = 3,
    ACTIONS(1226), 1,
      aux_sym_arity_token1,
    STATE(169), 1,
      sym_arity,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14152] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14161] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14170] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1228), 2,
      anon_sym_next,
      anon_sym_qed,
  [14179] = 3,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    STATE(624), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14190] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1230), 2,
      anon_sym_next,
      anon_sym_qed,
  [14199] = 3,
    ACTIONS(1232), 1,
      anon_sym_,
    ACTIONS(1234), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14210] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1236), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14219] = 3,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14230] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14239] = 3,
    ACTIONS(887), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1238), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14250] = 3,
    ACTIONS(871), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1240), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14261] = 3,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    STATE(157), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14272] = 3,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(1242), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14283] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14292] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1244), 2,
      anon_sym_left,
      anon_sym_right,
  [14301] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1246), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14310] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14319] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14328] = 3,
    ACTIONS(843), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1248), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14339] = 3,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    STATE(85), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14350] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14359] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [14368] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1250), 2,
      anon_sym_next,
      anon_sym_qed,
  [14377] = 3,
    ACTIONS(1252), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1254), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14388] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1256), 2,
      anon_sym_next,
      anon_sym_qed,
  [14397] = 3,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    STATE(94), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14408] = 3,
    ACTIONS(831), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1258), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14419] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1260), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [14428] = 3,
    ACTIONS(1262), 1,
      anon_sym_rule,
    STATE(200), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14439] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [14448] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1060), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [14457] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1264), 2,
      anon_sym_E,
      anon_sym_AC,
  [14466] = 4,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1220), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1222), 1,
      sym_comment,
    STATE(615), 1,
      sym_param,
  [14479] = 3,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    STATE(645), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14490] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14499] = 3,
    ACTIONS(1268), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1270), 1,
      anon_sym_DASH_DASH_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14510] = 3,
    ACTIONS(1224), 1,
      sym_ident,
    STATE(190), 1,
      sym_function_sym,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14521] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14530] = 3,
    ACTIONS(1262), 1,
      anon_sym_rule,
    STATE(183), 1,
      sym_simple_rule,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14541] = 3,
    ACTIONS(1157), 1,
      aux_sym_arity_token1,
    STATE(662), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14552] = 3,
    ACTIONS(1083), 1,
      aux_sym_arity_token1,
    STATE(354), 1,
      sym_natural,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14563] = 2,
    ACTIONS(843), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14571] = 2,
    ACTIONS(1206), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14579] = 2,
    ACTIONS(1272), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14587] = 2,
    ACTIONS(1274), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14595] = 2,
    ACTIONS(1123), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14603] = 2,
    ACTIONS(1276), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14611] = 2,
    ACTIONS(1278), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14619] = 2,
    ACTIONS(1280), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14627] = 2,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14635] = 2,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14643] = 2,
    ACTIONS(1282), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14651] = 2,
    ACTIONS(1284), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14659] = 2,
    ACTIONS(1286), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14667] = 2,
    ACTIONS(1288), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14675] = 2,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14683] = 2,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14691] = 2,
    ACTIONS(1292), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14699] = 2,
    ACTIONS(1294), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14707] = 2,
    ACTIONS(1296), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14715] = 2,
    ACTIONS(1298), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14723] = 2,
    ACTIONS(1300), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14731] = 2,
    ACTIONS(1302), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14739] = 2,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14747] = 2,
    ACTIONS(1306), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14755] = 2,
    ACTIONS(1009), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14763] = 2,
    ACTIONS(1308), 1,
      sym_hexcolor,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14771] = 2,
    ACTIONS(1310), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14779] = 2,
    ACTIONS(1027), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14787] = 2,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14795] = 2,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14803] = 2,
    ACTIONS(1316), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14811] = 2,
    ACTIONS(1318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14819] = 2,
    ACTIONS(1320), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14827] = 2,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14835] = 2,
    ACTIONS(1324), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14843] = 2,
    ACTIONS(1326), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14851] = 2,
    ACTIONS(1328), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14859] = 2,
    ACTIONS(1330), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14867] = 2,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14875] = 2,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14883] = 2,
    ACTIONS(1334), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14891] = 2,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14899] = 2,
    ACTIONS(1336), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14907] = 2,
    ACTIONS(1338), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14915] = 2,
    ACTIONS(1340), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14923] = 2,
    ACTIONS(1342), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14931] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1222), 1,
      sym_comment,
    ACTIONS(1344), 1,
      aux_sym_oracle_goal_ranking_token1,
  [14941] = 2,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14949] = 2,
    ACTIONS(1348), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14957] = 2,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14965] = 2,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14973] = 2,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14981] = 2,
    ACTIONS(1354), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14989] = 2,
    ACTIONS(1356), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [14997] = 2,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15005] = 2,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15013] = 2,
    ACTIONS(1360), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15021] = 2,
    ACTIONS(1362), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15029] = 2,
    ACTIONS(1364), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15037] = 2,
    ACTIONS(1366), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15045] = 2,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15053] = 2,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15061] = 2,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15069] = 2,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15077] = 2,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15085] = 2,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15093] = 2,
    ACTIONS(1125), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15101] = 2,
    ACTIONS(1376), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15109] = 2,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15117] = 2,
    ACTIONS(1378), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15125] = 2,
    ACTIONS(1380), 1,
      anon_sym_TILDE_TILDE_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15133] = 2,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15141] = 2,
    ACTIONS(1382), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15149] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15157] = 2,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15165] = 2,
    ACTIONS(1384), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15173] = 2,
    ACTIONS(1386), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15181] = 2,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15189] = 2,
    ACTIONS(1390), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15197] = 2,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15205] = 2,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15213] = 2,
    ACTIONS(1394), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15221] = 2,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15229] = 2,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15237] = 2,
    ACTIONS(1400), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15245] = 2,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15253] = 2,
    ACTIONS(1402), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15261] = 2,
    ACTIONS(1404), 1,
      anon_sym_msg,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15269] = 2,
    ACTIONS(1406), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15277] = 2,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15285] = 2,
    ACTIONS(1410), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15293] = 2,
    ACTIONS(1412), 1,
      anon_sym_case,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15301] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1222), 1,
      sym_comment,
    ACTIONS(1414), 1,
      aux_sym_oracle_goal_ranking_token1,
  [15311] = 2,
    ACTIONS(1416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15319] = 2,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15327] = 2,
    ACTIONS(1418), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15335] = 2,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15343] = 2,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15351] = 2,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15359] = 2,
    ACTIONS(1426), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15367] = 2,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15375] = 2,
    ACTIONS(1430), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15383] = 2,
    ACTIONS(1432), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15391] = 2,
    ACTIONS(1434), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15399] = 2,
    ACTIONS(1436), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15407] = 2,
    ACTIONS(1438), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15415] = 2,
    ACTIONS(1440), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15423] = 2,
    ACTIONS(1442), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15431] = 2,
    ACTIONS(1444), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15439] = 2,
    ACTIONS(1446), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15447] = 2,
    ACTIONS(1448), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15455] = 2,
    ACTIONS(1450), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15463] = 2,
    ACTIONS(1452), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15471] = 2,
    ACTIONS(1454), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15479] = 2,
    ACTIONS(1456), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15487] = 2,
    ACTIONS(1458), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15495] = 2,
    ACTIONS(1460), 1,
      anon_sym_STAR_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15503] = 2,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15511] = 2,
    ACTIONS(1462), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15519] = 2,
    ACTIONS(1464), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15527] = 2,
    ACTIONS(1466), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15535] = 2,
    ACTIONS(1468), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15543] = 2,
    ACTIONS(1100), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15551] = 2,
    ACTIONS(885), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15559] = 2,
    ACTIONS(1470), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15567] = 2,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15575] = 2,
    ACTIONS(1472), 1,
      anon_sym_modulo,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15583] = 2,
    ACTIONS(877), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15591] = 2,
    ACTIONS(1474), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15599] = 2,
    ACTIONS(883), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15607] = 2,
    ACTIONS(1476), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15615] = 2,
    ACTIONS(1478), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15623] = 2,
    ACTIONS(1480), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15631] = 2,
    ACTIONS(881), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15639] = 2,
    ACTIONS(1482), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15647] = 2,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15655] = 2,
    ACTIONS(879), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15663] = 3,
    ACTIONS(3), 1,
      sym_multiline_comment,
    ACTIONS(1222), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_formal_comment_token1,
  [15673] = 2,
    ACTIONS(1486), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15681] = 2,
    ACTIONS(1488), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15689] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15697] = 2,
    ACTIONS(1490), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15705] = 2,
    ACTIONS(1492), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15713] = 2,
    ACTIONS(1494), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15721] = 2,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15729] = 2,
    ACTIONS(1496), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15737] = 2,
    ACTIONS(1498), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15745] = 2,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15753] = 2,
    ACTIONS(1502), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15761] = 2,
    ACTIONS(1504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15769] = 2,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15777] = 2,
    ACTIONS(1506), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15785] = 2,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15793] = 2,
    ACTIONS(1508), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15801] = 2,
    ACTIONS(1510), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15809] = 2,
    ACTIONS(1512), 1,
      anon_sym_begin,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15817] = 2,
    ACTIONS(1514), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15825] = 2,
    ACTIONS(1516), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15833] = 2,
    ACTIONS(1071), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15841] = 2,
    ACTIONS(1142), 1,
      anon_sym_node,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15849] = 2,
    ACTIONS(1058), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15857] = 2,
    ACTIONS(1518), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15865] = 2,
    ACTIONS(1520), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15873] = 2,
    ACTIONS(1522), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15881] = 2,
    ACTIONS(1524), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15889] = 2,
    ACTIONS(1052), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15897] = 2,
    ACTIONS(831), 1,
      anon_sym_RBRACK_DASH_GT,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15905] = 2,
    ACTIONS(1526), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15913] = 2,
    ACTIONS(1528), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_comment,
  [15921] = 2,
    ACTIONS(1530), 1,
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
  [SMALL_STATE(32)] = 3033,
  [SMALL_STATE(33)] = 3076,
  [SMALL_STATE(34)] = 3113,
  [SMALL_STATE(35)] = 3150,
  [SMALL_STATE(36)] = 3187,
  [SMALL_STATE(37)] = 3230,
  [SMALL_STATE(38)] = 3269,
  [SMALL_STATE(39)] = 3306,
  [SMALL_STATE(40)] = 3349,
  [SMALL_STATE(41)] = 3388,
  [SMALL_STATE(42)] = 3431,
  [SMALL_STATE(43)] = 3467,
  [SMALL_STATE(44)] = 3503,
  [SMALL_STATE(45)] = 3539,
  [SMALL_STATE(46)] = 3593,
  [SMALL_STATE(47)] = 3629,
  [SMALL_STATE(48)] = 3665,
  [SMALL_STATE(49)] = 3701,
  [SMALL_STATE(50)] = 3743,
  [SMALL_STATE(51)] = 3779,
  [SMALL_STATE(52)] = 3815,
  [SMALL_STATE(53)] = 3855,
  [SMALL_STATE(54)] = 3887,
  [SMALL_STATE(55)] = 3919,
  [SMALL_STATE(56)] = 3954,
  [SMALL_STATE(57)] = 3987,
  [SMALL_STATE(58)] = 4022,
  [SMALL_STATE(59)] = 4053,
  [SMALL_STATE(60)] = 4088,
  [SMALL_STATE(61)] = 4139,
  [SMALL_STATE(62)] = 4170,
  [SMALL_STATE(63)] = 4201,
  [SMALL_STATE(64)] = 4252,
  [SMALL_STATE(65)] = 4283,
  [SMALL_STATE(66)] = 4316,
  [SMALL_STATE(67)] = 4353,
  [SMALL_STATE(68)] = 4386,
  [SMALL_STATE(69)] = 4416,
  [SMALL_STATE(70)] = 4448,
  [SMALL_STATE(71)] = 4482,
  [SMALL_STATE(72)] = 4514,
  [SMALL_STATE(73)] = 4544,
  [SMALL_STATE(74)] = 4576,
  [SMALL_STATE(75)] = 4603,
  [SMALL_STATE(76)] = 4632,
  [SMALL_STATE(77)] = 4659,
  [SMALL_STATE(78)] = 4692,
  [SMALL_STATE(79)] = 4725,
  [SMALL_STATE(80)] = 4752,
  [SMALL_STATE(81)] = 4783,
  [SMALL_STATE(82)] = 4816,
  [SMALL_STATE(83)] = 4844,
  [SMALL_STATE(84)] = 4898,
  [SMALL_STATE(85)] = 4926,
  [SMALL_STATE(86)] = 4954,
  [SMALL_STATE(87)] = 4992,
  [SMALL_STATE(88)] = 5020,
  [SMALL_STATE(89)] = 5058,
  [SMALL_STATE(90)] = 5112,
  [SMALL_STATE(91)] = 5150,
  [SMALL_STATE(92)] = 5178,
  [SMALL_STATE(93)] = 5206,
  [SMALL_STATE(94)] = 5238,
  [SMALL_STATE(95)] = 5266,
  [SMALL_STATE(96)] = 5294,
  [SMALL_STATE(97)] = 5322,
  [SMALL_STATE(98)] = 5350,
  [SMALL_STATE(99)] = 5388,
  [SMALL_STATE(100)] = 5442,
  [SMALL_STATE(101)] = 5470,
  [SMALL_STATE(102)] = 5498,
  [SMALL_STATE(103)] = 5526,
  [SMALL_STATE(104)] = 5554,
  [SMALL_STATE(105)] = 5586,
  [SMALL_STATE(106)] = 5614,
  [SMALL_STATE(107)] = 5642,
  [SMALL_STATE(108)] = 5674,
  [SMALL_STATE(109)] = 5702,
  [SMALL_STATE(110)] = 5730,
  [SMALL_STATE(111)] = 5784,
  [SMALL_STATE(112)] = 5838,
  [SMALL_STATE(113)] = 5869,
  [SMALL_STATE(114)] = 5920,
  [SMALL_STATE(115)] = 5971,
  [SMALL_STATE(116)] = 6022,
  [SMALL_STATE(117)] = 6073,
  [SMALL_STATE(118)] = 6124,
  [SMALL_STATE(119)] = 6175,
  [SMALL_STATE(120)] = 6226,
  [SMALL_STATE(121)] = 6277,
  [SMALL_STATE(122)] = 6308,
  [SMALL_STATE(123)] = 6339,
  [SMALL_STATE(124)] = 6390,
  [SMALL_STATE(125)] = 6417,
  [SMALL_STATE(126)] = 6468,
  [SMALL_STATE(127)] = 6519,
  [SMALL_STATE(128)] = 6570,
  [SMALL_STATE(129)] = 6596,
  [SMALL_STATE(130)] = 6644,
  [SMALL_STATE(131)] = 6670,
  [SMALL_STATE(132)] = 6718,
  [SMALL_STATE(133)] = 6747,
  [SMALL_STATE(134)] = 6776,
  [SMALL_STATE(135)] = 6807,
  [SMALL_STATE(136)] = 6852,
  [SMALL_STATE(137)] = 6883,
  [SMALL_STATE(138)] = 6914,
  [SMALL_STATE(139)] = 6943,
  [SMALL_STATE(140)] = 6988,
  [SMALL_STATE(141)] = 7019,
  [SMALL_STATE(142)] = 7061,
  [SMALL_STATE(143)] = 7103,
  [SMALL_STATE(144)] = 7145,
  [SMALL_STATE(145)] = 7187,
  [SMALL_STATE(146)] = 7213,
  [SMALL_STATE(147)] = 7252,
  [SMALL_STATE(148)] = 7285,
  [SMALL_STATE(149)] = 7324,
  [SMALL_STATE(150)] = 7351,
  [SMALL_STATE(151)] = 7380,
  [SMALL_STATE(152)] = 7407,
  [SMALL_STATE(153)] = 7432,
  [SMALL_STATE(154)] = 7465,
  [SMALL_STATE(155)] = 7504,
  [SMALL_STATE(156)] = 7529,
  [SMALL_STATE(157)] = 7551,
  [SMALL_STATE(158)] = 7573,
  [SMALL_STATE(159)] = 7603,
  [SMALL_STATE(160)] = 7627,
  [SMALL_STATE(161)] = 7657,
  [SMALL_STATE(162)] = 7681,
  [SMALL_STATE(163)] = 7705,
  [SMALL_STATE(164)] = 7729,
  [SMALL_STATE(165)] = 7753,
  [SMALL_STATE(166)] = 7779,
  [SMALL_STATE(167)] = 7803,
  [SMALL_STATE(168)] = 7824,
  [SMALL_STATE(169)] = 7847,
  [SMALL_STATE(170)] = 7870,
  [SMALL_STATE(171)] = 7897,
  [SMALL_STATE(172)] = 7920,
  [SMALL_STATE(173)] = 7941,
  [SMALL_STATE(174)] = 7962,
  [SMALL_STATE(175)] = 7985,
  [SMALL_STATE(176)] = 8008,
  [SMALL_STATE(177)] = 8031,
  [SMALL_STATE(178)] = 8054,
  [SMALL_STATE(179)] = 8077,
  [SMALL_STATE(180)] = 8100,
  [SMALL_STATE(181)] = 8119,
  [SMALL_STATE(182)] = 8142,
  [SMALL_STATE(183)] = 8165,
  [SMALL_STATE(184)] = 8188,
  [SMALL_STATE(185)] = 8207,
  [SMALL_STATE(186)] = 8230,
  [SMALL_STATE(187)] = 8253,
  [SMALL_STATE(188)] = 8272,
  [SMALL_STATE(189)] = 8295,
  [SMALL_STATE(190)] = 8318,
  [SMALL_STATE(191)] = 8341,
  [SMALL_STATE(192)] = 8364,
  [SMALL_STATE(193)] = 8385,
  [SMALL_STATE(194)] = 8408,
  [SMALL_STATE(195)] = 8429,
  [SMALL_STATE(196)] = 8452,
  [SMALL_STATE(197)] = 8470,
  [SMALL_STATE(198)] = 8490,
  [SMALL_STATE(199)] = 8510,
  [SMALL_STATE(200)] = 8530,
  [SMALL_STATE(201)] = 8550,
  [SMALL_STATE(202)] = 8570,
  [SMALL_STATE(203)] = 8590,
  [SMALL_STATE(204)] = 8610,
  [SMALL_STATE(205)] = 8630,
  [SMALL_STATE(206)] = 8648,
  [SMALL_STATE(207)] = 8666,
  [SMALL_STATE(208)] = 8686,
  [SMALL_STATE(209)] = 8706,
  [SMALL_STATE(210)] = 8724,
  [SMALL_STATE(211)] = 8744,
  [SMALL_STATE(212)] = 8764,
  [SMALL_STATE(213)] = 8784,
  [SMALL_STATE(214)] = 8802,
  [SMALL_STATE(215)] = 8820,
  [SMALL_STATE(216)] = 8840,
  [SMALL_STATE(217)] = 8860,
  [SMALL_STATE(218)] = 8878,
  [SMALL_STATE(219)] = 8902,
  [SMALL_STATE(220)] = 8922,
  [SMALL_STATE(221)] = 8942,
  [SMALL_STATE(222)] = 8962,
  [SMALL_STATE(223)] = 8980,
  [SMALL_STATE(224)] = 9000,
  [SMALL_STATE(225)] = 9020,
  [SMALL_STATE(226)] = 9040,
  [SMALL_STATE(227)] = 9060,
  [SMALL_STATE(228)] = 9080,
  [SMALL_STATE(229)] = 9104,
  [SMALL_STATE(230)] = 9128,
  [SMALL_STATE(231)] = 9148,
  [SMALL_STATE(232)] = 9166,
  [SMALL_STATE(233)] = 9184,
  [SMALL_STATE(234)] = 9202,
  [SMALL_STATE(235)] = 9222,
  [SMALL_STATE(236)] = 9240,
  [SMALL_STATE(237)] = 9258,
  [SMALL_STATE(238)] = 9276,
  [SMALL_STATE(239)] = 9296,
  [SMALL_STATE(240)] = 9314,
  [SMALL_STATE(241)] = 9334,
  [SMALL_STATE(242)] = 9354,
  [SMALL_STATE(243)] = 9372,
  [SMALL_STATE(244)] = 9390,
  [SMALL_STATE(245)] = 9410,
  [SMALL_STATE(246)] = 9430,
  [SMALL_STATE(247)] = 9448,
  [SMALL_STATE(248)] = 9466,
  [SMALL_STATE(249)] = 9485,
  [SMALL_STATE(250)] = 9514,
  [SMALL_STATE(251)] = 9531,
  [SMALL_STATE(252)] = 9548,
  [SMALL_STATE(253)] = 9565,
  [SMALL_STATE(254)] = 9582,
  [SMALL_STATE(255)] = 9599,
  [SMALL_STATE(256)] = 9628,
  [SMALL_STATE(257)] = 9649,
  [SMALL_STATE(258)] = 9666,
  [SMALL_STATE(259)] = 9691,
  [SMALL_STATE(260)] = 9708,
  [SMALL_STATE(261)] = 9729,
  [SMALL_STATE(262)] = 9750,
  [SMALL_STATE(263)] = 9767,
  [SMALL_STATE(264)] = 9788,
  [SMALL_STATE(265)] = 9807,
  [SMALL_STATE(266)] = 9826,
  [SMALL_STATE(267)] = 9855,
  [SMALL_STATE(268)] = 9872,
  [SMALL_STATE(269)] = 9901,
  [SMALL_STATE(270)] = 9918,
  [SMALL_STATE(271)] = 9937,
  [SMALL_STATE(272)] = 9954,
  [SMALL_STATE(273)] = 9983,
  [SMALL_STATE(274)] = 10004,
  [SMALL_STATE(275)] = 10025,
  [SMALL_STATE(276)] = 10042,
  [SMALL_STATE(277)] = 10059,
  [SMALL_STATE(278)] = 10080,
  [SMALL_STATE(279)] = 10097,
  [SMALL_STATE(280)] = 10114,
  [SMALL_STATE(281)] = 10133,
  [SMALL_STATE(282)] = 10152,
  [SMALL_STATE(283)] = 10171,
  [SMALL_STATE(284)] = 10188,
  [SMALL_STATE(285)] = 10216,
  [SMALL_STATE(286)] = 10244,
  [SMALL_STATE(287)] = 10272,
  [SMALL_STATE(288)] = 10300,
  [SMALL_STATE(289)] = 10328,
  [SMALL_STATE(290)] = 10356,
  [SMALL_STATE(291)] = 10384,
  [SMALL_STATE(292)] = 10412,
  [SMALL_STATE(293)] = 10430,
  [SMALL_STATE(294)] = 10458,
  [SMALL_STATE(295)] = 10486,
  [SMALL_STATE(296)] = 10514,
  [SMALL_STATE(297)] = 10542,
  [SMALL_STATE(298)] = 10570,
  [SMALL_STATE(299)] = 10598,
  [SMALL_STATE(300)] = 10624,
  [SMALL_STATE(301)] = 10652,
  [SMALL_STATE(302)] = 10680,
  [SMALL_STATE(303)] = 10706,
  [SMALL_STATE(304)] = 10734,
  [SMALL_STATE(305)] = 10758,
  [SMALL_STATE(306)] = 10784,
  [SMALL_STATE(307)] = 10812,
  [SMALL_STATE(308)] = 10840,
  [SMALL_STATE(309)] = 10868,
  [SMALL_STATE(310)] = 10896,
  [SMALL_STATE(311)] = 10920,
  [SMALL_STATE(312)] = 10948,
  [SMALL_STATE(313)] = 10976,
  [SMALL_STATE(314)] = 11004,
  [SMALL_STATE(315)] = 11022,
  [SMALL_STATE(316)] = 11050,
  [SMALL_STATE(317)] = 11078,
  [SMALL_STATE(318)] = 11106,
  [SMALL_STATE(319)] = 11134,
  [SMALL_STATE(320)] = 11162,
  [SMALL_STATE(321)] = 11190,
  [SMALL_STATE(322)] = 11218,
  [SMALL_STATE(323)] = 11246,
  [SMALL_STATE(324)] = 11272,
  [SMALL_STATE(325)] = 11294,
  [SMALL_STATE(326)] = 11320,
  [SMALL_STATE(327)] = 11345,
  [SMALL_STATE(328)] = 11364,
  [SMALL_STATE(329)] = 11389,
  [SMALL_STATE(330)] = 11414,
  [SMALL_STATE(331)] = 11435,
  [SMALL_STATE(332)] = 11452,
  [SMALL_STATE(333)] = 11469,
  [SMALL_STATE(334)] = 11490,
  [SMALL_STATE(335)] = 11509,
  [SMALL_STATE(336)] = 11530,
  [SMALL_STATE(337)] = 11555,
  [SMALL_STATE(338)] = 11574,
  [SMALL_STATE(339)] = 11595,
  [SMALL_STATE(340)] = 11616,
  [SMALL_STATE(341)] = 11635,
  [SMALL_STATE(342)] = 11660,
  [SMALL_STATE(343)] = 11676,
  [SMALL_STATE(344)] = 11696,
  [SMALL_STATE(345)] = 11712,
  [SMALL_STATE(346)] = 11728,
  [SMALL_STATE(347)] = 11744,
  [SMALL_STATE(348)] = 11766,
  [SMALL_STATE(349)] = 11782,
  [SMALL_STATE(350)] = 11798,
  [SMALL_STATE(351)] = 11818,
  [SMALL_STATE(352)] = 11834,
  [SMALL_STATE(353)] = 11850,
  [SMALL_STATE(354)] = 11866,
  [SMALL_STATE(355)] = 11882,
  [SMALL_STATE(356)] = 11898,
  [SMALL_STATE(357)] = 11920,
  [SMALL_STATE(358)] = 11936,
  [SMALL_STATE(359)] = 11952,
  [SMALL_STATE(360)] = 11968,
  [SMALL_STATE(361)] = 11988,
  [SMALL_STATE(362)] = 12004,
  [SMALL_STATE(363)] = 12020,
  [SMALL_STATE(364)] = 12039,
  [SMALL_STATE(365)] = 12060,
  [SMALL_STATE(366)] = 12077,
  [SMALL_STATE(367)] = 12098,
  [SMALL_STATE(368)] = 12113,
  [SMALL_STATE(369)] = 12130,
  [SMALL_STATE(370)] = 12151,
  [SMALL_STATE(371)] = 12168,
  [SMALL_STATE(372)] = 12185,
  [SMALL_STATE(373)] = 12200,
  [SMALL_STATE(374)] = 12217,
  [SMALL_STATE(375)] = 12230,
  [SMALL_STATE(376)] = 12245,
  [SMALL_STATE(377)] = 12262,
  [SMALL_STATE(378)] = 12276,
  [SMALL_STATE(379)] = 12290,
  [SMALL_STATE(380)] = 12302,
  [SMALL_STATE(381)] = 12314,
  [SMALL_STATE(382)] = 12330,
  [SMALL_STATE(383)] = 12342,
  [SMALL_STATE(384)] = 12354,
  [SMALL_STATE(385)] = 12366,
  [SMALL_STATE(386)] = 12378,
  [SMALL_STATE(387)] = 12390,
  [SMALL_STATE(388)] = 12406,
  [SMALL_STATE(389)] = 12418,
  [SMALL_STATE(390)] = 12432,
  [SMALL_STATE(391)] = 12444,
  [SMALL_STATE(392)] = 12459,
  [SMALL_STATE(393)] = 12474,
  [SMALL_STATE(394)] = 12489,
  [SMALL_STATE(395)] = 12504,
  [SMALL_STATE(396)] = 12515,
  [SMALL_STATE(397)] = 12528,
  [SMALL_STATE(398)] = 12539,
  [SMALL_STATE(399)] = 12554,
  [SMALL_STATE(400)] = 12567,
  [SMALL_STATE(401)] = 12578,
  [SMALL_STATE(402)] = 12593,
  [SMALL_STATE(403)] = 12604,
  [SMALL_STATE(404)] = 12619,
  [SMALL_STATE(405)] = 12636,
  [SMALL_STATE(406)] = 12653,
  [SMALL_STATE(407)] = 12668,
  [SMALL_STATE(408)] = 12683,
  [SMALL_STATE(409)] = 12698,
  [SMALL_STATE(410)] = 12713,
  [SMALL_STATE(411)] = 12726,
  [SMALL_STATE(412)] = 12741,
  [SMALL_STATE(413)] = 12752,
  [SMALL_STATE(414)] = 12767,
  [SMALL_STATE(415)] = 12778,
  [SMALL_STATE(416)] = 12789,
  [SMALL_STATE(417)] = 12803,
  [SMALL_STATE(418)] = 12817,
  [SMALL_STATE(419)] = 12829,
  [SMALL_STATE(420)] = 12843,
  [SMALL_STATE(421)] = 12857,
  [SMALL_STATE(422)] = 12871,
  [SMALL_STATE(423)] = 12885,
  [SMALL_STATE(424)] = 12899,
  [SMALL_STATE(425)] = 12913,
  [SMALL_STATE(426)] = 12927,
  [SMALL_STATE(427)] = 12941,
  [SMALL_STATE(428)] = 12955,
  [SMALL_STATE(429)] = 12969,
  [SMALL_STATE(430)] = 12983,
  [SMALL_STATE(431)] = 12997,
  [SMALL_STATE(432)] = 13011,
  [SMALL_STATE(433)] = 13025,
  [SMALL_STATE(434)] = 13037,
  [SMALL_STATE(435)] = 13051,
  [SMALL_STATE(436)] = 13065,
  [SMALL_STATE(437)] = 13079,
  [SMALL_STATE(438)] = 13093,
  [SMALL_STATE(439)] = 13107,
  [SMALL_STATE(440)] = 13121,
  [SMALL_STATE(441)] = 13135,
  [SMALL_STATE(442)] = 13149,
  [SMALL_STATE(443)] = 13163,
  [SMALL_STATE(444)] = 13177,
  [SMALL_STATE(445)] = 13191,
  [SMALL_STATE(446)] = 13205,
  [SMALL_STATE(447)] = 13219,
  [SMALL_STATE(448)] = 13233,
  [SMALL_STATE(449)] = 13245,
  [SMALL_STATE(450)] = 13259,
  [SMALL_STATE(451)] = 13273,
  [SMALL_STATE(452)] = 13287,
  [SMALL_STATE(453)] = 13299,
  [SMALL_STATE(454)] = 13311,
  [SMALL_STATE(455)] = 13325,
  [SMALL_STATE(456)] = 13339,
  [SMALL_STATE(457)] = 13353,
  [SMALL_STATE(458)] = 13367,
  [SMALL_STATE(459)] = 13381,
  [SMALL_STATE(460)] = 13395,
  [SMALL_STATE(461)] = 13409,
  [SMALL_STATE(462)] = 13423,
  [SMALL_STATE(463)] = 13437,
  [SMALL_STATE(464)] = 13451,
  [SMALL_STATE(465)] = 13465,
  [SMALL_STATE(466)] = 13479,
  [SMALL_STATE(467)] = 13493,
  [SMALL_STATE(468)] = 13507,
  [SMALL_STATE(469)] = 13521,
  [SMALL_STATE(470)] = 13535,
  [SMALL_STATE(471)] = 13549,
  [SMALL_STATE(472)] = 13563,
  [SMALL_STATE(473)] = 13575,
  [SMALL_STATE(474)] = 13589,
  [SMALL_STATE(475)] = 13603,
  [SMALL_STATE(476)] = 13617,
  [SMALL_STATE(477)] = 13631,
  [SMALL_STATE(478)] = 13645,
  [SMALL_STATE(479)] = 13659,
  [SMALL_STATE(480)] = 13673,
  [SMALL_STATE(481)] = 13687,
  [SMALL_STATE(482)] = 13701,
  [SMALL_STATE(483)] = 13715,
  [SMALL_STATE(484)] = 13725,
  [SMALL_STATE(485)] = 13739,
  [SMALL_STATE(486)] = 13753,
  [SMALL_STATE(487)] = 13765,
  [SMALL_STATE(488)] = 13779,
  [SMALL_STATE(489)] = 13793,
  [SMALL_STATE(490)] = 13807,
  [SMALL_STATE(491)] = 13819,
  [SMALL_STATE(492)] = 13833,
  [SMALL_STATE(493)] = 13845,
  [SMALL_STATE(494)] = 13859,
  [SMALL_STATE(495)] = 13873,
  [SMALL_STATE(496)] = 13887,
  [SMALL_STATE(497)] = 13901,
  [SMALL_STATE(498)] = 13915,
  [SMALL_STATE(499)] = 13929,
  [SMALL_STATE(500)] = 13943,
  [SMALL_STATE(501)] = 13952,
  [SMALL_STATE(502)] = 13961,
  [SMALL_STATE(503)] = 13972,
  [SMALL_STATE(504)] = 13983,
  [SMALL_STATE(505)] = 13992,
  [SMALL_STATE(506)] = 14003,
  [SMALL_STATE(507)] = 14012,
  [SMALL_STATE(508)] = 14023,
  [SMALL_STATE(509)] = 14032,
  [SMALL_STATE(510)] = 14041,
  [SMALL_STATE(511)] = 14050,
  [SMALL_STATE(512)] = 14061,
  [SMALL_STATE(513)] = 14070,
  [SMALL_STATE(514)] = 14079,
  [SMALL_STATE(515)] = 14090,
  [SMALL_STATE(516)] = 14099,
  [SMALL_STATE(517)] = 14112,
  [SMALL_STATE(518)] = 14121,
  [SMALL_STATE(519)] = 14130,
  [SMALL_STATE(520)] = 14141,
  [SMALL_STATE(521)] = 14152,
  [SMALL_STATE(522)] = 14161,
  [SMALL_STATE(523)] = 14170,
  [SMALL_STATE(524)] = 14179,
  [SMALL_STATE(525)] = 14190,
  [SMALL_STATE(526)] = 14199,
  [SMALL_STATE(527)] = 14210,
  [SMALL_STATE(528)] = 14219,
  [SMALL_STATE(529)] = 14230,
  [SMALL_STATE(530)] = 14239,
  [SMALL_STATE(531)] = 14250,
  [SMALL_STATE(532)] = 14261,
  [SMALL_STATE(533)] = 14272,
  [SMALL_STATE(534)] = 14283,
  [SMALL_STATE(535)] = 14292,
  [SMALL_STATE(536)] = 14301,
  [SMALL_STATE(537)] = 14310,
  [SMALL_STATE(538)] = 14319,
  [SMALL_STATE(539)] = 14328,
  [SMALL_STATE(540)] = 14339,
  [SMALL_STATE(541)] = 14350,
  [SMALL_STATE(542)] = 14359,
  [SMALL_STATE(543)] = 14368,
  [SMALL_STATE(544)] = 14377,
  [SMALL_STATE(545)] = 14388,
  [SMALL_STATE(546)] = 14397,
  [SMALL_STATE(547)] = 14408,
  [SMALL_STATE(548)] = 14419,
  [SMALL_STATE(549)] = 14428,
  [SMALL_STATE(550)] = 14439,
  [SMALL_STATE(551)] = 14448,
  [SMALL_STATE(552)] = 14457,
  [SMALL_STATE(553)] = 14466,
  [SMALL_STATE(554)] = 14479,
  [SMALL_STATE(555)] = 14490,
  [SMALL_STATE(556)] = 14499,
  [SMALL_STATE(557)] = 14510,
  [SMALL_STATE(558)] = 14521,
  [SMALL_STATE(559)] = 14530,
  [SMALL_STATE(560)] = 14541,
  [SMALL_STATE(561)] = 14552,
  [SMALL_STATE(562)] = 14563,
  [SMALL_STATE(563)] = 14571,
  [SMALL_STATE(564)] = 14579,
  [SMALL_STATE(565)] = 14587,
  [SMALL_STATE(566)] = 14595,
  [SMALL_STATE(567)] = 14603,
  [SMALL_STATE(568)] = 14611,
  [SMALL_STATE(569)] = 14619,
  [SMALL_STATE(570)] = 14627,
  [SMALL_STATE(571)] = 14635,
  [SMALL_STATE(572)] = 14643,
  [SMALL_STATE(573)] = 14651,
  [SMALL_STATE(574)] = 14659,
  [SMALL_STATE(575)] = 14667,
  [SMALL_STATE(576)] = 14675,
  [SMALL_STATE(577)] = 14683,
  [SMALL_STATE(578)] = 14691,
  [SMALL_STATE(579)] = 14699,
  [SMALL_STATE(580)] = 14707,
  [SMALL_STATE(581)] = 14715,
  [SMALL_STATE(582)] = 14723,
  [SMALL_STATE(583)] = 14731,
  [SMALL_STATE(584)] = 14739,
  [SMALL_STATE(585)] = 14747,
  [SMALL_STATE(586)] = 14755,
  [SMALL_STATE(587)] = 14763,
  [SMALL_STATE(588)] = 14771,
  [SMALL_STATE(589)] = 14779,
  [SMALL_STATE(590)] = 14787,
  [SMALL_STATE(591)] = 14795,
  [SMALL_STATE(592)] = 14803,
  [SMALL_STATE(593)] = 14811,
  [SMALL_STATE(594)] = 14819,
  [SMALL_STATE(595)] = 14827,
  [SMALL_STATE(596)] = 14835,
  [SMALL_STATE(597)] = 14843,
  [SMALL_STATE(598)] = 14851,
  [SMALL_STATE(599)] = 14859,
  [SMALL_STATE(600)] = 14867,
  [SMALL_STATE(601)] = 14875,
  [SMALL_STATE(602)] = 14883,
  [SMALL_STATE(603)] = 14891,
  [SMALL_STATE(604)] = 14899,
  [SMALL_STATE(605)] = 14907,
  [SMALL_STATE(606)] = 14915,
  [SMALL_STATE(607)] = 14923,
  [SMALL_STATE(608)] = 14931,
  [SMALL_STATE(609)] = 14941,
  [SMALL_STATE(610)] = 14949,
  [SMALL_STATE(611)] = 14957,
  [SMALL_STATE(612)] = 14965,
  [SMALL_STATE(613)] = 14973,
  [SMALL_STATE(614)] = 14981,
  [SMALL_STATE(615)] = 14989,
  [SMALL_STATE(616)] = 14997,
  [SMALL_STATE(617)] = 15005,
  [SMALL_STATE(618)] = 15013,
  [SMALL_STATE(619)] = 15021,
  [SMALL_STATE(620)] = 15029,
  [SMALL_STATE(621)] = 15037,
  [SMALL_STATE(622)] = 15045,
  [SMALL_STATE(623)] = 15053,
  [SMALL_STATE(624)] = 15061,
  [SMALL_STATE(625)] = 15069,
  [SMALL_STATE(626)] = 15077,
  [SMALL_STATE(627)] = 15085,
  [SMALL_STATE(628)] = 15093,
  [SMALL_STATE(629)] = 15101,
  [SMALL_STATE(630)] = 15109,
  [SMALL_STATE(631)] = 15117,
  [SMALL_STATE(632)] = 15125,
  [SMALL_STATE(633)] = 15133,
  [SMALL_STATE(634)] = 15141,
  [SMALL_STATE(635)] = 15149,
  [SMALL_STATE(636)] = 15157,
  [SMALL_STATE(637)] = 15165,
  [SMALL_STATE(638)] = 15173,
  [SMALL_STATE(639)] = 15181,
  [SMALL_STATE(640)] = 15189,
  [SMALL_STATE(641)] = 15197,
  [SMALL_STATE(642)] = 15205,
  [SMALL_STATE(643)] = 15213,
  [SMALL_STATE(644)] = 15221,
  [SMALL_STATE(645)] = 15229,
  [SMALL_STATE(646)] = 15237,
  [SMALL_STATE(647)] = 15245,
  [SMALL_STATE(648)] = 15253,
  [SMALL_STATE(649)] = 15261,
  [SMALL_STATE(650)] = 15269,
  [SMALL_STATE(651)] = 15277,
  [SMALL_STATE(652)] = 15285,
  [SMALL_STATE(653)] = 15293,
  [SMALL_STATE(654)] = 15301,
  [SMALL_STATE(655)] = 15311,
  [SMALL_STATE(656)] = 15319,
  [SMALL_STATE(657)] = 15327,
  [SMALL_STATE(658)] = 15335,
  [SMALL_STATE(659)] = 15343,
  [SMALL_STATE(660)] = 15351,
  [SMALL_STATE(661)] = 15359,
  [SMALL_STATE(662)] = 15367,
  [SMALL_STATE(663)] = 15375,
  [SMALL_STATE(664)] = 15383,
  [SMALL_STATE(665)] = 15391,
  [SMALL_STATE(666)] = 15399,
  [SMALL_STATE(667)] = 15407,
  [SMALL_STATE(668)] = 15415,
  [SMALL_STATE(669)] = 15423,
  [SMALL_STATE(670)] = 15431,
  [SMALL_STATE(671)] = 15439,
  [SMALL_STATE(672)] = 15447,
  [SMALL_STATE(673)] = 15455,
  [SMALL_STATE(674)] = 15463,
  [SMALL_STATE(675)] = 15471,
  [SMALL_STATE(676)] = 15479,
  [SMALL_STATE(677)] = 15487,
  [SMALL_STATE(678)] = 15495,
  [SMALL_STATE(679)] = 15503,
  [SMALL_STATE(680)] = 15511,
  [SMALL_STATE(681)] = 15519,
  [SMALL_STATE(682)] = 15527,
  [SMALL_STATE(683)] = 15535,
  [SMALL_STATE(684)] = 15543,
  [SMALL_STATE(685)] = 15551,
  [SMALL_STATE(686)] = 15559,
  [SMALL_STATE(687)] = 15567,
  [SMALL_STATE(688)] = 15575,
  [SMALL_STATE(689)] = 15583,
  [SMALL_STATE(690)] = 15591,
  [SMALL_STATE(691)] = 15599,
  [SMALL_STATE(692)] = 15607,
  [SMALL_STATE(693)] = 15615,
  [SMALL_STATE(694)] = 15623,
  [SMALL_STATE(695)] = 15631,
  [SMALL_STATE(696)] = 15639,
  [SMALL_STATE(697)] = 15647,
  [SMALL_STATE(698)] = 15655,
  [SMALL_STATE(699)] = 15663,
  [SMALL_STATE(700)] = 15673,
  [SMALL_STATE(701)] = 15681,
  [SMALL_STATE(702)] = 15689,
  [SMALL_STATE(703)] = 15697,
  [SMALL_STATE(704)] = 15705,
  [SMALL_STATE(705)] = 15713,
  [SMALL_STATE(706)] = 15721,
  [SMALL_STATE(707)] = 15729,
  [SMALL_STATE(708)] = 15737,
  [SMALL_STATE(709)] = 15745,
  [SMALL_STATE(710)] = 15753,
  [SMALL_STATE(711)] = 15761,
  [SMALL_STATE(712)] = 15769,
  [SMALL_STATE(713)] = 15777,
  [SMALL_STATE(714)] = 15785,
  [SMALL_STATE(715)] = 15793,
  [SMALL_STATE(716)] = 15801,
  [SMALL_STATE(717)] = 15809,
  [SMALL_STATE(718)] = 15817,
  [SMALL_STATE(719)] = 15825,
  [SMALL_STATE(720)] = 15833,
  [SMALL_STATE(721)] = 15841,
  [SMALL_STATE(722)] = 15849,
  [SMALL_STATE(723)] = 15857,
  [SMALL_STATE(724)] = 15865,
  [SMALL_STATE(725)] = 15873,
  [SMALL_STATE(726)] = 15881,
  [SMALL_STATE(727)] = 15889,
  [SMALL_STATE(728)] = 15897,
  [SMALL_STATE(729)] = 15905,
  [SMALL_STATE(730)] = 15913,
  [SMALL_STATE(731)] = 15921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(332),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(53),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(516),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(332),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(53),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(332),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(53),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(76),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(666),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(331),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(553),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(331),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(61),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(31),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(331),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(61),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(32),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(52),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(713),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(711),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(710),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(708),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(707),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(705),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(454),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(703),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(470),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(49),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(146),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(144),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(139),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(129),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(184),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(674),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(564),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(591),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(162),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(549),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(519),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(282),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(141),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 9),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 9),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 8),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 8),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(367),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(602),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(638),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(148),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(142),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(135),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(135),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(131),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(127),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [986] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(533),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(399),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(4),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(653),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(356),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(347),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(333),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(448),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_facts, 1),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1522] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
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
