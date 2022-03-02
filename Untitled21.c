#include<stdio.h>
main()
{
    int  i,n,a[50],fact=1,j;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=1;j<=a[i];j++)
        {
            fact=fact*j;
        }
    printf("\n%d",fact);
    }

}
