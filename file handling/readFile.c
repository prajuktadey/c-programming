#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";
	struct person {
		char name[32];
		int inauguration;
		int age;
	} president;
	int x;
	FILE *fp;//pointer//

	/* open the file */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* prompt to read a specific record */
	printf("Enter record to read (1-10): ");
	scanf("%d",&x);
	/* validate the input */
	if( x<1 || x>10 )
	{
		puts("Invalid input");
		return(1);
	}
	/* decrement x to reference the proper offset */
	x--; // 0-9 which matches the offset and element numbers of the structures written to the file //

	/* Set the file position indicator */
	fseek(fp, sizeof(struct person)*x, SEEK_SET);// accesses the open file referenced by handle fp
	/* fetch the record */
	fread(&president, sizeof(struct person), 1, fp);

	/* print the result */
	printf("President %s was %d years old when inaugurated in %d\n",
			president.name,
			president.age,
			president.inauguration
		  );

	return(0);
}


