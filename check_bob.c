#include<stdio.h>
#include<string.h>
int main()
{
    char a[3],c[3];
    int bo=0,b=0,o=0,T,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        bo=0;b=0;o=0;
        scanf("%s",a);
        scanf("%s",c);
        for(j=0;j<3;j++)
        {
            if((a[j]=='b'&&c[j]=='o')||(c[j]=='b'&&a[j]=='o'))
              bo++;
            else if(a[j]=='b'||c[j]=='b')
                b++;
            else if(a[j]=='o'||c[j]=='o')
                o++;
        }
        if(b==2&&o==1)//1
         printf("yes\n");
        else if(bo==3)//2
         printf("yes\n");
        else if(bo==2&&o==1)//3
         printf("yes\n");
        else if(bo==2&&b==1)//4
         printf("yes\n");
        else if(bo==1&&b==2)//5
         printf("yes\n");
        else if(b==1&&o==1&&bo==1)//6
         printf("yes\n");
        else
         printf("no\n");
    }
}
