#include <stdio.h>
#include <math.h>
 main()
 {
    int no, d1, d2, d3, sum;
    printf("Armstrong numbers between 100 and 1000 are:\n");
    for (no= 100; no<= 1000; ++no)
    {
        d1 = no % 10;
        d2 = (no / 10) % 10;
        d3 = no / 100;
        sum = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);
        if (sum == no)
        {
            printf("%d ", no);
        }
    }
}
