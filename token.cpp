#include "Token.h"
Token::Token(TOKEN t) : token(t) {}
TOKEN Token::Get() const
{
	return token;
}
void Token::Print() const
{
	cout << TOKENS[token];
}
