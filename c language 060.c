#include <stdio.h>

int main()
 {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    if (num1 < num2)
        printf("Up\n");
    else if (num1 > num2)
        printf("Down\n");
    else
        printf("Both integers are equal\n");

    return 0;
}
