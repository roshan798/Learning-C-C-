#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
 	int n,s;
 	cin>>n>>s;
 	vector<int> arr(n+1);
 	arr[0]=0;
 	for(int i=1 ; i<=n; i++ ){
		cin>>arr[i];
	}
	int i=1,j=1;
	while(i<=n && j<= n) {
		if (arr[0]==s ) break;
		else if(arr[0] < s) arr[0]+=arr[i++];
		else if(arr[0] > s ) {
			 arr[0]-=arr[j++];
		}
		
		cout<<"SUM = "<<arr[0]<<endl;
		cout<<"j - "<<j<<"\ni - "<<i<<endl;
	}
	cout<<"\n\nj - "<<j<<"\ni - "<<i-1<<endl;
	//5 12
	//1 2 3 7 5
 }
