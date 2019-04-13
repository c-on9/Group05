#include "Admin.h"
#include "User.h"
#include "Equipment.h"
#include "LoanControl.h"
#include "FileHandler.h"
#include <iostream>

using namespace std;

void Admin::loanRecord(string _loanDate, string _itemId, string _itemName, string _borrowerName, string _returnDate, string _status) {
    this->loanDate = _loanDate;
    this->itemId = _itemId;
    this->itemName = _itemName;
    this->borrowerName = _borrowerName;
    this->returnDate = _returnDate;
    this->status = _status;
}

void Admin::displayLoanRecord() {
    string line;
    ifstream fin;
    fin.open("user.txt");
    string user;
    
    if (fin.is_open()) {
        while (getline(file, user))
            cout << user << endl;
    }
    cout << endl;
    file.close;
}

void Admin::displayItemsbyCat() {
    
}

void Admin::produceNewTxt() {
    ifstream fin;
    ifstream user("loanRecord.txt");
    ifstream campEquipment("EquipementList.txt");
    ofstream combined_file("loan.txt");
    combined_file << user.rdbuf() << campEquipment.rdbuf();
    
    fin.close();
}
