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
	void setPlayer(const string& piece, bool isHuman); //Sets player piece and if AI or human
	string getPiece() const; //returns player piece "X" or "O"
	bool playerHuman() const; //returns true of player is Human, false if AI

private:
	bool isHuman;
	string piece;
};
#endif // !PLAYER_H
