//Graph using Adjancy Matrix 
//  example input //  (7 8 1 2 1 3 2 4 3 4 5 4 3 5 5 6 5 7)
#include<bits/stdc++.h>
#define N 1e5
using namespace std;
vector<bool> Visited(N);
void DFS(vector<vector<int>> &a,int u) {
	if(Visited[u]==false) {
		cout<<u<<"  ";
		Visited[u]=true;
		for(int v=1;v<a.size();v++) {
			if(a[u][v]==1 && Visited[v]==false ) {
				DFS(a,v);
			}
		} 
	}	
}

void BFS(vector<vector<int>> &a,int i)
{
	
	queue<int> Q;
	vector<int> visited(a.size(),0);
	cout<<i;
	Q.push(i);
	visited[i]=1;
	int v,u;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		for(int v=1;v<a.size();v++) { 
			if(a[u][v]==1 && visited[v]==0) {
				cout<<"  "<<v;
				visited[v]=1;
				Q.push(v);
			}
		}
		
	}
	
	
}
int main() {
	int vertices,edges;
	cout<<"Totel vertices : ";
	cin>>vertices;
	cout<<"Totel edges : ";
	cin>>edges;
//	int adjmatrix[vertices+1][vertices+1]={0};
vector<vector<int>> adjmatrix(vertices+1);
	int v1,v2;
	for (int i=0;i<=vertices;++i)
	{
		adjmatrix[i]=vector<int>(vertices+1);
		adjmatrix[i][0]=i;
//		cout<<adjmatrix[i][0]<<endl;
	}
	
	cout <<"Enter edges in the form of vertex1  is going to vertex 2 : "<<endl;
	for(int i=1;i<=edges;i++) {
		int vertices,edges;
		cout<<"(Vertex(u) --> vertex(v)) : ";
		//  example input //  (7 8 1 2 1 3 2 4 3 4 5 4 3 5 5 6 5 7)
		cin>>v1>>v2;
		cout<<endl;
		adjmatrix[v1][v2]=1;
		adjmatrix[v2][v1]=1;
	}
	cout<<endl;
	for(int i=1;i<=vertices;i++) {
		for (int j=0;j<=vertices;j++) {
			(j==0)?cout<<adjmatrix[i][j]<<"\t   -->  " : cout<<adjmatrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	cout<<"Performing Breadth First Search : ";
	BFS(adjmatrix,5);
	cout<<endl<<endl;
	cout<<"Performing Depth First Search   : ";
	DFS(adjmatrix,5);
	cout<<"\nExample GRAPH  :"<<endl;
	cout<<"\n\t1--2"<<endl;
	cout<<"\t|  |"<<endl;
	cout<<"\t3--4"<<endl;
	cout<<"\t \\ /"<<endl;
	cout<<"\t  5"<<endl;
	cout<<"\t / \\"<<endl;
	cout<<"\t6   7"<<endl;
	
}

//7 8 1 2 1 3 2 4 3 4 5 4 3 5 5 6 5 7
/*  Example 
	1--2
	|  |
	3--4
	 \ /
	  5
	 / \
	6   7
*/
