#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, num = 2, *ptr;
	ptr = (int *)malloc(12);
	if (ptr == NULL)
		printf("\n Memory is not available ");
	ptr[0] = 56;
	ptr[1] = 7554;
	printf("\n%d\t%d", ptr[0], ptr[1]);
	printf("\n %d______%d", ptr, *(ptr + 1));

	return 0;
}
