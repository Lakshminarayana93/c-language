#include<stdio.h>
main()
{
char str[100];
int i;
printf("Enter the string:");
gets(str);
for(i=0;str[i]!=' ';i++);

for(i++;str[i]!=' ';i++)
{
 printf("%c",str[i]);
}
}
