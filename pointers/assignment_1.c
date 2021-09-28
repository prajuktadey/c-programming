#include <stdio.h>

int main()
{
    char a;
    char b;
    char c;
    char *p;

   p=&a;
   a='A';
   *p=a;
   printf("The value of 'a': %c\n",*p);

   p=&b;
   b='B';
   *p=b;
    printf("The value of 'b': %c\n",*p);

   p=&c;
   c='Z';
   *p=c;
   printf("The value of 'c': %c\n",*p);

    return(0);
}
