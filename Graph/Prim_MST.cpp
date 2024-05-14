#include<iostream>
#include<vector>
#define I 2147483647
using namespace std;
vector<pair<int,int>> MST;
void PrintMST(vector<vector<int>> &ADJ) {
    cout << "\nMinimum Spanning Tree Edges (w/ cost)\n" << endl;
    int sum {0};
    for (int i {0}; i<MST.size(); i++){
    	int c=ADJ[MST[i].first][MST[i].second];
        printf("\nG[%d][%d]--> %d\n",MST[i].first,MST[i].second,c);
        sum+=c;
	}
    cout << endl;
    cout << "Total cost of MST: " << sum << endl;
}
 
void PrimMST(vector<vector<int>> &adj)
{

	int k;
	vector<int> near(adj[0].size(),I);

	int min=I;
	pair<int,int> tmp;
	for(int i=1;i<adj.size();i++) {
		for(int j=i;j<adj.size();j++) {

			if(adj[i][j] < min) {
				min=adj[i][j];
				tmp.first=i;
				tmp.second=j;
			}
		}
	}
		MST.push_back(make_pair(tmp.first,tmp.second));
		
		near[tmp.first]=near[tmp.second]=0;
	for(int i=1;i<=near.size();i++) {
		
		if(near[i]!=0 && adj[i][tmp.first] < adj[i][tmp.second]) {
			near[i]=tmp.first;
		}
		else if(near[i]!=0){
			near[i]=tmp.second;
		}
	}
	
	for(int i=1;i<adj.size()-2;i++) {
		min=I;
		for (int j=1;j<near.size();j++) {
			if(near[j]!=0 && adj[j][near[j]] <min) {
				k=j;
				min=adj[j][near[j]];
				tmp.first=j;
				tmp.second=near[j]; 
			}
		}
		MST.push_back(make_pair(tmp.first,tmp.second));
		near[k]=0;
		for(int j=1;j<near.size();j++) {
			if(near[j]!=0 && adj[j][near[j]] > adj[j][k]) {
				near[j]=k;
			}
		}
	}
	
	for(auto i=MST.begin();i!=MST.end();i++) {
		cout<<"\nMst -->"<<"("<<i->first<<","<<i->second<<")"<<endl;
	}
	
}

int main() {
	vector<vector<int>> adj={
            {I, I, I, I, I, I, I, I},
            {I, I, 10, 8, 15, I, I, I},
            {I, 10, I, I, I, I, I, 65},
            {I, 8, I, I, 25, 5, I, I},
            {I, 15, I, 25, I, I, 30, I},
            {I, I, I, 5, I, I, 7, I},
            {I, I, I, I, 30, 7, I, 20},
            {I, I, 65, I, I, I, 20, I},
    };
	for(int i=1;i<adj.size();i++) {
		for(int j=1;j<adj.size();j++) {
			if(adj[i][j]==I) printf("%2d  ",0);
			else printf("%2d  ",adj[i][j]);
		}
		cout<<endl<<endl;
	}
		
	PrimMST(adj);
	PrintMST(adj);

	

}
