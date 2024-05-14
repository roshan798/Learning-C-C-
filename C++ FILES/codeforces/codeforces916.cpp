#include<bits/stdc++.h>
using namespace std;
void helper(int n,int k) {
	int start = n - k;
	int i = 0;
	while(start <=n) {
//		ans[i++] = start;
		cout<<start++<<" ";
	}
	start = n - k - 1;
	while(start>=1) {
//		ans[i++] = start--;
		cout<<start--<<" ";
	}
	cout<<endl;
	
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		helper(n,k);
	}
}
