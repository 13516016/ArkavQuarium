#ifndef PET_H
#ifndef PET_H
#define PET_H

#include "WaterEntity.h"
#include "Movement.h"
#include "Coin.h"
#include "List.h"

// Class pet
class Pet : public WaterEntity, public Movement
{
// Method
public:
	// Ctor
	Pet();
	Pet(int x, int y, int speed);
	// CCtor
	Pet(const Pet& P);
	// Dtor
	virtual ~Pet();
	// Other method
	// Do nothing
	virtual void move(); 
	// Move towards the nearest coin, NB: Cannot go upward
	Coin getNearestCoin(List<Coin> CL);

};

#endif