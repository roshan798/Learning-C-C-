#include<bits/stdc++.h>
using namespace std;

int mapToInt(map<int,int> &v){
	int num = 0;
	for(map<int,int>::reverse_iterator it = v.rbegin();it != v.rend();it++) {
		if(it->first==-1) break;
		int t = it->second;
		while(t--) {
			num = num *10 + it->first;
		}
	}
	return num;
}
//1 945 500
void toMap(int num,map<int,int> &v) {

	while(num) {
		v[num%10]++;
		num/=10;
	}
}
void toVector(int num,vector<int> &v) {

	while(num) {
		v.push_back(num%10);
		num/=10;
	}
}

int recurse(map<int,int> &mp,int ans,vector<int> &v,int ind){
	cout<<"rec - "<<ans<<endl;
	if(ind<0) return -1;
	map<int,int>::iterator it = mp.lower_bound(v[ind]);
	while(it!=mp.end()) {
		if(v[ind]== it->first) {
			cout<<" equal"<<it->first<<endl;
			int t = it->first;
			if(it->second == 1) {
				map<int,int>::iterator temp = it;
				it++;
				mp.erase(temp);
			}
			else {
				it->second--;
			}
			ans = ans * 10 + t;
			int temp = recurse(mp,ans,v,ind - 1);
			if(temp != -1) return temp;
			ans %=10;
			mp[t]++;
		}
		else if(v[ind] < it->first) {
//			toMap(ans,mp);
			cout<<" before ans=>"<<ans<<endl;
			ans = ans * 10 + it->first;
			if(it->second == 1) {
				mp.erase(it);
			}
			else it->second--;
			int tt = 0;
			cout<<"map size = "<<mp.size()<<endl;
			for(map<int,int>::iterator i=mp.begin();i != mp.end(); i++) {
				
				if(i->first!=-1) {
					cout<<tt++<<"it->"<<i->first<<"  "<<i->second<<endl;
					while(i->second > 0) {
						ans = ans *10 + i->first;
						i->second--;
					}
				}
			}
//			ans = mapToInt(mp);
			return ans;
		}
		
	}
	return -1;
}

int helper(int a,int b) {
	cout<<"a->"<<a<<" b->"<<b<<endl;
	map<int,int> ad;
	ad[-1] = 0;
	vector<int> bd;
	toMap(a,ad);
	int maxNum = mapToInt(ad);
	cout<<"maximum  Possible Number => "<<maxNum<<endl;
	if(maxNum > b) { 
		toVector(b,bd);
		
		// let's try
		// a = 123456
		// b 55556
//		bd => 6 5 5 5 5 
//            0 1 2 3 4 
		// ans = 564321	
		int ans = recurse(ad,0,bd,bd.size() - 1);
		cout<<"return ->"<<ans<<endl;
		return ans;
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		int output = helper(a,b);
		cout<<"output -> "<<output<<endl;
	}
//	4
//	495 500
//	123 234
//	999 100
//	100 999
}
