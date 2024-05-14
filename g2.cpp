#include<bits/stdc++.h>
using namespace std;
int gcd( int a, int b){
    if(b>a)
    return gcd(b,a);
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
	int T;
	cin>>T;
	int c=1;
	while(c<=T)
	{
		int n,x,y;
		cin>>n,x,y;
		vector<int> arr(n+1);
		for(int i=1;i<n+1;i++)
			arr[i]+=arr[i-1]+i;
		for(int i=1;i<=n;i++)
		{
			if(arr[n]/arr[i]==0 || arr[i]/arr[n]==0)
			{
				cout<<"Case #"<<c<<": POSSIBLE"<<endl;
			}
			else{
				cout<<"Case #"<<c<<": IMPOSSIBLE"<<endl;
			}
		}
	
		c++;
	}
}
