#include<stdio.h>
main()
{
int cost,sell,p,l;
printf("Enter the cost price...:");
scanf("%d",&cost);
printf("Enter the selling price...:");
scanf("%d",&sell);
if (sell>cost)
{
p=sell-cost;
printf("heyy you have made a profit of Rs.%d",p);
}
else
    if (cost>sell)
   {
     l=cost-sell;
      printf("Oops! you incurred a loss of Rs.%d",l);
   }
   else
       printf("hmmm! No loss..No profit..");
}
