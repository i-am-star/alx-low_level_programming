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
	int digit = 48;

	while (digit <= 102)
	{

		putchar(digit);

		if (digit == 57)
		{
			digit += 39;
		}
		++digit;
	}
	putchar('\n');
	return (0);
}
