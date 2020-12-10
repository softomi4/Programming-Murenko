#define NUM 123321 //заданное число



int main()
{
	int firstNum1 = 0; // для цикла for
	int secondNum1 = 0;
	
	int firstNum2 = 0; // для цикла while
	int secondNum2 = 0;
	
	int firstNum3 = 0; // для цикла do while
	int secondNum3 = 0;
	
	int temp1 = NUM % 1000;
	int temp2 = NUM / 1000;
	
	int result1 = 0; //result = 0 если число не являеться "счастливым".
	int result2 = 0;
	int result3 = 0;
	
	//реализация через цикл for
	
	for (int i = 10; i <= 1000; i *= 10 )
	{
		firstNum1  += (temp1 % i) / (i / 10);
		secondNum1 += (temp2 % i) / (i / 10);
	}
	
	
	//реализация через цикл while
	
	int j = 10;
	
	while(j <= 1000)
	{
		firstNum2  += (temp1 % j) / (j / 10);
		secondNum2 += (temp2 % j) / (j / 10);
		j *= 10;
	}
	
	
	// реализация через цикл do while
	
	int k = 10;
	
	do{
		firstNum3  += (temp1 % k) / (k / 10);
		secondNum3 += (temp2 % k) / (k / 10);
		k *= 10;
	}while(k <= 1000);
	
	if(firstNum1 == secondNum1)
	{
	result1 = 1; //result = 1 если число являеться "счастливым".
	}
	
	if(firstNum2 == secondNum2)
	{
	result2 = 1; //result = 1 если число являеться "счастливым".
	}
	
	if(firstNum3 == secondNum3)
	{
	result3 = 1; //result = 1 если число являеться "счастливым".
	}

return 0; 
}
