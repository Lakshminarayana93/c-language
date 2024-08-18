#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
    char password[100];
    int length = strlen(password);
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0,i;
    printf("Enter a password: ");
    scanf("%s", password);
    if(i>8)
    {
     printf("\a the password should has minimum of 8 characters");
    }
    for (i = 0; i <=8; i++)
        {
        if (islower(password[i]))
            hasLower = 1;
        else if (isupper(password[i]))
            hasUpper = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (strchr("!@#$%^&*()-+", password[i]))
            hasSpecial = 1;
    }

    if (hasLower && hasUpper && hasDigit && hasSpecial)
        printf("Password strength: Very Strong\n");
    else if (hasLower &&hasUpper && (hasSpecial||hasDigit))
        printf("Password strength: Strong\n");
    else if(hasLower&&(hasUpper||hasSpecial||hasDigit))
        printf("Password strength: Medium\n");
    else
        printf("Password strength: Weak\n");
}
