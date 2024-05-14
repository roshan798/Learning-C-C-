#include<bits/stdc++.h>
using namespace std;


int main() {
    int M,N;
    cin>>M>>N;
    vector< vector<char> > v(M,vector<char> (N));
    for(int i=0;i<M;i++){
    	for(int j=0;j<N;j++) {
    		cin>>v[i][j];
		}
	}
	int coins = 0, calories = 0;
    for(int j=0;j<N;j++) {
    	int H = INT_MAX,C = INT_MAX,O = -1,currCoins = 0;
    	for(int i=0;i<M;i++) {
    		if(v[i][j]=='H' && H==INT_MAX) {
    			H = i;
			}
			else if(v[i][j]=='C') {
				currCoins++;
				if(C==INT_MAX)
    			   C = i;
			}
			if(v[i][j]=='0'){
				O = i;
			}
		}
		if(C!=INT_MAX) {
			coins += currCoins;
			 int height = M - C - 1;
			 calories += (height*2);
		}
		else if(H!=INT_MAX) {
			int height = 0;
			if(H < O){
				height = M - O - 1;
			}
			else {
				height = M - H;
			}
//			cout<< "height =>"<<height<<endl;
			calories += (height*2);
		}
//		cout<<j<<" ->"<<"  O ->"<<O<<" H-> "<<H<<" ->C "<<C<<endl;
//		cout<<"cal => "<<calories<< " coins =>"<<coins<<endl;
	}
	cout<<coins<<" "<<calories;
	
    return 0;
}

/*

5 10
0000000000
0CCC00000H
0CCC0H0000
00000H0H0H
00000H0H0H
*/
/*
5 10
0000000000
000000000H
00H00H0000
00H00H0H0H
00H00H0H0H
*/

