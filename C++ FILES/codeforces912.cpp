#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &v, int k, int n)
{
	if (k > 1 || n <= 1)
		return 1;
	int pre = v[0];
	for (int i = 1; i < n; i++)
	{
		if (v[i] < pre)
			return 0;
		pre = v[i];
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		cout << (check(v, k, n) ? "YES" : "NO") << endl;
	}
}
