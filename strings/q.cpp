#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int word_count(string str)
{
	stringstream ss;
	ss<<str;
	
	int count=0;
	string temp;
	string max;
	
	while(ss>>temp)
	{
		++count;
		if(temp.length() > max.length())
			max=temp;
	}
	cout<<"\nLargest word  : "<<max<<endl;
	return count;
	
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		getline(cin,s);
		cout<<"words count : "<<word_count(s)<<endl;
		t--;
	}
}
