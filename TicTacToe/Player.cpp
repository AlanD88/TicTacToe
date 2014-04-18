#include "Player.h"

Player::Player() {}
void Player::setPlayer(const string& piece, bool isHuman)
{
	this->piece = piece;
	this->isHuman = isHuman;
}
string Player::getPiece() const
{
	return piece;
}
bool Player::playerHuman()
{
	return isHuman;
}