#include<stdio.h>
main()
{
int id,u,tu;
char name[20];
printf("customer id no:");
scanf("%d",&id);
printf("customer Name:");
scanf("%s",&name);
printf("units consumed:");
scanf("%d",&u);
if (199>u)
{
  tu=u*1.20;
  printf("Amount charges @Rs.1.20 per units:%d",tu);
 }
else
    if ((u>=200) && (u<400))
    {
      tu=u*1.50;
      printf("Amount charges @Rs.1.50 per units:%d",tu);
    }
    else
       if ((u>=400) && (u<600))
      {
         tu=u*1.80;
         printf("Amount charges @Rs.1.80 per units:%d",tu);
       }
else
      {
         tu=u*2.00;
         printf("Amount charges @Rs.2.00 per units:%d",tu);
       }

}

