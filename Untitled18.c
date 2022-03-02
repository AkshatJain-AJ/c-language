#include<stdio.h>
main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
     prime(num);
}
    prime(int x)
{
    int j,i=0,k,count=0;
    for(i=1;i<=x;i++)
    {
      j=x%i;
      if(j==0)
      printf("\nIt is a factor %d",i);
      else
      printf("\nIt is not a factor %d",i);
    }
    for(k=1;k<=i;k++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("\nIt is a prime factor %d",k);
    else
    printf("\nIt is not a prime factor %d",k);
}


