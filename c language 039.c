#include<stdio.h>
main()
{
int f;
printf("Enter ur Floor number:");
scanf("%d",&f);
if ((f>=0) && (f<=50))
{
 if (f%2==0)
   printf("heyy you have \"beach view\"for your Flat");

 else
     printf("heyy you have \"forest view\"for your Flat");
}
   else
      {
       printf("\a we have only \"50 floors\"");
      }
}
