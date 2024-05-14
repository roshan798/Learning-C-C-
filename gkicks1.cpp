#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Count(string &s) {
	vector<vector<int>> hsh(26);
	vector<int> alpha_count(26,0);
//	for(int i=0;i<s.length();i++) { 
//		hsh[i].push_back(0);
//	}
	for(int i=0;i<s.length();i++) {
		for(int j=0;j<26;j++) {
			if((s[i]-'A')==j) {
				alpha_count[j]++;	
			}
			hsh[j].push_back(alpha_count[j]);
		}
	}
	return hsh;
}
void print(vector<vector<int>> &a) {
	for(int i=0;i<a.size();i++) {
		cout<<endl<<(char)(i+'A')<<" : ";
		for(int j=0;j<a[i].size();j++) {
			cout<<a[i][j]<<"  ";
		}
	}
}
int main() {
	int t,n=0,l,r,count;
	cin>>t;
	int n1,n2;
	string s;
	
	while(n++<t) {
		count=0;
		cin>>n1>>n2;
		cin>>s;
		vector<vector<int>> a=Count(s);
		cout<<endl;
		print(a);
		cout<<endl;
		while(n2--) {
			cin>>l>>r;
			
			int odd=0,ct=0;
			for(int i=0;i<26;i++) {
				ct=a[i][r-1]-a[i][l-2];
				if(ct%2!=0) {
					odd++;
				}
				if(odd>1) break;
			}
			if(odd<=1) count++;
		}
		cout<<"Case #"<<n<<": "<<count<<endl;
	}
}
