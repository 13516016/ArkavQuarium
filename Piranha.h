#ifndef PIRANHA_H
#define PIRANHA_H

#include <iostream>
#include "Fish.h"
#include "Guppy.h"
#include "AquariumEntity.h"

// Class Piranha
class Piranha : public Fish, public AquariumEntity
{
// Methods
public:
	// Ctor
	// Set to default x and y
	Piranha(Aquarium& a);
	Piranha(int x, int y, Aquarium& a);

	// Dtor
	~Piranha();

	// Other methods	
	friend ostream& operator<<(ostream& os, const Guppy& G) const;
	void update();

protected:
	// Produce the coin by eating a guppy
	Coin& produceCoin();
	void eat();
	void findNearestFood();
};

#endif