#include <stdio.h>
#include <unistd.h>

int main()
{
	char path[512];

	chdir("..");//change working directory (cd ..)//
	getcwd(path,512);//get the path of the parent directory//
	printf("This program's parent directory is: %s\n",path);

	return(0);
}
