//~P4.6 Program to print the larger of two numbers using conditional operator
 #include<stdio.h>
int main( )
{

int a=0, b=5, max;
//printf ("Enter the values");
//scanf("%d %d",&a,&b);
max = a>b ? a :b;
printf("Larger of %d and %d is %d",a,b,max);
//I*ternary operator* I
//and %d is %d\n", a, b,max)
return 0;
}
