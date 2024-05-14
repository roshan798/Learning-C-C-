#include<iostream>
#include<ctime>
#include<windows.h>
// #include<conio.h>
using namespace std;

string OTPgenerator(int n)
{
	string str="0123456789";
	int len=str.length();
	string otp;
	int j;
	srand(time(0));
	for(int i=1;i<=n;i++)
	{
		j=rand()%len;
		otp[i]=str[j];
	}
	for(int i=1;i<=n;i++)
	{
		cout<<otp[i];
	}
	cout<<endl;
	cout<<"OTP will expire int 5 seconds ... \n";
 	Sleep(5000);
	cout<<"Oops OTP is expired !!\n\n";
	int choice;
	cout<<"Press 1 for new OTP generation\n";
	cout<<"Press 2 for exit \n\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
				system("CLS");
				cout<<"New OTP : "<<OTPgenerator(n).c_str()<<endl;
				Sleep(5);
				break;
		case 2: 
				exit(0);
				break;
	}
	return otp;
}


int main()
{
	int n;
	cout<<"Enter length of otp : ";
	cin>>n;
	OTPgenerator(n);
	return 0;
}
