#include<bits/stdc++.h>
using namespace std;
int main() {
	long t,n=0,l,r,res;
	cin>>t;
	while(n++<t) {
		cin>>l>>r;
		if(!l || !r) {
			res=0;
		}
		else if(l%2==0 && r%2==0) {
		    res=(r/2) + (l/2);
		}
		else {
			res=(r/2) + (l/2)+1;
		}
		cout<<"Case #"<<n<<": "<<res<<endl;
	}
}

