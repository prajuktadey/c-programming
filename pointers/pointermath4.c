#include <stdio.h>

int main () 
{
   double twos[5]= {2.2,4.4, 6.6, 8.8, 10.10};
   double *pt;

   pt=twos;
   printf("%p\n", pt);
   printf("%p\n", pt+1);

   return 0;
}

//double data types increment the address location by 8 bytes//