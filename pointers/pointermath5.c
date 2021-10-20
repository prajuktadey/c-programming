#include <stdio.h>

int main()
{
	printf("Size of variable storage:\n");
	printf("char\t%lu\n",sizeof(char));
	printf("int\t%lu\n",sizeof(int));
	printf("float\t%lu\n",sizeof(float));
	printf("double\t%lu\n",sizeof(double));

	return(0);
}

/*Size of variable storage:
char    1
int     4
float   4
double  8*/
