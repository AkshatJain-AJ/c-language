#include<stdio.h>
#define NULL 0
main()
{
    FILE *fp;
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    fp=fopen("EMPLOYEE.C","r");
    if(fp==NULL)
    {
        puts("CANNOT OPEN FILE");
    }
    while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF)
    {
        printf("\n%s\n%d\n%f",e.name,e.age,e.bs);

    }
    fclose(fp);
}
