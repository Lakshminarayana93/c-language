#include<stdio.h>
#include<string.h>
main()
{
	int i,len;
	char name[30];
	char ch ='y';
	
	printf("Enter your name....");
	gets(name);
	len=strlen(name);
	for(i=0;name[i]<len;i++)	
	
				if(name[i]==' ');
		printf("Name cannot be blank");	
	if(len<5)
		{	printf("\nThe required character are not sufficient....\n");
		printf("Name must contain atleast 5 characters....\n");
		}
	    else
	    printf("Name qualified in every criteria.....");	    
}
