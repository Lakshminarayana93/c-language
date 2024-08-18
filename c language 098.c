#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    printf("Element      Frequency\n");
    for (int i = 1; i <= 100; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d          %d\n", i, freq[i]);
        }
    }
}
