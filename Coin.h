#ifndef COIN_H
#define COIN_H

#include "Item.h"

// Class of the coin which inherits from item
class Coin : public Item
{
// Method
public:
	// Ctor
	Coin();
	Coin(int x, int y, int value);

	// Dtor
	~Coin();

	// Getter and Setter
	int getValue();
	void setValue(int value);
	
// Variable
private:
	int value;
};

#endif