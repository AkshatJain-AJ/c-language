#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the diagonalDifference function below.
main()
{
    int a,b[50][50],i,j,c=0,d=0,e;
    printf("Enter the size of square matrix-->");
    scanf("%d",&a);
    printf("Enter the elements of square matrix-->");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
                c=c+b[i][j];
            else if (i+j==(a-1))
                d=d+b[i][j];
        }
    }

    e=(c-d);
    if(e<0)
    {
        e=-e;
         printf("The result is = %d",e);
    }
    else
    printf("The result is = %d",e);
}
