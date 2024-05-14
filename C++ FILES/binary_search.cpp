#include <bits/stdc++.h> //binary search
#include <windows.h>
using namespace std;

int search(vector<int> arr, int num) // search in increasing order array
{

	int low = 0, high = arr.size() - 1, mid; // 1,  4, 6, 8, 24 ,76 86 99
	while (low <= high)						 // 0  1  2  3  4   5  6   7
	{
		mid = (high + low) / 2;
		if (num == arr[mid])
		{
			return mid;
		}
		else if (num < arr[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	cout << "low,mid,high." << low << mid << high << endl;
	return -1;
}
int non_increasing_bin_search(vector<int> arr, int num)
{
	int low = 0, mid, high = arr.size() - 1;
	while (low <= high)
	{
		mid = (mid + low) / 2;
		if (num == arr[mid])
			return mid;
		else if (num > arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	cout << "low,mid,high." << low << mid << high << endl;
	return -1;
}
void display(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << "  ";
	cout << endl;
}
int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 2); // change text color to green
	vector<int> arr = {99, 86, 76, 24, 8, 6, 4, 1};
	display(arr);
	int num;
	cin >> num;
	//	cout<<search(arr,num)<<endl;
	cout << non_increasing_bin_search(arr, num) << endl;
}
