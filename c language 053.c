#include<stdio.h>
main()
{
    int c,cpp,java,t,avg;
    printf("Enter the c markes: ");
    scanf("%d",&c);
    printf("Enter the cpp markes: ");
    scanf("%d",&cpp);
    printf("Enter the java markes: ");
    scanf("%d",&java);
    t=c+cpp+java;
    avg=t/3;
      if (c=cpp=java>=40)
    {
        printf("Total marks:%d",t);
        printf("\nAverage marks:%d",avg);
        printf("\n Pass");
    }
    else
    {
        if (c<40)
            printf("Failed in C");
        else
            if (cpp<40)
            printf("Failed in C++");
        else
            printf("Failed in Java");
            printf("\n No grade");
    }
    }




