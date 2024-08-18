#include<stdio.h>
#include<string.h>
main()
{
	int i,l,pos;
	char name[10][20];
	for(i=0;i<10;i++)
	{
			printf("Enter %d st name of your friends....",i+1);
        	gets(name[i]);
	}
	for(i=0;i<10;i++)
	{
		if(strlen(name[i])>l)
		{
			l=strlen(name[i]);
			pos=i;
		}
	}
printf("The lengthiest name is : %s having %d characters",name[pos],l);
}
