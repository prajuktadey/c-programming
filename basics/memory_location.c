#include <stdio.h>
//finding out the memory location of different variables//

int main()
{
  
    int a;
    char b;
    float c;


    puts("Memory locations:");
    printf("A is at %p\n", &a);
    printf("B is at %p\n", &b);
    printf("C is at %p\n", &c);

  

  return(0);
}


  
  
