#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory;

	/* open the directory */
	directory = opendir(".");//opens the current directory//
	if( directory == NULL )//comparison is made for the NULL pointer//
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	puts("Opened current directory");

	/* close the directory */
	closedir(directory);

	return(0);
}

