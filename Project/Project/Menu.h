#ifndef MENU_H
#define MENU_H

// not done yet
int userMenu()
{
	system("cls");
	int choice;
	do {
		cout << "Select function: " << endl;
		cout << "----------------" << endl;
		cout << "1) Available equipments" << endl;
		cout << "2) Loan record" << endl;
		cout << "3) Borrow" << hint << endl;
		cout << "4) Return" << endl;
		cout << "9) Exit " << endl;
		cout << endl;
		cout << "Your choice: ";
		cin >> choice;
	} while (choice < 1 || choice > 6);
	return choice;
}

#endif