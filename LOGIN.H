#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void login(char actuser[30],char pass[20])
{
 char user[30],password[20];
 int a,i=0,b;
 Input:
 clrscr();
 cout<<"User Name : ";
 gets(user);
 cout<<"Password : ";
 gets(password);
 a=strcmp(user,actuser);
 b=strcmp(pass,password);
 if (a!=0||b!=0)
 {
  clrscr();
  cout<<"\nWRONG USER NAME OR PASSWORD!!!!! TRY AGAIN!";
  i++;
  if (i>3)
   {
    for (int x=0 ; x<4 ; x++)
    {
     clrscr();
     cout<<"Wrong Credentials Entered Too Many Times!!!!!!";
     delay(1000);
     clrscr();
     delay(1000);
    }
    exit(0);
   }
  delay(1500);
  goto Input;
 }
}
