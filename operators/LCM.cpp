//LCM of more than two numbers
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number of elements in array : ";
	cin>>num;
	vector<int> arr(num);
	cout<<endl<<"Enter "<<num<<" items : ";
	for(int i=0;i<num;i++)
		cin>>arr[i];
	int LCM=0,max=INT_MIN,multiple=1;
	for(int i=0;i<num;i++) {
		if(arr[i]>max)
			max=arr[i];
			
		multiple*=arr[i];
	}
	int i;		
	for(int j=max; ;j++)
	{
		for( i=0;i<num;)
		{
			if(j%arr[i]==0)
				i++;
			else
				i=num+2;
		}
		if(i==num)
		{
			LCM=j;
			break;
		}
	}
	
	cout<<endl<<"LCM : "<<LCM<<endl;
	cout<<endl<<"HCF : "<<multiple/LCM<<endl;
}
