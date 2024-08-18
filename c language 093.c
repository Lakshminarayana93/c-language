#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
    int arr[10], i,prime=1,num,j;
    srand(time(0));
    for (i = 0; i < 10; ++i)
    {
        arr[i] = rand()%1000;
        printf("\t %d\n",arr[i]);
    }
    printf("Even Array elements: ");
    for (i = 0; i < 10; ++i)
        {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\nOdd Array elements: ");
    for (i = 0; i < 10; ++i)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    printf("\nPrime Array elements: ");
    for (i = 0; i < 10; ++i)
        {
        num = arr[i];
        if (num > 1)
         {
            for ( j = 2; j <= sqrt(num); ++j)
            {
                if (num % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime)
                printf("%d ", num);
        }
    }
}
