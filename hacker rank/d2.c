#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int i;
    
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
               
            total_number_of_books=(int*)malloc(sizeof(int)*total_number_of_shelves);
            total_number_of_pages=(int**)malloc(sizeof(total_number_of_pages)*total_number_of_shelves);
            for( i=0;i<total_number_of_shelves;i++)
            total_number_of_pages[i]=(int*)calloc(1100,sizeof(int));
            int count[5]={0,0,0,0,0};
    while (total_number_of_queries--) 
    {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            
            total_number_of_pages[x][count[x]]=y;
            total_number_of_books[x]=++count[x];
            
            
        } 
		else if (type_of_query == 2) {
