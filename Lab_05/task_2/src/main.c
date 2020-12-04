#define NUM 7

int main()
{
	int result = 1;//елси переменная result = 1 тогда это число не является простым.
	
	/реализация через цикл for
	
	for(int i = 2;i <= NUM;i++)
	{
		if(NUM % i == 0 )
		{
			result = 0; //если число простое.
		}	
	}
	
	
	//реализация через цикл while
	
	/*
	int i = 2
	
	while(i <= NUM)
	{
		if(NUM % i == 0 )
		{
			result = 0; //если число простое.
		}
	i++;
	}*/
	
	// реализация через цикл do while
	
	/*
	int i = 2
	
	do {
		if(NUM % i == 0 )
		{
			result = 0; //если число простое.
		}
	i++;
	} while (i <= NUM);
	*/
	
	
	
    return 1;
}
