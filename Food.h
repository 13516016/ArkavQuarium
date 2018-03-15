#ifndef ITEM_H
#define ITEM_H

#include "Item.h"

// Class of the food
class Food : public Item
{
// Methods
public:
	// Ctor
	Food(int x, int y, int _hungerPoint);
	// Cctor
	Food(const Food& F);
	Food& operator=(const Food& F);
	// Dtor
	int getHungerPoint();
	void setHungerPoint(int _hungerPoint);
	~Food();

private:
	int hungerPoint;
};

#endif