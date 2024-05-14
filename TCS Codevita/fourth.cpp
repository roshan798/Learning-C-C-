#include <bits/stdc++.h>
using namespace std;

struct Node
{
	string tune;
	int level;
	vector<Node *> children;
};
map<string, Node *> nodes;
Node *root = nullptr;
void createChildren(string &s, int pos, int rootLevel)
{
	int n = s.length() + 1, l = pos;
	for (int i = pos; i < n; i++)
	{
		if (s[i] < 'a' || s[i] > 'z')
		{
			if (l != i)
			{
				string t = s.substr(l, i - l);
				Node *node = new Node();
				node->level = 1;
				node->tune = t;
				root = node;
				nodes[t] = node;
			}
			l = i + 1;
		}
	}
}
void setNodes(string &s)
{
	size_t right = s.find(':');
	string t = s.substr(0, right);
	if (nodes.find(t) != nodes.end())
	{
		Node *node = nodes[t];
	}
	else
	{
		Node *node = new Node();
		node->level = 1;
		node->tune = t;
		root = node;
		nodes[t] = node;
	}
	cout << "root->" << t << endl;
}
int main()
{
	int N;
	cin >> N;
	int temp = N;

	while (temp--)
	{
		string t;
		getline(cin, t);
		setNodes(t);
		cout << t << endl;
	}
}

/*

5
pop : rock country disco
rock : jazz blues
country : swing
disco : salsa new ambient
swing : gospel techno
rock-swing-new-salsa-swing-blues
swing-swing-blues-jazz
4 2 1
*/
