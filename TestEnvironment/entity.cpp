#include "entity.h"
//#include "entitylist.h"
#include <algorithm>
entity :: entity()
{
	
}

entity :: ~entity()
{
}
//Initializes properties of entity
void entity::initialiseEntity(int type)
{
	switch (type)
	{
	case 0:
		assignAttributes(6, STRENGTH);
		assignAttributes(3, DEXTERITY);
		assignAttributes(6, INTELLIGENCE);
		assignAttributes(6, CONSTITUTION);
		assignAttributes(6, WISDOM);
		assignAttributes(6, CHARISMA);
		break;
	case 1:
		assignAttributes(7, STRENGTH);
		assignAttributes(3, DEXTERITY);
		assignAttributes(6, INTELLIGENCE);
		assignAttributes(6, CONSTITUTION);
		assignAttributes(6, WISDOM);
		assignAttributes(6, CHARISMA);
		break;
	case 2:
		
		break;
	}
}
//copy properties of one entity object to another entity object
entity& entity::operator=(const entity& other)
{
	//Base attribute assignment
	//for (int i = 0; i < 5; i++)
	//{
		//int a = getAttributes(i);
		//int b = other.getAttributes(i);
		//other.assignAttributes(i, getAttributes(i));
		//std::cout << other.getAttributes(i) << endl;
	//}
	
	//Equipment Proficiecny assignment

	//HP assignment

	//Inventory assignment

	//Magic affinity assignment

	//Spell Book assignment










	return *this;
}
