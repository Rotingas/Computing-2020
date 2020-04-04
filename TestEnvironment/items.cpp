#include "Items.h"

//Constructor
items::items()
	: itemList{}
	, totalItems()
{
}

//Deconstructor
items ::~items()
{
}
//Holds list of all ingame items ID No., size can be increased by changing array<int,<size>> itemList
void items::outputAllItems()
{
	for (int i = 0; i < totalItems; i++)
	{
		itemList[0] = 1;
	}
}