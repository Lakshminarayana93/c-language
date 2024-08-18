#include <stdio.h>
int main()
{
    int tambola[90],i;
    for (i = 0;i <90;i++)
    {
        tambola[i] = i + 1;
    }
    printf("Tambola numbers (1 to 90):\n");
    for (i = 0; i < 90; i++)
    {
        printf("%d ", tambola[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
}
}
