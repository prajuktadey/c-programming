#include <stdio.h>
#include <unistd.h>

int main()
{
	char path[512];

	getcwd(path,512);//gets current working directory//
    //path: character buffer in which path will be saved, 512: size of the buffer//
	printf("This program is running in the %s directory\n",path);

	return(0);
}
