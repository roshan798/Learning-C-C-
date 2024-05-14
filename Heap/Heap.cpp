#include<iostream>
#include<vector>
using namespace std;

 void display(vector<int> &a)
 {
 	for(int i=1;i<a.size();i++)
 	{
 		cout<<a[i]<<"  ";
	}
	cout<<endl;
	
 }
//void insert(vector<int> &a,int n)
//{
//	int val=a[n];
//	
//	while(n>1 && a[n/2] < val)
//	{
//		a[n]=a[n/2];
//		n/=2;
//	}
//	
//	a[n]=val;
//}

void Insert(vector<int> &a,int n)
{
	int size=a.size();
	int i=n,j=2*i;
	int val;
	while(j<=size && j+1 <=size)
	{
		if(a[j+1] > a[j])
		{
			j=j+1;		
		}
		if(a[i] < a[j])
		{
			val=a[i];
			a[i]=a[j];
			a[j]=val;
			i=j;
			j=2*i;
		}
		else {
			break;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter  number of elements you want to enter in heap : ";
	cin>>n;
	vector<int> H(n+1);
	cout<<"Enter "<<n<<" elements : \n";
//	cin>>H[1];
	for (int i=1;i<=n;i++)
	{
		cin>>H[i];
	}
	cout<<"HEAP Before insertion  : ";
	display(H);
	for (int i=n;i>=1;i--)
	{
		Insert(H,i);
	}
	cout<<"HEAP After insertion  : ";
	display(H);
	
}
