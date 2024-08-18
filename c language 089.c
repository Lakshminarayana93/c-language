#include <stdio.h>
main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Error: Please enter a positive integer.\n");
    }

    printf("Factors of %d:\n", num);
    for (int i = 1; i <= num; ++i)
     {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
}
