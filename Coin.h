#ifndef COIN_H
#define COIN_H

#include "Item.h"

class Coin : public Item
{
public:
	Coin();
	Coin(int x, int y, int value);
	Coin(const Coin& C);
	~Coin();
	
	int getValue();
	void setValue(int value);

private:
	int value;
};


#endif