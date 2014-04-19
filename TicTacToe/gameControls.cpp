#include "gameControls.h"

gameControls::gameControls()
{
	board = { "0", "1", "2", "3", "4", "5", "6", "7", "8" };
	playerTurn = 0;
	totalTurns = 0;
}
void gameControls::setBoard()
{
	cout << board[0] << "|" << board[1] << "|" << board[2];
	cout << "\n--|--|--\n";
	cout << board[3] << "|" << board[4] << "|" << board[5];
	cout << "\n--|--|--\n";
	cout << board[6] << "|" << board[7] << "|" << board[8];
	cout << endl;

}
void gameControls::addPlayers(int numOfPlayers)
{
	Player p1;
	Player p2;
	player.push_back(p1);
	player.push_back(p2);
	switch (numOfPlayers)
	{
	case 0: //Only AI
		player[0].setPlayer("X", false);
		player[1].setPlayer("0", false);

		break;

	case 1:
		player[0].setPlayer("X", true);
		player[1].setPlayer("0", false);

		break;

	case 2:
		player[0].setPlayer("X", true);
		player[1].setPlayer("0", true);

		break;

	default:

		cerr << "Incorrect info";
		break;		

	}
}

int gameControls::chooseSpot(int spot)
{
	switch (spot)
	{
	case 0:
		if (board[0] == "0")
		{
			board[0] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 1:
		if (board[1] == "1")
		{
			board[1] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 2:
		if (board[2] == "2")
		{
			board[2] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 3:
		if (board[3] == "3")
		{
			board[3] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 4:
		if (board[4] == "4")
		{
			board[4] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 5:
		if (board[5] == "5")
		{
			board[5] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 6:
		if (board[6] == "6")
		{
			board[6] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 7:
		if (board[7] == "7")
		{
			board[7] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	case 8:
		if (board[8] == "8")
		{
			board[8] = player[playerTurn].getPiece();
		}
		else
		{
			cerr << "Cannot move there.\n";
		}
		break;

	default:
		cerr << "Incorrect choice";
		break;


	}
}
int gameControls::nextTurn()
{
	if (playerTurn == 0)
	{
		return playerTurn = 1;
		totalTurns++;
	}
	else
	{
		return playerTurn = 0;
		totalTurns++;
	}
}

bool gameControls::isWinner()
{
	/*
	   0 | 1 | 2
	  ---|---|---
	   3 | 4 | 5
	  ---|---|---
	   6 | 7 | 8
	*/

	if ((board[0] == board[1] && board[1] == board[2]) ||
		(board[3] == board[4] && board[4] == board[5]) ||
		(board[6] == board[7] && board[7] == board[8]) ||
		(board[0] == board[3] && board[3] == board[6]) ||
		(board[1] == board[4] && board[4] == board[7]) ||
		(board[2] == board[5] && board[5] == board[8]) ||
		(board[0] == board[4] && board[4] == board[8]) ||
		(board[2] == board[4] && board[4] == board[6]))
	{
		return true;
	}
	else if (totalTurns >= 9)
	{
		//is a tie
		return false;
	}
	else
	{
		return false;
	}
}

void gameControls::takeTurn()
{
	isWinner();
	
	while (!isWinner())
	{
		nextTurn();
		int choice;

		if (player[playerTurn].playerHuman())
		{
			cout << player[playerTurn].getPiece() << "turn\n";
			cin >> choice;

			chooseSpot(choice);
			
		}
		else //AI's turn
		{
			cout << player[playerTurn].getPiece() << "turn\n";
			
			choice = rand() % 10;
			while (board[choice] == "X" || board[choice] == "O")
			{
				choice = rand() % 10;
			}
			chooseSpot(choice);

		}

	}
}