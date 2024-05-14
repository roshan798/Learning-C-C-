#include<stdio.h>
#include<math.h>
int main() {
	int num,sum=0,digit;
	printf("Enter a number : ");
	scanf("%d",&num);
	int temp=num;
	int count_dgt=0,t_num=num;
	while(t_num>0) {
		count_dgt++;
		t_num/=10;
	}
	
	while(num>0) {
		digit=(num%10);
		sum+=pow(digit,count_dgt);
		num/=10;
	}
	if(sum==temp)
	printf("\n%d is an armstrong number.",temp);
	else 
	printf("\n%d is not an armstrong number.",temp);
	
	return 0;
}
