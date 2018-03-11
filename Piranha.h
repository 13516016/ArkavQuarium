#ifndef PIRANHA_H
#define PIRANHA_H

#include "Fish.h"
#include "Guppy.h"
#include "List.h"

class Piranha : public Fish
{
public:
	Piranha();
	Piranha(int x, int y);
	Piranha(const Piranha& P);
	Piranha& operator=(const Piranha& P);
	~Piranha();
	
	Guppy getNearestGuppy(List<Guppy> LG); // Get the nearest guppy
	Coin produceCoin(int value);
};




#endif