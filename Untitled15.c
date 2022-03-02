#include<stdio.h>
#include<math.h>
main()
{

    float x,y;
    double c;
    float power(float,float);
    printf("Enter any two numbers");
    scanf("%f%f",&x,&y);
    c = power(x,y);
    printf("%f",c);
}
 float power(float a,float b)
{
    float u;
    u=pow(a,b);
    return(u);
}

