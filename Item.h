#ifndef ITEM_H
#define ITEM_H

#include "WaterEntity,h"

class Item : public WaterEntity
{
public:
	Item();
	Item(int x, int y);
	Item(const Item& A);
	Item& operator=(const Item& A);
	virtual ~Item();
	void move();

};












#endif
