#include <stdio.h>

int main()
{
	int a,b;
	int *ptr;

	a=1234;// value of variable a//
  ptr= &a; //address of variable a//
  b=*ptr;//b is assigned the variable a's value//

	

	printf("A is %d and B is %d\n", a,b);

  return(0);
	
}

