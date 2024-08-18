#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
    int Array[10], i,temp,j;
    srand(time(0));
    for (i = 0; i < 10; ++i)
    {
        Array[i] = rand()%1000;
        printf("\t %d\n",Array[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (Array[i] > Array[j]) {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }

    printf("\n Array of Elements in Ascending Order:\n");
    for (i = 0; i < 10; i++)
        {
        printf("%d\t", Array[i]);
    }
 for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (Array[i] < Array[j])
            {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
 }

    printf("\n array of element in decending order:\n");
      for (i = 0; i < 10; i++)
        {
        printf("%d\t", Array[i]);
 }

    return 0;
}
