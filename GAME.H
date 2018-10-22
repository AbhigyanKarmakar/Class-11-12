#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<dos.h>
#include<process.h>

void game()
{
  hahuamar:
  clrscr();
  int bombx2,ax,bx,ax1,bx1,ax2,bx2,ax3,bx3,ax4,bx4,score=0,bombx[20],bomby[20],bombx3,bombx4,bombx5,bombx6,bomby0,bomby1,bomby2,bomby3,bomby4,bomby5,bomby6,bombx0,bombx1;
  int jibon=5;

    randomize();
   {
    ax1=random(80);
    ax2=random(80);
    ax3=random(80);
    ax4=random(80);
    bx1=random(25);
    bx2=random(25);
    bx3=random(25);
    bx4=random(25);
    gotoxy(ax1,bx1);
    cout<<char(2);
    gotoxy(ax2,bx2);
    cout<<char(2);
    gotoxy(ax3,bx3);
    cout<<char(2);
    gotoxy(ax4,bx4);
    cout<<char(2);
    bombx1=random(80);
    bombx2=random(80);
    bombx3=random(80);
    bombx4=random(80);
    bombx5=random(80);
    bombx6=random(80);
    bomby1=random(24);
    bomby2=random(24);
    bomby3=random(24);
    bomby4=random(24);
    bomby5=random(24);
    bomby6=random(24);

   }



  char a ;
  int d=1,f=1;
  gotoxy(d,f);

  do
  {


   gotoxy(1,1);
   cout<<"Score = "<<score;
   gotoxy(70,1);
   cout<<"Lives : "<<jibon;

   if
    ((d==bombx0||d==bombx1||d==bombx2||d==bombx3||d==bombx4||d==bombx5||d==bombx6)&&(f==bomby0||f==bomby1||f==bomby2||f==bomby3||f==bomby4||f==bomby5||f==bomby6))

    {
      jibon=jibon-1;


      gotoxy(d,f);
      cout<<"*";
      if (d==bombx2)
      bombx2=0;
      else if (d==bombx3)
      bombx3=0;
      else if (d==bombx4)
      bombx4=0;
      else if (d==bombx5)
      bombx5=0;
      else if (d==bombx6)
      bombx6=0;
      else if (d==bombx1)
      bombx1=0;
      else if (f==bomby1)
      bomby0=0;
      if (f==bomby0)
      bomby0=0;
      else if (f==bomby1)
      bomby1=0;
      else if (f==bomby2)
      bomby2=0;
      else if (f==bomby3)
      bomby3=0;
      else if (f==bomby4)
      bomby4=0;
      else if (f==bomby5)
      bomby5=0;
      else if (f==bomby6)
      bomby6=0;

    }

    if(d==ax1&&f==bx1||d==ax2&&f==bx2||d==ax3&&f==bx3||d==ax4&&f==bx4)
    {
     score=score+1;
     if( d==ax1)
     {
      ax1=0;
     }
     else if (d==ax2)
     {
      ax2=0;
     }
     else if (d==ax3)
     {
      ax3=0;
     }
     else if (d==ax4)
     {
      ax4=0;
     }
     else if (f==bx1)
     {
      bx1=0;
     }
     else if (f==bx2)
     {
      bx2=0;
     }
     else if (f==bx3)
     {
      bx3=0;
     }
     else if (f==bx4)
     {
      bx4=0;
     }
     if (score>3)
     goto hahuamar;
    }


   gotoxy(ax,bx);
   if (d==ax&&f==bx)
   score=score+1;
   a=getch();


    if (a=='s')
   {

    f++;
    if (f>24)
    {
     f=1;
     gotoxy(d,24);
     cout<<" ";
    }
    gotoxy(d,f);
    cout<<char(1);
    gotoxy(d,f-1);
    cout<<" ";
   }









     else if (a=='a')
   {


    --d;
    if (d<1)
   {
     d=80;
     gotoxy(1,f);
     cout<<" ";

   }
    gotoxy(d,f);
    cout<<char(1);
    gotoxy(d+1,f);
    cout<<" ";
   }









      else if (a=='w')
   {


    --f;
    if (f<1)
   {
     f=24;
     gotoxy(d,1);
     cout<<" ";
   }

    gotoxy(d,f);
    cout<<char(1);
     gotoxy(d,f+1);
     cout<<" ";

   }







     else if (a=='d')
    {
     ++d;
     if (d>80)
    {
     d=1;
     gotoxy(80,f);
     cout<<" ";

    }
     gotoxy(d,f);
     cout<<char(1);
     gotoxy(d-1,f);
     cout<<" ";

    }







    else if (a=='f')
    {
     int hebix,hebiy;
     hebix=d;
     hebiy=f;
     do
     {
      gotoxy(hebix,hebiy);
      cout<<char(1);
      gotoxy(d,f);
      cout<<" ";
      d++;
      gotoxy(d,f);
      cout<<"*";
      delay(100);
     }
     while(d<80);
     d=hebix;
     f=hebiy;
    }


    else if (a=='m')
    {
     clrscr();
     exit(0);

    }

 }
 while(6<9);



}








