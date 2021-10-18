#include <stdio.h>

int main()
{
	int grid[5][2];// matrix of five rows and two columns
	int x;

	for(x=0;x<5;x++)
	{
		grid[x][0] = x+1;
		grid[x][1] = grid[x][0] * 10;
	}

	for(x=0;x<5;x++)
		printf("%d: %d\n",grid[x][0],grid[x][1]);

	return(0);
}
