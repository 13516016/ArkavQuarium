#ifndef PET_H
#define PET_H

#include "WaterEntity.h"
#include "Movement.h"
#include "Coin.h"
#include "List.h"

class Pet : public WaterEntity, public Movement
{
public:
	Pet();
	Pet(int x, int y, int speed);
	Pet(const Pet& );
	virtual ~Pet();

	virtual void move(); //Do nothing
	virtual void moveTo(int x, int y)=0; //Move towards the nearest coin, NB: Cannot go upward
	Coin getNearestCoin(List<Coin> CL);

};

#endif