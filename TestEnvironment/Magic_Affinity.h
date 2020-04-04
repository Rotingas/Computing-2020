#pragma once
#include <iostream>

#define DESTRUCTION 0
#define	RESTORATION 1
#define CONJURATION 2

class magicAffinity
{
public:
	//constructor
	magicAffinity();
	//deconstructor
	~magicAffinity();
private:
	//Entity's experience with destruction magic
	float destructionExperience;
	//Entity's experience with restoration magic
	float restorationExperience;
	//Entity's experience with conjuration magic
	float conjurationExperience;
	//variable used to specify which experience is to be interacted with
	int experience;
public:

	//Increases value of magic affinity specified
	void addExperienceLevel(float value, int experience);
	//Outputs magic affinity values
	float getExperienceLevel(int experience);
	//Assigns initial values of magic affinity
	void assignExperienceLevel(float value, int experience);
};