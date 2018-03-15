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
	// Cctor
	Coin(const Coin& C);
	// Dtor
	~Coin();
	// Getter and Setter
	int getValue();
	void setValue(int value);
	
	friend ostream& operator<<(ostream& os, const Coin& C) const;
// Variable
private:
	int value;
};


#endif