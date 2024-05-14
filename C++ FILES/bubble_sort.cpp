// #include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n = 10;
	int arr[n];

	cout << "Enter array " << n << " elements" << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "\n"
		 << "Before sorting :" << endl;
	for (int x : arr)
		cout << x << "  ";
	cout << endl
		 << "After sorting" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

	for (int x : arr)
		cout << x << "  ";
	return 0;
}
