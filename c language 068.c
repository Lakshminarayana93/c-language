#include <stdio.h>
int main()
{
    int i, no,es = 0, os = 0, e = 0, o = 0;
    printf("Enter 10 numbers:\n");
    for (i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &no);
        if (no % 2 == 0)
        {
            es=es+no;
            e++;
        } else
        {
            os=os+no;
            o++;
        }
    }
    printf("\nSum of even numbers: %d\n", es);
    printf("Count of even numbers: %d\n", e );
    printf("Sum of odd numbers: %d\n", os);
    printf("Count of odd numbers: %d\n", o );
    return 0;
}
