#ifndef MONK_H
#define MONK_H

#include "Character.h"

class Monk : public Character {
private:
    int Armor;
    int Mana;

public:
    Monk(string name);
    void UseStaff(Character& target);
};

#endif