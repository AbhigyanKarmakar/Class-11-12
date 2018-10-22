long int factorial(int f)
{
 int i=0;
 do
 {
  i=f*(f-1);
  f--;
 }
 while(f-1!=0);
 return i;


}