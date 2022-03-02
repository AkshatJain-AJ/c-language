#include<stdio.h>
int p=1;
partion(int a[],int p,int q)
{
    int x,i,j,temp;
    x=a[p];
    i=p;
    for(j=p+1;j<=q;j++)
    {
        if(a[j]<=x)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i];
    a[i]=a[p];
    a[p]=temp;
    return i;
}
quick_sort(int a[],int p,int q)
{
    int s;
    if(p==q)
        return a[p];
    if(p<q)
    {
        s=partion(a,p,q);
        quick_sort(a,p,s-1);
        quick_sort(a,s+1,q);
        return a;
    }
}
int main()
{
     int r,a[100],p,q,range;
    printf("Enter the range\n");
    scanf("%d",&range);
    printf("Enter the elements\n");
    for(r = 1; r <= range; r++)
    {
        scanf("%d",&a[r]);
    }
    quick_sort(a,1,range);
    printf("\nList after sorting\n");

   for(r = 1; r <= range; r++)
      printf("%d ", a[r]);
}
