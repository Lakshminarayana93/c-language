#include<stdio.h>
#include<string.h>
main()
{
	int i,len;
	char sen[50];
	printf("Enter a sentence....");
	scanf("%s",&sen);
	for(i=0;sen[i]!='\0';i++)
	{
		len=strlen(sen);
	}
		printf("The length of the first character of the inputed string is %d",len);
}
