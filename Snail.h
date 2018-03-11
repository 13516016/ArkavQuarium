class Snail : public Pet
{
public:
	Snail();
	Snail(int x, int y, int speed);
	Snail(const Snail& S);
	Snail& operator=(const Snail& S);
	~Snail();

	void moveTo(int x, int y);
};