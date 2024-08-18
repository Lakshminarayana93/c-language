#include<stdio.h>
main()
{
int tm,dis,fm;
printf("Enter the total sales...:");
scanf("%d",&tm);
if (tm>=25000)
  dis=tm*25/100;
  else
    if ((tm>20000) && (tm<=25000))
     dis=tm*20/100;
    else
       if ((tm>10000) && (tm<=20000))
         dis=tm*10/100;
       else
          if ((tm>5000) && (tm<=10000))
           dis=tm*5/100;
          else
             printf("no discount");
             fm=tm-dis;
        printf("\nDiscont is:%d",dis);
	 printf("\nFinal Amount is:%d",fm);
}
