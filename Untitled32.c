#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=0;i<3;i++)
     {
         k=65;
         for(j=0;j<3;j++)
         {
            if(j<=2-i)
                printf("%c",k);

            else
                printf(" ");

             k++;
         }
         printf("\n");
     }
}
