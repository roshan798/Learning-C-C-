#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cout<<"Enter a string : ";
	getline(cin,str);
	int vowel_count=0;
	int consonent_count=0;
	int words_count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		switch(str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel_count++;
				break;
			case ' ':
				words_count++;
				break;
			default :
				consonent_count++;
		}
	}
	words_count++;
	
	cout<<"vowel : "<<vowel_count<<endl;
	cout<<"consonent : "<<consonent_count<<endl;
	cout<<"word : "<<words_count<<endl;
	
	
}
