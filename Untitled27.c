#include<stdio.h>
#define NULL 0
main()
{
    FILE *fp;
    char s[80];
    int i;
    fp=fopen("POEM.C","w");
    if(fp==NULL)
    {
        puts("Cannot open the file");
    }
    printf("\nEnter a few lines of text:\n");



    while(strlen(gets(s))>0)
    {

      fputs(s,fp);
      fputs("\n",fp);


    }
    fclose(fp);
}
