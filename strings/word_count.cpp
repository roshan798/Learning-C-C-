#include <iostream>
#include <string>
using namespace std;
int word_count(string &s)
{
	int count = 0;
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == ' ' && i != 0 && s[i + 1] != ' ')
			count++;
	}
	return count;
}

using namespace std; //     sjusah chjds   skjchosa ujdhc    duchsd  udsb
int main()
{
	int t;
	cin >> t;

	//	cin.ignore();
	string s;
	while (t > 0)
	{
		cout << t << endl;
		cout << "Enter string : ";
		getline(cin, s);
		cout << word_count(s) << endl;
		t--;
	}
}
