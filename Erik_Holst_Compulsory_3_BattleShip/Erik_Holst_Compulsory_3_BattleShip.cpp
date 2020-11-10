// Erik_Holst_Compulsory_3_BattleShip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "MainMenu.h"
#include <ctime>

int main()
{
	//login();
	srand((unsigned int)time(nullptr));
	while (true)
	{
		system("cls");
		std::cout << "Battleship V1.0\nBy Erik Holst" << std::endl;
		std::cout << "\n1: Change the password"
			"\n2: Play battleship"
			"\n3: Quit"
			"\nSelect an option (1-3): ";
		int task;
	
		std::cin >> task;
		switch (task)
		{
		case 1:
			newPassword();
			break;
		case 2:
			play();
			break;
		case 3:
			return 0;
		default:
			break;
		}
	}

}
	

