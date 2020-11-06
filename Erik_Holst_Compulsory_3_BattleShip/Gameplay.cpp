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
void printboard(char board[M][N]) {
	for (int irow = 0; irow < M; irow++)
	{
		std::cout << "\t" << irow+1;
		for (int icol = 0; icol < N; icol++)
		{
			std::cout << '|' << board[irow][icol];
			board[irow][icol] = ' ';
		}
		std::cout << "|" << std::endl;
	}
	std::cout << "\t -------------\n";
	std::cout << "\t" << ' ';
	for (int i=0; i < 6; i++)
	{
		std::cout << "|";
		writeLetters(i);
	}
	std::cout << '|';
}
void makeEmptyBoard(char board[M][N]) {
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			board[i][j] = BLANK;
		}
	}
}
int randomRow() {
	return 0;
}
int randomColumn() {
	return 0;
}

void makeBoard(int numberOfShips, char board[M][N]) {

}
void printPlayerBoard() {

}
void shoot() {

}
void play() {

}
int letterToNumber(char letter) // only big letters
{
	return static_cast<int>(letter) - 65;
}
void playBS() {


	printboard(board);
}
