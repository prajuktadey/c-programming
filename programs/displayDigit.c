//wap to find the sum of digits of an integer
#include <stdio.h>

int main () 
{
   int num, sum=0, d;
   printf("Enter a number: ");
   scanf("%d", &num);

   while(num>0)
   {
     d=num%10;
     printf("Digit: %d\n", d);
     num=num/10;
   }

   return 0;
}