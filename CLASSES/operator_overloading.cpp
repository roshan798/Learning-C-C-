#include <iostream>
using namespace std;
class complex
{
public:
	int real;
	int img;

	complex(int r = 0, int img = 0);
	//	void setReal(int);
	//	void setImg(int);
	friend ostream &operator<<(ostream &o, complex &a);
	//	complex operator+(complex a);
	friend complex operator+(complex a, complex b);
};
int main()
{
	complex c1(2, 3);
	complex c2(5, 4);
	complex c3 = c1 + c2 + c2;
	//	c3.setReal(10);
	//	c3.display();
	cout << c3;
}

complex::complex(int r, int i)
{
	real = r;
	img = i;
}
// void complex::display()
//{
//	cout<<real<<"+i"<<img;
// }
// complex complex::operator+(complex a)
//{
//	complex t;
//	t.real=real+a.real;
//	t.img=img+a.img;
//	return t;
// }

ostream &operator<<(ostream &o, complex &a)
{
	o << a.real << " + i" << a.img;
	return o;
}

complex operator+(complex a, complex b)
{
	complex t;
	t.real = a.real + b.real;
	t.img = a.img + b.img;
	return t;
}
// void complex::setReal(int r)
//{
//	real=r;
// }
// void complex::setImg(int i)
//{
//	img=i;
// }
