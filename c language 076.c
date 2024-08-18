#include<stdio.h>
int main()
{
 int tno,c,res;
 printf("Enter table no:");
 scanf("%d",&tno);
 for (c=1;c<=12;c++)
 {
 res=tno*c;
 printf("\n%d*%d=%d",tno,c,res);
 }
}
