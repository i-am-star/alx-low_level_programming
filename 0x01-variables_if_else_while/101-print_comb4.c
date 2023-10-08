#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			int k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i + j + k != 24)
				{
				putchar(',');
				putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
