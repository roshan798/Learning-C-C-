#include<iostream>
#include<stdlib.h>
#define SIZE 10
using namespace std;
struct item 
{
	char data;
	int priority;
};

struct item parr[SIZE];
int rear=-1;
void enque(char val,int priority)
{
	if(rear>=SIZE-1)
		cout<<"Overflow"<<endl;
	else
	{
		parr[++rear].data=val;
		parr[rear].priority=priority;
	}	
}

int peek()
{
	int min=INT_MAX,index;
	for(int i=0;i<=rear;i++)
	{
		if(parr[i].priority<min)
		{
			min=parr[i].priority;
			index=i;
		}
	}
	return index;
	
}
char dequeue()
{
	char data;
	if(rear==-1)
	{
		cout<<"Underflow"<<endl;
		return -1;
	}
	else
	{
		int index=peek();
		data=parr[index].data;
		for(int i=index;i<rear;i++)
		{
			parr[i].data=parr[i+1].data;
			parr[i].priority=parr[i+1].priority;
		}
		rear--;
	}
	return data;
}
int main()
{
	int n;
	cout<<"Enter the number of items you want to enter : ";
	cin>>n;
	char ch;
	int num;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"  character and it's priority : ";
		cin>>ch>>num;
		enque(ch,num);
	}
	cout<<"Enter how many character you want to deque : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		char t=dequeue();
		if(t!=-1)
			cout<<i<<" Data :"<<t<<endl;
		else
			break;	
	}
	return 0;
}
