#include <stdio.h>

int main (int argc, char *argv[]) \
{

    int m [] = {1,2,3,4,5};
    int x,y=0;
    for ( x=0; x<5; x++ )
         y=y+m [x];
    printf("%d", y);
 
return 0;
}

