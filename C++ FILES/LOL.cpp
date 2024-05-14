#include<bits/stdc++.h>
using namespace std;
int helper(char *food,int n,int Lct,int Oct) {
	int lct=0,oct = 0;
	for(int i=0;i<n;i++) {
		if(food[i]=='L')
			lct++,Lct--;
		else oct++,Oct--;
		
	}
}
int main() {
	int n;
	cin>>n;
	char food[n];
	int Lct = 0, Oct = 0;
	for(int i=0;i<n;i++) {
		char c;
		cin>>c;
		if(c=='L')
			Lct++;
		else Oct++;
		food[i] = c;
	}
	cout<<helper(food,n,Lct,Oct)<<endl;
	
}

