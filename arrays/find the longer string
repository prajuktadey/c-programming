#include <stdio.h>
#include <string.h>

char *longer(char *s1, char *s2); //function prototype.//

int main()
{
  char string1[]= "Constantinople";
  char string2[]= "Byzantine";
  char *result; //initialising the pointer//

  result= longer(string1, string2); //calling the function//
  printf("String '%s' is longer.\n", result);

  return(0);
}

char *longer(char *s1, char *s2) //function to decide which is the longer string//
//the values stored in the char arrays are passed to the function//
{
  int len1, len2;
  len1=strlen(s1);
  len2=strlen(s2);

  if(len1>len2)
     return s1;
  else
     return s2;
}
