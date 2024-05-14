#include<bits/stdc++.h>
using namespace std;
int checknum(string &s)
{
	for (int i=0;i<s.length();i++)
	{
		if(s[i]>=48 && s[i]<=57)
			return 1;	
	}
	return 0;
}
int capital(string &s)
{

	for (int i=0;i<s.length();i++)
	{
		if (s[i]>=65 && s[i]<=90 )
			return 1;
	}
	return 0;
}
int small(string &s)
{
	for (int i=0;i<s.length();i++)
	{
		if(s[i] >= 97 && s[i]<=122)
			return 1;
	}
	return 0;
}
int special(string &s)
{
	for (int i=0;i<s.length();i++)
	{
		if(s[i]>=33 && s[i]<=38 || s[i]==63 || s[i]==64)
			return 1;
	}
	return 0;
}

int main()
{
	int T;
	cin>>T;
	int c=1;
//	string s;
//	cin>>s;
//	cout<<small(s);
	while(c<=T)
	{
		int length;
		cin>>length;
		string s;
		cin>>s;
		if(checknum(s)==0)
		{
			s.append("4");
		}
		if(small(s)==0)
		{
			s.append("f");
		}
		if(capital(s)==0)
		{
			s.append("H");	
		}
		if(special(s)==0)
		{
			s.append("@");
		}
		if(s.length()<7)
		{
			while(s.length() < 7)
			{
				s.append("1");
			}
		}
		cout<<"Case #"<<c++<<": "<<s<<endl;	
	}
}
