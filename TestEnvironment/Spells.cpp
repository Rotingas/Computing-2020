#include "Spells.h"

//Constructor
spells::spells()
	: spellList{}
	, totalSpells()
{
}

//Deconstructor
spells ::~spells()
{
}
//outputs all spells
void outputAllSpells(array <int, 2> spellList, const int totalSpells)
{
	for (int i = 0; i < totalSpells; i++)
	{
		spellList[0] = 1;
	}
}