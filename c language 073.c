#include <stdio.h>

int main()
{
    int num, i;
    int sum = 1;
    printf("Enter any number to check if it's a perfect number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum =sum+i;
        }
    }
    if (sum == num && num > 0)
    {
        printf("%d is a PERFECT NUMBER\n", num);
    } else
    {
        printf("%d is NOT a PERFECT NUMBER\n", num);
    }
    return 0;
}
