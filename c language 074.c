#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrongNumber(num))
    {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
