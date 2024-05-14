#include<stdio.h>
void main() {
	int n,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<2*n;i++) {
		for(j=1;j<2*n;j++) {
			if(i<=n) {
				if(j==i||j==(2*n)-i)
				printf("%d ",n-(i-1));
				else if((j<i))
				printf("%d ",n-(j-1));
				else if(j>(2*n)-i)
				printf("%d ",j-(n-1));
			
				else
				printf("%d ",n-(i-1));
			}
			else {
				if(j==i||j==(2*n)-i)
				printf("%d ",i-(n-1));
				else if(j<(2*n)-i)
				printf("%d ",n-(j-1));
				else if(j>i)
				printf("%d ",j-(n-1));
				
				
				else
				printf("%d ",i-(n-1));
			}
		}
		printf("\n");
	}
}
