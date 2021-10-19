#include <stdio.h>

int main ()
{
   char input[10];
   printf("Your name? ");
   fgets(input, 10, stdin);//size of the buffer//
   printf("Pleased to meet you, %s!\n", input);

   return 0;
}