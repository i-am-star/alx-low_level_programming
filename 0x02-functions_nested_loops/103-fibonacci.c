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
	int a = 0, i = 0;

	unsigned long b = 1, sum = 0, running_sum = 0, value_limit = 4000000;

	for (i = 0; b < value_limit; i++)
	{
		sum = a + b;

		if (sum % 2 == 0)
		{
			if (sum < value_limit)
			running_sum = running_sum + sum;
		}

		a = b;
		b = sum;
	}
	printf("%lu", running_sum);
	printf("\n");
	return (0);
}
