#include<stdio.h>
#include<string.h>
int main() {
	char s[50],ch[10]={0,1,2,3,4,5,6,7,8,9};
	int j,i,length,count[10]={0};

	
	printf("Enter string : ");
	scanf("%s",s);
	length=strlen(s);
//	printf("%d",length);
for(i=0;i<length;i++) {
	for(j=0;j<10;j++)
	{
		
		if(ch[j]==s[i])
		count[j]++;
	}
	
}
	for(j=0;j<10;j++)
	printf("%d ",count[j]);
	
	return 0;
}
