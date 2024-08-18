#include <stdio.h>
#include <string.h>
int main()
{
    char email[100];
    printf("Enter an email address: ");
    scanf("%s", email);
   char *symbol = strchr(email, '@');
    if (symbol == NULL) {
        printf("Invalid email address. Missing '@'.\n");
        return 1;
    }
   if (symbol - email < 3)
   {
        printf("Invalid email address. '@' should be after at least 3 characters.\n");
        return 1;
    }
   char *domain = symbol + 1;
    if (strlen(domain) < 3) {
        printf("Invalid email address. Domain should have at least 3 characters.\n");
        return 1;
    }

    printf("Valid email address!\n");
    return 0;
}
