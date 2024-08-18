#include <stdio.h>

int main()
{
    int arr[5][5], i, j;

    printf("Enter a 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nUpper triangle:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i <= j)
                printf("%3d", arr[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }

    printf("\nLower triangle:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i >= j)
                printf("%3d", arr[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }

    return 0;
}
