#pragma once
#include <iostream>
#define SWORDS 0
#define	AXES 1
#define HAMMERS 2
#define BOWS 3
#define CROSSBOWS 4
#define MARTIALARTS 5
#define SHIELDS 6
#define LIGHTARMOUR 7
#define HEAVYARMOUR 8

class equipmentProficiency
{
public:
	//constructor
	equipmentProficiency();
	//deconstructor
	~equipmentProficiency();
private:
	//Entity's proficiency with swords
	float swordsProficiency;
	//Entity's proficiency with axes
	float axesProficiency;
	//Entity's proficiency with hammers
	float hammersProficiency;
	//Entity's proficiency with bows
	float bowsProficiency;
	//Entity's proficiency with crossbows
	float crossbowsProficiency;
	//Entity's proficiency with martial arts
	float martialArtsProficiency;
	////Entity's proficiency with shields
	float shieldsProficiency;
	//Entity's proficiency with light armour
	float lightArmourProficiency;
	//Entity's proficiency with heavy armour
	float heavyArmourProficiency;
public:
	//variable used to specify which proficiency is to be interacted with
	int proficiency;
	//Increases value of equipment proficiency specified
	void addProficiencyLevel(float value, int proficiency);
	//Outputs equipment proficiency values
	float getProficiencyLevel(int proficicency);
	//Assigns initial values of equipment proficiency
	void assignProficiencyLevel(float value, int proficiency);
};