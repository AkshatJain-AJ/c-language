#include<stdio.h>
#include<math.h>
main()
{
    int n,i,a,count=0,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {

        count++;
    }
  printf("\n%d",count);
     for(i=n;i!=0;i=i/10)
    {
        a=i%10;
        sum=sum+(pow(a,count));
    }
    printf("\n%d",sum);
    if(n==sum)
        printf("\nit is a armstrong %d",n);
        else
            printf("\nIt is not a armstorng %d",n);


}
