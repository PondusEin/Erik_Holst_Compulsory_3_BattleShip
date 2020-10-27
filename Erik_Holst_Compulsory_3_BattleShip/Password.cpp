#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
#include "MainMenu.h"

const char boardPassword[4][4]{
	{'A', 'B', 'C', 'D'},
	{'E', 'F', 'G', 'H'},
	{'I', 'J', 'K', 'L'},
	{'M', 'N', 'O', 'P'}
};

void printBoard() {
	system("cls");
	for (size_t i = 0; i < boardPassword; i++)
	{
		for (size_t j = 0; j < 4; j++)
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