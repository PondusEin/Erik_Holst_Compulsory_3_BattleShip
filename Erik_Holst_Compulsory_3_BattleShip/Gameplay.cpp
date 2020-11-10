#include "Gameplay.h"
#include "MainMenu.h"

const int M{ 6 };
const int N{ 6 };
const char BLANK = ' ';
const char SHIP = 'S';
const char MISS = 'M';
const char HIT = 'H';

void writeLetters(int& i) {
	char letter = i + 65;
	std::cout << letter;
	return;
}

void makeEmptyBoard(char board[M][N]) {
	for (int irow = 0; irow < M; irow++)
	{
		std::cout << "\t-+-+-+-+-+-+-+\n";
		std::cout << "\t" << irow + 1;
		for (int icol = 0; icol < N; icol++)
		{
			board[irow][icol] = BLANK;
			std::cout << '|' << board[irow][icol];
		}
		std::cout << "|" << std::endl;
	}
	std::cout << "\t-+-+-+-+-+-+-+\n";
	std::cout << "\t" << ' ';
	for (int i = 0; i < 6; i++)
	{

		std::cout << "|";
		writeLetters(i);
	}
	std::cout << '|';
}
int randomRow() {
	return 0;
}
int randomColumn() {
	return 0;
}

void makeBoard(int numberOfShips, char board[M][N]) {

}
void printboard() {
	makeEmptyBoard(board);
}
void printPlayerBoard() {

}
void shoot() {

}
int letterToNumber(char letter) // only big letters
{
	return static_cast<int>(letter) - 65;
}
void play() {
	printboard();
}
