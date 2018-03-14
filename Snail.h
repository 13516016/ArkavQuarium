#ifndef SNAIL_H
#define SNAIL_H

#include "Pet.h"

// Class snail
class Snail : public Pet
{
// Methods
public:
	// Ctor
	Snail();
	Snail(int x, int y, int speed);
	// Cctor
	Snail(const Snail& S);
	Snail& operator=(const Snail& S);
	// Dtor
	~Snail();
	// Other methods
	void moveTo(int x, int y);
};
#endif