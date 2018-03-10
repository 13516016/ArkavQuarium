#ifndef PIRANHA_H
#define PIRANHA_H

#include "Fish.h"

class Piranha : public Fish
{
public:
	Piranha();
	Piranha(int x, int y);
	Piranha(const Piranha& P);
	Piranha& operator=(const Piranha& P);
	~Piranha();

	Coin produceCoin();


};




#endif