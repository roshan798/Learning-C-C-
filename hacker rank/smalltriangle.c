#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double p,s[n];
    triangle temp;
    int t;
    for(int i=0;i<n;i++)
    {
       p= (tr[i].a + tr[i].b + tr[i].c)/2;
       s[i]=(double)(p*(p*tr[i].a)*(p*tr[i].b)*(p*tr[i].c));
       s[i]=sqrt(s[i]);
       
    }
   for(int i=0;i<n;i++)
   {
       
       for(int j=i+1;j<n;j++)
       {
           
           if(s[j]<s[i])
           {
                temp.a = tr[j].a;
                temp.b = tr[j].b;
                temp.c = tr[j].c;
                t=s[j];
                s[j]=s[i];
                s[i]=t;
                
                tr[j].a=tr[i].a;
                tr[j].b=tr[i].b;
                tr[j].c=tr[i].c;
                
                tr[i].a=temp.a ;
                tr[i].b=temp.b ;
                tr[i].c=temp.c ;
                
           } 
       }
   }
   
   
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
