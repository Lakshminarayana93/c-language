#include <stdio.h>
int main() {
    char ch;
    printf("Enter the letter: ");
    scanf(" %c", &ch);
    if (ch == 'R' || ch == 'r')
        printf("RED Light Please STOP\n");
    else if (ch == 'Y' || ch == 'y')
        printf("YELLOW Light: Please check and Go\n");
    else if (ch == 'G' || ch == 'g')
        printf("GREEN Light Please Go\n");
    else
        printf("THERE IS NO SIGNAL POINT.\n");
    return 0;
}
