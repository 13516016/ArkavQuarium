#ifndef ABIOTIC_H
#define ABIOTIC_H



class Abiotic : public WaterEntity
{
public:
	Abiotic();
	Abiotic(int x, int y);
	Abiotic(const Abiotic& A);
	Abiotic& operator=(const Abiotic& A);
	virtual ~Abiotic();
	void move();

};












#endif
