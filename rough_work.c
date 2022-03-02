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

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
     int x = 0;
     int y = 10;
     char option;
     char keyPressed;

void gotoxy(int x, int y)
{
      HANDLE hConsoleOutput;
       COORD Cursor_Pos = {x, y};
     hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}
void horizontal()
{
      int game = 0;
      while(game != 1)
      {
        x++;
        gotoxy(x,y);
        printf("*");
       /* gotoxy(x+1,y);
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
  x = 0;
  y = 0;
  while(game != 1)
  {
    y++;
    gotoxy(x,y);
    printf("*");
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
main()
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


