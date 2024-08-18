#include <stdio.h>
#include <string.h>
 main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    int p= 1,i;
    for (i = 0; i < len / 2; i++)
        {
        if (str[i] != str[len - i - 1])
        {
            p = 0;
            break;
        }
    }
    if (p)
        {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }
}
