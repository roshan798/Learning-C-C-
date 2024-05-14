#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
	virtual float Area() = 0;
	virtual float Perimeter() = 0;
};

class Rectangle : public Shape
{
private:
	int length;
	int breadth;

public:
	Rectangle(int l = 0, int b = 0)
	{
		SetLength(l);
		SetBreadth(b);
	}
	void SetLength(int l);
	void SetBreadth(int b);
	int GetLength();
	int GetBreadth();
	float Area();
	float Perimeter();
};

class circle : public Shape
{
private:
	int radius;
	const float pi = 3.14;

public:
	circle(int r = 0) { SetRadius(r); }
	void SetRadius(int r) { r >= 0 ? radius = r : r = 0; }
	int GetRadius() { return radius; }
	float Area() { return (pi * radius) * radius; }
	float Perimeter() { return 2 * pi * radius; }
};
float Rectangle::Area() { return length * breadth; }
float Rectangle::Perimeter() { return 2 * (length + breadth); }
void Rectangle::SetLength(int l) { l >= 0 ? length = l : length = 0; }
void Rectangle::SetBreadth(int b) { b >= 0 ? breadth = b : breadth = 0; }
int main()
{
	Rectangle r(100, 10);
	//	r.SetLength(10);
	//	r.SetBreadth(5);
	Shape *p = (&r);
	cout << p->Area() << endl;
	cout << p->Perimeter() << endl;
	// using same pointer for Rectangle object and circle object
	p = new circle(5);
	cout << endl;
	cout << p->Area() << endl;
	cout << p->Perimeter() << endl;
}
