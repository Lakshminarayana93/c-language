#include <stdio.h>
int main()
{
    int num1, num2, a, b, temp, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\n");
    }
    a = num1;
    b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    lcm = (num1 * num2) / a;
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}
