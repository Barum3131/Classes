# Character-Based Game

## Overview
This project is a character-based game developed in C++. It features various character classes, including Warrior, Mage, and Archer, each with unique abilities and attributes. Players can engage in battles, manage character stats, and experience a simple game loop.

## Project Structure
```
character-game
├── src
│   ├── main.cpp
│   ├── characters
│   │   ├── Character.h
│   │   ├── Character.cpp
│   │   ├── Warrior.h
│   │   ├── Warrior.cpp
│   │   ├── Mage.h
│   │   ├── Mage.cpp
│   │   ├── Archer.h
│   │   └── Archer.cpp
│   └── utils
│       └── Helpers.h
├── CMakeLists.txt
└── README.md
```

## Setup Instructions
1. **Clone the repository**:
   ```
   git clone <repository-url>
   cd character-game
   ```

2. **Build the project**:
   - Ensure you have CMake installed.
   - Create a build directory:
     ```
     mkdir build
     cd build
     ```
   - Run CMake and build:
     ```
     cmake ..
     make
     ```

3. **Run the game**:
   After building, you can run the game executable:
   ```
   ./character-game
   ```

## Gameplay Mechanics
- Players can create characters of different classes (Warrior, Mage, Archer).
- Each character has unique abilities:
  - **Warrior**: Can use a sword to deal damage.
  - **Mage**: Can cast spells to inflict damage.
  - **Archer**: Can shoot arrows to attack enemies.
- Characters have health points (HP) and can take damage during battles.
- The game includes a simple battle system where characters can attack each other until one is defeated.

## Future Enhancements
- Implement additional character classes and abilities.
- Add a user interface for better interaction.
- Introduce a leveling system for characters.
- Expand the game world with different environments and quests.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.