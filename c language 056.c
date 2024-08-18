#include<stdio.h>
main()
{
    int c,f;
    printf("enter ur height in feets..:");
    scanf("%d",&f);
    c=f*30.48;
    if (f>5.5)
    {
     printf("you are taller\n ");
     printf("you height in centimeters..:%d",c);
    }
    else
    {
       printf("you are shorter \n");
       printf("you height in centimeters..:%d",c);
    }
}
