//take a real value and display it seperately 
//19: 45 = 19 is the integer part and 0.45 is the decimal part
#include <stdio.h>

int main () 
{

  float num;
  printf("Enter a real number: ");
  scanf("%f", &num);
  
  int integerpart = (int)num;
  float decimalpart = num - integerpart;
  printf("Num = %f, integerpart = %d, decimalpart = %f\n", num, integerpart, decimalpart);

  return 0;
}