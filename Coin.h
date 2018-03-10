#ifndef COIN_H
#define COIN_H

class Coin : public Abiotic
{
public:
	Coin();
	Coin(int value);
	Coin(const Coin& C);
	~Coin();

	int getValue();

private:
	int value;
};


#endif