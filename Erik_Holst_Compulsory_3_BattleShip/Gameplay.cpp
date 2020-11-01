#include "Gameplay.h"
#include "MainMenu.h"

const int M = 6, N = 6;
const char BLANK = ' ';
const char SHIP = 'S';
const char MISS = 'M';
const char HIT = 'H';


void printboard(char board) {
	for (int i = 0; i < M; i++)
	{
		for (int i = 0; i < N; i++)
		{
			std::cout << board[M][N];
		}
	}
}
void makeEmptyBoard() {

}
int randomRow() {

}
int randomColumn() {

}
void writeLetters() {

}
void makeBoard(int numberOfShips) {

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


	printboard(board[M][N]);
}
