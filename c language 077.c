#include<stdio.h>
main()
{
 int no,d;
 char prime;
 d=2;
 printf("Enter the number:");
 scanf("%d",&no);
 while (d<(no/2))
{
 if(no%d==0)
  {
    prime='n';
    break;
  }
d++;
}
if (prime='y')
  printf("\n %d is prime...",no);
else
    printf("\n %d is not prime....",no);
}
