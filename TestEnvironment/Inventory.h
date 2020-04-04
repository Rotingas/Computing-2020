#pragma once
#include "inventory.h"
#include <iostream>
#include <array>
#include "items.h"

#define LIGHTWEIGHT	0
#define REGULAR 1
#define HEFTY 2

class inventory: public items
{
public:
	
	//constructor
	inventory();
	//deconstructor
	~inventory();

private:
	
	const size_t size = 15;
	//holds contents of entity's inventory
	std::array <int,75> inventoryContents{};
	//parameter used to hold entity's bag type
	int bagType;
	//each item is held in a unique slot
	int inventorySlot;
	//total capacity of inventory
	int inventoryCapacity;
	//generic value parameter
	int value;
public:

	//specifies entity's bag type
	void specifyBagType(int bagType);
	//function to add an item to an entity's inventory
	void addItem(float itemDataValue);
	//removes and item from the entity's inventory
	void removeItem(int inventorySlot);
	//returns entity's inventory contents
	int getInventory();
	
	};