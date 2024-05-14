#include <iostream>
using namespace std;
void Sum(int n, int sum)
{
	if (n < 1)
		cout << "Sum = " << sum << endl;
	else
	{
		sum += n;
		Sum(n - 1, sum);
	}
}
int Sum(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return n + Sum(n - 1);
	}
}
int main()
{
	cout << "from Sum funtion  :- \n";
	Sum(5, 0);
	cout << "from main funtion  :- \nSum : " << Sum(5);
}
