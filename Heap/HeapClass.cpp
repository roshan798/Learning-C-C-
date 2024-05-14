#include<iostream>
#include<vector>
using namespace std;
void Heapify(int  *a,int size);
class Heap
{
public:
	int maxSize;
	int size;
	int *a;

	Heap()
	{
		maxSize=size=0;
		a=nullptr;
	} 
	Heap(int size)
	{
		maxSize=size;
		this->size=0;
		a= new int[maxSize+1];
		for (int i=1;i<=maxSize;i++)
		{
			a[i]=0;
		}
	}
//	void setHeap();
	int getSize(){return size;}
	int getMaxSize(){return maxSize;}
	void insert(int val);
	int Delete();

friend ostream & operator<<(ostream &out,Heap);
};
   
   
int main()
{
	cout<<"Enter the no of elements you want to enter  :";
	int size,val;
	cin>>size;
	Heap H1(size);
	
//()***********Insertion***********

	cout<<"Enter elements : "<<endl;
	for(int i=1;i<=size;i++)
	{
		try{
			cout<<i<<" - ";
			cin>>val;
			H1.insert(val);
//			cout<<H1;
		}
		catch(string e) {
			cout<<e<<endl;
		}
	}
	
//***********************************

//(*************HEAPIFY**************
	int data;
	cout<<"Enter elements : "<<endl;
	H1.size=size;
//	for (int i=1;i<=size;i++) {
//		cin>>H1.a[i];	
//	}
	Heapify(H1.a,size);
//	***************************/
	cout<<"Heap After insertion : ";
		cout<<H1<<endl;
	for(int i=1;i<=size+1;i++)
	{
		try {
			cout<<"Deleted element : "<<H1.Delete()<<endl;
//			cout<<"Heap After deletion : ";               //debugging
//			cout<<H1<<endl;
		}
		catch(string e) {
			cout<<e<<endl;
		}
	}
	cout<<endl<<"Heap After deletion : ";
		cout<<H1<<endl;
} 
////// end of main()

void Heap::insert(int val)
{
	if(size < maxSize)
	{
		size++;
		int i=size;
		
		while(i>1 && a[i/2] < val )
		{
			a[i]=a[i/2];
			i/=2;
		}
		a[i]=val;
	}
	else
	{
		throw string("Heap is Full!!");
	}
}
int Heap::Delete()
{
	int val=a[1];
	if(size >= 1)
	{
		a[1]=a[size];
		size--;
		int i=1,j=2*i;
		while(j <size)
		{
			int tmp;
			if(a[j+1]  > a[j]) {
				j=j+1;
			}
			
			if(a[i] < a[j]) {
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				i=j;
				j=2*i;
			}
			else {
				break;	
			}
		}
		a[size+1]=val;
	}
	else {
		throw string("Heap is empty" );
	}
	return val;
}
	
ostream & operator<<(ostream &out ,Heap H)
{
	for(int i=1;i<=H.maxSize;i++)
	{
		out<<H.a[i]<<"  ";
	}
	out<<endl;
	return out;
}

void Heapify(int *a,int size)
{
	int val,tmp;
	for (int i=size;i>=1;i--) {
		int index=i,j=2*index;
		while(j <=size) {
			if(j+1 <=size && a[j+1] >a[j]) {
				j=j+1;
			}
			if(a[j] > a[index]) {
				tmp=a[j];
				a[j]=a[index];
				a[index]=tmp;
				index=j;
				j=2*index;
			}
			else {
				j=size+1; //to exit inner while loop
			}
			
		}
		cout<<" i = "<<i<<endl; // debugging
		for(int i=1;i<=size;i++)     // debugging
			cout<<a[i]<<"  ";  // debugging
		cout<<endl;       // debugging
	}
}
