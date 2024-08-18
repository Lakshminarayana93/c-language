#include <stdio.h>
#include <string.h>
int main()
{
    char p1[100], p2[100];
    int l1, l2,i;
    int s= 0;
    printf("Enter the first password: ");
    scanf("%s", p1);
    printf("Enter the second password: ");
    scanf("%s", p2);
    l1 = strlen(p1);
    l2 = strlen(p2);
    if (l1 == l2)
    {
        for ( i = 0; i < l1; i++)
        {
            if (p1[i] == p2[i])
            s++;
        }
        if (s == l1)
            printf("The passwords are identical.\n");
        else
            printf("The passwords have some differences.\n");
    }
    else
    {
        printf("The passwords have different lengths.\n");
    }
}
