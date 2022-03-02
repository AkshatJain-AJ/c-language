#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>
#include <dos.h>
#include <dir.h>

#define LEFT 75
#define RIGHT 77
#define UP 80
#define DOWN 72

int start_number, isGameOn= 1;
char ch, option, keyPressed;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

 void gotoxy(int x,int y)
 {
     HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
   COORD coord={x,y};
   SetConsoleCursorPosition(hConsoleOutput,coord);

 }
struct coordinate
{
    int x;
    int y;
    int direction;
};
typedef struct coordinate coordinate;
coordinate head, bend[500] , food , body[30];


int main()
{
    head.x=25;
    head.y=20;
    printf("      \n|-----------------------------------------------------------------------------------------------|\n");
    printf("      \n|                                                                                               |\n");
    printf("      \n|               WELCOME   TO THE GAME OF SNAKES                                                 |\n");
    printf("      \n|                                                                                               |\n");
    printf("      \n|                                                                                               |\n");
    printf("      \n|                                                                                               |\n");
    printf("      \n|-----------------------------------------------------------------------------------------------|\n");
    /*delay(250);
    system("cls");*/
    menu();
    delay(50);
    system("cls");
   // setcolor(34);*/
   //border();
   //snake(head.x,head.y);

}


   void menu()
   {
    do
    {
      printf("\n\nMenu");
      printf("\n1.Start the Game");
      printf("\n2.High Score");
      printf("\n3.Rules and Instructions");
      printf("\n4.Exit");
      scanf("%d",&start_number);
      if(start_number==1)
      {
          system("cls");
          border();
      }
      if(start_number==3)
      {
          system("cls");
          printf("\n\n\nRules and Instructions");
                  printf("\n1. Use arrow keys to make the snake.");
                  printf("\n2. You will be provided food at some locations that you have to eat.");
                  printf("\n3. Every when your snake eat the food it grows by +1 in its length and thus your score.");
                  printf("\n4. Your game will be over when the snake will collides with its body itself.");
                  printf("\n5. In order to pause the game in between .... press 'Space Bar'");
                  printf("\n\n");
      }
      if(start_number!=1&&start_number!=2&&start_number!=3&&start_number!=4)
      {
          printf("INVALID INPUT");
      }
    }while(start_number!=4);
   }


void snake(int X,int Y)
{
    HANDLE Screen = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position={X,Y};
    SetConsoleCursorPosition(Screen,Position);
    //SetColorAdjustment(4);
    printf(/*"%c",2*/"*");
    void snake_movement();
}


void border()
{
    for(int i=1;i<70;i++)
    {
        HANDLE Screen = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD Position_upper_line={i,1};
        SetConsoleCursorPosition(Screen,Position_upper_line);
        printf("#");
    }
    for(int i=1;i<45;i++)
    {
        HANDLE Screen = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD Position_left_line={1,i};
        SetConsoleCursorPosition(Screen,Position_left_line);
        printf("#");
    }
        for(int i=1;i<45;i++)
    {
        HANDLE Screen = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD Position_right_line={70,i};
        SetConsoleCursorPosition(Screen,Position_right_line);
        printf("#");
    }
        for(int i=1;i<=70;i++)
    {
        HANDLE Screen = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD Position_lower_line={i,45};
        SetConsoleCursorPosition(Screen,Position_lower_line);
        printf("#");
    }
    printf("\n\n\n");
    snake(head.x,head.y);
}


/*void setcolor(int ForgC)
{
    WORD wcolor;
    HANDLE Screen = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(Screen,&csbi))
    {
        wcolor=(csbi.wAttributes & 0XF0)+(ForgC & 0X0F);
        SetConsoleTextAttribute(Screen,wcolor);
    }
    printf("%c",2);
}*/


void snake_movement()
{
    keyPressed = _getch();
    switch(keyPressed)
    {
     case 'w': horizontal();
     case 's': vertical();
     break;
    }
    getchar();
}
void horizontal()
{
      int game = 0;
      while(game != 1)
      {
        head.x++;
        gotoxy(head.x,head.y);
       // snake(head.x,head.y);
        printf("*");
        /*gotoxy(x+1,y);
        printf("*");
        gotoxy(x+2,y);
        printf("*");
        gotoxy(x+3,y);
        printf("*");*/
        delay(50);
        system("cls");
      }

}

void vertical()
{
  int game = 0;
  while(game != 1)
  {
    head.y++;
    gotoxy(head.x,head.y);
    printf("%c",2);
    /*gotoxy(x,y+1);
    printf("*");
    gotoxy(x,y+2);
     printf("*");
    gotoxy(x,y+3);
    printf("*");*/
    delay(50);
    system("cls");
   }
}
