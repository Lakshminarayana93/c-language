#include <stdio.h>

int main() {
    int u, tb;
    char ch;
    printf("Enter the units consumed: ");
    scanf("%d", &u);
    printf("Enter your connection type (D for domestic, C for commercial): ");
    scanf(" %c", &ch);
    if (ch == 'D' || ch == 'd') {
        if (u < 100)
            tb = 100;
        else if (u >= 100 && u < 200)
            tb = u * 1.50;
        else if (u >= 200 && u < 300)
            tb = u * 3.00;
        else
            tb = u * 5.00;
        printf("Total bill: %d\n", tb);
    } else if (ch == 'C' || ch == 'c') {
        if (u < 100)
            tb = 150;
        else if (u >= 100 && u < 200)
            tb = u * 2.50;
        else if (u >= 200 && u < 300)
            tb = u * 4.50;
        else
            tb = u * 7.50;
        printf("Total bill: %d\n", tb);
    } else {
        printf("Invalid connection type. Please enter D or C.\n");
    }
    return 0;
}
