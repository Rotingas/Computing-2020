#include "Magic_Affinity.h"


magicAffinity::magicAffinity()
    : destructionExperience(0)
    , restorationExperience(0)
    , conjurationExperience(0)
{
}

magicAffinity::~magicAffinity()
{
}

//Increases value of magic affinity specified
void magicAffinity::addExperienceLevel(float value, int experience)
{

    switch (experience) {

    case 0: this->destructionExperience = destructionExperience + value;
        break;
    case 1: this->restorationExperience = restorationExperience + value;
        break;
    case 2: this->conjurationExperience = conjurationExperience + value;
        break;
    }
}

//Outputs magic affinity values
float magicAffinity::getExperienceLevel(int experience)
{

    switch (experience) {

    case 0: return this->destructionExperience;
        break;
    case 1: return this->restorationExperience;
        break;
    case 2: return this->conjurationExperience;
        break;
    }
}
//Assigns initial values of magic affinity
void magicAffinity::assignExperienceLevel(float value, int experience)
{
    switch (experience) {

    case 0: this->destructionExperience = value;
        break;
    case 1: this->restorationExperience = value;
        break;
    case 2: this->conjurationExperience = value;
        break;
        }
}