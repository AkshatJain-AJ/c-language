#include<stdio.h>
main()
{
    int n,i,c,a,fact=1,sum=0;
    printf("Enter a number-->");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {

        a=i%10;
        fact=1;
        for(c=1;c<=a;c++)
        {

            fact=fact*c;
        }
        printf("\nThe factorial of %d is %d",a,fact);
        sum=sum+fact;
        printf("\n%d",sum);

    }
        if(sum==n)
        printf("\n It is a strong number %d",n);
        else
        printf("\n It is not a strong number %d",n);
}
