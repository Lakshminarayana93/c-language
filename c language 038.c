#include<stdio.h>
main()
{
int temp;
printf("Enter the temperature in centigrade..:");
scanf("%d",&temp);
if (temp<0)
printf("Freezing weather");
else
    if ((temp>=0) && (temp<10))
      printf("very cold weather");
    else
        if ((temp>=10) && (temp<20))
          printf("cold weather");
        else
           if ((temp>=20) && (temp<30))
             printf("normal weather");
            else
               if ((temp>=30) && (temp<40))
                 printf("Its Hot");
               else
                   printf("Its very hot");

}
