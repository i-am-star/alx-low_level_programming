#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* void times_table(void) - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int total = i * j;

			if(total < 10)
			{
			_putchar(total + '0');
			}
			else
			{
				_putchar(total / 10 + '0');
				_putchar(total % 10 + '0');
			}
			
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
