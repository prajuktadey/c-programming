#include <stdio.h>

int main () //whatever value dwells in memory //
{
    //values array was allocated in storage// 
    int values[10];
    int x;

    for(x=0;x<10;x++)
    {
        printf("%d\n",values[x]);
    }

   return 0;
}