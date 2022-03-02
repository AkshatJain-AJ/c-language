#include<stdio.h>
main()
{
     int i,j,k,l,m,n,o,a,b,c,d,e,f;
     for(i=65;i<=71;i++)//1st start
     {
        printf("%c\ ",i);
      }
      for(a=70;a>=65;a--)//1st end
            printf("%c\ ",a);
            printf("\n");

      for(j=65;j<=70;j++)//2nd start
      {

        printf("%c\ ",j);
      }
      printf("\ ");
      for(b=70;b>=65;b--)//2nd end
            printf("\ %c",b);
            printf("\n");

      for(k=65;k<=69;k++)//3rd start
      {

        printf("%c\ ",k);
      }
      printf("\     ");
      for(c=69;c>=65;c--)//3rd end
            printf("\ %c",c);
            printf("\n");

      for(l=65;l<=68;l++)//4th start
      {

        printf("%c\ ",l);
      }
      printf("\         ");
      for(c=68;c>=65;c--)//4th end
            printf("\ %c",c);
            printf("\n");

      for(m=65;m<=67;m++)//5th start
      {

        printf("%c\ ",m);
      }
      printf("\             ");
      for(d=67;d>=65;d--)//5th end
            printf("\ %c",d);
            printf("\n");

      for(n=65;n<=66;n++)//6th start
      {

        printf("%c\ ",n);
      }
       printf("\                 ");
      for(e=66;e>=65;e--)//6th end
            printf("\ %c",e);
            printf("\n");

      for(o=65;o<=65;o++)//7th start
      {

        printf("%c\ ",o);
      }
      printf("\                     ");
      for(f=65;f>=65;f--)//7th end
            printf("\ %c",f);

}

