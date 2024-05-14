#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t;
	vector<int> a;
	for (int i=0;i<n;i++) {
		cin>>t;
		a.push_back(t);		
	}
	
	bool flag=false;
	for(int i=0;i<(1<<n);i++) {
		int key=0;
		for(int j=0;j<n;j++) {
			if(i&(1<<j)) {
				key+=a[j];
			}
			else {
				key-=a[j];
			}
		}
		if(key%360==0) {
			cout<<"Yes"<<endl;
			flag=true;
			break;
		}
	}
	if(!flag)
		cout<<"No"<<endl;
	
}
