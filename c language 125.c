#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int i,len;
    char str[30],ch;


    printf("Enter a string....");
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(i%2==0)
        {
        printf("%c",toupper(str[i]));
        }
        else
        {
            printf("%c",tolower(str[i]));
        }
    }
}
