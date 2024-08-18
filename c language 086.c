#include <stdio.h>
int main() {
    int num1, num2,a,b,temp,lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Error: Please enter positive integers.\n");
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
