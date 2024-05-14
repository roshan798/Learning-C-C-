#include<bits/stdc++.h>
using namespace std;
long helper(long long p,long long d,long long l,long long t){ 
	long long totalTasks = d/7 + (d%7!=0);
	long long dualTaskDays = totalTasks>>1;
	long long oneDayPoint = l + (t * 2);
	long long ans = 0;
	cout<<"tt->"<<totalTasks<<" dtd->"<<dualTaskDays<<" odp->"<<oneDayPoint<<endl;
//	if(oneDayPoint * dualTaskDays >= p) {
		if(dualTaskDays){
			long days = p / oneDayPoint;
			cout<<"days->"<<days<<endl;
			ans = days;
		p -= oneDayPoint * dualTaskDays;
		}
		
//	}
	cout<<"left p->>"<<p<<" ans- "<<ans<<endl;
	if(p>0) {
		if(totalTasks&1) {
//			days += 1;
			ans++;
			p -= (l + t);
		}
		cout<<"left p->>"<<p<<" ans- "<<ans<<endl;
		if(p>0) {
			ans+=(p/l)+(p%l!=0);
		}
	}
	cout<<"left p->>"<<p<<" ans- "<<ans<<endl;
	ans = d - ans;
	return ans<=0?0:ans;
	
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long reqPoint,days,lp,tp;
		cin>>days >>reqPoint >>lp >> tp;
		cout<<helper(reqPoint,days,lp,tp)<<endl<<endl;
	}
}
/*
1
1 5 5 2

/
/
5
1 5 5 2
14 3000000000 1000000000 500000000
100 20 1 10
8 120 10 20
42 280 13 37

//

3
2
00
2
11
2
10

*/
