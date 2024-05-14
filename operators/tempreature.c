//Enter'the temperature in Celsius and convert that into Fahrenheit.

#include<stdio.h>
void main()
{
	double celsius,farh;
//	double farh;
	
	printf("enter the tempreature in celsius\n");
	scanf("%lf",&celsius);
	farh= celsius*((double)9/5)+32;
	printf("\n %.0lf degree celsius = %.2lf degree fahrenheit ",celsius,farh);
	
}
