//tolower() function
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a charecter :   ");
	scanf("%c",&ch);
	
	switch(tolower(ch))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf(" it's an  vowel \n");
			break;
			default:
				printf(" it's consonent ");
				
	}
	
}
