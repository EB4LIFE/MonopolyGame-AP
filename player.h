#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "Token.h"
class Player
{
private:
	Token token;
	int cash;
	bool is_in_jail;
public:
	Player(const Token&);
	Token GetToken() const;
	void SetToken(const Token&);
	void PutInJail();
	void FreeFromJail();
	bool IsInJail() const;
	int CalcAvailableAssets() const;
};
#endif // !PLAYER_H
