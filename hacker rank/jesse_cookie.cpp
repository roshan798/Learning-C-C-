#include<bits/stdc++.h>
using namespace std;
int main() {
	multiset<int> cookie;
	int count=0,n,k,tmp;
	cin>>n>>k;
	for(int i=0;i<n;i++) { 
		cin>>tmp;
		cookie.insert(tmp);
	}
	int a,b;
	auto i=cookie.begin();
	a=(*i);
	i++;
	b=(*i);
	 while(cookie.size()>=2 && a < k && b < k) {
	 	count++;
	 	cout<<"a-->"<<a<<"  b-->"<<b<<endl;
	 	if(a > k) {
            break;
		}
		else {
			
            cookie.erase(a);
            cookie.erase(b);
            cookie.insert(a+(2*b));
            i=cookie.begin();
			a=(*i);
			i++;
			b=(*i);
		}
	 }
	 auto it=cookie.begin();
	 if((*it) > k)
        cout<<count;
     else 
     	cout<<-1;
}/*
8 90
13 47 74 12 89 74 18 38
6 7                 
1 2 3 9 10 12
*/
