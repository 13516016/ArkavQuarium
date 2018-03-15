#ifndef ITEM_H
#define ITEM_H

#include "Item.h"

// Class of the food
class Food : public Item
{
// Methods
public:
	// Ctor
	Food(int x, int y, int _hungerPoint, Aquarium& a);

	// Dtor
	~Food();

	// Getter and Setter
	int getHungerPoint();
	void setHungerPoint(int _hungerPoint);
	bool isBottom();

private:
	int hungerPoint;
};

#endif