#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextGreater(vector<int> &vec) {
	stack<int> s;
	vector<int> res(vec.size());
	int i=0;
	while(i<vec.size()){
		cout<<i<<endl;
		if(s.empty() || s.top()  > vec[i]) {
			s.push(i++);
		}
		else{
			res[s.top()]=vec[i];
			s.pop();
		}

	}
	return res;
}
int main() {
	vector<int> a={4,5,2,25,7,8};
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<"  ";
	}
	a=nextGreater(a);
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	
}
