#ifndef WATER_ENTITY_H
#define WATER_ENTITY_H

enum directionList
{
	UP,UP_RIGHT,RIGHT,DOWN_RIGHT,DOWN,DOWN_LEFT,LEFT,UP_LEFT
};

// Class of Water Entity
class WaterEntity
{
// Methods
public:
	// Ctor
	WaterEntity();
	WaterEntity(int x,int y,int speed);
	// Cctor
	WaterEntity(const WaterEntity& WE);
	// Operator =
	WaterEntity& operator=(const WaterEntity& WE);
	// Dtor
	virtual ~WaterEntity();
	
	// Getter
	int getX() const;
	int getY() const;
	int getSpeed() const;
	string getDirection() const;
	// Setter
	void setX(int _x);
	void setY(int _y);
	void setSpeed(int _speed);
	void setDirection(int dir);
	// Method
	double getDistance(const WaterEntity WE) const;

// Variable
private:
	int x;
	int y;
	int speed;
	int direction;
};

#endif