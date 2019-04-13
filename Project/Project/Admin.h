#include "Equipment.h"
#include "FileHandler.h"
#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include <fstream>

using namespace std;

class Admin {
public:
    void loanRecord(string , string, string, string, string, string);
    void displayLoanRecord();
    void displayItemsByCat();
    void produceNewTxt();
    
private:
    string userId;
    string password;
    string loanDate;
    string itemId;
    string itemName;
    string borrowerName;
    string returnDate;
    string status;
};
#endif
