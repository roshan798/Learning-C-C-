#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<char> v(n);
		//
		int left = INT_MAX, right = -1;
		//
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			if (v[i] == 'B')
			{
				left = min(left, i);
				right = max(right, i);
			}
		}
		cout << right - left + 1 << endl;
	}
}
