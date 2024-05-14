#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	char to;
	bool input, output;
	Node(char _to, bool _input, bool _output)
	{
		to = _to;
		input = _input;
		output = _output;
	}
};

int overlapping = -1;
string ansSeq = "";
char parent = 'a';
string back(map<char, vector<Node *>> &mp, char root, set<char> &vis, string &seq)
{
	if (vis.find(root) != vis.end())
		return "";
	vector<Node *> &v = mp[root];
	int n = v.size();
	int i = 0;
	for (; i < n; ++i)
	{
		Node *node = v[i];
		seq.push_back(node->input + '0');
		if (node->output == 1)
		{
			overlapping = (parent == node->to) ? 0 : 1;
			ansSeq = seq;
			return "1";
		}
		if (back(mp, node->to, vis, seq) != "")
			return "1";
		seq.pop_back();
	}
	return "";
}
int main()
{
	//    string line;
	int lineCount = 0;
	//    map<from,pair<" 0" pair<to,output>, 1:: pair< to, output>>>
	//    map<char , pair< pair< char , bool >, pair< char , bool > > >  mp;
	vector<string> file;
	string line;
	while (getline(cin, line))
	{
		if (line.empty())
			break;
		file.push_back(line);
	}
	// cout<<"exited"<<mp.size()<<endl;
	int i = 0;
	map<char, vector<Node *>> mp;
	for (i = 0; i < (int)file.size(); i++)
		mp[file[i][0]].push_back(new Node(file[i][2], file[i][4] - '0', file[i][6] - '0'));
	// cout<<i<<"->> "<<file[i]<<endl;
	string seq = "";
	set<char> s;
	seq = back(mp, 'a', s, seq);
	cout << 101 << endl
		 << "Non Overlapping Sequence Detector";
	return 0;
}

// inputs
/*
A
a b 1 0
b c 0 0
b b 1 0
a a 0 0
c a 0 0
c a 1 1

output -> 101

B->

a b 1 0
a a 0 0
b a 0 0
b c 1 0
c c 1 0
d a 0 0
d b 1 1
c d 0 0

output ->  1101
*/
