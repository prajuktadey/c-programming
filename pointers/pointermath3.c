#include <stdio.h>

int main () 
{
   char alpha[]= "abcd";//character datatype//
   char *pa;

   pa=alpha;
   printf("%p\n", pa);
   printf("%p\n", pa+1);

   return 0;
}

//character data types increment the address location by 1//