#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
#include "MainMenu.h"

const char boardPassword[4][4]{
	{'A', 'B', 'C', 'D'},
	{'E', 'F', 'G', 'H'},
	{'I', 'J', 'K', 'L'},
	{'M', 'N', 'O', 'P'}
};

void printBoard() {
	system("cls");
	for (int i = 65; i < sizeof(boardPassword); i++)
	{
		for (int j = 0; j < sizeof(boardPassword); j++)
		{

		}
		std::cout << "\n\n";
	}
}

void newPassword() {
	std::ofstream Password{ "Password.txt", std::ofstream::trunc };

	Password.close();
}
void login() {

	std::ifstream PasswordFile("Password.txt");

	PasswordFile.close();
}