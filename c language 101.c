#include <stdio.h>
int main()
{
    int arr[100],p,c,n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &arr[c]);
    }
    printf("Enter the location of the element you wish to delete: ");
    scanf("%d", &p);
    if (p >= n + 1)
    {
        printf("Deletion not possible.\n");
    }
    else
    {
        for (c = p - 1; c < n - 1; c++)
        {
            arr[c] = arr[c + 1];
        }
        printf("Resultant array after deletion:\n");
        for (c = 0; c < n - 1; c++)
        {
            printf("%d\n", arr[c]);
        }
    }
}
