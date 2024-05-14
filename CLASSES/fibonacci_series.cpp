#include <iostream>
using namespace std;
class Rational
{
	int p;
	int q;

public:
	Rational(int p = 0, q = 1);
	void setP(int p = 0);
	void setQ(int q = 1);
	int getP();
	int getQ();
	friend ostream &operator<<(ostream &out, Rational a);
	friend Rational operator+(Rational a, Rational b);

} Rational::Rational(int p, int q)
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
Rational operator+(Rational a, Rational b)
{
	Rational t;
	int lcm = (a.getQ() * b.getQ()) / GCD(a.getQ(), b.getQ());
	t.setQ() = lcm;
	int a1 = (((lcm / a.getQ()) * a.getP())), b1 = (((lcm / b.getQ()) * b.getP()));
	t.setP() = a1 + b1;
	return t;
}
int GCD(int x, int y)
{
	if (x < y)
		GCD(y, x);
	if (x % y == 0)
		return y;
	else
	{
		GCD(y, x % y);
	}
}
