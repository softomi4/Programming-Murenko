#define NUM 465
int main()
{
    int num1 = NUM / 100;	// Находим 1 цифру
    int num2 = NUM / 10 % 10;	// Находим 2 цифру
    int num3 = NUM % 10;	// Находим 3 цифру
    
    int ReversedNum = num3 * 100 + num2 * 10 + num1;
    
    return 0;
}
