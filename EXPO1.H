int tictacchk(int gmarray[3][3])
{
 int iti=0;
 for(int chkstate=0 ; chkstate<9 ; chkstate++)
 {
   if(chkstate>=0&&chkstate<=2)
   {
    if (gmarray[chkstate][0]==gmarray[chkstate][1]==gmarray[chkstate][2])
     iti=1;
    else
     iti=0;
   }
   else if(chkstate>=3&&chkstate<=5)
   {
    if (gmarray[0][chkstate-3]==gmarray[1][chkstate-3]==gmarray[2][chkstate-3])
     iti=1;
    else
     iti=0;
   }
   else if(chkstate==7)
   {
    if (gmarray[0][0]==gmarray[1][1]==gmarray[2][2])
     iti=1;
    else
     iti=0;
   }
   else if(chkstate==8)
   {
    if (gmarray[0][2]==gmarray[1][1]==gmarray[2][0])
     iti=1;
    else
     iti=0;
   }
 }
 return iti;
}