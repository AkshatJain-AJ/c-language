#include<stdio.h>
main()
{
    int i=1;
    char c=i;
    printf("The ascii values and their equivalent characters-->");
    while(i<=255)
    {
        printf("%d %c\n",i,i);
        i++;
    }
}

