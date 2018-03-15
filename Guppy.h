#ifndef GUPPY_H
#define GUPPY_H

#include <iostream>
#include "Fish.h"
#include "Food.h"
#include "List.h"


// Class of the guppy
class Guppy: public Fish
{
// Methods
public:
	// Ctor
	Guppy();
	Guppy(int x, int y);
	// Cctor
	Guppy(const Guppy& G);
	Guppy& operator=(const Guppy& G);
	// Dtor
	~Guppy();

	// GETTER SETTER
	int getCoinInterval() const;
	void setCoinInterval(int coinInterval);

	// METHODS
	Food getNearestFood(List<Food> LF); // Get the nearest food
	Coin produceCoin(int value);
	// buat print
	friend ostream& operator<<(ostream& os, const Guppy& G) const;
// Private
private:
	int coinInterval;

};
#endif