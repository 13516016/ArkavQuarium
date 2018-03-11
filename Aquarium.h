#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "List.h"
#include "Guppy.h"
#include "Piranha.h"
#include "Coin.h"
#include "Food.h"

class Aquarium
{
public:
	Aquarium();
	Aquarium(int width, int height);
	Aquarium(const Aquarium& A);
	Aquarium& operator=(const Aquarium& A);
	~Aquarium();

private:
	List<Guppy> GuppiesList;
	List<Piranha> PiranhasList;
	List<Coin> CoinsList;
	List<Food> FoodsList;
	
};


#endif