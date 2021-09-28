#include <stdio.h>
//output: George Washington was 67 years old//

int main()
{
  struct person{
    char name[32];
    int age;
  };

  struct person president={
    "George Washington",
    67
  };

  printf("%s was %d years old\n", president.name, president.age);

  return(0);
}
