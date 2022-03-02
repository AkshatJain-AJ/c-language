#include<stdio.h>
main()
{
    int n,i,a,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        a=n%i;
        if(a==0)
        {
         printf("\n factors are %d",i);
         sum=sum+i;


    }

    }
    printf("\nThe sum is %d",sum);
     if(sum==n)
            printf("\nIt is a perfect number %d",n);
            else
                printf("\nIt is not a perfect number %d",n);
}
