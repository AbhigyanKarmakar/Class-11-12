int primechk(int iota)
{
int a=0,d=0,e=0,baba,sqre;
long int macarena,c;
clrscr();
cout<<"\t\t\t      Prime Number Checker";
cout<<"\n\t\t     \tEnter a Number : ";
cin>>a;
baba=a;
for(int b=2; b<baba; b=b+1)
{
macarena=sqrt(a)*sqrt(a);
{

  c=macarena%b;
  if (c==0)
  {
     d=d+1;
  }
  else
  {
     d=d+0;
  }
}
}
return d;

}