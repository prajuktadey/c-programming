#include <stdio.h>

int main () 
{
    
    int i=65;
    while(i<=69)
    {
        int j;
        j=i;
        while(j>=65)
        {
            printf("%c ", j);
            j--;
        }
        printf("\n");
    i++;
    }
    return 0;
}