#include <iostream>
#include "characters/Character.h"
#include "characters/Warrior.h"
#include "characters/Mage.h"
#include "characters/Archer.h"
#include "characters/Monk.h"

using namespace std;

void GameLoop() {
    Warrior w("Zafer");
    Mage m("Beren");
    Archer a("Batuhan");

    w.GetInfo();
    m.GetInfo();
    a.GetInfo();

    cout << "\n--- Battle Begins ---\n";
    w.UseSword(m);
    m.CastSpell(w);
    a.ShootArrow(w);

    cout << "\n--- After Battle ---\n";
    w.GetInfo();
    m.GetInfo();
    a.GetInfo();
}

int main() {
    cout << "Welcome to the Character-Based Game!\n";
    GameLoop();
    return 0;
}