# include <stdio.h>
main()
{
	int a,b,c,d;
	a=b=c=d=0;

	printf("Enter 3 nos...:");
	scanf("%d %d %d %d",&a ,&b ,&c ,&d);

	if((a>b) && (a>c) && (a>d))
			printf("%d is Biggest...",a);
	else
		if((b>c)&&(b>d))
			printf("%d is Biggest..",b);
		else
		   if (c>d)
			printf("%d is Biggest..",c);
           else
               printf("%d is Biggest..",d);


  printf("\n");
}
