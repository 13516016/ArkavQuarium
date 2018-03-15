#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "List.hpp"
#include "Fish.h"
#include "Coin.h"
#include "Food.h"
#include "Pet.h"

// Class which containt all the object of the fish, etc.
class Aquarium
{
// Methods
public:
	// Ctor
	// Set to default width and height
	Aquarium();
	// Set to width and height
	Aquarium(int width, int height);
	// Cctor
	Aquarium(const Aquarium& A);
	Aquarium& operator=(const Aquarium& A);
	// Dtor
	~Aquarium();

	// Add
	void addFish(Fish&);
	void addCoin(Coin&);
	void addFood(Food&);
	void addPet(Pet&);

	// Getter
	Fish& getFish(int) const;
	Coin& getCoin(int) const;
	Food& getFood(int) const;
	Pet& getPet(int) const;

	int getFishCount() const;
	int getCoinCount() const;
	int getPetCount() const;
	int getFoodCount() const;
	// Some method

// Variable
private:
	List<Fish> listOfFish;
	List<Coin> listOfCoin;
	List<Food> listOfFood;
	List<Pet> listOfPet;
	int width, height; // size of aquarium
};


#endif