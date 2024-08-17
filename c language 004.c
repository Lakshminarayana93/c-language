//Total & Average Example

# include <stdio.h>
main()
{
int eng,san,m,p,c;
float tot,avg;
eng=san=m=p=c=tot=avg=0;
printf("Enter Marks for English...:");
scanf("%d",&eng);
printf("Enter Marks for sanskrit...:");
scanf("%d",&san);
printf("Enter Marks for Maths...: ");
scanf("%d",&m);
printf("Enter Marks for Physics...: ");
scanf("%d",&p);
printf("Enter Marks for Chemistry...: ");
scanf("%d",&c);

tot=eng+san+m+p+c;
avg = tot/5;

printf("\nTotal is:%.0f",tot);
printf("\nAverage is:%.f %%",avg);

printf("\n");
}
