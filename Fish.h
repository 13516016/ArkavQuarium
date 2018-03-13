#ifndef FISH_H
#define FISH_H

#include "Movement.h"
#include "WaterEntity.h"
#include "Coin.h"

// Class of Fish
class Fish : public WaterEntity, public Movement
{
// Methods
public:
	// Ctor
	Fish();
	Fish(int x, int y, int speed, int level);
	// CCtor
	Fish(const Fish& F);
	Fish& operator=(const Fish& F);
	// Dtor
	virtual ~Fish();

	// Getter
	int getHungryDuration() const;
	int getFullDuration() const;
	int getLevel() const;
	bool isFull() const;
	// Setter
	void setHungryDuration(int hungryDuration);
	void setFullDuration(int fullDuration);
	void setLevel(int level);
	void setFull();
	// Other Methods
	void move();
	void moveTo(int x, int y);
	Coin produceCoin(int value)=0;
// Variable
private:
	const int hungryDuration;
	const int fullDuration;
	int level;
	bool full;

};

#endif