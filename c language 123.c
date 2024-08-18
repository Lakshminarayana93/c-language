#include<stdio.h>
#include<string.h>
main()
{
	int len1,len2,i,j;
	char str1[50],str2[50],ch,c;
	printf("Enter a string......");
	scanf("%s%s",&str1,&str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1=len2)
	{
      if(str1[i]==str2[i])
	  printf("Both words are similar in length.....");
	  printf("Both words are \"ANAGRAMS\"....");
    }
	else
	  printf("Words are not similar in length....\n");
	  printf("Try different combinations\n");
}
