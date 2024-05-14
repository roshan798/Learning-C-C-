#include <bits/stdc++.h>
using namespace std;
string helper(vector<int> &v, int n)
{
	int mp[26] = {0};
	string ans(n, 'a');
	for (int i = 0; i < n; i++)
	{
		ans[i] = char(mp[v[i]] + 'a');
		mp[v[i]]++;
	}
	return ans;
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
			int t;
			cin >> t;
			v[i] = t % 26;
		}
		cout << helper(v, n) << endl;
	}
}
