#include<stdio.h>
#include<string.h>
main()
{
   int i,j;
   char str[30],w[10];

   printf("Enter a sentence.....");
   gets(str);
   printf("Enter a word to check.....");
   gets(w);

   if(strstr(str,w)!='\0')
     printf("The word is present in the main string....");
   else
       printf("The word is  not present in the main string....");
}
