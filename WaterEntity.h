#ifndef WATER_ENTITY_H
#define WATER_ENTITY_H

class WaterEntity
{
public:
	WaterEntity();
	WaterEntity(int x,int y);
	WaterEntity(const WaterEntity& WE);
	WaterEntity& operator=(const WaterEntity& WE);
	virtual ~WaterEntity();
	
// Getter & Setter
	int getX();
	int getY();
	int getSpeed();
	void setX(int _x);
	void setY(int _y);
	void setSpeed(int _speed);

	virtual void move() = 0;

private:
	int x;
	int y;
	int speed;
};

#endif