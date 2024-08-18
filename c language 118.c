#include <stdio.h>
#include <string.h>
int main()
{
    int j, i, len;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    len = strlen(name);
    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", name[j]);
        }
        printf("\n");
    }
}
