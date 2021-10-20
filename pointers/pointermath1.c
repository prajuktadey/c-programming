#include <stdio.h>

int main()
{
	int alpha;
	int *pa;

	pa = &alpha;
	printf("%p\n",pa);//displays the address in which alpha is stored//
	printf("%p\n",pa+1);//increases the address by 4 bytes//

	return(0);
}

