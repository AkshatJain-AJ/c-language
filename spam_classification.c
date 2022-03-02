#include<stdio.h>
int main()
{
    long long int T,N,w[100000000],m,b[1000000000],i,j,x,k,z,l,p,count_even,count_odd,minX,maxX,a[1000000000],y[1000000000],count;
   // printf("Enter the number of test case\n");
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        count_even=0;
        count_odd=0;
        count=0;
      //  printf("Enter the value of N,minX,maxX\n");
     scanf("%lld%lld%lld",&N,&minX,&maxX);
     /*for(j=0;j<N;j++)*/j=0;
     while(j<N)
     {
        // printf("Enter the value of w and b\n");
         scanf("%lld%lld",&w[j],&b[j]);
     //    printf("%d ",w[j]);
         //scanf("%d",&b[j]);
       //  printf("%d\n",b[j]);
         j++;
     }
     //printf("k\n");
     j=0;z=0;
     while(j<N)
     {
       //  printf("I\n");
         for(k=minX;k<=maxX;k++)
         {p=k;j=0;
             for(m=0;m<N;m++)
             {
                 y[m]=w[j]*p+b[j];
         //       printf("y[m] is %d\n",y[m]);
                 j++;
                 p=y[m];
             }
             a[z]=p;
            // printf("a[z] is %d\n",a[z]);
             //printf("G\n");
             z++;
         }
     }
     count=z;
    // printf("count is %d\n",count);
     //printf("M");
     z=0;
     while(z<count)
     {
         if(a[z]%2==0)
         count_even++;
         else if(a[z]%2==1)
         count_odd++;
         z++;
     }
     printf("%lld %lld\n",count_even,count_odd);
    }
}
