#ifndef MENU_H
#define MENU_H

int userMenu(bool hint)
{
	system("cls");
	int choice;
	do {
		cout << "Select action" << endl;
		cout << "-----------------------" << endl;
		cout << "1) Available equipments" << endl;
		cout << "2) Loan record" << endl;
		cout << "3) Borrow" << hint << endl;
		cout << "4) Return" << endl;
		cout << "9) Exit " << endl;
		cout << endl;
		cout << "Your choice: ";
		cin >> choice;
	} while (choice < 1 || choice > 4 || choice != 9);
	return choice;
}

#endif