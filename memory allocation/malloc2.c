#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;

	buffer = (char *)malloc( sizeof(char) * 128 );// char datataype storage space is multiplied by memory allocation of 128 bytes//
	if( buffer == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	puts("Buffer allocated");
	free(buffer);
	puts("Buffer freed");

	return(0);
}
