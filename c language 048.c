#include <stdio.h>
#include <ctype.h>
main()
{
char ch ;

printf("Enter A Character : ");
scanf("%c",&ch);
ch = tolower(ch);
if ((ch >= 65&&ch <= 90)||(ch >= 97&&ch <= 122))
{
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
printf("\n %c Is An Vowel.... \n ",ch);
else
printf("\n It Is An Consonent \n");
}
else
printf("\n Enter Alphabets Only !...\n\n");
}
