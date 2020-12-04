#define NUM 123321 //заданное число



int main()
{
	int firstNum = 0;
	int secondNum = 0;
	int temp1 = NUM % 1000;
	int temp2 = NUM / 1000;
	
	
	
	//реализация через цикл for
	/*
	for (int i = 10; i <= 1000; i *= 10 )
	{
		firstNum  += (temp1 % i) / (i / 10);
		secondNum += (temp2 % i) / (i / 10);
	}
	*/
	
	//реализация через цикл while
	/*
	int i = 10;
	
	while(i <= 1000)
	{
		firstNum  += (temp1 % i) / (i / 10);
		secondNum += (temp2 % i) / (i / 10);
		i *= 10;
	}
	*/
	
	// реализация через цикл do while
	/*
	int i = 10;
	
	do{
		firstNum  += (temp1 % i) / (i / 10);
		secondNum += (temp2 % i) / (i / 10);
		i *= 10;
	}while(i <= 1000);
	*/
	
	
	if(firstNum == secondNum)
	{
	return 1; //return 1 если число являеться "счастливым".
	}

return 0; //return 0 если число не являеться "счастливым".
}
