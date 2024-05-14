\#include<bits / stdc++.h> using namespace std;
void Swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
int Xor(int l)
{
	if (l % 4 == 0)
		return l;
	if (l % 4 == 1)
		return 1;
	if (l % 4 == 2)
		return l + 1;
	return 0;
}
int Xor(int l, int r)
{
	return Xor(r) ^ Xor(l - 1);
}
bool Set(int val, int pos)
{
	return val & (1 << pos);
}
void set(int &val, int pos)
{
	val |= (1 << pos);
}
void unset(int &val, int pos)
{
	val = ~(1 << pos) & val;
}
bool iseven(int n)
{
	return n & 1 ? false : true;
}
void clearLastsetbit(int &n)
{
	n = n & (n - 1);
}
// bool ispoweroftwo(long long n)
//{
//	0
//	101
//	100
//	1000
//	10000
//	100000
//
// }
unsigned int getFirstSetBit(int n)
{

	return log2(n & (-n)) + 1;
}
unsigned int set_at(int n)
{
	int ct = 0;
	while (n)
	{
		if (n & 1 == 1)
			return ct;
		ct++;
		n = (n >> 1);
	}
	return ct;
}
void print_two_distinct_num(vector<int> arr)
{
	int Xor = 0, xor1 = 0, xor2 = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		Xor = (Xor ^ arr[i]);
	}
	int pos = set_at(Xor);
	pos = 1 << pos;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] & pos)
			xor1 = (xor1 ^ arr[i]);
		else
			xor2 = (xor2 ^ arr[i]);
	}
	cout << "1 --> " << xor1 << "\n2 --> " << xor2 << endl;
}
int main()
{
	//	int a,b;
	//	cout<<"Enter two number  : ";
	//	cin>>a>>b;
	//	cout<<" A = "<<a<<"\n B = "<<b<<endl;
	//	Swap(a,b);
	//	cout<<"After Swap  : "<<endl;
	//	cout<<" A = "<<a<<"\n B = "<<b<<endl;
	////	cout<<"XOR upto "<<Xor(6)<<endl;
	////	cout<<"XOR upto "<<Xor(1,6);
	//	cout<<"3 is "<<iseven(3)<<endl;
	//	cout<<"32 is "<<ispoweroftwo(22)<<endl;
	//	cout<<(32<<1);

	//	cout<<(5>>1);
	//	cout<<"before unset : "<<a<<endl;
	//	unset(a,1);
	//	cout<<" after unset : "<<a<<endl;
	//	cout<<"before set : "<<a<<endl;
	////	set(a,1);
	// a=2;
	//     clearLastsetbit(a);
	//	cout<<" after set : "<<set_at(8)<<endl;

	//	vector<int> a={1,5,3,5,1,7,3,8,2,2,8,1};
	//	print_two_distinct_num(a);
	cout << Xor(2) << endl;
	cout << Xor(4);
}
