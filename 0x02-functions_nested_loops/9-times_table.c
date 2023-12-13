#include "main.h"
/**
* times_table - Entry point
*
* Description: prints times table
*
* Return: void
*/
void times_table(void)
{
	int row;

	for (row = 0; row <= 9; row++)
	{
		int col;

		for (col = 0; col <= 9; col++)
		{
			int times = row * col;

			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (times >= 10)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				if (col > 0)
				_putchar(' ');
				_putchar(times + '0');
			}
		}

	_putchar('\n');
	}
}
