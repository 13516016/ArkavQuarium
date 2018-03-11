#ifndef GUPPY_H
#define GUPPY_H

#include "Fish.h"
#include "Food.h"
#include "List.h"

class Guppy: public Fish
{
public:
	Guppy();
	Guppy(int x, int y);
	Guppy(const Guppy& G);
	Guppy& operator=(const Guppy& G);
	~Guppy();

	// GETTER SETTER
	int getCoinInterval() const;
	void setCoinInterval(int coinInterval);

	// METHODS
	Food getNearestFood(List<Food> LF); // Get the nearest food
	Coin produceCoin(int value);

private:
	int coinInterval;

};
#endif