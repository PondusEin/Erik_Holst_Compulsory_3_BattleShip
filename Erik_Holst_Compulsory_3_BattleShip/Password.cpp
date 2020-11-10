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
	for (size_t irow = 0; irow < 4; irow++)
	{
		for (size_t icol = 0; icol < 4; icol++)
		{

		}
		std::cout << "\n\n";
	}
}

void newPassword() {
	std::ofstream Password("Password.txt", std::ofstream::trunc );

	Password.close();
}
void login() {
	system("cls");
	std::string password;
	std::ifstream PasswordFile("Password.txt");
	PasswordFile >> password;
	if (password == "" )
	{
		newPassword();
	}
	else
	{
		std::cout << "Enter password: ";

	}
	PasswordFile.close();
}