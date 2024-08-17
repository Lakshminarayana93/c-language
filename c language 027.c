#include<stdio.h>
main()
{
int s,v;
printf("Enter the price of samsung Mobile...:");
scanf("%d",&s);
printf("Enter the price of Vivo Mobile...:");
scanf("%d",&v);
if (s>v)
  printf("samsung mobile is costlier than vivo");
else
  if(v>s)
    printf("vivo mobile is costlier than samsung");
else
     printf("Both are at same price");
}
