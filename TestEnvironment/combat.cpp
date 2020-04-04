#include "combat.h"

combat :: combat()
{
}

combat :: ~combat()
{
}
float combat::bodyPartModInitializer(int bodyPart)
{
	switch (bodyPart)
	{
	case 0: bodyPartMod = 0.4;
		break;
	case 1: bodyPartMod = 1;
		break;
	case 2: bodyPartMod = 0.6;
		break;
	case 3: bodyPartMod = 0.6;
		break;
	case 4: bodyPartMod = 0.75;
		break;
	case 5: bodyPartMod = 0.75;
		break;
	}
	return 0;
}

void combat::targetEntity(entity target)
{
	cout << target.getHP(HEAD);
	cout << " target" << endl;
}

void combat::agressorEntity(entity agressor)
{
	cout << agressor.getHP(HEAD);
	cout << " agressor" << endl;
}
int combat :: attackHitOrMiss(int bodyPart)
{
	bodyPartModInitializer(bodyPart);
	//temp work around for distance, due to real space not being implemented as of now
	distanceBetweenEntity = 1;
	attackingEntityProficiency;
	return 0;
}