/*P5.25 Program to find the sum of digits of a number until the sum
is reduced to 1 digit.
For example: 538769->38->11->2*/
//For example: 538769->38->11->2*1
#include<stdio.h>
main( )
{
long num;
int dig, sum;
printf ("Enter a number ") ;
scanf("%ld",&num) ;
printf("%ld->",num) ;

do
{
for(sum=0;num!=0;num/=10)
{
dig=num%10;
sum+=dig;
}
printf("%d\t",sum);
num=sum;
}
while(num/10!=0) ;
printf("\n") ; 
}
