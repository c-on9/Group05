#ifndef LOANCONTROL_H
#define LOANCONTROL_H

#include <iostream>
#include <sstream>
#include <string>

#include "Equipment.h"
#include "User.h"
#include "FileHandler.h"

void prepare(User*& user, Tent*& tents, Stove*& stoves, Lantern*& lanterns, string**& records, int &size);

string getDate();

bool isWordCharacter(char c);

void getUserInformation(User*& user, string userInput);

void convertUserInformation(User*& user, string *const userInfo);

void getEquipments(Tent*& tents, Stove*& stoves, Lantern*& lanterns);

void updateEquipments(Tent *const &tents, Stove *const &stoves, Lantern *const &lanterns);

void getLoanRecord(string **&records, int &size);

void updateLoanRecord(string *const*const records, int size);

void performDisplayLoanAvailableItem(Tent *const &tents, Stove *const &stoves, Lantern *const &lanterns);

void performBorrowEquipment(User *const &user, Tent *const &tents, Stove *const &stoves, Lantern *const &lanterns, string**& records, int &size);

string **getUserCurrentBorrowRecord(User* const& user, string *const*const records, int &size, int &idSize);

void performDisplayUserBorrowedItem(User *const &user, Tent *const &tents, Stove *const &stoves, Lantern *const &lanterns, string** &records, int &size);

void performReturnItem(User* const& user, Tent* const& tents, Stove* const& stoves, Lantern* const& lanterns, string** &records, int &size);

#endif
