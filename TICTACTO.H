#include<incall.h>

int a[4][4],p1,p2,player=0,c1,win=0;
do
{
 getch();
 if ((player%2)==0)
 c1=1;
 else
 c1=2;
  p1=getch();
  switch (p1)
  {
   HEBI:
   case 1:
   a[1][1]=c1;
   break;
   case 2:
   a[1][2]=c1;
   break;
   case 3:
   a[1][3]=c1;
   break;
   case 4:
   a[2][1]=c1;
   break;
   case 5:
   a[2][2]=c1;
   break;
   case 6:
   a[2][3]=c1;
   break;
   case 7:
   a[3][1]=c1;
   break;
   case 8:
   a[3][2]=c1;
   break;
   case 9:
   a[3][3]=c1;
   break;
   default:
   goto HEBI;
  }
 if (a[1][1]&&a[1][2]&&a[1][3]==c1)
 {
  win=1;

 }
 else if (a[2][1]&&a[2][2]&&a[2][3]==c1)
 {
  win=1;
 }
 else if (a[3][1]&&a[3][2]&&a[3][3]==c1)
 {
  win=1;
 }
 else if (a[1][1]&&a[2][2]&&a[3][3]==c1)
 {
  win=1;
 }
 else if (a[1][3]&&a[2][2]&&a[3][1]==c1)
 {
  win=1;
 }
 else if (a[1][1]&&a[2][1]&&a[3][1]==c1)
 {
  win=1;
 }
 else if (a[1][2]&&a[2][2]&&a[3][2]==c1)
 {
  win=1;
 }
 else if (a[1][3]&&a[2][3]&&a[3][3]==c1)
 {
  win=1;
 }



}
while(1==1&&win!=1);
if(win==1&&













 }