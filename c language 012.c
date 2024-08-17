#include<stdio.h>
main()
{
char uppercase,lowercase;
int ascii;
printf("Enter an uppercase character: ");
scanf("%c",&uppercase);
ascii=uppercase;
lowercase=ascii+32;
printf("\n Its lowercase=%c",lowercase);
getch();
}
