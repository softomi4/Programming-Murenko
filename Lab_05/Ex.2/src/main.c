#define NUM 7

int main()
{
	int result = 1;//елси переменная result = 1 тогда это число не является простым.
	
	for(int i = 2;i <= NUM;i++)
	{
		if(NUM % i == 0 )
		{
			result = 0; //если число простое.
		}	
	}
	
    return 1;
}
