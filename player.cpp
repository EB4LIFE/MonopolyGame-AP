#include "Player.h"
Player::Player(const Token& t) :
	token(t), cash(1500), is_in_jail(false)
{}
Token Player::GetToken() const
{
	return token;
}
void Player::SetToken(const Token& t)
{
	token = t;
}
void Player::PutInJail()
{
	is_in_jail = true;
}
void Player::FreeFromJail()
{
	is_in_jail = false;
}
bool Player::IsInJail() const
{
	return is_in_jail;
}
int Player::CalcAvailableAssets() const
{
	return cash;
}
