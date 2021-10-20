#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct person {
		char name[32];
		int age;
	} *you;

	/* allocate storage for the structure */
	you = (struct person *)malloc( sizeof(struct person) * 1 );
	if( you== NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	printf("Enter your name: ");
	fgets(you->name,32,stdin);
	/* get your age */
	printf("Enter your age: ");
	scanf("%d",&you->age);

	printf("You are %s",you->name);
	printf("You are %d years old\n",you->age);

	return(0);
}

