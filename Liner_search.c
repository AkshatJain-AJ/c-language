#include<stdio.h>
int main()
{
    int size,i,element,n,a[30];
    printf("Enter the size of array-->");
    scanf("\n%d",&size);
    printf("Enter the elements of array::>");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element that you want to search..");
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(a[i]==element)
            {
                printf("\nElement found at %d position",i+1);
                break;
            }
    }
    if(i==size)
        printf("\nElement not found");
}
