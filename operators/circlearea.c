//Accept the radius of the circle and calculate the area and perimeter of the circle
#include<stdio.h>
#define pi 3.14
void main()
{
	double r,area,perimeter;
	printf("Enter the radius of the circle find it's area and perimeter\n");
	scanf("%lf",&r);
	area = pi*(r*r);
	perimeter=2*pi*r;
	printf("\n area = %.2lf \n perimeter = %.2lf",area,perimeter);
	
}
