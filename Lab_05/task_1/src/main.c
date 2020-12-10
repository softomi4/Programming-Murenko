#define NUM1 6
#define NUM2 24

int main()
{
	int MaxNum = 0;
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	
		if (NUM1 < NUM2) {
			MaxNum = NUM1;	
		}
		else {
			MaxNum = NUM2;
		}


	//реализация через цикл for
	
	for (int i = 1; i <= MaxNum;) {
		if ((NUM1 % i) == 0) {
			if ((NUM2 % i) == 0) {
			result1 = i;
			}
		}
		i++;
	} 

	//реализация через цикл while

	 int j = 1;
	while (j <= MaxNum) {
		if ((NUM1 % j) == 0) {
				if ((NUM2 % j) == 0) {
				result2 = j;
				}
			}
		j++;
	} 

	// реализация через цикл do while
	
	int k = 1;
	 do {
		if ((NUM1 % k) == 0) {
				if ((NUM2 % k) == 0) {
				result3 = k;
				}
			}
		k++;
	} while (k <= MaxNum); 

	return 0;
}
