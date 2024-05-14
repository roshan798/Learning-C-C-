#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
	return a + b;
}
int main()
{
	float a, b;
	a = 5.5f;
	b = 4.5f;
	cout << "SUM : " << sum(a, b);
}
