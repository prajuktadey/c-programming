#include <stdio.h>

int main (int argc, char *argv[]) 
{
   int i=0;
   while(i++<5)
   {
       if(i==0)
          printf("Zero\n");
       else 
          printf("Hello World\n");
   }
   return 0;
}