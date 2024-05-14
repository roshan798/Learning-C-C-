#include<bits/stdc++.h>
using namespace std;

int main()
{
	string sen,word={"is"},temp;
	getline(cin,sen);
	cout<<"sentence : "<<sen<<endl;
	for(int i=0;sen[i]!=0;i++)
	{
		if(sen[i]!=' ')
			temp=temp+sen[i];
		else if(temp==word)
		{
			
			cout<<"word found"<<endl;
			break;
		}
		else
			temp=nullptr;	
	}
	cout<<temp<<endl;
	return 0;
}
