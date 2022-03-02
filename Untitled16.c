#include<stdio.h>
main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter the marks of 5 subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*0.2;
    if(per>=91&&per<=100)
        printf("Grade is A");
    if(per>=81&&per<=90)
        printf("Grade is B");
    if(per>=60&&per<=80)
        printf("Grade is C");
    if(per<=60)
        printf("Grade is D");


}
