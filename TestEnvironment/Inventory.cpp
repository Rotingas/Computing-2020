#include "Inventory.h"
#include "items.h"

//constructor
inventory::inventory()
	: inventorySlot(0)
	, inventoryCapacity(15)
	, inventoryContents{}
{		

}
//deconstructor
inventory :: ~inventory()
{
}
//specifies entity's bag type
void inventory :: specifyBagType(int bagType)
{
	switch (bagType) {
	case 0: inventoryCapacity = 25;
		break;
	case 1: inventoryCapacity = 50;
		break;
	case 2: inventoryCapacity = 75;
		break;
	}
}
//function to add an item to an entity's inventory
void inventory :: addItem(float itemDataValue)
{
	
	if (inventorySlot < inventoryCapacity)
	{
		inventoryContents[inventorySlot] = itemDataValue;
		inventorySlot++;
	}
	else
	{
		std::cout << "INVENTORY FULL";
	}

}
//removes and item from the entity's inventory
void inventory::removeItem(int inventorySlot)
{
	//removes item
	inventoryContents[inventorySlot] = NULL;
	//organises inventory
	int organisationInventorySlot = inventorySlot;
	while (inventoryContents[organisationInventorySlot] == NULL && inventoryContents[organisationInventorySlot-1] != NULL)
	{
		inventoryContents[organisationInventorySlot] = inventoryContents[organisationInventorySlot + 1];
		inventoryContents[organisationInventorySlot + 1] = NULL;
		organisationInventorySlot++;
	}
}
//returns entity's inventory contents
int inventory :: getInventory()
{
	
	for (int i =0;i < inventoryCapacity;i++)
	{
		return inventoryContents[i];
	}
	
	
}
