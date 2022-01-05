#include <stdio.h>

int main()
{
    int i, j, ctr = 0, myArray[3][4];

  for (i=0; i<4; i++)
  for (j=0; j<3; j++)
  {
   myArray[j][i] = ctr;
   ++ctr;
  }
    return 0;

}
