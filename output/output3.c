#include <stdio.h>
#define PRINT(i, limit) do \
                        { \
                            if (i++ < limit) \
                            { \
                                printf("GeeksQuiz\n"); \
                                continue; \
                            } \
                        }while(0)
  
int main()
{
    int i = 0;
    PRINT(i, 3);
    return 0;
}