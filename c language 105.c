#include <stdio.h>

int main()
{
    int arr[5][5],t,i,j;
    int found = 0;
     printf("Enter a 5x5 matrix:\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the element to search for: ");
    scanf("%d", &t);
    for (i = 0; i < 5; i++)
     {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == t)
            {
                printf("Element %d found at position (%d, %d)\n", t, i, j);
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the matrix.\n", t);
    }

    return 0;
}
