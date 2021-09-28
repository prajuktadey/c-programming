#include <stdio.h>

void minus10(int *v);

int main()
{
	int value = 100;

	printf("Value is %d\n",value);
	minus10(&value);//the address location is passed to the function//
	//the function finds the address location and uses the value stored in the address//
  printf("Value is %d\n",value); //original stored value is printed//

	return(0);
}

void minus10(int *v)//the original value decareses by 10//
{
	*v = *v - 10;
}

