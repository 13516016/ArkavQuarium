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
	int getExp() const;
	// Setter
	void setHungryDuration(int hungryDuration);
	void setFullDuration(int fullDuration);
	void setLevel(int level);
	void setExp(int exp);
	// Other Methods
	void move();
	virtual Coin produceCoin(int value)=0;

// Variable
private:
	int hungryDuration;
	int fullDuration;
	int level;
	int exp;
};

#endif