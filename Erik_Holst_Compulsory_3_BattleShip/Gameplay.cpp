#include "Gameplay.h"
#include "MainMenu.h"

const int M{ 6 };
const int N{ 6 };
const char BLANK = ' ';
const char SHIP = 'S';
const char MISS = 'M';
const char HIT = 'H';

void writeLetters() {
	std::cout << ' ';
	for (int i = 0; i < N; i++)
	{
		std::cout << "--";
	}
	
	std::cout << "-\n ";

	for (int i = 0; i < N; i++)
	{
		char letter = 65 + i;
		std::cout << '|'<< letter;
	}
	std::cout << '|';
}
int letterToNumber(char letter) // only big letters
{
	return static_cast<int>(letter) - 65;
}
void makeEmptyBoard(char board[M][N]) {
	for (int irow = 0; irow < M; irow++)
	{
		for (int icol = 0; icol < N; icol++)
		{
			board[irow][icol] = BLANK;
		}
	}
}

int randomRow() {
	return rand() % M;
}
int randomColumn() {
	return rand() % N;
}

void makeBoard(int numberOfShips, char board[M][N]) {
	int row = randomRow();
	int column = randomColumn();
	do
	{
		if (board[row][column] == BLANK)
		{
			board[row][column] = SHIP;
			row = randomRow();
			column = randomColumn();
			numberOfShips--;
		}
		else if (board[row][column] == SHIP)
		{
			row = randomRow();
			column = randomColumn();	
		}
	} while (numberOfShips > 0);
}

void printboard(char board[M][N]) {
	for (int irow = 0; irow < M; irow++)
	{
		std::cout << M - irow;
		for (int icol = 0; icol < N; icol++)
		{
			std::cout << '|' << board[irow][icol];
		}
		std::cout << "|\n";
	}
}

void printPlayerBoard(char board[M][N]) {
	for (int irow = 0; irow < M; irow++)
	{
		std::cout << M - irow;
		for (int icol = 0; icol < N; icol++)
		{
			if (board[irow][icol] == SHIP)
			{
				std::cout << "|" << BLANK;
			}
			else
			{
				std::cout << '|' << board[irow][icol];
			}
		}
		std::cout << "|\n";
	}
}
void shoot(char board[M][N], int& numberOfShips, int& numberOfHits, int& numberOfShots, int& amountOfShots) {
	
	std::string shot{ "  " };
	int shotRow;
	int shotCol;
	
	std::cout << "\nShoot the boats (e.g. B4): ";
	std::cin >> shot;

	shotCol = letterToNumber(shot[0]);
	shotRow = M-(shot[1]-48);


	if (board[shotRow][shotCol] == SHIP)
	{
		numberOfHits++;
		numberOfShots++;
		amountOfShots--;
		board[shotRow][shotCol] = HIT;
		numberOfShips--;
	}
	else
	{
		numberOfShots++;
		amountOfShots--;
		board[shotRow][shotCol] = MISS;
	}
	system("cls");
	std::cout << "You have used " << numberOfShots << " shots and have " << numberOfHits << " hits of " << numberOfShips << " ships.\n ";
	std::cout << "\n\nAmmunition: " << amountOfShots << std::endl;
}

void play() {
	char board[M][N]; // 2d array with M rows and N columns // you can use vectors too
	int numberOfHits{ 0 };
	int numberOfShots{ 0 };
	int numberOfShips{ 12 };
	int amountOfShots{ 18 };
	makeEmptyBoard(board);
	makeBoard(numberOfShips, board);
	do
	{
	//	printboard(board);		//Show the board to view posistions of ships.
		printPlayerBoard(board);

		writeLetters();
		shoot(board, numberOfShips, numberOfHits, numberOfShots, amountOfShots);

	} while (numberOfShips > 0 && amountOfShots > 0);
	if (numberOfShips == 0)
	{
		std::cout << "\nYou Won!";
	}
	else if (amountOfShots == 0)
	{
		std::cout << "\nYou Lose!";
	}
	std::cout << "\n\n";
	system("pause");
}
