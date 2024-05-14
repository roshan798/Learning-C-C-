#include<stdio.h>
struct student {
	char name[20];
	int roll_no;
	int clas;
	int *ptr_mem;
	struct dob {
		int date,month,year;
	};
	struct dob st1;

};
struct student st1,*stuptr=&st1;
int main(){

//	
//	printf("Enter your name and roll no : \n");
//	scanf("%[^\n]s",stuptr->name);
//	printf("\n Enter your class and roll no : ");
//	scanf("%d",&stuptr->clas);
//	scanf("%d",&st1.roll_no);
//	printf("\n Enter your date of birth\n date :\n");
//	scanf("%d",&st1.st1.date);
//	printf("month :");
//	scanf("%d",&st1.st1.month);
//	printf("year :");
//	scanf("%d",&st1.st1.year);
//	printf("\nName : %s\n Class : %d\nRoll no : %d ",(*stuptr).name,stuptr->clas,st1.roll_no);  
//	printf("\nDate of birth : %d/%d/%d",st1.st1.date,st1.st1.month,st1.st1.year);
//	
}
