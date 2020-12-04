#define NUM 6
int main()
{
	int result = 0;
	
	
	
	
	//реализация через цикл for
	
	/*
	for (int i = 1; i < NUM;i++)
	{
		if ((NUM % i) == 0) 
		{
			result += i;
		}
	}
	*/

	//реализация через цикл while
	
	int i = 1;
	
	/*
	while ( i < NUM )
	{
		if ((NUM % i) == 0) 
		{
			result += i;
		}
		i++
	}
	*/


	// реализация через цикл do while
	
	
	/*
	do
	{
		if ((NUM % i) == 0) 
		{
			result += i;
		}
		i++
	}while ( i < NUM );
	*/



	if(result == NUM)
	{
	return 1;	
	}

    return 0;
}
