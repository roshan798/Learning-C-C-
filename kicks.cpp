#include<bits/stdc++.h>
using namespace std;
int candyforeach(int size,int count) {
	vector<int> a(size+1,0);
	
	for(int i=1;i<=size;i++) {
		cin>>a[i];
		a[i]+=a[i-1];
	}
	return a[size]%count;
}
int main() {
	int t;
	cin>>t;
	int i=0;
	int candy,child;
	while(i++<t) {
		cin>>candy>>child;
		int res=candyforeach(candy,child);
		cout<<"Case #"<<i<<": "<<res<<endl;
	}
}
