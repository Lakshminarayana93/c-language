#include <stdio.h>
main()
{
    char str[100];
    int i, len = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
        len++;
    for (; len >= 0; len--)
        printf("%c", str[len]);
}
