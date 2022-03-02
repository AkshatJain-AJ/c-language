#include<stdio.h>
main()
{
    int y;
    float i, x;
    for(y=1;y<=4;y++)
    {
        for(x=5.5;x<=10.5;x+=0.5)
        {
            i=2+(y+(0.5* x) );
    printf("%f\n%d\n%f",i,y,x);
        }
    }
}
