#ifndef SNAIL_H
#define SNAIL_H

#include "Pet.h"
#include "AquariumEntity.h"

// Class snail
class Snail : public Pet, public AquariumEntity
{
// Methods
public:
	// Ctor
	Snail(Aquarium& a);
	Snail(int x, int y, int speed, Aquarium& a);

	// Dtor
	~Snail();
	// Other methods
	void update();
	friend ostream& operator<<(ostream& os, const Snail& S) const;
protected:
	// Move the pet
	void move(); 
	// Change the direction of pet
	void getNearestCoin();
};

#endif