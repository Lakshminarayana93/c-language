#include<stdio.h>
main()
{
 int arr[100],i,no,o=1,e=2;
 printf("Enter array size:");
 scanf("%d",&no);
 for (i=0;i<no;i++)
 {
  if (i%2==0)
  {
   arr[i]=o;
   o=o+2;
  }
   else
   {
     arr[i]=e;
     e=e+2;
   }
 }
  for (i=0;i<no;i++)
  printf("\n index at %d is %d..",i,arr[i]);
}
