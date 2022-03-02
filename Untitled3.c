#include<stdio.h>
#include<math.h>
main()
{
    int a,i,b,c,n,sum;
    printf("Armstrong of numbers between 1-500 -->\n");
    for(i=1;i<=500;i++)
    {
        a=i%10;
        n=i/10;
        b=n%10;
        n=n/10;
        c=n%10;
        sum=(a*a*a)+(b*b*b)+(c*c*c);
        if(sum==i)
            printf("The numbers are--:: %d\n",i);

    }

}
