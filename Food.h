#ifndef ITEM_H
#define ITEM_H

#include "Item.h"

// Class of the food
class Food : public Item
{
// Methods
public:
	// Ctor
	Food(int x, int y);
	// Cctor
	Food(const Food& F);
	Food& operator=(const Food& F);
	// Dtor
	~Food();
};

#endif