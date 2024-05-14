#include <iostream>
using namespace std;

class Rational
{
	int p;
	int q;

public:
	Rational(int p = 0, int q = 1);
	void setP(int p = 0);
	void setQ(int q = 1);
	int getP();
	int getQ();
	friend ostream &operator<<(ostream &out, Rational a);
	friend Rational operator+(Rational a, Rational b);
};
Rational::Rational(int p, int q)
{
	setP(p);
	setQ(q);
}
void Rational::setP(int p)
{
	this->p = p;
}
void Rational::setQ(int q)
{
	if (q)
		this->q = q;
	else
		this->q = 1;
}

int Rational::getP()
{
	return p;
}

int Rational::getQ()
{
	return q;
}

ostream &operator<<(ostream &out, Rational a)
{
	out << a.getP() << "/" << a.getQ();
	return out;
}
int main()
{
	Rational r1(2, 7), r2(3, 6);
	cout << r1 << endl
		 << r2;
}
