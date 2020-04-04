#pragma once
#include "BaseAttributes.h"
#define STRENGTH 0
#define	DEXTERITY 1
#define INTELLIGENCE 2
#define CONSTITUTION 3
#define WISDOM 4
#define CHARISMA 5
class baseAttributes
{
public:
	//constructor
	baseAttributes();
	//deconstrcutor 
	~baseAttributes();
private:
	//Strength attribute
	int strength;
	//Agility attribute
	int dexterity;
	//Intelligence attribute
	int intelligence;
	//Constitution attribute
	int constitution;
	//Wisdom attribute
	int wisdom;
	//Charisma attribute
	int charisma;
public:
	int* STR = &strength;
	
	int test;
	//variable used to specify which attribute is to be interacted with
	int attribute;
	//increases specified attribute by specified value 
	void addAttributes(float value, int attribute);
	//decreases specified attribute by specified value 
	void subtractAttributes(float value, int attribute);
	//returns the value of attribute specified
	int getAttributes(int attribute);
	//assigns specified value to specefied attribute 
	void assignAttributes(float value, int attribute);
	
};