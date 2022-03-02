#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==3)
        {
            for(j=1;j<=5;j++)
                printf("0");

        }

        else
        {
            for(j=1;j<=5;j++)
            {
                if(j==3)
                    printf("0");
                else
                    printf("1");
            }
        }printf("\n");
    }printf("\n");
}
