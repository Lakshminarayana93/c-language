#include <stdio.h>
main()
{
char gender;
int age;
printf("enter gender of person (M/F) :-");
scanf("%s",&gender);
printf("enter age of person :-");
scanf("%d",&age);
if (age<=5)
{
printf("you have full concession!!");
}
else
if (gender=='M' || gender=='m' && age>60)
{
printf("SCR GIVES 50% CONCESSION !!");
}
else
if(gender=='F' || gender=='f' && age>50)
{
printf("SCR GIVES 50% CONCESSION");
}
else
{
printf("SCR GIVES NO CONCESSION");
}
}
