#include "main.h"
/**
* print_times_table - Entry point
*
* Description:  a function that prints the n times table, starting with 0.
* @n: parameter
*
* Return: void
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int times = i * j;

				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (times < 10)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(times + '0');
				}
				else if (times < 100)
				{
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				if (times >= 100)
				{
					_putchar((times / 100) + '0');
					_putchar(((times / 10) % 10) + '0');
					_putchar((times % 10) + '0');
				}

			}
			_putchar('\n');
		}
	}

}
