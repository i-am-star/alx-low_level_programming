#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* times_table - prints the multiplication table from 0 - 9
*
* Description: What your code does goes here
*
* Return: void
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

			if (total < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(total + '0');
			}
			else
			{
				_putchar(total / 10 + '0');
				_putchar(total % 10 + '0');
			}
			j++;

			if (j < 10)
			{
				_putchar(',');
				 _putchar(' ');
			}
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
