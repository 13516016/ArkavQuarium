#ifndef ITEM_H
#define ITEM_H

// Class of item
class Item 
{
// Methods
public:
	// Ctor
	Item();
	Item(int x, int y);
	// Dtor
	virtual ~Item();

	// Getter
	int getX();
	int getY();

	// Setter
	void setX();
	void setY();
	
	// Other method
	void move();
private:
	const int speed;
	int x;
	int y;
};

#endif
