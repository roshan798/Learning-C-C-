#include<iostream>
using namespace std;
int main()
{
	long n,a,b,c;
	cout<<"Enter num : ";
	cin>>n;
	a=0,b=1,c=1;
	while(n >= a)
	{
		if(n==a)
			break;
		a=b;
		b=c;
		c=b+a;
		
	}
	if(n==a)
		printf("%d is present in fibonacci series.",n);
	else
		printf("%d is not present in fibonacci series.",n);	
}
