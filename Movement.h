#ifndef MOVEMENT_H
#define MOVEMENT_H

// Methods
class Movement
{
public:
	virtual void move()=0; //Random move.
	virtual void moveTo(int x, int y)=0; //Move towards the nearest food, NB: depends on the speed and can move diagonal
};

#endif