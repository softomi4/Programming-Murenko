#define NUM 222.111

int main()
{
	int temp = 0;
	int num1 = NUM; // целая часть.
	float num2 = (NUM - num1) * 1000;//число после точки.
	float result = 0;
	
	if (num1 == 0)//проверка деления на 0. 
	{
		return 1;
	}
	
	
	result = num2 / num1;//округление до второго знака после точки.
	temp = result * 100;
	result = temp / 100;
   
	return 0;
}
