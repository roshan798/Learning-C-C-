#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c)
{
	switch(c)
	{
		case 'a':return 1;
		case 'A':return 1;
		case 'i':return 1;
		case 'I':return 1;
		case 'o':return 1;
		case 'O':return 1;
		case 'u':return 1;
		case 'U':return 1;
		default : return 0;
	}
}
int main()
{
	int t;
	cin>>t;
	vector<int> res(t+1);
	
	for(int i=1;i<=t;i++)
	{
		
		string s;
		cin>>s;
		cout<<"Case #"<<i<<": "<<s<<" is ruled by ";

		if((s[s.length()-1])=='y' || (s[s.length()-1])=='Y')
		{
			cout<<"nobody.";
		}
		else
		{
			isvowel(s[s.length()-1]) ? cout<<"Alice.": cout<<"Bob";
		}
		cout<<endl;
	}

	return 0;
}
