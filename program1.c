#include <stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
}

// 1
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1