#define NUM 5632




int main()
{
    int a = NUM / 1000;	// Находим 1 число
    int b = NUM / 100 % 10; // Находим 2 число
    int c = NUM % 100 / 10; // Находим 3 число
    int d = NUM % 10;	// Находим 4 число
    
    
    int notation = ((8 * 8 * 8 * a) + (8 * 8 * b) + (8 * c) + (1 * d));  // Перевод в десятичную систему исчисления
    
	return 0;
}
