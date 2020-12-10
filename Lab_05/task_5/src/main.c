#define NUM 36
int main()
{

	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	
	//реализация через цикл for
	
	
	for (int i = 0; i <= NUM;i++)
	{
		if(i * i == NUM)
		{
		result1 = i;
		break;
		}
	}
	
	
	//реализация через цикл while
	
	 int j = 0;
	
	while (j <= NUM)
	{
		if(j * j == NUM)
		{
		result2 = j;
		break;
		}
		j++;
	}
	
	
	
	// реализация через цикл do while
	
	 int k = 0;
	
	do{
		if(k * k == NUM)
		{
		result3 = k;
		break;
		}
		k++;
	}while (k <= NUM);
	

    return 0;
}
