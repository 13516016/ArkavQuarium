#ifndef FISH_H
#define FISH_H

#include "WaterEntity.h"
#include "Coin.h"

class Fish : public WaterEntity
{
public:
	Fish();
	Fish(int x, int y);
	Fish(const Fish& F);
	Fish& operator=(const Fish& F);
	virtual ~Fish();

	// Getter & Setter
	int getHungryDuration();
	int getFullDuration();
	int getLevel();
	bool isFull();
	void setHungryDuration(int hungryDuration);
	void setFullDuration(int fullDuration);
	void setLevel(int level);
	void setFull();

	// Methods
	void move(); //Random move. For specific movement, implement it in the child class.
	Coin produceCoin()=0;

private:
	int hungryDuration;
	int fullDuration;
	int level;
	bool full;

};

#endif