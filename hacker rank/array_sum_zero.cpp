#include<iostream>
#include<vector>
// 8 15 -2 2 -8 1 7 10  23
using namespace std;
int main() {
	int n,tmp;
	cin>>n;
	
	vector<int> a(n+1,0);
	for(int i=1;i<=n;i++) {
		cin>>tmp;
		a[i]=a[i-1]+tmp;
	}
	int max=0;
	for(int i=1;i<a.size();i++) {
	cout<<" a[i] -->" <<a[i]-a[i-1]<<endl;
		
		for(int j=i+1;j<a.size();j++) {

            cout<<"\ta[j] -->" <<a[j]-a[i-1]<<endl;
			if(a[j]-a[i-1]==0 && (j-i) > max) {	
				max=j-i;
				cout<<"\ni --> "<<i<<"  j-->"<<j<<endl;
			}
		}
	}
//	for(int i=1;i<a.size();i++) cout<<a[i]<<"  ";
	cout<<max<<endl;
	
}
//cout<<" a[i] -->" <<a[i]-a[i-1]<<endl;
//
//
