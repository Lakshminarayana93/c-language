#include <stdio.h>
#include <string.h>
 main()
{
    char u[100];
    char p[50];
    int i = 0;
    printf("Enter your username: ");
    scanf("%s", u);
    printf("Enter your password: ");
    getchar();
    while (1)
    {
        char ch = getchar();
        if (ch == '\n' || ch == EOF)
        {
            p[i] = '\0';
            break;
        }
        p[i++] = '*';
    }
    printf("\nUsername: %s\n", u);
    printf("Password: %s\n", p);
}
