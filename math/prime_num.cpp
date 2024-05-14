#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter the range of finding prime number"<<endl;
	int range;
	cin>>range;
	int count=0;
	
	for(int i=range;i>1;--i)
	{
		int j;
		for(j=i-1;j>1;j--)
			if(i%j==0)
				count++;
		if(count==0)
			cout<<"number : "<<i<<endl;				
		else
			count=0;
	}
}
