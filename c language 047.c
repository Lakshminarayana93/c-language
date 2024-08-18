#include <stdio.h>
#include <ctype.h>
main()
{
char ch;
printf("Enter a character: ");
scanf("%c", &ch);
if (isupper(ch))
{
printf("The character '%c' is a capital letter.\n", ch);
}
else
if (islower(ch))
{
printf("The character '%c' is a small letter.\n", ch);
}
else
if (isdigit(ch))
{
printf("The character '%c' is a digit.\n", ch);
}
else
{
printf("The character '%c' is a special character.\n", ch);
}
  }
