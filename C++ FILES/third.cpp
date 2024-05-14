#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &v, int n, vector<vector<int>> &quer, int q)
{
	vector<int> mp(n, -1);
	for (int i = 1; i < n; i++)
	{
		if (v[i] != v[i - 1])
		{
			mp[i] = i;
		}
		else
		{
			mp[i] = mp[i - 1];
		}
	}
	for (int i = 0; i < q; i++)
	{
		int last = mp[quer[i][1] - 1];
		//		cout<<" ans->";
		if (last > (quer[i][0] - 1))
		{
			cout << mp[quer[i][1] - 1] << " " << mp[quer[i][1] - 1] - 1 << endl;
		}
		else
		{
			cout << -1 << " " << -1 << endl;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		int q;
		cin >> q;
		vector<vector<int>> queries(q, vector<int>(2));
		for (int i = 0; i < q; i++)
		{
			cin >> queries[i][0] >> queries[i][1];
		}
		helper(v, n, queries, q);
	}
}
