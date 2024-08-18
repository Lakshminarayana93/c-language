#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numCount = 10;
    int maxNumber = 100;
    int largest = 0,i,r;
    srand(time(0));

    printf("Generated random numbers:\n");
    for (i = 0; i < numCount; ++i) {
        r = rand() % maxNumber + 1;
        printf("%d ", r);
        if (r > largest) {
            largest = r;
        }
    }
    printf("\nLargest number: %d\n", largest);
    return 0;
}
