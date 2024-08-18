#include <stdio.h>
main()
{
    char str[50];
    int i;
    printf("Enter your name: ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
  {
    if (str[i]=='a'|| str[i]=='e'|| str[i]== 'i' ||str[i]=='o'||str[i]=='u')
    {
        printf(" vowel: %c\n", str[i]);
    }
     else
    {
        printf("consonent: %c\n", str[i]);
    }
   }
}
