#ifndef MOVEMENT_H
#define MOVEMENT_H


class Movement
{
// Methods
public:
	//Random move.
	virtual void move()=0; 
	//Move towards the nearest food, NB: depends on the speed and can move diagonal
	virtual void moveTo(int x, int y)=0; 
};

#endif