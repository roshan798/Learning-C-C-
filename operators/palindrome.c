#include<stdio.h>
int main() {
	
	int num,digit=0,new_num=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	int n=num;
	printf("\n%d ",num);
	while(num>0) {
		digit=(num%10);
		new_num=(new_num*10)+digit;
		num/=10;
	}
	
	if(new_num==n)
		printf("is a palindrome number.");
	else
	printf("is not a palindrome number.");
	return 0;
}
