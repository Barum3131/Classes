#include "Archer.h"
#include "Character.h"
#include <iostream>

Archer::Archer(string name) : Character(name, "Archer"), Arrows(5), Mana(100) {}

void Archer::ShootArrow(Character& target) {
    if (Arrows > 0) {
        std::cout << CName << " shoots an arrow!\n";
        Arrows--;
        target.TakeDamage(25);
    } else {
        std::cout << CName << " is out of arrows!\n";
    }
}