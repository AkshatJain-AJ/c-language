#include<stdio.h>
main()
{
    int n,i,a,sum=0;

    for(i=100;i<=1000;i++)
    {
        sum=0;
        for(n=1;n<i;n++)
       {

        a=i%n;

        if(a==0)
        {
         printf(" \nfactors of %d are %d",i,n);
         sum=sum+n;
        }
       }


         printf("\nThe sum is %d",sum);
              if(sum==i)
            printf("\nIt is a perfect number %d",i);
            else
                printf("\nIt is not a perfect number %d",i);

        }
}






