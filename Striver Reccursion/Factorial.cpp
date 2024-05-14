#include <iostream>
using namespace std;
void Fact(int n, int fact)
{
	if (n == 0)
		cout << " Factorial : " << fact << endl;
	else
	{
		fact *= n;
		Fact(n - 1, fact);
	}
}
long long Fact(int n)
{
	if (n == 0)
		return 1;
	return n * Fact(n - 1);
}
int main()
{
	cout << "From Factorial Function  :- \n";
	Fact(5, 1);
	cout << "From Main Funtion  :- \nFactorial : " << Fact(5);
}
