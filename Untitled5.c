#include<stdio.h>
main()
{
    int h,w;
    for(w=0;w<=13;w++)
        for(h=0;h<=40;h++)
        printf("%c",1);

    int i,j,k=1;
    for(i=0;i<3;i++)
     {
         k=1;
         for(j=0;j<3;j++)
         {
            if(j<=2-i)
                printf(k);

            else
                printf(" ");

             k++;
         }
         printf("\n");
     }
}


