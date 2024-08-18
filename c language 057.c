#include<stdio.h>
main()
{
int n,an,t,opt;
printf("Enter a no..:");
scanf("%d",&n);
printf("Enter another no..:");
scanf("%d",&an);
printf("Enter ur option(1 +,2 -,3 *,4 /,5 E)...:");
scanf("%d",&opt);
switch (opt)
{
  case 1:t=n+an;break;
  case 2:t=n-an;break;
  case 3:t=n*an;break;
  case 4:t=n/an;break;
  case 5:break;
}
printf("total=%d",t);



}
