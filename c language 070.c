#include <stdio.h>

int main()
{
    long no, temp;
    int l, f, sum = 0;
    printf("Enter any number: ");
    scanf("%ld", &no);
    l = no % 10;
    temp = no;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    f = temp;
    sum = f + l;
    printf("Sum of first and last digit = %d\n", sum);
    return 0;
}
