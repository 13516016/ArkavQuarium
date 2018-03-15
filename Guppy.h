#ifndef GUPPY_H
#define GUPPY_H

#include <iostream>
#include "Fish.h"
#include "Food.h"
#include "AquariumEntity.h"

// Class of the guppy
class Guppy: public Fish, public AquariumEntity
{
// Methods
public:
	// Ctor
	// Set to random x, y, and speed of Guppy
	Guppy(Aquarium& a);
	// Set to point x y and also the speed of Guppy
	Guppy(int x, int y, Aquarium& a);

	// Dtor
	~Guppy();

	// GETTER SETTER
	int getCoinInterval() const;
	void setCoinInterval(int coinInterval);

	// METHODS
	void update();
	friend ostream& operator<<(ostream& os, const Guppy& G) const;
	

protected:
	void findNearestFood();
	Coin produceCoin();
	void eat();
		
// Private
private:
	int coinInterval;

};
#endif