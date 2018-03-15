#ifndef AQUARIUM_ENTITY_H
#define AQUARIUM_ENTITY_H

#include "Aquarium.h"

enum directionList
{
	UP,UP_RIGHT,RIGHT,DOWN_RIGHT,DOWN,DOWN_LEFT,LEFT,UP_LEFT
};

// Class of Water Entity
class AquariumEntity
{
// Methods
public:
	// Ctor
	// Set to default x, y, and speed
	AquariumEntity(Aquarium& a);
	AquariumEntity(int x, int y, int speed, Aquarium& a);
	// Cctor
	AquariumEntity(const AquariumEntity& WE);
	// Operator =
	AquariumEntity& operator=(const AquariumEntity& WE);
	// Dtor
	virtual ~AquariumEntity();
	
	// Getter
	int getX() const;
	int getY() const;
	int getSpeed() const;
	directionList getDirection() const;
	Aquarium& getAquarium() const;

	// Setter
	void setX(int _x);
	void setY(int _y);
	void setSpeed(int _speed);
	void setDirection(int dir);

	// Other Method
	// ABC of move
	virtual void move()=0;
	double getDistance(const AquariumEntity& WE) const;


// Variable
private:
	Aquarium& aquarium;
	int x;
	int y;
	int speed;
	int direction;
};

#endif