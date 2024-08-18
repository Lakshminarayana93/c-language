#include <stdio.h>
int main()
{
    printf("ASCII Chart:\n");
    printf("-------------\n");
    for (int i = 0; i <= 127; ++i)
    {
        printf("%3d: %c\n", i, i);
    }
}
