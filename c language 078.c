#include <stdio.h>
int main()
{
    int first = 0, second = 1, next = 0;
    printf("Fibonacci Series up to 100:\n");
    printf("%d, %d, ", first, second);
    next = first + second;
    while (next <= 100)
    {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }
    printf("\n");
    return 0;
}
