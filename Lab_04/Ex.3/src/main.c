
// k < m < n

int main()
{
	int k = 4;
	int m = 2;
	int n = 8;
	int temp = 0;

	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
		
		if (n < k)
		{
			temp = n;
			n = k;
			k = temp;
		}
	}

	if (m < k)
	{
		temp = m;
		m = k;
		k = temp;
	}
	
    return 0;
}
