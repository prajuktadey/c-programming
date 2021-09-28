#include <stdio.h>

int main()
{
	int pokey;
	int *p;

	p = &pokey;
	printf("The address of `pokey` is %p\n",&pokey); //prints the address of pokey using the ampersand opeator)
	printf("The address of `p` is %p\n",p); //prints the address of pokey stored in pointer variable p//

	return(0);
}
