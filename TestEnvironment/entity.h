#pragma once
#include "BaseAttributes.h"
#include "Equipment_Proficiency.h"
#include "HP.h"
#include "Inventory.h"
#include "Magic_Affinity.h"
#include "Spell_Book.h"
#include <algorithm>
//All monster/player types defined in here
//player types
#define KNIGHT 0
#define MAGE 1
#define WARRIOR 2
#define THEIF 3
//Monster Types
#define GOBLIN 4
#define OTHER 5
class entity : public spellBook, public HP, public equipmentProficiency, public inventory, public magicAffinity, public baseAttributes {
public:
	//constructor
	entity();
	//deconstructor
	~entity();
private:
	//entity type
	int type;
public:
	//pointer to stats
	
	//Initializes properties of entity
	void initialiseEntity(int type);
	//copy properties of one entity object to another entity object
	entity& operator=(const entity& other);
	
};