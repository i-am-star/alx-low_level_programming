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
	int i, n = 50;
	unsigned long sum = 0, a = 0, b = 1;

	for (i = 0; i < n; i++)
	{
		sum = a + b;

			printf("%lu", sum);

			if (i < 49)
			{
				printf(", ");
			}

		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
