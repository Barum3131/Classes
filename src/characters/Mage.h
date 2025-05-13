#ifndef MAGE_H
#define MAGE_H

#include "Character.h"

class Mage : public Character {
private:
    int Mana;

public:
    Mage(string name);
    void CastSpell(Character& target);
};

#endif // MAGE_H