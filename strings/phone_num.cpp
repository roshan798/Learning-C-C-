#include <bits/stdc++.h>
#include <sstream>
using namespace std;
char convert(std::string s)
{

	if (s == "zero")
		return '0';
	else if (s == "one")
		return '1';
	else if (s == "two")
		return '2';
	else if (s == "three")
		return '3';
	else if (s == "four")
		return '4';
	else if (s == "five")
		return '5';
	else if (s == "six")
		return '6';
	else if (s == "seven")
		return '7';
	else if (s == "eight")
		return '8';
	else if (s == "nine")
		return '9';
	else
		return -1;
}
using namespace std;
int main()
{
	string number, num;
	getline(cin, number);
	vector<char> n;
	stringstream ss;
	ss << number;
	string tmp;
	int i = 0;
	while (ss >> tmp)
	{
		cout << tmp << endl;
		char t = convert(tmp);
		if (t == -1)
		{
			cout << "invalid input ";
			break;
		}
		else
		{

			n.push_back(t);
		}
		tmp.erase();
	}
	for (int i = 0; i < n.size(); i++)
		cout << n[i] << "  ";
}
