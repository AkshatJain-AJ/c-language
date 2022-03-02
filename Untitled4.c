#include<stdio.h>
main()
{
    int n;
    printf("Number from 1-300 are entered-->\n");
    printf(" Prime numbers are\n\n");
    for(n=2;n<=300;n++)
    {

    printf("%d\t",n);
    if(n==2||n==3||n==5||n==7)
    {
     printf("it is a prime number\n\n ");
        continue;
    }
     if(n%2==0||n%3==0||n%5==0||n%7==0)
        printf("it is not a prime number\n ");
        else
        printf("it is a prime number\n\n ");
    }
}
