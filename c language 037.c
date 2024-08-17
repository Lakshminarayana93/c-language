#include<stdio.h>
main()
{
 int mov1,mov2,mov3;
 printf("Enter the rating of first movie (1 to 10)..:");
 scanf("%d",&mov1);
 printf("Enter the rating of second movie  (1 to 10)..:");
 scanf("%d",&mov2);
 printf("Enter the rating of third movie (1 to 10)..:");
 scanf("%d",&mov3);
 if ((mov1>mov2) && (mov1>mov3))
 printf("first movie is hit");
 else
     if (mov2>mov3)
       printf("second movie is hit");
     else
         printf("third movie is hit");
}
