#include "Spell_Book.h"
#include "Spells.h"
#include <iostream>
spellBook::spellBook()
	: spellBookCapacity(5)
	, spellBookContents{}
	, spellBookSlot(0)
{
}

spellBook :: ~spellBook()
{
}
//specifies entity's bag type
void spellBook::specifySpellBookType(int spellBookType)
{
	switch (spellBookType) {
	case 0: spellBookCapacity = 5;
		break;
	case 1: spellBookCapacity = 10;
		break;
	case 2: spellBookCapacity = 15;
		break;
	}
}
//function to add an item to an entity's spellBook
void spellBook::addSpell(float spellDataValue)
{

	if (spellBookSlot < spellBookCapacity)
	{
		spellBookContents[spellBookSlot] = spellDataValue;
		cout << spellBookContents[spellBookSlot];
		cout << " invslot" << spellBookSlot << "\n";
		spellBookSlot++;
	}
	else
	{
		cout << "SPELLBOOK FULL";
	}

}
//removes and item from the entity's spellBook
void spellBook::removeSpell(int spellDataSlot)
{
	//removes item
	spellBookContents[spellBookSlot] = NULL;
	//organises spell book
	int organisationspellBookSlot = spellBookSlot;
	while (spellBookContents[organisationspellBookSlot] == NULL && spellBookContents[organisationspellBookSlot - 1] != NULL)
	{
		spellBookContents[organisationspellBookSlot] = spellBookContents[organisationspellBookSlot + 1];
		spellBookContents[organisationspellBookSlot + 1] = NULL;
		organisationspellBookSlot++;
	}
}
//returns entity's spellBook contents
void spellBook::getSpellBook()
{

	for (int i = 0; i < spellBookCapacity; i++)
	{
		cout << spellBookContents[i];
	}

	;
}
