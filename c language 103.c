#include <stdio.h>
int main()
 {
    int arr[5][5], i, j;

    printf("Enter a 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("\t%d", &arr[i][j]);
        }
    }

    printf("Diagonal elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
}
