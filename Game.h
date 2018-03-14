#ifndef _GAME_H
#define _GAME_H

#include "Aquarium.h"

// Class of the game (state)
class Game {
// Methods
public:
	// Ctor
	// Set name to default and totalMoney to zero and aquarium size to default
	Game(); 
	// Set name, set height, set width
	Game(string name, int height, int width);
	// Cctor
	Game(const Game& game);
	// Operator =
	Game& operator=(const Game& game);
	// Getter
	int getTurn();
	int getTotalMoney();
	// Setter
	void setMoney(int money);
	// Method
	void updateTurn();
// Variable
private:
	string name;
	int turn;
	int totalMoney;
	Aquarium aquarium;

}


#endif