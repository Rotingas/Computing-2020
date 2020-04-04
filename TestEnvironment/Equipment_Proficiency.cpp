#include "Equipment_Proficiency.h"


equipmentProficiency::equipmentProficiency()
    : swordsProficiency(0)
    , axesProficiency(0)
    , hammersProficiency(0)
    , bowsProficiency(0)
    , crossbowsProficiency(0)
    , martialArtsProficiency(0)
    , shieldsProficiency(0)
    , lightArmourProficiency(0)
    , heavyArmourProficiency(0)
{
}

equipmentProficiency ::~equipmentProficiency()
{
}

//Increases value of equipment proficiency specified
void equipmentProficiency::addProficiencyLevel(float value, int proficiency)
{

    switch (proficiency) {

    case 0: this->swordsProficiency = swordsProficiency + value;
        break;
    case 1: this->axesProficiency = axesProficiency + value;
        break;
    case 2: this->hammersProficiency = hammersProficiency + value;
        break;
    case 3: this->bowsProficiency = bowsProficiency + value;
        break;
    case 4: this->crossbowsProficiency = crossbowsProficiency + value;
        break;
    case 5: this->martialArtsProficiency = martialArtsProficiency + value;
        break;
    case 6: this->shieldsProficiency = shieldsProficiency + value;
        break;
    case 7: this->lightArmourProficiency = lightArmourProficiency + value;
        break;
    case 8: this->heavyArmourProficiency = heavyArmourProficiency + value;
        break;
    }
}

//Outputs equipment proficiency values
float equipmentProficiency::getProficiencyLevel(int proficiency)
{

    switch (proficiency) {

    case 0: return this->swordsProficiency;
        break;
    case 1: return this->axesProficiency;
        break;
    case 2: return this->hammersProficiency;
        break;
    case 3: return this->bowsProficiency;
        break;
    case 4: return this->crossbowsProficiency;
        break;
    case 5: return this->martialArtsProficiency;
        break;
    case 6: return this->shieldsProficiency;
        break;
    case 7: return this->lightArmourProficiency;
        break;
    case 8: return this->heavyArmourProficiency;
        break;
    }
}
//Assigns initial values of equipment proficiency
void equipmentProficiency::assignProficiencyLevel(float value, int proficiency)
{
    switch (proficiency) {

    case 0: this->swordsProficiency = value;
        break;
    case 1: this->axesProficiency = value;
        break;
    case 2: this->hammersProficiency = value;
        break;
    case 3: this->bowsProficiency = value;
        break;
    case 4: this->crossbowsProficiency = value;
        break;
    case 5: this->martialArtsProficiency = value;
        break;
    case 6: this->shieldsProficiency = value;
        break;
    case 7: this->lightArmourProficiency = value;
        break;
    case 8: this->heavyArmourProficiency = value;
        break;
    }
}