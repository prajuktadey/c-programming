#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

int main()
{
    //one member of the stat structure is st_mode//
	DIR *directory;
	struct dirent *file;
	struct stat fstat;

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	printf("%-5s %-20s %-10s %s\n","Type","Filename","Size","Timestamp");
	while( (file=readdir(directory)) != NULL )
	{
		stat(file->d_name,&fstat);
		if( S_ISDIR(fstat.st_mode) )
			printf(" Dir ");
		else
			printf("File ");
		printf("%20s %10lld %ld\n",
				file->d_name,
				fstat.st_size,
				fstat.st_mtime
			  );
	}

	/* close the directory */
	closedir(directory);

	return(0);
}

