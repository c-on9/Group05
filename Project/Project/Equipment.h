#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class Equipment
{
private:
	string id;
	string itemid;
	string itemname;
	string brand;
	string itemtype;
	string date;
	string condition;
	string status;

public:
	string getId() const;
	string getItemId() const;
	string getItemName() const;
	string getBrand() const;
	string getItemType() const;
	string getDate() const;
	string getCondition() const;
	string getStatus() const;
	void setCondition();
	void setStatus();


};

class Tent : Equipment
{
public:
	string tentsize;
	string tenttype;
	string numdoors;
	bool doulayer;
	string color;
};
class Lantern : Equipment
{
public:
	string lantsize;
	string lanttype;
	string fueltype;
	
};
class Stove : Equipment
{
public:
	string stovetype;
	string fueltype;
};




#endif