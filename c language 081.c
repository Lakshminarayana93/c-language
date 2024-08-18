#include <stdio.h>
int main()
{
    int no,digit,rn;
    printf("Enter the vehicle number: ");
    scanf("%d",&no);
    while (no > 0)
     {
        int digit = no% 10;
        rn = rn * 10 + digit;
        no/= 10;
    }
    if (no=rn)
    {
        printf("%d is a palindrome number.\n",no);
    } else {
        printf("%d is not a palindrome number.\n",no);
    }
    return 0;
}
