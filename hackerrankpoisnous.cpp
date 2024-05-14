#include <bits/stdc++.h>
using namespace std;
//  hackerrankpoisnous naam se save h half answer
int main() {
	int n;
	cin>>n;
	int day=0;
	stack<int> a;
	// stack<int> b;
    int pre;
	int t;
	// 17
//20 5 6 15 2 2 17 2 11 5 14 5 10 9 19 12 5
	for(int i=0;i<n;i++) {
		cin>>t;
//		cout<<t;
		if(a.empty() || t <= a.top()) {
			cout<<"1st if"<<t<<endl;
			a.push(t);
			// b.push(t);
            pre=t;
		}
		else {
			if(pre!=a.top() && t < pre) {
				cout<<"1st else if"<<t<<endl;
//				cout<<"A.top() : "<<a.top()<<" \npre : "<<pre<<endl;
//				cout<<" DAY : "<<day<<"\n\n";
				// b.push(t);
                pre=t;
				day++;
			}
			else  {
				cout<<"last else "<<t<<endl;
//				cout<<t<<"  ";
                if (day==0) {
                    day++;
                }
                pre=t;
				// b.push(t);
			}
			
		}	
		cout<<"A.top() : "<<a.top()<<" \npre : "<<pre<<endl;
			cout<<"DAY : "<<day<<endl;
	}
	cout<<day;
}

