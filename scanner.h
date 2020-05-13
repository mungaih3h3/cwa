#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

typedef enum {
  // Single-character tokens.
  TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
  TOKEN_LEFT_BRACE, TOKEN_RIGHT_BRACE,
  TOKEN_COMMA, TOKEN_DOT, TOKEN_MINUS, TOKEN_PLUS,
  TOKEN_SEMICOLON, TOKEN_SLASH, TOKEN_STAR,

  // One or two character tokens.
  TOKEN_BANG, TOKEN_BANG_EQUAL,
  TOKEN_EQUAL, TOKEN_EQUAL_EQUAL,
  TOKEN_GREATER, TOKEN_GREATER_EQUAL,
  TOKEN_LESS, TOKEN_LESS_EQUAL,

  // Literals.
  TOKEN_IDENTIFIER, TOKEN_STRING, TOKEN_NUMBER,

  // Keywords.
  TOKEN_AND, TOKEN_CLASS, TOKEN_ELSE, TOKEN_FALSE,
  TOKEN_FOR, TOKEN_FUN, TOKEN_IF, TOKEN_NIL, TOKEN_OR,
  TOKEN_PRINT, TOKEN_RETURN, TOKEN_SUPER, TOKEN_THIS,
  TOKEN_TRUE, TOKEN_VAR, TOKEN_WHILE,

  TOKEN_ERROR,
  TOKEN_EOF
} TokenType;

typedef struct {
  TokenType type;
  const char* start;
  int length;
  int line;
} Token;

void initScanner(const char* source);
Token scanToken();

#endif // SCANNER_H_INCLUDED


/*
static TokenType identifierType()
{
    switch (scanner.start[0]) {
    case 'a': return checkKeyword(1, 2, "nd", TOKEN_AND);
    case 'c':
            if(scanner.current - scanner.start > 1)
            {
                switch(scanner.start[1])
                {
                    case 'l': return checkKeyword(2, 4, "ass", TOKEN_CLASS);
                    case 'h': return checkKeyword(2, 7, "apisha", TOKEN_PRINT)
                }
            }
    case 'e': return checkKeyword(1, 3, "lse", TOKEN_ELSE);
    case 'f':
      if (scanner.current - scanner.start > 1) {
        switch (scanner.start[1]) {
          case 'a': return checkKeyword(2, 3, "lse", TOKEN_FALSE);
          case 'o': return checkKeyword(2, 1, "r", TOKEN_FOR);
          case 'u': return checkKeyword(2, 1, "n", TOKEN_FUN);
        }
      }
      break;
    case 'i': return checkKeyword(1, 1, "f", TOKEN_IF);
    case 'j': return checkKeyword(1, 3, "ina", TOKEN_VAR);
    case 'k':
        if(scanner.current - scanner.start > 1)
        {
            switch(scanner.start[1])
            {
            case 'a':
                if(scanner.current - scanner.start > 2)
                {
                    switch(scanner.start[2])
                    {
                        case 'm': return checkKeyword(3, 4, "a", TOKEN_IF);
                        case 'z': return checkKeyword(3, 4, "i", TOKEN_FUN)
                    }
                }
                        case 'w': return checkKeyword(2, 3, "a", TOKEN_FOR);
            }
        }
    case 'l': return checkKeyword(1, 6, "asivyo", TOKEN_ELSE);
    case 'n': return checkKeyword(1, 2, "il", TOKEN_NIL);
    case 'o': return checkKeyword(1, 1, "r", TOKEN_OR);
    case 'p': return checkKeyword(1, 4, "rint", TOKEN_PRINT);
    case 'r': return checkKeyword(1, 5, "eturn", TOKEN_RETURN);
    case 's': return checkKeyword(1, 4, "uper", TOKEN_SUPER);
    case 't':
      if (scanner.current - scanner.start > 1) {
        switch (scanner.start[1]) {
          case 'h': return checkKeyword(2, 2, "is", TOKEN_THIS);
          case 'r': return checkKeyword(2, 2, "ue", TOKEN_TRUE);
        }
      }
      break;
    case 'v': return checkKeyword(1, 2, "ar", TOKEN_VAR);
    case 'w':
            if(scanner.current - scanner.start > 1)
            {
                    switch(scanner.start[1])
                    {
                        case 'h': return checkKeyword(2, 4, "ile", TOKEN_WHILE);
                        case 'a': return checkKeyword(2, 5, "kati", TOKEN_WHILE);
                    }
            }
  }
  return TOKEN_IDENTIFIER;
}
*/



























