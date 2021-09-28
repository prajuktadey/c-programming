#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//This challenge will help you to learn how to take a character, a string and a sentence as input in C.//
int main() 
{
char ch;
scanf("%c", &ch);
printf("%c\n", ch);

char str[100];
gets(str);
scanf("%s",str);
printf("%s\n", str);

char sen[100];
gets(sen);
scanf("%[^\n]%*c", sen);
printf("%s", sen);

return 0;
}
