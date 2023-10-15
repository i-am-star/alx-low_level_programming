#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* more_numbers - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			_putchar(j + '0');

			if (j > 9)
			{
				int m;
				int num = j / 10;
				int num2 = j % 10;

				char digits[2];

				digits[0] = num + '0';
				digits[1] = num2 + '0';

			for (m = 0; m < 2; m++)
			{
				_putchar(digits[m]);
			}
			}
		}
		_putchar('\n');
	}
}
