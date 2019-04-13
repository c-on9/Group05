#include "Menu.h"
#include <iostream>
using namespace std;

int main() {
	bool quit;
	int size;
	int* arr = NULL;
	do {
		quit = executeMenu(selectMenu(), arr, size);
	} while (!quit);
	if (arr != NULL)
		delete[] arr;
	system("pause");
	return 0;
}