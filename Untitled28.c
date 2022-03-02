#include<stdio.h>
#define NULL 0
main()
{
    FILE *fp;
    char another='Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    fp=fopen("EMPLOYEE.C","w");
    if(fp==NULL)
    {
        printf("CANNOT OPEN FILE");
    }
    while(another=='Y')
    {
        printf("\nEnter the name,age,basic salary:\n");
        scanf("\n%s%d%f",e.name,&e.age,&e.bs);
        fprintf(fp,"%s\n%d\n%f\n",e.name,e.age,e.bs);
        another=getche();
    }
    fclose(fp);
}
