#pragma once
#include "Spells.h"
#include <iostream>
#include <array>

using namespace std;

class spells
{
public:
	//constructor
	spells();
	//deconstructor
	~spells();
private:
	//number of items in list
	const int totalSpells = 2;
	//master list of all items
	array<int, 2> spellList;

#define FIREBALL 1
#define HEAL 2
#define SUMMON 3
public:
	//outputs all spells
	void outputAllSpells(array<int, 2> itemList, const int totalItems);

};