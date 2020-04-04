#pragma once
#include "HP.h"
#include <iostream>
#define HEAD 0
#define TORSO 1
#define RIGHTARM 2
#define LEFTARM 3
#define RIGHTLEG 4
#define LEFTLEG 5
#define ENTITY 6
class HP
{
public:
	HP();
	~HP();
private:
	//Health Points(HP) of head
	float headHP;
	//HP of R arm
	float rightArmHP;
	//HP of L arm
	float leftArmHP;
	//HP of Torso
	float torsoHP;
	//HP of L Leg
	float leftLegHP;
	//HP of R Leg
	float rightLegHP;
	//Entity overall HP
	float entityHP;
	
	
public:
	
	//For use to reference body parts
	int bodyPart;
	//Assigns initial base values for each HP
	void assignHP(float value, int bodyPart);
	//Adds value of HP to entity limb/overall 
	void addHP(float value, int bodyPart);
	//Subtracts value of HP from entity limb/overall
	void subtractHP(float value, int bodyPart);
	//Gets the value of all HP
	float getHP(int bodyPart);
};

