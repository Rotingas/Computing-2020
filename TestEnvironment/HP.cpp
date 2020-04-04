#include "HP.h"

//Constructor
HP::HP()
    : headHP(0)
    , rightLegHP(0)
    , leftLegHP(0)
    , rightArmHP(0)
    , leftArmHP(0)
    , torsoHP(0)
    , entityHP(0)
    , bodyPart()
{
}
//Deconstructor
HP ::~HP()
{
}

//Increases value of HP specified
void HP::addHP(float value, int bodyPart)
{
 
    switch (bodyPart) {

    case 0: this->headHP = headHP + value;
        break;
    case 1: this->torsoHP = torsoHP + value;
        break;
    case 2: this->rightArmHP = rightArmHP + value;
        break;
    case 3: this->leftArmHP = leftArmHP + value;
        break;
    case 4: this->rightLegHP = rightLegHP + value;
        break;
    case 5: this->leftLegHP = leftLegHP + value;
        break;
    case 6: this->entityHP = entityHP + value;
        break;
    }
}
//Decreases value of HP specified
void HP::subtractHP(float value, int bodyPart)
{
 
    switch (bodyPart) {

    case 0: this->headHP = headHP - value;
        break;
    case 1: this->torsoHP = torsoHP - value;
        break;
    case 2: this->rightArmHP = rightArmHP - value;
        break;
    case 3: this->leftArmHP = leftArmHP - value;
        break;
    case 4: this->rightLegHP = rightLegHP - value;
        break;
    case 5: this->leftLegHP = leftLegHP - value;
        break;
    case 6: this->entityHP = entityHP - value;
        break;
    }

}
//Outputs HP values
float HP::getHP(int bodyPart)
{
    
    switch (bodyPart) {

    case 0: return this->headHP;
        break;
    case 1: return this->torsoHP;
        break;
    case 2: return this->rightArmHP;
        break;
    case 3: return this->leftArmHP;
        break;
    case 4: return this->rightLegHP;
        break;
    case 5: return this->leftLegHP;
        break;
    case 6: return this->entityHP;
        break;
    }
}
//Assigns initial values of HP
void HP::assignHP(float value, int bodyPart)
{
    switch (bodyPart) {

    case 0: this->headHP = value;
        break;
    case 1: this->torsoHP = value;
        break;
    case 2: this->rightArmHP = value;
        break;
    case 3: this->leftArmHP = value;
        break;
    case 4: this->rightLegHP = value;
        break;
    case 5: this->leftLegHP = value;
        break;
    case 6: this->entityHP = (3*headHP)+(leftArmHP)+(rightArmHP)+(2*torsoHP)+(leftLegHP)+(rightLegHP);
        break;
    }
}