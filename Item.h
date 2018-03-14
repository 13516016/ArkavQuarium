#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "WaterEntity,h"
// Class of item
class Item : public WaterEntity
{
// Methods
public:
	// Ctor
	Item();
	Item(int x, int y);
	// CCtor
	Item(const Item& A);
	Item& operator=(const Item& A);
	// Dtor
	virtual ~Item();
	// Other method
	friend ostream& operator<<(ostream& os, const Item& I) const;
	void move(); //Move downward
};


#endif
