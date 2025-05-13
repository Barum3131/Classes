#include "Warrior.h"
#include "Character.h"
#include <iostream>

Warrior::Warrior(string name) : Character(name, "Warrior"), Armor(50), Mana(100) {}

void Warrior::UseSword(Character& target) {
    std::cout << CName << " slashes with a sword!\n";
    Mana -= 20;
    target.TakeDamage(20);
}