#include<iostream>
#include<string>
#include<stack>
using namespace std;
int percedence(char c) { 
	switch (c) {
		case '{' : return 1;
		case '[' : return 2;
		case '(' : return 3;
		case '}' : return -1;
		case ']' : return -2;
		case ')' : return -3;
		default  : return 0;
	}
	
}
bool isBalanced(string exp) {
	if(exp.size()==0)
		return false;
	stack<char> s;
	for (auto i=exp.begin();i!=exp.end();i++)
	{
		if(percedence((*i))!=0) {
			if(s.empty() && percedence((*i))>0) {
				s.push((*i));
			}
			else if(percedence(s.top()) + percedence((*i))==0) {
				s.pop();
			}
			else if(percedence(s.top()) > 0 && percedence((*i)) >0) {
				s.push((*i));
			}
			else {
				return false;
			}
		}
	}
	return s.empty();
}
int main()
{
	string exp;
	cout<<"Eneter parenthesis expression to check it is balance paranthesized or not:";
	cin>>exp;
	bool t=isBalanced(exp);
	t ? cout<<exp <<" is balanced"<<endl : cout<<exp <<" is NOT balanced"<<endl;
}
