#include<stdio.h>     //methods of trasverse in 2d array
#include<stdlib.h>
#define ROW 2
#define COL 3


int main()  {
	int method;
	printf("Enter method :");
	scanf("%d",&method);
	int i,j;
	if(method==1) {
	int arr[ROW][COL];        //array in stack
		printf("Enter element of array(2 X 3) :\n ");
		for(i=0;i<ROW;i++) {
			for(j=0;j<COL;j++) 
				scanf("%d",&arr[i][j]);
				
				printf("\n");
		}
		printf("\n Elements are : \n");
		for(i=0;i<ROW;i++) {
			for(j=0;j<COL;j++)
			printf("%d  ",arr[i][j]);
			
			printf("\n");
		}
		
	}
	else if(method==2)  		//partially in heap
	{
		int* arr[ROW];
		for(i=0;i<ROW;i++)
		arr[i]=(int *)malloc(COL*sizeof(int));
		
		printf("Enter elements of array(2 X 3) : \n");
		for(i=0;i<ROW;i++) {
			for(j=0;j<COL;j++)
			scanf("%d",&arr[i][j]);
			printf("\n");
		}
		for(i=0;i<ROW;i++) {
			for(j=0;j<COL;j++)
			printf("%d  ",arr[i][j]);
			
			printf("\n");
		}
		for(i=0;i<ROW;i++)
		free(arr[i]);
	}
	else if(method==3) {       // 2d array in heap using malloc function
		int **arr=arr=(int**)malloc(ROW*sizeof(arr));;
	
		
		
		for(i=0;i<ROW;i++)
		arr[i]=(int*)malloc(COL*sizeof(int));
		printf("Enter elements of array : \n");
		for(i=0;i<ROW;i++) {
			for(j=0;j<COL;j++)
			scanf("%d",&arr[i][j]);
			printf("\n");
		}
		
		for(i=0;i<ROW;i++) {
			for(j=0;j<COL;j++)
		printf("%d  ",arr[i][j]);
		printf("\n");	
		}
		
	}
	
	return 0;
}
