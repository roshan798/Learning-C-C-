#include <iostream>
using namespace std;
void Table(int n, int i)
{
	if (i > 10)
		return;
	cout << n * i << endl;
	Table(n, i + 1);
}
int main()
{
	int n;
	cout << "Enter the number to print it's Table : ";
	cin >> n;
	Table(n, 1);
}
