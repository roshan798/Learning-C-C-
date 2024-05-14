#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter a string : ";
	string str;
	getline(cin,str);

	
	string::iterator it;
	for(it=str.begin();it!=str.end();it++)
	{
		if(*it>='a' & *it<='z')
			*it-=32;
	}
	cout<<"string in uppercase : "<<str<<endl;
}
