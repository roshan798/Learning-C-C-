#include <bits/stdc++.h>
using namespace std;
string word_reverse(string s)
{
	cout << s[0] << "  " << s[1] << endl;
	int i = 0, j = 0, key = 0;

	while (i <= s.size())
	{

		while (s[j] != ' ' || s[j] != '.' || s[j] != '\n' || j <= s.size())
		{
			j++;
			cout << j;
		}

		key = j;
		cout << "s[j] : " << s[key];
		while (j != i)
		{

			char t = s[j - 1];
			s[j - 1] = s[i];
			s[i] = t;
			i++;
			j--;
		}
		i = j = key + 1;
	}
	cout << endl
		 << s << endl;
	return s;
}

int main()
{
	string str;
	cout << "Enter string : ";
	getline(cin, str);
	cout << "\nstring before reversing words : " << str << endl;

	cout << "\nstring after reversing words : " << word_reverse(str) << endl;
}
