#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,n,i;
	printf("Enter the number integers to be entered : ");
	scanf("%d",&n);
//	p=(int*)malloc(n,sizeof(int));
	p=(int*)malloc(n*sizeof(int));
//	printf("%p, %p",p,p+1);
	
	if(p==NULL){
	printf("\n memory is not available ");
	exit(1);
	}
	
	for(i=0;i<n;i++){
		printf("\nEnter an integer : ");
	scanf("%d",p+i);

	}
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}

}
