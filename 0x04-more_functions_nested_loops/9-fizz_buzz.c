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
	int i;

		for (i = 1; i <= 100; i++)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d ", i);
			}

			if (i < 100)
				printf(" ");
		}
	printf("\n");
	return (0);
}
