#include<stdio.h>
main()
{
int a_age,b_age;
a_age=b_age=0;
printf("enter the age lucky...:");
scanf("%d",&a_age);
printf("enter the age pawan ...:");
scanf("%d",&b_age);
if (a_age>b_age)
  printf("lucky is older");
else
    if (b_age>a_age)
      printf("pawan is older");
    else
      printf("both are in same age");


}
