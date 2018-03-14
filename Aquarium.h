#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "List.h"
#include "Fish.h"
#include "Coin.h"
#include "Food.h"
#include "Snail.h"

// Class which containt all the object of the fish, etc.
class Aquarium
{
// Methods
public:
	// Ctor
	Aquarium();
	Aquarium(int width, int height);
	// Cctor
	Aquarium(const Aquarium& A);
	Aquarium& operator=(const Aquarium& A);
	// Dtor
	~Aquarium();
	// Add
	void addGuppy(Guppy);
	void addPiranha(Piranha);
	void addCoin(Coin);
	void addFood(Food);
	
	// Getter
	List<Fish> getListOfFish();
	List<Coin> getListOfCoin();
	List<Food> getListOfFood();
	int getTotalCoin();
	// Some method
// Variable
private:
	List<Fish> listOfFish;
	List<Coin> listOfCoin;
	List<Food> listOfFood;
	List<Snail> listOfSnail;
};


#endif