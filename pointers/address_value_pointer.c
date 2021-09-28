#include <stdio.h>

int main()
{
	int pokey;
	int *p;

	pokey = 987;
	p = &pokey;

	printf("The address of `pokey` is %p\n",&pokey);
	printf("The address of `p` is %p\n",p);

	printf("The value of `pokey` is %d\n",pokey);
	printf("The value of `*p` is %d\n",*p);

	return(0);
}

/* output: The address of `pokey` is 0000008edfdff834
The address of `p` is 0000008edfdff834
The value of `pokey` is 987
The value of `*p` is 987 */
