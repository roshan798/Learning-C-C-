#include<bits/stdc++.h>
using namespace std;
int helper(vector< vector<int> > &mat,int row,int end,vector<int> &dp) {
	if(row==end) return 0;
	if(dp[row]==-2) {
		dp[row] = INT_MAX;
		for(int i=0;i<(int)mat[row].size();i++) {
			int t = helper(mat,mat[row][i],end,dp);
			if(t!=INT_MAX) {
				if(dp[row]==INT_MAX)
					dp[row] = t;
				else{
					dp[row] = min (dp[row],t);
				}
			}
		}
		return (dp[row]==INT_MAX) ? INT_MAX : dp[row] = dp[row] + 1;
	}
	return dp[row];
}
int main() {
    int N;
    cin >> N;
    vector< vector<int> > matrix(N+1);

    cin.ignore();

    for (int i = 1; i <= N; ++i) {
        vector<int> row;
        string line;

        getline(cin, line); 

        istringstream iss(line);
        int num;

        while (iss >> num) {
            row.push_back(num);
        }

        matrix[i] = row;
    }
    int start =0,end = 0;
    cin>>start;
    cin>>end;
    vector<int> dp(N+1,-2);
	int ans = helper(matrix,start,end,dp);
	if(ans==INT_MAX) ans = -1;
	cout<<ans<<endl;
    return 0;
}

/*

5
2 4
1
1 5
2 3
5
2 3

*/

/*
3
2
1
1
2 3 
*/

