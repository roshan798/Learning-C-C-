#include <iostream>
using namespace std;

class Base
{
public:
	Base(int x) { cout << " Base is excuted : x = " << x << endl; }
};

class Derived : public Base
{
public:
	Derived(int x, int y) : Base(x)
	{
		cout << " Derived is excuted : y = " << y << endl;
	}
};
int main()
{
	Derived d(5, 10);
}
