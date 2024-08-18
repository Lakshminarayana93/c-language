#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && b <= c)
    {
        printf("Ascending order: %d %d %d\n", a, b, c);
    } else if (a <= c && c <= b)
    {
        printf("Ascending order: %d %d %d\n", a, c, b);
    } else if (b <= a && a <= c)
    {
        printf("Ascending order: %d %d %d\n", b, a, c);
    } else if (b <= c && c <= a)
    {
        printf("Ascending order: %d %d %d\n", b, c, a);
    } else if (c <= a && a <= b)
    {
        printf("Ascending order: %d %d %d\n", c, a, b);
    } else
    {
        printf("Ascending order: %d %d %d\n", c, b, a);
    }
    return 0;
}
