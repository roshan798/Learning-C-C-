#include<stdio.h>
int main(){
	int arr[5]={2,4,66,7,3},*ptra;
	int i;
	ptra=&arr[0];
	
	printf("\n%d \t %d \n",ptra,&ptra);//1st the address which is saved at ptra will be print 
	//than address of ptra will be printed
	
	for(i=0;i<5;i++)
	printf("%d ",*(ptra+i));
	*(ptra)=10;//changing the value of arr[0]
	printf("\n %d",arr[0]);
	
	printf("\n %d \t %d",ptra,ptra+1);
	
	
	return 0;
}
