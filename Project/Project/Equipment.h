#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
using namespace std;


class Equipment {
public:
    Equipment(string, string, string, string, string, string, string);
    ~Equipment();
    
    virtual void outputEquipmentDetail() = 0;    // pure abstract class
	string getItemId() const;
	string getItemName() const;
	string getBrand() const;
	string getItemType() const;
	string getPurchaseDate() const;
	string getCondition() const;
	string getStatus() const;
	void setCondition(const string& _condition);
	void setStatus(const string& _status);
	bool available();

protected:
    string itemId;
    string itemName;
    string brand;
    string itemType;
    string purchaseDate;
    string condition;
    string status;
};


class Tent : public Equipment {
public:
    Tent(string, string, string, string, string, string, string, string, string, string, string, string);
    
    string getTentSize();
    string getTentType();
    string getNumberOfDoors();
    string getDoubleLayer();
    string getColor();
    
    
private:
    string tentSize;
    string tentType;
    string numberOfDoors;
    string doubleLayer;
    string color;
};


class Lantern : public Equipment {
public:
    Lantern(string, string, string, string, string, string, string, string, string, string);
    string getLanternSize();
    string getLanternType();
    string getFuelType();
    
    
private:
    string lanternSize;
    string lanternType;
    string fuelType;
};


class Stove : public Equipment {
public:
    Stove(string, string, string, string, string, string, string, string, string);
    string getStoveType();
    string getFuelType();
    

private:
    string stoveType;
    string fuelType;
};


#endif
