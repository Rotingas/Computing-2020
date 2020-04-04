#include <iostream>
#include "entity.h"
using namespace std;
entity player;
entity entity0;
entity entity1;
entity entity2;
entity entity3;
entity entity4;
void test()
{
	
	
	player.initialiseEntity(KNIGHT);
	entity0.initialiseEntity(1);
	
	cout << "player " << player.getAttributes(1);
	cout << endl;
	cout << "Goblin " << entity0.getAttributes(1);
	cout << endl;
	
	entity0 = player;
	
	cout << "player " << player.getAttributes(1);
	cout << endl;
	cout << "entity0 " << entity0.getAttributes(1);
	cout << endl;
}
	
	
void continuityTest()
{
	
}
int main()
{
	
	test();
	continuityTest();
	_getwch();
	return 0;
}