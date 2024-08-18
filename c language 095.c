#include <stdio.h>
main()
{
    int arr[20],c[20],i;
    for ( i = 0; i < 20; i++)
    {
        arr[i] = 5 * (i + 1);
    }
    for ( i = 0; i < 20; i++)
    {
          c[i] = arr[i];
    }
    printf("array:\n");
    for (i = 0; i < 20; i++)
        {
        printf("%d ", arr[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\nanother copy array:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", c[i]);
        if ((i + 1) % 10 == 0)
         {
            printf("\n");
        }
    }

}
