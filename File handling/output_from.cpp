#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream out("File.txt");
	//	out.open("File.txt");
	if (out)
	{
		cout << "File.txt opened" << endl;
		string s1, s2;
		int num;
		out >> s1 >> s2 >> num;
		out.close();
		cout << s1 << endl
			 << num << endl
			 << s2 << endl;
	}
	else
		cout << "couldn't load File.txt " << endl;
}
