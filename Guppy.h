#ifndef GUPPY_H
#define GUPPY_H

#include "Fish.h"

class Guppy: public Fish
{
public:
	Guppy();
	Guppy(int x, int y);
	Guppy(const Guppy& G);
	Guppy& operator=(const Guppy& G);
	~Guppy();

	// GETTER SETTER
	int getCoinInterval;
	void setCoinInterval(int coinInterval);
	
	Coin produceCoin();

private:
	int coinInterval;

};
#endif