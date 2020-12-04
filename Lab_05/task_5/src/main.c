#define NUM 36
int main()
{

	int result = 0;
	
	//реализация через цикл for
	
	
	for (int i = 0; i <= NUM;i++)
	{
		if(i * i == NUM)
		{
		result = i;
		break;
		}
	}
	
	
	//реализация через цикл while
	/*
	 int i = 0;
	
	while (i <= NUM)
	{
		if(i * i == NUM)
		{
		result = i;
		break;
		}
		i++
	}
	*/	
	
	
	// реализация через цикл do while
	/*
	 int i = 0;
	
	do{
		if(i * i == NUM)
		{
		result = i;
		break;
		}
		i++
	}while (i <= NUM);
	*/

    return 0;
}
