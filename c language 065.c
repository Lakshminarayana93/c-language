#include <stdio.h>
int main() {
    char g;
    printf("Enter the grade: ");
    scanf("%c", &g);
    switch (g)
    {
        case 'E': printf("You have chosen: Excellent\n");break;
        case 'V': printf("You have chosen: Very Good\n");break;
        case 'G': printf("You have chosen: Good\n");break;
        case 'A': printf("You have chosen: Average\n");break;
        case 'F': printf("You have chosen: Fails\n");break;
        default:  printf("Invalid Grade Found.\n");break;
    }
    return 0;
}
