#include<stdio.h>
main()
{
    int i,j;
    float fact=1,s=0;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
    {
    fact=fact*j;
    }
    s=s+(i/fact);
    fact =1;
    }
    printf("%f",s);
}
