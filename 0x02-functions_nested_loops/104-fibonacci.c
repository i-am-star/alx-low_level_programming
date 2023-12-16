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
	unsigned long i = 0, a = 0, b = 1, sum = 0;

	for (; i <= 98; i++)
	{
		sum = a + b;

		printf("%lu", sum);

		if (i <= 97)
		{
			printf(", ");
		}
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
