#include<stdio.h>
void main(){
	int row,col;
	printf("Enter number of rows : \t ");
	scanf("%d",&row);
	printf("\n colomns : ");
	scanf("%d",&col);
	int arr1[row][col],arr2[col][row],i,j,temp=0;
	printf("Enter matrix elements \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
	scanf("%d",&arr1[i][j]);
	}
	printf("\n After transpose \n Matrx : \n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
		arr2[i][j]=arr1[j][i];
		printf("%3d",arr2[i][j]);
		}
		printf("\n");
		}
}

