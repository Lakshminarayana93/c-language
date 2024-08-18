#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Please enter a positive number.\n");
    } else
    {
        for (int i = 0; i < num; ++i)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
