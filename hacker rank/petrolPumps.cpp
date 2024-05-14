#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int f,s;
	cin>>n;
	vector<int> pump(n);
	for(int i=0;i<n;i++) {
		cin>>f>>s;
		pump[i]=(s-f);
		
	}
	int petrol,index,j;
	
	for (int i=0;i<n;i++) {
		petrol=0;
		index=j=i;
		do {
			
			if(petrol + pump[j] > 0) {
				petrol+=pump[j];
				j=(j+1)%n;
			}
			else break;
		}while(j!=i);
		if(i==j && petrol>=0) break;
	} 
	cout<<index<<endl;
} /*
5
1 5
1 3
3 4
10 3
10 1
*/

