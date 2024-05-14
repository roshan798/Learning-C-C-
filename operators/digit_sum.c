#include<stdio.h>     // Sum of all digits of a number

int digit_sum(int num) {
	int sum=0;
	while(num>0) {
		sum+=(num%10);
		num/=10;
	}
 return sum;
}

int main() {
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Sum of all digits of %d Is :  %d\n",num,digit_sum(num));
	
}
