#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"

class Warrior : public Character {
private:
    int Armor;
    int Mana;

public:
    Warrior(string name);
    void UseSword(Character& target);
};

#endif // WARRIOR_H