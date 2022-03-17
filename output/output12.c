#include <stdio.h>

int main (int argc, char *argv[]) 
{
   int m=10;
   int n=7;
   while(m%n>=0)
   {
    printf("%d", 1);
    m=m+1;
    n=n+1;
   }
   return 0;
}