#include <bits/stdc++.h>
using namespace std;
void print2DArray(vector<vector<int>> &arr)
{
	int n = arr.size(), m = arr[0].size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void prefixSum(vector<vector<int>> &arr)
{
	int n = arr.size(), m = arr[0].size();
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			arr[i][j] += (arr[i - 1][j] + arr[i][j - 1]) - arr[i - 1][j - 1];
		}
	}
}
int main()
{

	vector<vector<int>> arr = {
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 4, 6, 2, 1, 5, 4},
		{0, 2, 1, 1, 2, 5, 4, 10},
		{0, 1, 4, 6, 2, 8, 3, 2},
		{0, 2, 4, 1, 2, 7, 1, 9}};
	print2DArray(arr);
	prefixSum(arr);
	cout << "After prefix sum -> \n";
	print2DArray(arr);
}
