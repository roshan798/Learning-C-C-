#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*sort(startaddress, endaddress)

startaddress: the address of the first 
              element of the array
endaddress: the address of the next 
            contiguous location of the 
            last element of the array.
So actually sort() sorts in the 
range of [startaddress,endaddress) */
int main()
{
	int n;
	cout<<"Enter the no of elements in the array : ";
	cin>>n;
	vector<int> arr(n);

	cout<< " Enter "<<n<<" elements : ";
	for(auto i=arr.begin() ;i!=arr.end();i++) {
		cin>>(*i);
	}
	cout<<"Array before sorting : ";
	for (int x : arr) {
		cout<<x<<"  ";
	}
	cout<<endl;
	
	sort(arr.begin(),arr.end());
	cout<<"Array After sorting : ";
	for (int x : arr) {
		cout<<x<<"  ";
	}
	
}
