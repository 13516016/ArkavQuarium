#ifndef PIRANHA_H
#define PIRANHA_H

#include "Fish.h"
#include "Guppy.h"
#include "List.h"

// Class Piranha
class Piranha : public Fish
{
// Methods
public:
	// Ctor
	Piranha();
	Piranha(int x, int y);
	// Cctor
	Piranha(const Piranha& P);
	Piranha& operator=(const Piranha& P);
	// Dtor
	~Piranha();
	// Other methods
	// Get the nearest guppy
	Guppy getNearestGuppy(List<Guppy> LG); 
	// Produce the coin by eating a guppy
	Coin produceCoin(int value);

	friend ostream& operator<<(ostream& os, const Guppy& G) const;
};




#endif