# include <stdio.h>
main()
{
	int a,b;
	a=b=0;

	printf("Enter value for A:");
	scanf("%d",&a);

	printf("Enter value for B:");
	scanf("%d",&b);


	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nA is:%d",a);
	printf("\nB is:%d",b);

	printf("\n");
}
