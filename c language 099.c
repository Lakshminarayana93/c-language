#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr[10],count=0,num,i;
    int n = sizeof(arr) / sizeof(arr[0]);
    srand(time(0));
    for ( i = 0; i < 10; ++i)
    {
        arr[i] = rand() % 100;
        printf("\t%d\n", arr[i]);
    }
    while (num > 0)
    {
        num =num/10;
        count++;
    }
    printf("Number of digits for each element:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %d digits\n", arr[i], count);
    }
}
