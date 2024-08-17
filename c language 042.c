
# include <stdio.h>

main()
{

	int year=0;
	printf("Enter ur date of birth:");
	scanf("%d",&year);


	if(year%100==0)
	{
		if(year%400==0)
		   printf("you born in leap year ");
		else
		   printf("you not born in leap year ");

	}
	else
	{
		if(year%4==0)
	       printf("you born in leap year");
	    else
	       printf("you not born in leap year");
	}
  printf("\n");
}

