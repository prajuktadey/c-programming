#include <stdio.h>

int main () {

    float highscore[5];

    for(int x=0;x<5;x++)
    {
        printf("Enter a floating literal:\n");
        scanf("%f\n", &highscore[x] );
    }

    printf("Here are the high scores: ");
    for(int x=0;x<5;x++)
    {
        printf("%f\n", highscore[x]);
    }

   return 0;
}