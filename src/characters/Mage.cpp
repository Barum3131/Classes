#include "Mage.h"
#include <iostream>

Mage::Mage(string name) : Character(name, "Mage"), Mana(100) {}

void Mage::CastSpell(Character& target) {
    if (Mana >= 20) {
        std::cout << CName << " casts a fireball!\n";
        Mana -= 20;
        target.TakeDamage(30);
    } else {
        std::cout << CName << " is out of mana!\n";
    }
}