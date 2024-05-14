//P5. 12 Program to .:::onvert a binary number to a decimal number*"
#include<stdio.h>
void main( )
{
int n,nsave,rem,d,j=1,dec=0;
printf("Enter the number in binary");
scanf ("%d", &n) ;
nsave=n;
while (n>0)
{
rem=n%10; //taking last digit*1
d=rem*j;
dec+=d;
j*=2;
n/=10; /*skipping last digit*/
}
printf("Binary number = %d, Decimal number = %d\n",nsave,dec);
}
