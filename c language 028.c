#include<stdio.h>
main()
{
int amt,dis,famt;
printf("Enter the Bill amount...:");
scanf("%d",&amt);
if(amt>=25000){
  dis=amt/10;
  famt=amt-dis;
  printf("discont..:%d\n",dis);
  printf("final amount..:%d\n",famt);
} else{
  dis=amt/5;
  famt=amt-dis;
  printf("discont..:%d\n",dis);
  printf("final amount..:%d\n",famt);
}
  printf("Thank you for shopping");


}
