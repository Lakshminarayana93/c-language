#include <stdio.h>
main()
{
    char str[100];
    int i;
    printf("Enter the string: ");
    gets(str);
    if (str[0] >= 65 && str[0] <= 90)
        putchar(str[0]);
    else
        putchar(str[0] - 32);

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            {
            putchar(str[i]);
            i++;
            if (str[i] >= 65 && str[i] <= 90)
                putchar(str[i]);
            else
                putchar(str[i] - 32);
        }
        else
        {
            if (str[i] >= 65&& str[i] <= 90)
                putchar(str[i]+32);
            else
                putchar(str[i]);
        }
    }
}
