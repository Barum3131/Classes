#include "Character.h"
#include <iostream>

using namespace std;

Character::Character(string name, string charClass)
    : CName(name), ChClass(charClass), HP(100), Kills(0) {}

void Character::GetInfo() {
    cout << "\nName: " << CName << "\nClass: " << ChClass
         << "\nHP: " << HP << "\nKills: " << Kills << endl;
}

void Character::TakeDamage(int dmg) {
    HP -= dmg;
    if (HP < 0) HP = 0;
    if (HP == 0) {
        cout << CName << " has been defeated.\n";
    }
}
void Character::TakeHeal(int heal) {
   HP += heal;
    if (HP > 100) HP = 100; // Assuming max HP is 100
}

void Character::AddKill() { Kills++; }

int Character::GetHP() { return HP; }

Character::~Character() {
    cout << CName << "'s destructor called. Cleaning up...\n";
}