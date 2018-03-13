#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "List.h"
#include "Guppy.h"
#include "Piranha.h"
#include "Coin.h"
#include "Food.h"

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
	List<Guppy> getListOfGuppy();
	List<Piranha> getListOfPiranha();
	List<Coin> getListOfCoin();
	List<Food> getListOfFood();
	int getTotalCoin();
	// Some method
// Variable
private:
	List<Guppy> listOfGuppy;
	List<Piranha> listOfPiranha;
	List<Coin> listOfCoin;
	List<Food> listOfFood;
};


#endif