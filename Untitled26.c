#include<stdio.h>
#include<string.h>
main()
{

    int i,n,c,j=0;
    char a[30],temp;
    printf("Enter a string");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;++i)
    {
        if(a[i]!=' ')
        {


             a[j++]=a[i];

        }
    }a[j]='\0';
    puts(a);
}

