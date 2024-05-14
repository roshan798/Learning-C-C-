#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	string  temp;
	cout<<"Enter a string : ";
	getline(cin,str);
	
	for(int i=str.length()-1;i>=0;--i)
		temp.push_back(str[i]);	
		
	cout<<endl<<temp<<endl;
	if(str.compare(temp))
		cout<<endl<<"String is not pallindrome";
	else
		cout<<endl<<"String is pallindrome";
}
