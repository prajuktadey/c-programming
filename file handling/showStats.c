#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	const char filename[] = "alpha.txt";
	struct stat fstat;

	stat(filename,&fstat);//first argument is the file name and the second argument is the address of the stat() structure which is fstat//
	printf("%s is %ld bytes long\n",//accesses the st_size member which lists the file size//
			filename,
			fstat.st_size
		  );
	printf("It was modified on %s",ctime(&fstat.st_mtime));//accesses the st_mtime member which contains the clock tick value representing when the file was last modified//

	return(0);
}

