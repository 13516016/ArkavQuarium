#ifndef WATER_ENTITY_H
#define WATER_ENTITY_H

class WaterEntity
{
public:
	WaterEntity();
	WaterEntity(int x,int y,int speed);
	WaterEntity(const WaterEntity& WE);
	WaterEntity& operator=(const WaterEntity& WE);
	virtual ~WaterEntity();
	
// Getter & Setter
	int getX() const;
	int getY() const;
	int getSpeed() const;
	void setX(int _x);
	void setY(int _y);
	void setSpeed(int _speed);
	double getDistance(const WaterEntity WE) const;


private:
	int x;
	int y;
	int speed;
};

#endif