#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_sub = 1,
  sym_number = 2,
  sym_rtime = 3,
  sym_percentage = 4,
  sym_identifier = 5,
  sym_string_fragment = 6,
  sym_true = 7,
  sym_false = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_pass = 10,
  anon_sym_hit_for_pass = 11,
  anon_sym_lookup = 12,
  anon_sym_pipe = 13,
  anon_sym_deliver = 14,
  anon_sym_ACL = 15,
  anon_sym_BACKEND = 16,
  anon_sym_BOOL = 17,
  anon_sym_FLOAT = 18,
  anon_sym_ID = 19,
  anon_sym_INTEGER = 20,
  anon_sym_IP = 21,
  anon_sym_RTIME = 22,
  anon_sym_STRING = 23,
  anon_sym_TIME = 24,
  sym_declare_scope = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_include = 28,
  anon_sym_SEMI = 29,
  anon_sym_return = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_error = 33,
  anon_sym_restart = 34,
  anon_sym_esi = 35,
  anon_sym_declare = 36,
  anon_sym_var = 37,
  anon_sym_DOT = 38,
  anon_sym_call = 39,
  anon_sym_synthetic = 40,
  anon_sym_synthetic_DOTbase64 = 41,
  sym_comment = 42,
  anon_sym_set = 43,
  anon_sym_EQ = 44,
  anon_sym_unset = 45,
  anon_sym_req = 46,
  anon_sym_bereq = 47,
  anon_sym_beresp = 48,
  anon_sym_resp = 49,
  anon_sym_obj = 50,
  anon_sym_backend = 51,
  anon_sym_director = 52,
  anon_sym_COLON = 53,
  anon_sym_COMMA = 54,
  anon_sym_table = 55,
  sym_negate_operator = 56,
  sym_routing_prefix = 57,
  anon_sym_acl = 58,
  sym_program = 59,
  sym__definition = 60,
  sym_subroutine = 61,
  sym_string = 62,
  sym_action = 63,
  sym_type = 64,
  sym_statement_block = 65,
  sym__statement = 66,
  sym__expression = 67,
  sym_include_statement = 68,
  sym_return_statement = 69,
  sym_error_statement = 70,
  sym_restart_statement = 71,
  sym_esi_statement = 72,
  sym_declare_statement = 73,
  sym_user_defined_variable = 74,
  sym_call_statement = 75,
  sym_synthetic_statement = 76,
  sym_synthetic_base64_statement = 77,
  sym_set_statement = 78,
  sym_unset_statement = 79,
  sym_vcl_scope = 80,
  sym_backend_attribute = 81,
  sym_backend_declaration = 82,
  sym_backend_field = 83,
  sym_director_declaration = 84,
  sym_table_key = 85,
  sym_table_value = 86,
  sym_table_record = 87,
  sym_table_declaration = 88,
  sym_ip_address = 89,
  sym_acl_declaration = 90,
  sym_vcl_variable = 91,
  aux_sym_program_repeat1 = 92,
  aux_sym_statement_block_repeat1 = 93,
  aux_sym_backend_declaration_repeat1 = 94,
  aux_sym_director_declaration_repeat1 = 95,
  aux_sym_table_declaration_repeat1 = 96,
  aux_sym_acl_declaration_repeat1 = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sub] = "sub",
  [sym_number] = "number",
  [sym_rtime] = "rtime",
  [sym_percentage] = "percentage",
  [sym_identifier] = "identifier",
  [sym_string_fragment] = "string_fragment",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_pass] = "pass",
  [anon_sym_hit_for_pass] = "hit_for_pass",
  [anon_sym_lookup] = "lookup",
  [anon_sym_pipe] = "pipe",
  [anon_sym_deliver] = "deliver",
  [anon_sym_ACL] = "ACL",
  [anon_sym_BACKEND] = "BACKEND",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_ID] = "ID",
  [anon_sym_INTEGER] = "INTEGER",
  [anon_sym_IP] = "IP",
  [anon_sym_RTIME] = "RTIME",
  [anon_sym_STRING] = "STRING",
  [anon_sym_TIME] = "TIME",
  [sym_declare_scope] = "declare_scope",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_error] = "error",
  [anon_sym_restart] = "restart",
  [anon_sym_esi] = "esi",
  [anon_sym_declare] = "declare",
  [anon_sym_var] = "var",
  [anon_sym_DOT] = ".",
  [anon_sym_call] = "call",
  [anon_sym_synthetic] = "synthetic",
  [anon_sym_synthetic_DOTbase64] = "synthetic_statement",
  [sym_comment] = "comment",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_unset] = "unset",
  [anon_sym_req] = "req",
  [anon_sym_bereq] = "bereq",
  [anon_sym_beresp] = "beresp",
  [anon_sym_resp] = "resp",
  [anon_sym_obj] = "obj",
  [anon_sym_backend] = "backend",
  [anon_sym_director] = "director",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_table] = "table",
  [sym_negate_operator] = "negate_operator",
  [sym_routing_prefix] = "routing_prefix",
  [anon_sym_acl] = "acl",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym_subroutine] = "subroutine",
  [sym_string] = "string",
  [sym_action] = "action",
  [sym_type] = "type",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_include_statement] = "include_statement",
  [sym_return_statement] = "return_statement",
  [sym_error_statement] = "error_statement",
  [sym_restart_statement] = "restart_statement",
  [sym_esi_statement] = "esi_statement",
  [sym_declare_statement] = "declare_statement",
  [sym_user_defined_variable] = "user_defined_variable",
  [sym_call_statement] = "call_statement",
  [sym_synthetic_statement] = "synthetic_statement",
  [sym_synthetic_base64_statement] = "synthetic_base64_statement",
  [sym_set_statement] = "set_statement",
  [sym_unset_statement] = "unset_statement",
  [sym_vcl_scope] = "vcl_scope",
  [sym_backend_attribute] = "backend_attribute",
  [sym_backend_declaration] = "backend_declaration",
  [sym_backend_field] = "backend_field",
  [sym_director_declaration] = "director_declaration",
  [sym_table_key] = "table_key",
  [sym_table_value] = "table_value",
  [sym_table_record] = "table_record",
  [sym_table_declaration] = "table_declaration",
  [sym_ip_address] = "ip_address",
  [sym_acl_declaration] = "acl_declaration",
  [sym_vcl_variable] = "vcl_variable",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_backend_declaration_repeat1] = "backend_declaration_repeat1",
  [aux_sym_director_declaration_repeat1] = "director_declaration_repeat1",
  [aux_sym_table_declaration_repeat1] = "table_declaration_repeat1",
  [aux_sym_acl_declaration_repeat1] = "acl_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sub] = anon_sym_sub,
  [sym_number] = sym_number,
  [sym_rtime] = sym_rtime,
  [sym_percentage] = sym_percentage,
  [sym_identifier] = sym_identifier,
  [sym_string_fragment] = sym_string_fragment,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_hit_for_pass] = anon_sym_hit_for_pass,
  [anon_sym_lookup] = anon_sym_lookup,
  [anon_sym_pipe] = anon_sym_pipe,
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_ACL] = anon_sym_ACL,
  [anon_sym_BACKEND] = anon_sym_BACKEND,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_ID] = anon_sym_ID,
  [anon_sym_INTEGER] = anon_sym_INTEGER,
  [anon_sym_IP] = anon_sym_IP,
  [anon_sym_RTIME] = anon_sym_RTIME,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_TIME] = anon_sym_TIME,
  [sym_declare_scope] = sym_declare_scope,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_synthetic] = anon_sym_synthetic,
  [anon_sym_synthetic_DOTbase64] = sym_synthetic_statement,
  [sym_comment] = sym_comment,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_req] = anon_sym_req,
  [anon_sym_bereq] = anon_sym_bereq,
  [anon_sym_beresp] = anon_sym_beresp,
  [anon_sym_resp] = anon_sym_resp,
  [anon_sym_obj] = anon_sym_obj,
  [anon_sym_backend] = anon_sym_backend,
  [anon_sym_director] = anon_sym_director,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_table] = anon_sym_table,
  [sym_negate_operator] = sym_negate_operator,
  [sym_routing_prefix] = sym_routing_prefix,
  [anon_sym_acl] = anon_sym_acl,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym_subroutine] = sym_subroutine,
  [sym_string] = sym_string,
  [sym_action] = sym_action,
  [sym_type] = sym_type,
  [sym_statement_block] = sym_statement_block,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_include_statement] = sym_include_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_restart_statement] = sym_restart_statement,
  [sym_esi_statement] = sym_esi_statement,
  [sym_declare_statement] = sym_declare_statement,
  [sym_user_defined_variable] = sym_user_defined_variable,
  [sym_call_statement] = sym_call_statement,
  [sym_synthetic_statement] = sym_synthetic_statement,
  [sym_synthetic_base64_statement] = sym_synthetic_base64_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_unset_statement] = sym_unset_statement,
  [sym_vcl_scope] = sym_vcl_scope,
  [sym_backend_attribute] = sym_backend_attribute,
  [sym_backend_declaration] = sym_backend_declaration,
  [sym_backend_field] = sym_backend_field,
  [sym_director_declaration] = sym_director_declaration,
  [sym_table_key] = sym_table_key,
  [sym_table_value] = sym_table_value,
  [sym_table_record] = sym_table_record,
  [sym_table_declaration] = sym_table_declaration,
  [sym_ip_address] = sym_ip_address,
  [sym_acl_declaration] = sym_acl_declaration,
  [sym_vcl_variable] = sym_vcl_variable,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
  [aux_sym_backend_declaration_repeat1] = aux_sym_backend_declaration_repeat1,
  [aux_sym_director_declaration_repeat1] = aux_sym_director_declaration_repeat1,
  [aux_sym_table_declaration_repeat1] = aux_sym_table_declaration_repeat1,
  [aux_sym_acl_declaration_repeat1] = aux_sym_acl_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_rtime] = {
    .visible = true,
    .named = true,
  },
  [sym_percentage] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hit_for_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lookup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BACKEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTEGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
    .visible = true,
    .named = false,
  },
  [sym_declare_scope] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic_DOTbase64] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_req] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bereq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beresp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_director] = {
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
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [sym_negate_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_routing_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_acl] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_restart_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_esi_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declare_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_synthetic_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_synthetic_base64_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_vcl_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_field] = {
    .visible = true,
    .named = true,
  },
  [sym_director_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_key] = {
    .visible = true,
    .named = true,
  },
  [sym_table_value] = {
    .visible = true,
    .named = true,
  },
  [sym_table_record] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_vcl_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_backend_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_director_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_acl_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_index = 1,
  field_message = 2,
  field_name = 3,
  field_scope = 4,
  field_source = 5,
  field_status = 6,
  field_subfield = 7,
  field_subroutine_name = 8,
  field_type = 9,
  field_variable = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_index] = "index",
  [field_message] = "message",
  [field_name] = "name",
  [field_scope] = "scope",
  [field_source] = "source",
  [field_status] = "status",
  [field_subfield] = "subfield",
  [field_subroutine_name] = "subroutine_name",
  [field_type] = "type",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_source, 1},
  [2] =
    {field_name, 1},
    {field_type, 2},
  [4] =
    {field_status, 1},
  [5] =
    {field_subroutine_name, 1},
  [6] =
    {field_message, 2},
    {field_status, 1},
  [8] =
    {field_name, 2},
  [9] =
    {field_scope, 0},
    {field_variable, 2},
  [11] =
    {field_scope, 1},
    {field_type, 3},
  [13] =
    {field_index, 4},
    {field_scope, 0},
    {field_variable, 2},
  [16] =
    {field_scope, 0},
    {field_subfield, 4},
    {field_variable, 2},
  [19] =
    {field_index, 4},
    {field_scope, 0},
    {field_subfield, 6},
    {field_variable, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(147);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(202);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(177);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(184);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'K') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(178);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(179);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'j') ADVANCE(212);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(208);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(209);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_rtime);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_percentage);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_req);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_bereq);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_beresp);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_resp);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_obj);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_negate_operator);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_routing_prefix);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_routing_prefix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_acl);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 146},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 146},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 146},
  [96] = {.lex_state = 146},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 146},
  [104] = {.lex_state = 146},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 146},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 146},
  [122] = {.lex_state = 146},
  [123] = {.lex_state = 146},
  [124] = {.lex_state = 146},
  [125] = {.lex_state = 146},
  [126] = {.lex_state = 146},
  [127] = {.lex_state = 146},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_rtime] = ACTIONS(1),
    [sym_percentage] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_hit_for_pass] = ACTIONS(1),
    [anon_sym_lookup] = ACTIONS(1),
    [anon_sym_pipe] = ACTIONS(1),
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_ACL] = ACTIONS(1),
    [anon_sym_BACKEND] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_ID] = ACTIONS(1),
    [anon_sym_INTEGER] = ACTIONS(1),
    [anon_sym_IP] = ACTIONS(1),
    [anon_sym_RTIME] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [sym_declare_scope] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_synthetic] = ACTIONS(1),
    [anon_sym_synthetic_DOTbase64] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_req] = ACTIONS(1),
    [anon_sym_bereq] = ACTIONS(1),
    [anon_sym_beresp] = ACTIONS(1),
    [anon_sym_resp] = ACTIONS(1),
    [anon_sym_obj] = ACTIONS(1),
    [anon_sym_backend] = ACTIONS(1),
    [anon_sym_director] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [sym_negate_operator] = ACTIONS(1),
    [sym_routing_prefix] = ACTIONS(1),
    [anon_sym_acl] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(120),
    [sym__definition] = STATE(5),
    [sym_subroutine] = STATE(5),
    [sym_include_statement] = STATE(5),
    [sym_backend_declaration] = STATE(5),
    [sym_director_declaration] = STATE(5),
    [sym_table_declaration] = STATE(5),
    [sym_acl_declaration] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_backend] = ACTIONS(9),
    [anon_sym_director] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(13),
    [anon_sym_acl] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_error,
    ACTIONS(23), 1,
      anon_sym_restart,
    ACTIONS(25), 1,
      anon_sym_esi,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_synthetic,
    ACTIONS(33), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_unset,
    STATE(4), 12,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_set_statement,
      sym_unset_statement,
      aux_sym_statement_block_repeat1,
  [51] = 13,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_error,
    ACTIONS(23), 1,
      anon_sym_restart,
    ACTIONS(25), 1,
      anon_sym_esi,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_synthetic,
    ACTIONS(33), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_unset,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_comment,
    STATE(2), 12,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_set_statement,
      sym_unset_statement,
      aux_sym_statement_block_repeat1,
  [102] = 13,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_error,
    ACTIONS(53), 1,
      anon_sym_restart,
    ACTIONS(56), 1,
      anon_sym_esi,
    ACTIONS(59), 1,
      anon_sym_declare,
    ACTIONS(62), 1,
      anon_sym_call,
    ACTIONS(65), 1,
      anon_sym_synthetic,
    ACTIONS(68), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(71), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_set,
    ACTIONS(77), 1,
      anon_sym_unset,
    STATE(4), 12,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_set_statement,
      sym_unset_statement,
      aux_sym_statement_block_repeat1,
  [153] = 8,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_backend,
    ACTIONS(11), 1,
      anon_sym_director,
    ACTIONS(13), 1,
      anon_sym_table,
    ACTIONS(15), 1,
      anon_sym_acl,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(6), 8,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      sym_director_declaration,
      sym_table_declaration,
      sym_acl_declaration,
      aux_sym_program_repeat1,
  [185] = 8,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_sub,
    ACTIONS(87), 1,
      anon_sym_include,
    ACTIONS(90), 1,
      anon_sym_backend,
    ACTIONS(93), 1,
      anon_sym_director,
    ACTIONS(96), 1,
      anon_sym_table,
    ACTIONS(99), 1,
      anon_sym_acl,
    STATE(6), 8,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      sym_director_declaration,
      sym_table_declaration,
      sym_acl_declaration,
      aux_sym_program_repeat1,
  [217] = 2,
    ACTIONS(104), 1,
      anon_sym_synthetic,
    ACTIONS(102), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [234] = 2,
    ACTIONS(108), 1,
      anon_sym_synthetic,
    ACTIONS(106), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [251] = 2,
    ACTIONS(112), 1,
      anon_sym_synthetic,
    ACTIONS(110), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [268] = 2,
    ACTIONS(116), 1,
      anon_sym_synthetic,
    ACTIONS(114), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [285] = 2,
    ACTIONS(120), 1,
      anon_sym_synthetic,
    ACTIONS(118), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [302] = 2,
    ACTIONS(124), 1,
      anon_sym_synthetic,
    ACTIONS(122), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [319] = 2,
    ACTIONS(128), 1,
      anon_sym_synthetic,
    ACTIONS(126), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [336] = 2,
    ACTIONS(132), 1,
      anon_sym_synthetic,
    ACTIONS(130), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [353] = 2,
    ACTIONS(136), 1,
      anon_sym_synthetic,
    ACTIONS(134), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [370] = 2,
    ACTIONS(140), 1,
      anon_sym_synthetic,
    ACTIONS(138), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [387] = 2,
    ACTIONS(144), 1,
      anon_sym_synthetic,
    ACTIONS(142), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [404] = 2,
    ACTIONS(148), 1,
      anon_sym_synthetic,
    ACTIONS(146), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [421] = 2,
    ACTIONS(152), 1,
      anon_sym_synthetic,
    ACTIONS(150), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [438] = 2,
    STATE(110), 1,
      sym_type,
    ACTIONS(154), 10,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_ID,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
  [454] = 1,
    ACTIONS(156), 11,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_ID,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
      anon_sym_EQ,
  [468] = 5,
    ACTIONS(160), 1,
      sym_percentage,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_table_value,
    STATE(69), 2,
      sym_string,
      sym__expression,
    ACTIONS(158), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [489] = 4,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      sym_percentage,
    STATE(114), 2,
      sym_string,
      sym__expression,
    ACTIONS(164), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [507] = 4,
    ACTIONS(168), 1,
      anon_sym_var,
    STATE(88), 1,
      sym_vcl_scope,
    STATE(94), 2,
      sym_user_defined_variable,
      sym_vcl_variable,
    ACTIONS(170), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [525] = 4,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      sym_percentage,
    STATE(112), 2,
      sym_string,
      sym__expression,
    ACTIONS(172), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [543] = 1,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [553] = 1,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [563] = 1,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [573] = 1,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [583] = 1,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [593] = 1,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [603] = 1,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [613] = 1,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [623] = 1,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [633] = 1,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [643] = 1,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [653] = 1,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [663] = 1,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [673] = 1,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
      anon_sym_acl,
  [683] = 3,
    STATE(88), 1,
      sym_vcl_scope,
    STATE(92), 1,
      sym_vcl_variable,
    ACTIONS(170), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [697] = 1,
    ACTIONS(204), 6,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_routing_prefix,
  [706] = 4,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(47), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [721] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_table_key,
    STATE(102), 1,
      sym_string,
    STATE(46), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [738] = 4,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(42), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [753] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_table_key,
    STATE(102), 1,
      sym_string,
    STATE(43), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [770] = 5,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_table_key,
    STATE(102), 1,
      sym_string,
    STATE(46), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [787] = 4,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(47), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [802] = 2,
    STATE(87), 1,
      sym_action,
    ACTIONS(231), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [813] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_table_key,
    STATE(102), 1,
      sym_string,
    STATE(46), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [830] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_negate_operator,
    STATE(75), 1,
      sym_string,
    STATE(53), 2,
      sym_ip_address,
      aux_sym_acl_declaration_repeat1,
  [847] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_table_key,
    STATE(102), 1,
      sym_string,
    STATE(49), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [864] = 5,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      sym_negate_operator,
    STATE(75), 1,
      sym_string,
    STATE(52), 2,
      sym_ip_address,
      aux_sym_acl_declaration_repeat1,
  [881] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym_negate_operator,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_string,
    STATE(52), 2,
      sym_ip_address,
      aux_sym_acl_declaration_repeat1,
  [898] = 1,
    ACTIONS(251), 6,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_routing_prefix,
  [907] = 3,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      anon_sym_DOT,
    STATE(55), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [918] = 3,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [929] = 3,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(56), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [940] = 3,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [951] = 3,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(264), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [962] = 3,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(58), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [973] = 1,
    ACTIONS(272), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [979] = 2,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(274), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [987] = 1,
    ACTIONS(278), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [993] = 1,
    ACTIONS(280), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [999] = 1,
    ACTIONS(282), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      sym_negate_operator,
  [1005] = 1,
    ACTIONS(284), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      sym_negate_operator,
  [1011] = 1,
    ACTIONS(286), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      sym_negate_operator,
  [1017] = 2,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(288), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1025] = 1,
    ACTIONS(292), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1031] = 3,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_string,
  [1041] = 2,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
  [1048] = 2,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_string,
  [1055] = 2,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
  [1062] = 2,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_statement_block,
  [1069] = 2,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      sym_routing_prefix,
  [1076] = 2,
    ACTIONS(306), 1,
      sym_string_fragment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
  [1083] = 2,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      sym_routing_prefix,
  [1090] = 1,
    ACTIONS(314), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1095] = 2,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SEMI,
  [1102] = 2,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
  [1109] = 1,
    ACTIONS(324), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1114] = 2,
    ACTIONS(168), 1,
      anon_sym_var,
    STATE(20), 1,
      sym_user_defined_variable,
  [1121] = 1,
    ACTIONS(326), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1126] = 2,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_string,
  [1133] = 1,
    ACTIONS(328), 1,
      anon_sym_SEMI,
  [1137] = 1,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1141] = 1,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1145] = 1,
    ACTIONS(334), 1,
      anon_sym_DOT,
  [1149] = 1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1153] = 1,
    ACTIONS(338), 1,
      anon_sym_EQ,
  [1157] = 1,
    ACTIONS(310), 1,
      anon_sym_SEMI,
  [1161] = 1,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [1165] = 1,
    ACTIONS(342), 1,
      sym_identifier,
  [1169] = 1,
    ACTIONS(344), 1,
      anon_sym_EQ,
  [1173] = 1,
    ACTIONS(346), 1,
      sym_identifier,
  [1177] = 1,
    ACTIONS(348), 1,
      sym_identifier,
  [1181] = 1,
    ACTIONS(350), 1,
      anon_sym_DOT,
  [1185] = 1,
    ACTIONS(352), 1,
      anon_sym_DOT,
  [1189] = 1,
    ACTIONS(354), 1,
      anon_sym_SEMI,
  [1193] = 1,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1197] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [1201] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [1205] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [1209] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1213] = 1,
    ACTIONS(366), 1,
      sym_declare_scope,
  [1217] = 1,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [1221] = 1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [1225] = 1,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [1229] = 1,
    ACTIONS(374), 1,
      anon_sym_SEMI,
  [1233] = 1,
    ACTIONS(376), 1,
      anon_sym_SEMI,
  [1237] = 1,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
  [1241] = 1,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [1245] = 1,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
  [1249] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [1253] = 1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
  [1257] = 1,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
  [1261] = 1,
    ACTIONS(390), 1,
      sym_identifier,
  [1265] = 1,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [1269] = 1,
    ACTIONS(394), 1,
      anon_sym_SEMI,
  [1273] = 1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
  [1277] = 1,
    ACTIONS(398), 1,
      sym_identifier,
  [1281] = 1,
    ACTIONS(400), 1,
      sym_identifier,
  [1285] = 1,
    ACTIONS(402), 1,
      sym_identifier,
  [1289] = 1,
    ACTIONS(404), 1,
      sym_identifier,
  [1293] = 1,
    ACTIONS(406), 1,
      sym_identifier,
  [1297] = 1,
    ACTIONS(408), 1,
      sym_identifier,
  [1301] = 1,
    ACTIONS(410), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 302,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 370,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 454,
  [SMALL_STATE(22)] = 468,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 525,
  [SMALL_STATE(26)] = 543,
  [SMALL_STATE(27)] = 553,
  [SMALL_STATE(28)] = 563,
  [SMALL_STATE(29)] = 573,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 613,
  [SMALL_STATE(34)] = 623,
  [SMALL_STATE(35)] = 633,
  [SMALL_STATE(36)] = 643,
  [SMALL_STATE(37)] = 653,
  [SMALL_STATE(38)] = 663,
  [SMALL_STATE(39)] = 673,
  [SMALL_STATE(40)] = 683,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 706,
  [SMALL_STATE(43)] = 721,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 753,
  [SMALL_STATE(46)] = 770,
  [SMALL_STATE(47)] = 787,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 813,
  [SMALL_STATE(50)] = 830,
  [SMALL_STATE(51)] = 847,
  [SMALL_STATE(52)] = 864,
  [SMALL_STATE(53)] = 881,
  [SMALL_STATE(54)] = 898,
  [SMALL_STATE(55)] = 907,
  [SMALL_STATE(56)] = 918,
  [SMALL_STATE(57)] = 929,
  [SMALL_STATE(58)] = 940,
  [SMALL_STATE(59)] = 951,
  [SMALL_STATE(60)] = 962,
  [SMALL_STATE(61)] = 973,
  [SMALL_STATE(62)] = 979,
  [SMALL_STATE(63)] = 987,
  [SMALL_STATE(64)] = 993,
  [SMALL_STATE(65)] = 999,
  [SMALL_STATE(66)] = 1005,
  [SMALL_STATE(67)] = 1011,
  [SMALL_STATE(68)] = 1017,
  [SMALL_STATE(69)] = 1025,
  [SMALL_STATE(70)] = 1031,
  [SMALL_STATE(71)] = 1041,
  [SMALL_STATE(72)] = 1048,
  [SMALL_STATE(73)] = 1055,
  [SMALL_STATE(74)] = 1062,
  [SMALL_STATE(75)] = 1069,
  [SMALL_STATE(76)] = 1076,
  [SMALL_STATE(77)] = 1083,
  [SMALL_STATE(78)] = 1090,
  [SMALL_STATE(79)] = 1095,
  [SMALL_STATE(80)] = 1102,
  [SMALL_STATE(81)] = 1109,
  [SMALL_STATE(82)] = 1114,
  [SMALL_STATE(83)] = 1121,
  [SMALL_STATE(84)] = 1126,
  [SMALL_STATE(85)] = 1133,
  [SMALL_STATE(86)] = 1137,
  [SMALL_STATE(87)] = 1141,
  [SMALL_STATE(88)] = 1145,
  [SMALL_STATE(89)] = 1149,
  [SMALL_STATE(90)] = 1153,
  [SMALL_STATE(91)] = 1157,
  [SMALL_STATE(92)] = 1161,
  [SMALL_STATE(93)] = 1165,
  [SMALL_STATE(94)] = 1169,
  [SMALL_STATE(95)] = 1173,
  [SMALL_STATE(96)] = 1177,
  [SMALL_STATE(97)] = 1181,
  [SMALL_STATE(98)] = 1185,
  [SMALL_STATE(99)] = 1189,
  [SMALL_STATE(100)] = 1193,
  [SMALL_STATE(101)] = 1197,
  [SMALL_STATE(102)] = 1201,
  [SMALL_STATE(103)] = 1205,
  [SMALL_STATE(104)] = 1209,
  [SMALL_STATE(105)] = 1213,
  [SMALL_STATE(106)] = 1217,
  [SMALL_STATE(107)] = 1221,
  [SMALL_STATE(108)] = 1225,
  [SMALL_STATE(109)] = 1229,
  [SMALL_STATE(110)] = 1233,
  [SMALL_STATE(111)] = 1237,
  [SMALL_STATE(112)] = 1241,
  [SMALL_STATE(113)] = 1245,
  [SMALL_STATE(114)] = 1249,
  [SMALL_STATE(115)] = 1253,
  [SMALL_STATE(116)] = 1257,
  [SMALL_STATE(117)] = 1261,
  [SMALL_STATE(118)] = 1265,
  [SMALL_STATE(119)] = 1269,
  [SMALL_STATE(120)] = 1273,
  [SMALL_STATE(121)] = 1277,
  [SMALL_STATE(122)] = 1281,
  [SMALL_STATE(123)] = 1285,
  [SMALL_STATE(124)] = 1289,
  [SMALL_STATE(125)] = 1293,
  [SMALL_STATE(126)] = 1297,
  [SMALL_STATE(127)] = 1301,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(80),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(79),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(108),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(85),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(105),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(104),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(72),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(24),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(40),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_statement, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 3, .production_id = 7),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 6, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 6, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 5, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 5, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 5, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2), SHIFT_REPEAT(60),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_declaration_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_declaration_repeat1, 2), SHIFT_REPEAT(71),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 3, .production_id = 8),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_field, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_attribute, 5, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_field, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_record, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_value, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 7, .production_id = 12),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_record, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 11),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_scope, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_key, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [396] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vcl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
