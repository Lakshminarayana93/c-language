#include <stdio.h>
int main()
{
    long long no, temp;
    int c = 0;
    char ch[100];
    printf("Enter your name: ");
    scanf("%s", ch);
    printf("Enter your 12-digit Aadhar No: ");
    fflush(stdin);
    scanf("%lld", &no);
    temp = no;
    while (temp > 0)
    {
        temp = temp / 10;
        c++;
    }

    if (c == 12)
    {
        printf("Hey %s, your Aadhar No %lld is verified successfully.\n", ch, no);
    } else
    {
        printf("Hey %s, your Aadhar No %lld is invalid. Kindly recheck.\n", ch, no);
    }
    return 0;
}
