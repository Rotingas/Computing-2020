#pragma once
#include "Spell_Book.h"
#include <iostream>
#include <array>
#include "spells.h"

#define LIGHT	0
#define COMPENDIUM 1
#define HULKING 2

class spellBook: public spells
{
public:

	//constructor
	spellBook();
	//deconstructor
	~spellBook();

private:

	//holds contents of entity's inventory
	std::array<int, 15> spellBookContents;
	//total capacity of inventory
	int spellBookCapacity;
	//each item is held in a unique slot
	int spellBookSlot;
	//generic value parameter
	int value;
	//parameter used to hold entity's bag type
	int spellBookType;
public:

	//specifies entity's bag type
	void specifySpellBookType(int bagType);
	//function to add an item to an entity's inventory
	void addSpell(float itemDataValue);
	//removes and item from the entity's inventory
	void removeSpell(int inventorySlot);
	//returns entity's inventory contents
	void getSpellBook();

};