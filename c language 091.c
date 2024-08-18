#include<stdio.h>
main()
{
   int arr[100],i,no;
   float tot,avg;
   tot=avg=0;
   printf("enter thr array size....:");
   scanf("%d",&no);
   for(i=0;i<no;i++)
   {
       printf("enter the number:...");
       scanf("%d",&arr[i]);
   }
    for (i=0;i<no;i++)
    {
        tot+=arr[i];
        avg=tot/no;
        printf("\n\n total is:%f",tot);
        printf("\naverage...:%f",avg);
    }a
}
