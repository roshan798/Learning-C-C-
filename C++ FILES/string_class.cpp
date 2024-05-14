#include <iostream>
#include <string>
using namespace std;
// string class
int main()
{
	string s1, s2;
	cout << "Enter 1st string : ";
	getline(cin, s1);
	cout << "Enter 2nd string : ";
	getline(cin, s2);
	cout << endl
		 << "length of string 1 : " << s1.length() << endl; // length of string
	cout << "length of string 2 : " << s1.size() << endl;
	cout << "allocated size of string 1" << s1 cout << "string 1 + string 2 : " << s1 + s2 << endl; // concatanate
	return 0;
}
