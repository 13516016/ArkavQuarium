#ifndef FISH_H
#define FISH_H

#include "Movement.h"
#include "WaterEntity.h"
#include "Coin.h"

class Fish : public WaterEntity, public Movement
{
public:
	Fish();
	Fish(int x, int y, int speed, int level);
	Fish(const Fish& F);
	Fish& operator=(const Fish& F);
	virtual ~Fish();

	// Getter & Setter
	int getHungryDuration() const;
	int getFullDuration() const;
	int getLevel() const;
	bool isFull() const;
	void setHungryDuration(int hungryDuration);
	void setFullDuration(int fullDuration);
	void setLevel(int level);
	void setFull();

	void move();
	void moveTo(int x, int y);
	Coin produceCoin(int value)=0;

private:
	const int hungryDuration;
	const int fullDuration;
	int level;
	bool full;

};

#endif