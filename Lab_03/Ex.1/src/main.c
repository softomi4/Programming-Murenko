
int main()
{
	float r1 = 125; // резистор 1
	float r2 = 390; // резистор 2
	float r3 = 145; // резистор 3
	
	float r0 = (r1 * r2 * r3) / (r1 * r2 + r2 * r3 + r1 * r3); // Общ. сопротивление
	
	return 0;
}

