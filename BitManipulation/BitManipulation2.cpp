#include <iostream>
using namespace std;

int main()
{
	// upper case  to lowercase
	char A = 'A';
	cout << A << endl;
	char a = A | ' ';
	cout << A << "-----> " << a << endl;
	// lower case to upper case
	char z = 'z';
	cout << z << endl;
	char Z = z & '_';
	cout << z << " ----> " << Z << endl;
}
