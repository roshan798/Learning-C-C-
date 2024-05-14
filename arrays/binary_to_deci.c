#include <stdio.h>
#include <string.h>
int powern(int a, int b)
{
	if (b == 0)
		return 1;
	else
		return a * powern(a, b - 1);
}
int o2d(void)
{
	int length, decimal = 0;
	char *ptra, i, str[15];
	printf("\n Enter Octal number : \n");
	scanf("%[^\n]s", str);
	length = strlen(str);
	ptra = &str[length - 1];
	for (i = 0; i <= length; i++)
	{
		if (str[length - i - 1] > 8)
		{
			printf("\n Ivalid input");
			return 0;
		}
		else
		{
			decimal += (str[length - 1 - i] * powern(8, i));
		}
	}
	return decimal;
}

int b2d(void)
{

	int binary, decimal = 0, ldigit = 0, i;
	printf("Enter a binary number :  ");
	scanf("%d", &binary);

	for (i = 0; binary != 0; i++)
	{
		ldigit = binary % 10;
		if (ldigit > 1 || ldigit < 0)
		{
			printf("\n Invalid input");
			return 0;
		}

		binary /= 10;
		if (ldigit == 1)
			decimal += powern(2, i);
	}
	return decimal;
}
void main()
{
	char ch;
	printf(" Enter 'B' for binary to decimal conversion \n \t\t\t OR\n Enter 'O' for octal to binary conversion \n ");
	scanf("%c", &ch);
	switch (tolower(ch))
	{
	case 'b':
		printf("\n Decimal value : %d ", b2d());
		break;

		break;
	case 'o':
		printf(" \n Decimal value : %d ", o2d());
		break;
	default:
		printf("\n Invalid input");
	}
}
