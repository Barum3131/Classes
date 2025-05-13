#include "Monk.h"
#include <iostream>
#include "Character.h"


Monk :: Monk(string name) : Character(name, "Monk"), Armor(30), Mana(120) {}

void Monk :: UseStaff(Character& target) {
    std::cout << CName << " strikes with a staff!\n";
    HP += 10; // Healing effect
    Mana -= 15;
    target.TakeHeal(15);
}
