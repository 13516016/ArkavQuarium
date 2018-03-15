#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "AquariumEntity.h"

// Class of item
class Item : public AquariumEntity
{
// Methods
public:
	// Ctor
	Item(Aquarium& a);
	Item(int x, int y, Aquarium& a);
	// Dtor
	virtual ~Item();
	// Other method
	void move();
};

#endif
