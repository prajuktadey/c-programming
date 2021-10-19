#include <stdio.h>

int main () 
{
   char input[30];

   printf("Your name? ");
   scanf("%11s", input);
   printf("Pleased to meet you, %s!\n", input);

   return 0;
}