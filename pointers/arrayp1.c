#include <stdio.h>

int main () 
{
   char *veeps[5]= {"Adams", "Jefferson", "Andy", "Marianne", "Toby"};
   int x;

   for(x=0;x<5;x++)
        printf("%s\n", veeps[x]);
   return 0;
}