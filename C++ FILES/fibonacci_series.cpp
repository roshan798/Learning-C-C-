#include <iostream>
using namespace std;

int main()
{
	int terms, a = 0, b = 1, c;
	cout << "Enter the terms of fibonacci series to be displayed : ";
	cin >> terms;

	for (int i = 0; i < terms; i++)
	{
		c = a + b;
		cout << a << "  ";
		a = b;
		b = c;
	}

	return 0;
}
