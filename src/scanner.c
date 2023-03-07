// This portion of code is derived from
// https://github.com/tree-sitter/tree-sitter-ocaml Which is licensed under the
// MIT licence :
//
// MIT License
//
// Copyright (c) 2020 Max Brunsfeld and Pieter Goetschalckx
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <tree_sitter/parser.h>

enum { MULTILINE_COMMENT };

void *tree_sitter_tamarin_external_scanner_create() { return NULL; }

void tree_sitter_tamarin_external_scanner_destroy(void *payload) {}

void tree_sitter_external_extra_tokens_external_scanner_reset(void *payload) {}

unsigned tree_sitter_tamarin_external_scanner_serialize(void *payload,
                                                        char *buffer) {
  return true;
}

void tree_sitter_tamarin_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {}

bool tree_sitter_tamarin_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *whitelist) {
  if (whitelist[MULTILINE_COMMENT]) {
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
           lexer->lookahead == '\n') {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead != '/')
      return false;
    lexer->advance(lexer, false);
    if (lexer->lookahead != '*')
      return false;
    lexer->advance(lexer, false);

    int depth = 1;

    for (;;) {
      if (depth == 0) {
        lexer->result_symbol = MULTILINE_COMMENT;
        return true;
      }

      switch (lexer->lookahead) {
      case '/':
        lexer->advance(lexer, false);
        if (lexer->lookahead == '*')
          depth++;
        break;
      case '*':
        do {
          lexer->advance(lexer, false);
        } while(lexer->lookahead == '*');
        if (lexer->lookahead == '/')
          depth--;
        break;
      }

      if(lexer->eof(lexer)) {
        lexer->result_symbol = MULTILINE_COMMENT;
        return true;
      }

      lexer->advance(lexer, false);
    }
  }

  return false;
}