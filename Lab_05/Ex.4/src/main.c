#define NUM 6
int main()
{
	int result = 0;
	
	for (int i = 1; i < NUM;i++)
	{
		if ((NUM % i) == 0) 
		{
			result += i;
		}
	}

	if(result == NUM)
	{
	return 1;	
	}

    return 0;
}
