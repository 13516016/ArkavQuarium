#ifndef FISH_H
#define FISH_H

#include "Coin.h"


// Class of Fish
class Fish
{
// Methods
public:
	// Ctor
	Fish();

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

	virtual void update()=0;

protected:
	virtual void findNearestFood()=0;
	virtual Coin produceCoin()=0;
	virtual void eat()=0;

// Variable
private:
	int hungryDuration;
	int fullDuration;
	int level;
	int exp;
};

#endif