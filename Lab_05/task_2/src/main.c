#define NUM 7

int main()
{
	int result1 = 1;//елси переменная result = 1 тогда это число не является простым.
	int result2 = 1;
	int result3 = 1;
	
	//реализация через цикл for
	
	for(int i = 2;i <= NUM;i++)
	{
		if(NUM % i == 0 )
		{
			result1 = 0; //если число простое.
		}	
	}
	
	
	//реализация через цикл while
	
	
	int j = 2;
	
	while(j <= NUM)
	{
		if(NUM % j == 0 )
		{
			result2 = 0; //если число простое.
		}
	j++;
	}
	
	// реализация через цикл do while
	
	
	int k = 2;
	
	do {
		if(NUM % k == 0 )
		{
			result3 = 0; //если число простое.
		}
	k++;
	} while (k <= NUM);
	

	
	
    return 1;
}
