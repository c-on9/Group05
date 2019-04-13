#include "Equipment.h"

string Equipment::getItemId() const {
	return itemId;
}

string Equipment::getItemName() const {
	return itemName;
}

string Equipment::getBrand() const {
	return brand;
}

string Equipment::getItemType() const {
	return itemType;
}

string Equipment::getPurchaseDate() const {
	return purchaseDate;
}

string Equipment::getCondition() const {
	return condition;
}

string Equipment::getStatus() const {
	return status;
}

void Equipment::setCondition(const string& _condition) {
    this->condition = _condition;
}


void Equipment::setStatus(const string& _status) {
    this->status = _status;
}


bool Equipment::available() {
    if (!getCondition().compare("good") && !getStatus().compare("in")) {
        return true;
	}
	else {
		return false;
	}
}


Equipment::Equipment(string _itemId, string _itemName, string _brand, string _itemType, string _purchaseDate, string _condition, string _status) {
    this->itemId = _itemId ;
    this->itemName = _itemName;
    this->brand = _brand;
    this->itemType = _itemType;
    this->purchaseDate = _purchaseDate;
    this->condition = _condition;
    this->status = _status;
}


Equipment::~Equipment() {

}


string Tent::getTentSize() {
    return tentSize;
}


string Tent::getTentType() {
    return tentType;
}


string Tent::getNumberOfDoors() {
    return numberOfDoors;
}


string Tent::getDoubleLayer() {
    return doubleLayer;
}


string Tent::getColor() {
    return color;
}


Tent::Tent(string _itemId, string _itemName, string _brand, string _itemType, string _purchaseDate, string _condition, string _status, string _tentSize, string _tentType, string _numberOfDoors, string _doubleLayer, string _color)
: Equipment::Equipment(itemId, itemName, brand, itemType, purchaseDate, condition, status)
{
    this->tentSize = _tentSize;
    this->tentType = _tentType;
    this->numberOfDoors = _numberOfDoors;
    this->doubleLayer = _doubleLayer;
    this->color = _color;
}


string Lantern::getLanternSize() {
    return lanternSize;
}


string Lantern::getLanternType() {
    return lanternType;
}


string Lantern::getFuelType() {
    return fuelType;
}


Lantern::Lantern(string _itemId, string _itemName, string _brand, string _itemType, string _purchaseDate, string _condition, string _status, string _lanternSize, string _lanternType, string _fuelType)
: Equipment::Equipment(itemId, itemName, brand, itemType, purchaseDate, condition, status)
{
    this->lanternSize = _lanternSize;
    this->lanternType = _lanternType;
    this->fuelType = _fuelType;
}


string Stove::getStoveType() {
    return stoveType;
}


string Stove::getFuelType() {
    return fuelType;
}


Stove::Stove(string _itemId, string _itemName, string _brand, string _itemType, string _purchaseDate, string _condition, string _status, string _stoveType, string _fuelType)
: Equipment::Equipment(itemId, itemName, brand, itemType, purchaseDate, condition, status)
{
    this->stoveType = _stoveType;
    this->fuelType = _fuelType;
}


