#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n,c;
    char a[30],temp;
    printf("Enter a string");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

                if(a[i]>a[j])
            {
                (temp=a[i]);
                (a[i]=a[j]);
                (a[j]=temp);
            }
        }
    }

    printf("%s",a);
}
