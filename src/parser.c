#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__block_token1 = 1,
  sym_metadata_key = 2,
  sym_metadata_value = 3,
  anon_sym_GT_GT = 4,
  anon_sym_COLON = 5,
  sym_comment = 6,
  sym_block_comment = 7,
  anon_sym_AT = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_POUND = 11,
  anon_sym_TILDE = 12,
  anon_sym_PERCENT = 13,
  sym__number = 14,
  sym__alphabetic = 15,
  sym__numeric = 16,
  sym__whitespace = 17,
  sym__punctuation = 18,
  sym__text_item = 19,
  sym_source_file = 20,
  sym__block = 21,
  sym_metadata = 22,
  sym_step = 23,
  aux_sym__name_word = 24,
  sym__name_multiword = 25,
  sym_ingredient = 26,
  sym_cookware = 27,
  sym_timer = 28,
  sym_name = 29,
  sym_quantity = 30,
  sym_units = 31,
  sym_amount = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_step_repeat1 = 34,
  aux_sym__name_multiword_repeat1 = 35,
  aux_sym__name_multiword_repeat2 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__block_token1] = "_block_token1",
  [sym_metadata_key] = "metadata_key",
  [sym_metadata_value] = "metadata_value",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_PERCENT] = "%",
  [sym__number] = "_number",
  [sym__alphabetic] = "_alphabetic",
  [sym__numeric] = "_numeric",
  [sym__whitespace] = "_whitespace",
  [sym__punctuation] = "_punctuation",
  [sym__text_item] = "_text_item",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_metadata] = "metadata",
  [sym_step] = "step",
  [aux_sym__name_word] = "_name_word",
  [sym__name_multiword] = "_name_multiword",
  [sym_ingredient] = "ingredient",
  [sym_cookware] = "cookware",
  [sym_timer] = "timer",
  [sym_name] = "name",
  [sym_quantity] = "quantity",
  [sym_units] = "units",
  [sym_amount] = "amount",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_step_repeat1] = "step_repeat1",
  [aux_sym__name_multiword_repeat1] = "_name_multiword_repeat1",
  [aux_sym__name_multiword_repeat2] = "_name_multiword_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__block_token1] = aux_sym__block_token1,
  [sym_metadata_key] = sym_metadata_key,
  [sym_metadata_value] = sym_metadata_value,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym__number] = sym__number,
  [sym__alphabetic] = sym__alphabetic,
  [sym__numeric] = sym__numeric,
  [sym__whitespace] = sym__whitespace,
  [sym__punctuation] = sym__punctuation,
  [sym__text_item] = sym__text_item,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_metadata] = sym_metadata,
  [sym_step] = sym_step,
  [aux_sym__name_word] = aux_sym__name_word,
  [sym__name_multiword] = sym__name_multiword,
  [sym_ingredient] = sym_ingredient,
  [sym_cookware] = sym_cookware,
  [sym_timer] = sym_timer,
  [sym_name] = sym_name,
  [sym_quantity] = sym_quantity,
  [sym_units] = sym_units,
  [sym_amount] = sym_amount,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_step_repeat1] = aux_sym_step_repeat1,
  [aux_sym__name_multiword_repeat1] = aux_sym__name_multiword_repeat1,
  [aux_sym__name_multiword_repeat2] = aux_sym__name_multiword_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__alphabetic] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__punctuation] = {
    .visible = false,
    .named = true,
  },
  [sym__text_item] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__name_word] = {
    .visible = false,
    .named = false,
  },
  [sym__name_multiword] = {
    .visible = false,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_cookware] = {
    .visible = true,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_multiword_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_multiword_repeat2] = {
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
  [3] = 3,
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 7,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
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
};

static TSCharacterRange sym__alphabetic_character_set_1[] = {
  {'-', '-'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd},
  {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788},
  {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822},
  {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c},
  {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c},
  {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf},
  {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592},
  {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767},
  {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c},
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym__numeric_character_set_1[] = {
  {'0', '9'}, {0x660, 0x669}, {0x6f0, 0x6f9}, {0x7c0, 0x7c9}, {0x966, 0x96f}, {0x9e6, 0x9ef}, {0xa66, 0xa6f}, {0xae6, 0xaef},
  {0xb66, 0xb6f}, {0xbe6, 0xbef}, {0xc66, 0xc6f}, {0xce6, 0xcef}, {0xd66, 0xd6f}, {0xde6, 0xdef}, {0xe50, 0xe59}, {0xed0, 0xed9},
  {0xf20, 0xf29}, {0x1040, 0x1049}, {0x1090, 0x1099}, {0x17e0, 0x17e9}, {0x1810, 0x1819}, {0x1946, 0x194f}, {0x19d0, 0x19d9}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1b50, 0x1b59}, {0x1bb0, 0x1bb9}, {0x1c40, 0x1c49}, {0x1c50, 0x1c59}, {0xa620, 0xa629}, {0xa8d0, 0xa8d9}, {0xa900, 0xa909},
  {0xa9d0, 0xa9d9}, {0xa9f0, 0xa9f9}, {0xaa50, 0xaa59}, {0xabf0, 0xabf9}, {0xff10, 0xff19}, {0x104a0, 0x104a9},
};

static TSCharacterRange sym__punctuation_character_set_1[] = {
  {'!', '"'}, {'%', '*'}, {',', '/'}, {';', ';'}, {'?', '?'}, {'[', ']'}, {'_', '_'}, {0xa1, 0xa1},
  {0xa7, 0xa7}, {0xab, 0xab}, {0xb6, 0xb7}, {0xbb, 0xbb}, {0xbf, 0xbf}, {0x37e, 0x37e}, {0x387, 0x387}, {0x55a, 0x55f},
  {0x589, 0x58a}, {0x5be, 0x5be}, {0x5c0, 0x5c0}, {0x5c3, 0x5c3}, {0x5c6, 0x5c6}, {0x5f3, 0x5f4}, {0x609, 0x60a}, {0x60c, 0x60d},
  {0x61b, 0x61b}, {0x61d, 0x61f}, {0x66a, 0x66d}, {0x6d4, 0x6d4}, {0x700, 0x70d}, {0x7f7, 0x7f9}, {0x830, 0x83e}, {0x85e, 0x85e},
  {0x964, 0x965}, {0x970, 0x970}, {0x9fd, 0x9fd}, {0xa76, 0xa76}, {0xaf0, 0xaf0}, {0xc77, 0xc77}, {0xc84, 0xc84}, {0xdf4, 0xdf4},
  {0xe4f, 0xe4f}, {0xe5a, 0xe5b}, {0xf04, 0xf12}, {0xf14, 0xf14}, {0xf3a, 0xf3d}, {0xf85, 0xf85}, {0xfd0, 0xfd4}, {0xfd9, 0xfda},
  {0x104a, 0x104f}, {0x10fb, 0x10fb}, {0x1360, 0x1368}, {0x1400, 0x1400}, {0x166e, 0x166e}, {0x169b, 0x169c}, {0x16eb, 0x16ed}, {0x1735, 0x1736},
  {0x17d4, 0x17d6}, {0x17d8, 0x17da}, {0x1800, 0x180a}, {0x1944, 0x1945}, {0x1a1e, 0x1a1f}, {0x1aa0, 0x1aa6}, {0x1aa8, 0x1aad}, {0x1b5a, 0x1b60},
  {0x1b7d, 0x1b7e}, {0x1bfc, 0x1bff}, {0x1c3b, 0x1c3f}, {0x1c7e, 0x1c7f}, {0x1cc0, 0x1cc7}, {0x1cd3, 0x1cd3}, {0x2010, 0x2027}, {0x2030, 0x2043},
  {0x2045, 0x2051}, {0x2053, 0x205e}, {0x207d, 0x207e}, {0x208d, 0x208e}, {0x2308, 0x230b}, {0x2329, 0x232a}, {0x2768, 0x2775}, {0x27c5, 0x27c6},
  {0x27e6, 0x27ef}, {0x2983, 0x2998}, {0x29d8, 0x29db}, {0x29fc, 0x29fd}, {0x2cf9, 0x2cfc}, {0x2cfe, 0x2cff}, {0x2d70, 0x2d70}, {0x2e00, 0x2e2e},
  {0x2e30, 0x2e4f}, {0x2e52, 0x2e5d}, {0x3001, 0x3003}, {0x3008, 0x3011}, {0x3014, 0x301f}, {0x3030, 0x3030}, {0x303d, 0x303d}, {0x30a0, 0x30a0},
  {0x30fb, 0x30fb}, {0xa4fe, 0xa4ff}, {0xa60d, 0xa60f}, {0xa673, 0xa673}, {0xa67e, 0xa67e}, {0xa6f2, 0xa6f7}, {0xa874, 0xa877}, {0xa8ce, 0xa8cf},
  {0xa8f8, 0xa8fa}, {0xa8fc, 0xa8fc}, {0xa92e, 0xa92f}, {0xa95f, 0xa95f}, {0xa9c1, 0xa9cd}, {0xa9de, 0xa9df}, {0xaa5c, 0xaa5f}, {0xaade, 0xaadf},
  {0xaaf0, 0xaaf1}, {0xabeb, 0xabeb}, {0xfd3e, 0xfd3f}, {0xfe10, 0xfe19}, {0xfe30, 0xfe52}, {0xfe54, 0xfe61}, {0xfe63, 0xfe63}, {0xfe68, 0xfe68},
  {0xfe6a, 0xfe6b}, {0xff01, 0xff03}, {0xff05, 0xff0a}, {0xff0c, 0xff0f}, {0xff1a, 0xff1b}, {0xff1f, 0xff20}, {0xff3b, 0xff3d}, {0xff3f, 0xff3f},
  {0xff5b, 0xff5b}, {0xff5d, 0xff5d}, {0xff5f, 0xff65}, {0x10100, 0x10102}, {0x1039f, 0x1039f}, {0x103d0, 0x103d0}, {0x1056f, 0x1056f}, {0x10857, 0x10857},
  {0x1091f, 0x1091f},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 19,
        '#', 42,
        '%', 44,
        '-', 48,
        ':', 30,
        '>', 15,
        '@', 39,
        '[', 8,
        '{', 40,
        '}', 41,
        '~', 43,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(53);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(51);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '~') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(55);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(52);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(53);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(51);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(53);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(51);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(59);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '~') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__block_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__block_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_metadata_value);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_metadata_value);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(32);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(33);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_block_comment);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__alphabetic);
      if (lookahead == '-') ADVANCE(50);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__alphabetic);
      if (lookahead == '-') ADVANCE(34);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__alphabetic);
      if (lookahead == '-') ADVANCE(32);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(59);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__alphabetic);
      if (set_contains(sym__alphabetic_character_set_1, 430, lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__numeric);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__numeric);
      if (set_contains(sym__numeric_character_set_1, 38, lookahead)) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__punctuation);
      if (lookahead == '-') ADVANCE(58);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__punctuation);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == ']') ADVANCE(38);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(58);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__punctuation);
      if (lookahead == '-') ADVANCE(57);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(58);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__punctuation);
      if (set_contains(sym__punctuation_character_set_1, 137, lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__text_item);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__text_item);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__block_token1] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__alphabetic] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__block] = STATE(3),
    [sym_metadata] = STATE(3),
    [sym_step] = STATE(3),
    [sym_ingredient] = STATE(8),
    [sym_cookware] = STATE(8),
    [sym_timer] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_step_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__block_token1] = ACTIONS(7),
    [anon_sym_GT_GT] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(19),
    [sym__text_item] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__block_token1,
    ACTIONS(28), 1,
      anon_sym_GT_GT,
    ACTIONS(34), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      sym__text_item,
    ACTIONS(31), 2,
      sym_comment,
      sym_block_comment,
    STATE(2), 4,
      sym__block,
      sym_metadata,
      sym_step,
      aux_sym_source_file_repeat1,
    STATE(8), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [41] = 11,
    ACTIONS(9), 1,
      anon_sym_GT_GT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(21), 1,
      sym__text_item,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym__block_token1,
    ACTIONS(50), 2,
      sym_comment,
      sym_block_comment,
    STATE(2), 4,
      sym__block,
      sym_metadata,
      sym_step,
      aux_sym_source_file_repeat1,
    STATE(8), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [82] = 9,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym__whitespace,
    STATE(7), 1,
      aux_sym__name_word,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(52), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(58), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(54), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [115] = 9,
    ACTIONS(60), 1,
      sym__whitespace,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      aux_sym__name_word,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(58), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(62), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(64), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [148] = 8,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(68), 1,
      aux_sym__block_token1,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_TILDE,
    ACTIONS(79), 1,
      sym__text_item,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    STATE(6), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [177] = 5,
    STATE(7), 1,
      aux_sym__name_word,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(82), 3,
      aux_sym__block_token1,
      sym__whitespace,
      sym__text_item,
    ACTIONS(84), 4,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_TILDE,
  [200] = 8,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(89), 1,
      aux_sym__block_token1,
    ACTIONS(91), 1,
      sym__text_item,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    STATE(6), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [229] = 8,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym__number,
    STATE(15), 1,
      aux_sym__name_word,
    STATE(35), 1,
      sym__name_multiword,
    STATE(36), 1,
      sym_quantity,
    STATE(37), 1,
      sym_amount,
    ACTIONS(97), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [257] = 8,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym__name_word,
    STATE(35), 1,
      sym__name_multiword,
    STATE(36), 1,
      sym_quantity,
    STATE(43), 1,
      sym_amount,
    ACTIONS(97), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [285] = 8,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym__name_word,
    STATE(35), 1,
      sym__name_multiword,
    STATE(36), 1,
      sym_quantity,
    STATE(38), 1,
      sym_amount,
    ACTIONS(97), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [313] = 8,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym__name_word,
    STATE(35), 1,
      sym__name_multiword,
    STATE(36), 1,
      sym_quantity,
    STATE(40), 1,
      sym_amount,
    ACTIONS(97), 2,
      sym__alphabetic,
      sym__numeric,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [341] = 3,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(107), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_GT_GT,
      sym_comment,
      sym_block_comment,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [358] = 3,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(111), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_GT_GT,
      sym_comment,
      sym_block_comment,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [375] = 8,
    ACTIONS(115), 1,
      sym__alphabetic,
    ACTIONS(117), 1,
      sym__numeric,
    ACTIONS(119), 1,
      sym__whitespace,
    STATE(19), 1,
      aux_sym__name_word,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [402] = 7,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      sym__alphabetic,
    ACTIONS(125), 1,
      sym__numeric,
    STATE(18), 1,
      aux_sym__name_word,
    STATE(42), 1,
      sym_name,
    STATE(44), 1,
      sym__name_multiword,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [426] = 8,
    ACTIONS(19), 1,
      sym_block_comment,
    ACTIONS(127), 1,
      sym__alphabetic,
    ACTIONS(129), 1,
      sym__numeric,
    ACTIONS(131), 1,
      sym__punctuation,
    STATE(20), 1,
      aux_sym__name_word,
    STATE(46), 1,
      sym__name_multiword,
    STATE(48), 1,
      sym_units,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [452] = 8,
    ACTIONS(115), 1,
      sym__alphabetic,
    ACTIONS(117), 1,
      sym__numeric,
    ACTIONS(119), 1,
      sym__whitespace,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      aux_sym__name_word,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [478] = 5,
    ACTIONS(135), 1,
      sym__alphabetic,
    ACTIONS(138), 1,
      sym__numeric,
    STATE(19), 1,
      aux_sym__name_word,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(84), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      sym__whitespace,
  [498] = 8,
    ACTIONS(115), 1,
      sym__alphabetic,
    ACTIONS(117), 1,
      sym__numeric,
    ACTIONS(119), 1,
      sym__whitespace,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym__name_word,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [524] = 5,
    ACTIONS(115), 1,
      sym__alphabetic,
    ACTIONS(117), 1,
      sym__numeric,
    STATE(19), 1,
      aux_sym__name_word,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(143), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      sym__whitespace,
  [544] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(147), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [561] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(151), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [578] = 5,
    ACTIONS(119), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(153), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [597] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(157), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [614] = 5,
    ACTIONS(159), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym__name_multiword_repeat2,
    STATE(31), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(143), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [633] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(162), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(164), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [650] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(166), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(168), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [667] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(170), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(172), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [684] = 4,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(174), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(176), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [701] = 6,
    ACTIONS(178), 1,
      sym__alphabetic,
    ACTIONS(180), 1,
      sym__numeric,
    ACTIONS(182), 1,
      sym__whitespace,
    STATE(21), 1,
      aux_sym__name_word,
    STATE(34), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [721] = 5,
    ACTIONS(184), 1,
      sym__alphabetic,
    ACTIONS(186), 1,
      sym__numeric,
    STATE(4), 1,
      aux_sym__name_word,
    STATE(47), 1,
      sym__name_multiword,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [739] = 5,
    ACTIONS(188), 1,
      sym__alphabetic,
    ACTIONS(190), 1,
      sym__numeric,
    STATE(5), 1,
      aux_sym__name_word,
    STATE(45), 1,
      sym__name_multiword,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [757] = 5,
    ACTIONS(192), 1,
      sym__alphabetic,
    ACTIONS(194), 1,
      sym__numeric,
    ACTIONS(196), 1,
      sym__whitespace,
    STATE(34), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [774] = 2,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [784] = 3,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [796] = 2,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [805] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [814] = 2,
    ACTIONS(205), 1,
      sym_metadata_key,
    ACTIONS(19), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [823] = 2,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [832] = 2,
    ACTIONS(209), 1,
      sym_metadata_value,
    ACTIONS(19), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [841] = 2,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [850] = 2,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [859] = 2,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [868] = 2,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [877] = 2,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [886] = 2,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [895] = 2,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [904] = 2,
    ACTIONS(217), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [913] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 341,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 375,
  [SMALL_STATE(16)] = 402,
  [SMALL_STATE(17)] = 426,
  [SMALL_STATE(18)] = 452,
  [SMALL_STATE(19)] = 478,
  [SMALL_STATE(20)] = 498,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 544,
  [SMALL_STATE(23)] = 561,
  [SMALL_STATE(24)] = 578,
  [SMALL_STATE(25)] = 597,
  [SMALL_STATE(26)] = 614,
  [SMALL_STATE(27)] = 633,
  [SMALL_STATE(28)] = 650,
  [SMALL_STATE(29)] = 667,
  [SMALL_STATE(30)] = 684,
  [SMALL_STATE(31)] = 701,
  [SMALL_STATE(32)] = 721,
  [SMALL_STATE(33)] = 739,
  [SMALL_STATE(34)] = 757,
  [SMALL_STATE(35)] = 774,
  [SMALL_STATE(36)] = 784,
  [SMALL_STATE(37)] = 796,
  [SMALL_STATE(38)] = 805,
  [SMALL_STATE(39)] = 814,
  [SMALL_STATE(40)] = 823,
  [SMALL_STATE(41)] = 832,
  [SMALL_STATE(42)] = 841,
  [SMALL_STATE(43)] = 850,
  [SMALL_STATE(44)] = 859,
  [SMALL_STATE(45)] = 868,
  [SMALL_STATE(46)] = 877,
  [SMALL_STATE(47)] = 886,
  [SMALL_STATE(48)] = 895,
  [SMALL_STATE(49)] = 904,
  [SMALL_STATE(50)] = 913,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_word, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_word, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_word, 2, 0, 0), SHIFT_REPEAT(7),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_word, 2, 0, 0), SHIFT_REPEAT(19),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_word, 2, 0, 0), SHIFT_REPEAT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_multiword_repeat2, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_multiword, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 3, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_multiword_repeat2, 2, 0, 0), SHIFT_REPEAT(31),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 5, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_multiword_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_multiword_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_multiword_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cooklang(void) {
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
