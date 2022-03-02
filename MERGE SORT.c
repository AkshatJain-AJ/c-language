#include <stdio.h>
#include<math.h>
merge(int a[],int i1,int j1,int i2,int j2)
{
   int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=j1)
        temp[k++]=a[i++];

    while(j<=j2)
        temp[k++]=a[j++];

    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}

 merge_sort(int a[],int p,int r)
{
    int q;
    if(p<r){
      q=(p+r)/2;
      merge_sort(a,p,q);
      merge_sort(a,q+1,r);
      merge(a,p,q,q+1,r);
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
    merge_sort(a,1,range);
    printf("\nList after sorting\n");

   for(r = 1; r <= range; r++)
      printf("%d ", a[r]);
}
