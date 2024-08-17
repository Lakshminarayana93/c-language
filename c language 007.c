#include<stdio.h>
main()
{
int tm,h,m;
tm=h=m=0;
printf("Enter Fling time from hyderabad to singapore in minutes:");
scanf("%d",&tm);
h=tm/60;
m=tm%60;
printf("flying time from hyderabad to singapore is %d hrs and %d minutes....",h,m);
printf("\n");
}
