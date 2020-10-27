#include "Password.h"
#include <vector>
#include <conio.h>

const char boardPassword[4][4]{
	{'A', 'B', 'C', 'D'},
	{'E', 'F', 'G', 'H'},
	{'I', 'J', 'K', 'L'},
	{'M', 'N', 'O', 'P'}
};

void password() {
	std::fstream Password{ "Password.txt", std::ios::out};
	if (Password.is_open())
	{

	}
	Password.close();
}