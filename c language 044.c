#include<stdio.h>
main()
{
int a,b,c,tm,avg;
printf("Enter the 3 subjects marks");
scanf("%d%d%d",&a,&b,&c);
if ("avg>90")
{
tm=a+b+c;
avg=tm/3;
printf("grade: A+");
}
else
    if ((avg>80) &&(avg<=90))
{
      tm=a+b+c;
      avg=tm/3;
      printf("grade: A");
}
    else
       if ((avg>70) &&(avg<=90))
{
         tm=a+b+c;
         avg=tm/3;
         printf("grade: B+");
}

       else
          if ((avg>60) &&(avg<=70))
{
           tm=a+b+c;
           avg=tm/3;
           printf("grade: B");
}
          else
             if ((avg>50) &&(avg<=60))
{
               tm=a+b+c;
               avg=tm/3;
               printf("grade: C");
}
              else
                {
                 tm=a+b+c;
                 avg=tm/3;
                 printf("grade: F");
                }
}
