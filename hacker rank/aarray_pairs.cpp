#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n+1);
	int tmp;

	for (int i=1;i<arr.size();i++)
	{
		cin>>tmp;
		arr[i]=(arr[i-1]+tmp);
	}
	long count =0;
	for (int i=1;i<arr.size()-1;i++)
	{
		int a1=(arr[i]-arr[i-1]);
		cout<<endl<<i<<"\t";
		for (int j=i+1;j<arr.size();j++)
		{
			int b1=(arr[j]-arr[j-1]);
			int sum=(arr[j]-arr[i-1]);
			if(a1*b1<=sum){
				count++;
				cout<<endl<<"count ="<<count;
			}
		}
	}
	cout<<endl<<count;
}
