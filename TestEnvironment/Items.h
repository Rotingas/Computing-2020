#pragma once
#include "Items.h"
#include <iostream>
#include <array>



///CREATED BY LYLE MACINTOSH///
///Class intended to hold the data values associated with all ingame items//

class items
{
public:
	//constructor
	items();
	//deconstructor
	~items();
private:
	//number of items in list
	const int totalItems = 2;
	//master list of all items
	std::array<int,100>itemList;
	
	//Each new item is given a ID using the below process, "#define <ITEMNAME> <ID NO.>"
	#define SWORD 1
	#define AXE 2
	#define HAMMER 3
	
	//Holds list of all ingame items ID No., size can be increased by changing array<int,<size>> itemList
	void outputAllItems();
	
};