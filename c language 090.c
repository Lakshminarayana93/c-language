#include <stdio.h>
#include <string.h>
main()
{
    char p[100];
    char c;
    do {
        printf("Enter the name of a program: ");
        scanf("%s",&p);
        printf("Length of the program name: %lu\n", strlen(p));
        printf("Do you want to continue? (Y/N): ");
        fflush(stdin);
        scanf("%c", &c);
    } while (c == 'Y' || c == 'y');
    printf("\n");
}
