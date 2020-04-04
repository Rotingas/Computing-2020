#include "BaseAttributes.h"

//Constructor
baseAttributes::baseAttributes()
    : strength(0)
    , dexterity(0)
    , intelligence(0)
    , constitution(0)
    , wisdom(0)
    , charisma(0)  
{
}
//Deconstructor
baseAttributes ::~baseAttributes()
{
}

//Increases value of attribute specified
void baseAttributes::addAttributes(float value, int attribute)
{

    switch (attribute) {

    case 0: this->strength = strength + value;
        break;
    case 1: this->dexterity = dexterity + value;
        break;
    case 2: this->intelligence = intelligence + value;
        break;
    case 3: this->constitution = constitution + value;
        break;
    case 4: this->wisdom = wisdom + value;
        break;
    case 5: this->charisma = charisma + value;
        break;
    }
}
//Decreases value of attribute specified
void baseAttributes::subtractAttributes(float value, int attribute)
{

    switch (attribute) {

    case 0: this->strength = strength - value;
        break;
    case 1: this->dexterity = dexterity - value;
        break;
    case 2: this->intelligence = intelligence - value;
        break;
    case 3: this->constitution = constitution - value;
        break;
    case 4: this->wisdom = wisdom - value;
        break;
    case 5: this->charisma = charisma - value;
        break;
    }

}
//Outputs attributes values
int baseAttributes::getAttributes(int attribute)
{

    switch (attribute) {

    case 0: return this->strength;
        break;
    case 1: return this->dexterity;
        break;
    case 2: return this->intelligence;
        break;
    case 3: return this->constitution;
        break;
    case 4: return this->wisdom;
        break;
    case 5: return this->charisma;
        break;
    }
}
//Assigns initial values of attributes
void baseAttributes::assignAttributes(float value, int attribute)
{
    switch (attribute) {

    case 0: this->strength = value;
        break;
    case 1: this->dexterity = value;
        break;
    case 2: this->intelligence = value;
        break;
    case 3: this->constitution = value;
        break;
    case 4: this->wisdom = value;
        break;
    case 5: this->charisma = value;
        break;
    }
   
}