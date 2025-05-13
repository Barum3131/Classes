#ifndef ARCHER_H
#define ARCHER_H

#include "Character.h"

class Archer : public Character {
private:
    int Arrows;
    int Mana;

public:
    Archer(string name);
    void ShootArrow(Character& target);
};

#endif // ARCHER_H