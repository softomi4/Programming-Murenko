#define NUM 6
int main()
{
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	
	
	//реализация через цикл for
	
	
	for (int i = 1; i < NUM;i++)
	{
		if ((NUM % i) == 0) 
		{
			result1 += i;
		}
	}
	

	//реализация через цикл while
	
	int j = 1;
	
	
	while ( j < NUM )
	{
		if ((NUM % j) == 0) 
		{
			result2 += j;
		}
		j++;
	}
	


	// реализация через цикл do while
	
	
	int k = 1;
	
	do
	{
		if ((NUM % k) == 0) 
		{
			result3 += k;
		}
		k++;
	}while ( k < NUM );
	



	if(result1 == NUM)
	{
	return 1;	
	}

    return 0;
}
