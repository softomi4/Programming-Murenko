#define NUM1 19
#define NUM2 38

int main()
{
	int MaxNum = 0;
	int result = 0;
	
	
		if (NUM1 < NUM2) {
			MaxNum = NUM1;	
		}
		else {
			MaxNum = NUM2;
		}

	for (int i = 1; i <= MaxNum;)
	{
		if ((NUM1 % i) == 0) 
		{
			if ((NUM2 % i) == 0){
			result = i;
			}
		}
		i++;
	}

	return 0;
}
