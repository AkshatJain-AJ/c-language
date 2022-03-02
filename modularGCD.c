#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,t,n,a,b,j,c,d,gcd,q=(pow(10,9)+7);
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&n);
        c=pow(a,n)+pow(b,n);//printf("%d",c);
        d=a-b;//printf("\n%d\n",abs(d));
        if(c==0)
        {
            d=abs(d);
            gcd=d;
            printf("%lld \n",gcd);
        }
        else if(d==0)
        {
            gcd=abs(c);
            printf("%lld \n",gcd);
        }
        else
        {
           for(j=1; j <= c && j <= abs(d); ++j)
            {
               if(c%j==0 && abs(d)%j==0)
               gcd = j%q;
            }
            printf("%lld \n",gcd);
        }
    }
}
