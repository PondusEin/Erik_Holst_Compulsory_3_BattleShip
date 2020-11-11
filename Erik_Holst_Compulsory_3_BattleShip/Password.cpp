#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
#include <Windows.h>
#include "MainMenu.h"

const char boardPassword[4][4]{
	{'A', 'B', 'C', 'D'},
	{'E', 'F', 'G', 'H'},
	{'I', 'J', 'K', 'L'},
	{'M', 'N', 'O', 'P'}
};

void printBoard() {
	system("cls");
	std::cout << "Enter password: \n";
	for (size_t irow = 0; irow < 4; irow++)
	{
		for (size_t icol = 0; icol < 4; icol++)
		{
			std::cout << boardPassword[irow][icol];
		}
		std::cout << "\n";
	}
}

std::string passwordString(std::string password) {
	std::string passStringFromUser ="A";
	int PosX{ 0 };
	int PosY{ 0 };
	do
	{
		printBoard();
		std::cout << "Move with wasd, WASD or arrow keys. Press Spacebar to exit and confirm password.\n";
		std::cout << "Input: " << passStringFromUser;
		int input = _getch();
		if (input == ' ')
		{
			return passStringFromUser;
		}
		switch (input) {
		case 'w': case 'W': case 72:
			if (PosY!=0)
			{
				PosY--;
				passStringFromUser += boardPassword[PosY][PosX];
			}
			break;
		case 'a': case 'A': case 75:
			if (PosX!=0)
			{
				PosX--;
				passStringFromUser += boardPassword[PosY][PosX];
			}break;
		case 's': case 'S': case 80:
			if (PosY!=3)
			{
				PosY++;
				passStringFromUser += boardPassword[PosY][PosX];
			}
			break;
		case 'd': case 'D': case 77:
			if (PosX!=3)
			{
			PosX++;
			passStringFromUser += boardPassword[PosY][PosX];
			}
			break;
		default:
			break;
		}
	} while (true);
}

void newPassword() {
	std::string password;
	std::ofstream Password("Password.txt", std::ofstream::trunc );
	Password << passwordString(password);
	Password.close();
	std::cout << "\n\nNew password confirmed. Exit to test the new password." << std::endl;
	system("pause");
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
		while (password != passwordString(password))
		{
			std::cout << "\nError: Wrong password.";
			system("pause");
		}
	}
	PasswordFile.close();
	std::cout << "\n\nPassword confirmed" <<std::endl;
	system("pause");
}