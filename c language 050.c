#include<stdio.h>
main()
{  char status,gender;
int age;
printf("enter your gender(M/F) :-");
scanf("%c",&gender);
printf("enter your age :-");
scanf("%d",&age);
printf("enter your marital status(married/unmarried) :-");
scanf("%s",&status);
if (status== 'married')
{
printf("you are eligible for bonus\n");
}
if (gender=='M' || gender=='m' && age>=30)
{
printf("you are eligible for bonus\n");
}
else
if (gender=='F' || gender=='f' && age>=25)
{
printf("you are eligible for bonus\n");
}
else
{
printf("you are not eligible for bonus\n");
}
}
