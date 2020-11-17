#define NUM 123321 //заданное число



int main()
{

	int temp1 = NUM % 10;
	int temp2 = 0;
	
	for(int i = 10;i;i += 10)
	{
		if(i <= 20)
		{
		temp1 += NUM / i % 10; 
		}
		else
		{
		temp2 += NUM / i % 10;
		}
	}
	
	if(temp1 == temp2)
	{
	return 1; //return 1 если число являеться "счастливым".
	}

return 0; //return 0 если число не являеться "счастливым".
}
