// taking string as input and printing it
#include <stdio.h>
#include <string.h>
void main()
{
	char *ptra;
	char str[20];
	int length;
	//	gets(str);
	scanf("%[^\n]%*c", str);
	length = strlen(str);
	ptra = &str[length - 1];
	printf("Enter your first name\n %s \n", str);
	//	printf("\n length %c \n",*(ptra-1));
}
