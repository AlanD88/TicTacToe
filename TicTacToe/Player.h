#ifndef PLAYER_H
#define PLAYTER_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Player
{
public:
	Player();
	void setPlayer(const string& piece, bool isHuman);
	string getPiece() const;
	bool playerHuman();

private:
	bool isHuman;
	string piece;
};
#endif // !PLAYER_H
