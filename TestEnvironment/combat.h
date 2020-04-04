#pragma once
#include "entity.h"
#include "combat.h"
class combat : public entity
{
public:
	//constructor
	combat();
	//deconstructor
	~combat();
private:
	float bodyPartMod;
	float defendingEntityAgility;
	float distanceBetweenEntity;
	float attackingEntityProficiency;
public:
	void agressorEntity(entity agressor);
	void targetEntity(entity target);
	float bodyPartModInitializer(int bodyPart);
	int attackHitOrMiss(int bodyPart);

};