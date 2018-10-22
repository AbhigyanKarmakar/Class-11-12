int chk_decrease (int array[100],int size)
{
  int chkval=1;
  for (int i=0 ; i<size ; i++)
     if ((i+1)!=size)
	if (array[i]<array[i+1])
	{
	   chkval=0;
	   break;
	}
  return chkval;
}


int chk_increase (int array[100],int size)
{
  int chkval=1;
  for (int i=0 ; i<size ; i++)
     if (i+1!=size)
	if (array[i]>array[i+1])
	{
	   chkval=0;
	   break;
	}
  return chkval;
}


void arr_decrease(int array[100],int size)
{
	int temp;
	size--;
	for (int i=0 ; i<size ; i++)
		if(array[i]>array[i+1])
		{
			temp=array[i+1];
			array[i+1]=array[i];
			array[i]=temp;
			i=-1;
		}
}

void arr_increase(int array[100],int size)
{
	int temp;
	size--;
	for (int i=0 ; i<size ; i++)
		if(array[i+1]<array[i])
		{
			temp=array[i];
      array[i]=array[i+1];
      array[i+1]=temp;
      i=-1;
    }
}


