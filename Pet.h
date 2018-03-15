#ifndef PET_H
#define PET_H

// interface pet
class Pet
{
// Method
public:
	// Other method
	// Move towards the nearest coin, NB: Cannot go upward
	virtual void update()=0;
	virtual void takeCoin()=0;
};

#endif