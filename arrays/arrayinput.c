#include <stdio.h>

int main () {
    float highscore[5]={993.86, 890.98,678.76, 789.09, 975.78};

    printf("Here are the high scores: ");
    for(int x=0;x<5;x++)
    {
        printf("%f\n", highscore[x]);
    }
   return 0;

}