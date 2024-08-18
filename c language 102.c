#include <stdio.h>
main()
{
    int a[3][3], b[3][3], x[3][3], i, j, t;
    printf("    first array     ");
    printf("\n____________________\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("    second array     ");
    printf("\n____________________\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            x[i][j] = 0;
            for (t = 0; t < 3; t++) {
                x[i][j] += a[i][t] * b[t][j];
            }
        }
    }

    printf("    result    ");
    printf("\n______________\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}
