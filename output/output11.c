#include <stdio.h>

int main (int argc, char *argv[]) 
{
   int x=5;
   int y=50;
   while(x<=y)
   {
       x=y/x;
       printf("%d", x);
   }
   return 0;
}