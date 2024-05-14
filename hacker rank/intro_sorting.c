#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v,n,*a=0;
	scanf("%d %d",&v,&n);
	int t;
	a=(int*)malloc(2002*sizeof(int));
	for (int i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t+1000]=i;
	}
	printf("%d\n",a[v+1000]);
}

