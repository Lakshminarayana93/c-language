#include <stdio.h>
int main()
{
    char str[20];
    int i, j;
    printf("Enter the name: ");
    scanf("%s", str);
    printf("Enter the length of many numbers: ");
    scanf("%d", &j);
    for (i = 1; i <= j; i++)
    {
        printf("%d. %s\n", i, str);
    }
    return 0;
}
