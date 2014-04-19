#ifndef GAMECONTROLS_H
#define GAMECONTROLS_H

#include "Player.h"

#include <iostream>
#include <vector>
#include <string>

class gameControls : public Player
{
public:
	gameControls();
	void setBoard();
	void addPlayers(int numOfPlayers);
	int chooseSpot(int spot);
	int nextTurn();
	void takeTurn();
	bool isWinner();
private:
	vector<Player> player;
	vector<string> board;
	int playerTurn;
	int totalTurns;
};
#endif // !GAMECONTROLS_H
