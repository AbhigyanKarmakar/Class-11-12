int chk_decrease (int array[100],int size)  //Checks Whether Array is in
{                                           //Descending Order
  int chkval=1;                             //Returns 1 When Array is in
  for (int i=0 ; i<size ; i++)              //Descending Order
     if ((i+1)!=size)                       //Returns 0 If not
	if (array[i]<array[i+1])
	{
	   chkval=0;
	   break;
	}
  return chkval;
}


int chk_increase (int array[100],int size)  //Checks Whether Array is in
{                                           //Ascending Order
  int chkval=1;                             //Returns 1 When Array is in
  for (int i=0 ; i<size ; i++)              //Ascending Order
     if (i+1!=size)                         //Returns 0 If not
	if (array[i]>array[i+1])
	{
	   chkval=0;
	   break;
	}
  return chkval;
}


void arr_decrease(int array[100],int size) //Funtion Arranges Arrays in
{                                          //Descending order
  int temp,i=0;
  Again:
  for (i=1 ; i<size ; i++)
    if(array[i]>array[i-1])
    {
      temp=array[i];
      array[i]=array[i-1];
      array[i-1]=temp;
    }
    if (chk_decrease(array,size)==0)
      goto Again;
}

void arr_increase(int array[100],int size) //Funtion Arranges Arrays in
{                                          //Ascending order
  int temp,i=0;
  for (i=1 ; i<size ; i++)
    if(array[i]<array[i-1])
    {
      temp=array[i-1];
      array[i-1]=array[i];
      array[i]=temp;
      if (chk_increase(array,size)==0)
	goto Again;
    }
}


