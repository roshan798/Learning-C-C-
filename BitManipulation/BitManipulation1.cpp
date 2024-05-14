#include <iostream>
using namespace std;
void printBin(int n)
{
	while (n > 0)
	{
		cout << n % 2;
		n /= 2;
	}
	cout << endl;
}
bool Set(int val, int pos)
{
	return val & (1 << pos);
}
void setBit(int &val, int pos)
{
	val = val | (1 << pos);
}

int main()
{
	int n = 5, pos = 1;
	printBin(n);
	Set(n, pos) ? cout << n << " Bit set at " << pos << endl : cout << n << " Not bit set at " << pos << endl;
	setBit(n, pos);
	printBin(n);

	printBin(n);
}
