#include<stdio.h>
main()
{
float f,c;
printf("Enter The temperature in fahrenheit...:");
scanf("%f",&f);
c=(f-32)*5/9;
printf("The temperature converted fahrenheit into Centigrade...:%f",c);
}
