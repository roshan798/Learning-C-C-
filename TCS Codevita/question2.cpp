#include<bits/stdc++.h>
using namespace std;
int cal(int N,vector<int> &v,int K) {
	int an = 0,prePos = -1;
	
	while(prePos!=K) {
		int maxPrio = INT_MIN,pos = -1;
		for(int i=0;i<N;i++) {
			if((i<prePos) && (v[i]!=-1))	v[i]++;
			if(maxPrio < v[i]) {
				maxPrio = v[i];
				pos = i; 
			}
		}
		prePos = pos;
		v[prePos] = -1;
		an++;
	}
	return an;
}
int main() {
	
	int N;
	cin>>N;
	vector<int> ar(N,0);
	for(int i=0;i<N;i++)
		cin>>ar[i];
	int K;
	cin>>K;
	int ans = cal(N,ar,K-1);
	cout<<ans;
	//input
//	6
//	1 3 5 2 4 6
//   4

//5
//1 4 3 2 5
//3
}
