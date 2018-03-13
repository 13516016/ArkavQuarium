#ifndef WATER_ENTITY_H
#define WATER_ENTITY_H

const string[] direction = {"up", "down", "left", "right"};

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
	void setDirection(string dir);
	// Method
	double getDistance(const WaterEntity WE) const;

// Variable
private:
	int x;
	int y;
	int speed;
	string direction;
};

#endif