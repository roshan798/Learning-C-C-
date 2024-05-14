#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,sum,min1,min2,min3;
    set<int> s;
    cin>>n;
    int t;
    while(n--) {
        cin>>t;
        s.insert(t);
    }
    cin>>sum;
    auto it=s.begin();
    min1=(*it++);
    min2=(*it);
    it=s.find(sum-min1-min2);
    if(it!=s.end()) {
    	min3=(*it);
		cout<<min1<<" "<<min2<<" "<<min3;
	}
    return 0;
}

