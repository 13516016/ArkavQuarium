#ifndef ITEM_H
#define ITEM_H

class Food : public Item
{
public:
	Food(int x, int y);
	Food(const Food& F);
	Food& operator=(const Food& F);
	~Food();


};

#endif