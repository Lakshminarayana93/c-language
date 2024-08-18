#include <stdio.h>

int main()
{
    int arr[100] ={0};
    int i, x, p, n = 15;
    for (i = 0; i < 15; i++)
        arr[i] = i + 1;
 printf("Original Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    x = 50;
    p = 5;
    n++;
    for (i = n - 1; i >= p; i--)
        arr[i] = arr[i - 1];
    arr[p - 1] = x;
    printf("After Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
