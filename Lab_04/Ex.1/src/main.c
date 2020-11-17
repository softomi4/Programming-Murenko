#define RAD 5 // Радиус
#define PI 3.14 // число Пи
int main()
{
	char command = 'v' ;// v - объем шара ; l - длинна окружности ; s - площадь окружности.
	float result = 0; 
	
	if (command == 'l')
	{
		result = 2 * RAD * PI;
	}
	else if (command == 'v')
	{
		result = (4 / 3) * PI * (RAD * RAD * RAD);
	}
	else
	{
		result = PI * (RAD * RAD);
	}

	return 0;
}
