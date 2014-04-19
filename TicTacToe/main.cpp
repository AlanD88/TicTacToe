/*
	Duncan, Alan
	April 18, 2014

	Tic-Tac-Toe
	
	Simple game that players can choose any number of players from 0-2 with an an intelligent AI
	
*/
#include <iostream>

#include "gameControls.h"

using namespace std;

void intro(); //Initial menu
void processChoice(gameControls& newGame);


int main()
{
	
	gameControls newGame;

	intro();
	processChoice(newGame);

	newGame.takeTurn();
	
	system("pause");
	return 0;
}

void intro()
{
	cout << "Welcome to \n";
	cout << "Tic-Tac-Toe\n\n";

	
}

void processChoice(gameControls& newGame)
{
	int choice;
	string playerPiece;

	cout << "\nPlease choose pick how many players(0-2)...";
	cin >> choice;
	cout << endl;
	
	if (choice >= 0 && choice < 3)
	{
		newGame.addPlayers(choice);
	}
	else
	{
		cerr << choice << " is an invalid selection" << endl;
		
	}

	
}