#include<stdio.h>
#include<string.h>
int main() {
	int i,length;
	char s[100];
	char new_s[100];
	printf("Enter a string :  ");
	scanf("%s",s);
	length=strlen(s)-1;
	for(i=0;i<=strlen(s)-1;i++) 
	{
		new_s[i]=s[length];
		length--;
	}

if(!strcmp(s,new_s))
printf("\n'%s' is a palindrome string.",s);
else
printf("\n'%s' is not a palindrome string.",s);
	
	return 0;
}
