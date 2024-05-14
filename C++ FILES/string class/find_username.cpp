#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter your e-mail : ";
	string e_mail;
	string u_name;
	cin>>e_mail;
	int index=e_mail.find('@');
	
	if(index<=0)
		cout<<"Invalid e-mail ";
	else
	{
	for(int i=0;i<index;i++)
		u_name.push_back(e_mail[i]);
	u_name[++index]='\0';
	cout<<endl<<"Username : "<<u_name<<endl;
	}
	
	
}
