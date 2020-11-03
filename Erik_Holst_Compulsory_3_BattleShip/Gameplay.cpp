#include "Gameplay.h"
#include "MainMenu.h"

const int M = 6, N = 6;
const char BLANK = ' ';
const char SHIP = 'S';
const char MISS = 'M';
const char HIT = 'H';


void printboard(char board[][6]) {
	for (int i = 0; i < 6; i++)
	{
		std::cout << '|' << i;
		for (int i = 0; i < 6; i++)
		{
			std::cout << '_';
		}
	}
	getchar();
}
void makeEmptyBoard() {

}
int randomRow() {
	return 0;
}
int randomColumn() {
	return 0;
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


	printboard(board);
}
