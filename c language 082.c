 #include <stdio.h>
int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
        {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
 {
    int b, sum = 0, lucky;
    printf("Enter birthdate (mmddyyyy): ");
    scanf("%d",& b);
    lucky = b;
    while (lucky >= 10)
    {
        lucky = sumOfDigits(lucky);
    }
    switch (lucky)
    {
        case 1:
            printf("Lucky gemstone: Ruby\n");
            break;
        case 2:
            printf("Lucky gemstone: Pearl\n");
            break;
        case 3:
            printf("Lucky gemstone: Amethyst\n");
            break;
        default:
            printf("Lucky gemstone: Unknown\n");
    }

    printf("Lucky number: %d\n", lucky);

    return 0;
}
