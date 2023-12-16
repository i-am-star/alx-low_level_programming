#include <stdio.h>
/**
* main - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
int main(void)
{
	int a = 0, b = 1;

	unsigned long i, sum = 0, value_limit = 4000000;
	
	for (i = 0; i < value_limit; i++)
	{
		sum = a + b;

		if (sum % 2 == 0)
		{
			printf("%lu, ", sum);
		}

		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
