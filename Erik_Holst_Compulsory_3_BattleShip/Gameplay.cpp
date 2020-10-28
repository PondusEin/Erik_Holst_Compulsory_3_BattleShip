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

int letterToNumber(char letter) // only big letters
{
	return static_cast<int>(letter) - 65;
}
void playBS() {
	char board[M][N]; // 2d array with M rows and N columns // you can use vectors too
	int numberOfHits;
	int numberOfShots;

	printboard(board[M][N]);
}
