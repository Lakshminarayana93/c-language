#include<stdio.h>
main()
{
int r,m,p;
printf("Enter the price of Reynold..:");
scanf("%d",&r);
printf("Enter the price of Montex..:");
scanf("%d",&m);
printf("Enter the price of Parker..:");
scanf("%d",&p);
if ((r>m)&&(r>p))
  printf("Reynold costliest");
  else
      if (m>p)
        printf("Montex costliest");
      else
      printf("Parker costliest");
}
