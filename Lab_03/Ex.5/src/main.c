#define NUM 672
int main()
{
	int num1 = NUM / 100; 		//получаем первую цифру
	int num3 = NUM % 10;	//получаем третью цифру 
	int temp = 0;
	
	float result = num1 / num3;	// находим во сколько раз больше
	
	temp = result * 100;// "орезаем" до второго знака после ","
	
	result = temp /100;// конечный результат
	
	return 0;
}

