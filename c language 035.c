#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int num1, num2,diff;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the absolute difference
    diff = abs(num1 - num2);

    printf("Absolute difference between %d and %d is %d\n", num1, num2, diff);

    return 0;
}
