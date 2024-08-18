#include <stdio.h>
int main()
{
    char str[100];
    char username[50];
    printf("Enter the email address: ");
    scanf("%s", str);
    char *symbol = strchr(str, '@');
    if (symbol != NULL)
    {
        int userlength = symbol - str;
        strncpy(username, str, userlength);
        username[userlength] = '\0';
        printf("Generated username: %s\n", username);
    }
     else
    {
        printf("Invalid email address format.\n");
    }
    return 0;
}
