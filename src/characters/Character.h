#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

using namespace std;

class Character {
protected:
    string CName;
    string ChClass;
    int Kills;
    int HP;

public:
    Character(string name, string charClass);
    void GetInfo();
    void TakeDamage(int dmg);
    void TakeHeal(int heal);
    void AddKill();
    int GetHP();
    ~Character();
};

#endif // CHARACTER_H