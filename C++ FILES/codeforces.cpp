#include <bits/stdc++.h>
using namespace std;
int helper(int n, string &s)
{
	int lastWater = -10, ans = 0;
	bool isEmpty = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '#')
		{
			lastWater = i;
		}
		else
		{
			if (lastWater == i - 1)
			{
				ans++;
				//				s[i] = '#';
				if (i + 1 < n)
					s[i + 1] = '#';
			}
		}
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
		string s;
		cin >> s;
		cout << helper(n, s);
	}
}
