#include<stdio.h>
#include<string.h>
main()
{

    int i,n,count=0;
    char a[30];
    printf("Enter a string");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}
