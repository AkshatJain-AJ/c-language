#include<stdio.h>
int main()
{
    int size,i,element,n,a[30],j,temp=0;
    printf("Enter the size of array-->");
    scanf("\n%d",&size);
    printf("Enter the elements of array::>");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<a[j])
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1]=temp;

    }
    printf("Sorted array is ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
