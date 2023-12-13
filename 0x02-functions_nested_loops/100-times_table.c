#include "main.h"
/**
* print_times_table - Entry point
* @n: parameter
*
* Description:  a function that prints the n times table, starting with 0.
*
* Return: void
*/
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
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
				if (times <= 9)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(times + '0');
				}
				if (times >= 10)
				{
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				if (times > 99)
				{
					_putchar((times / 100) + '0');
					_puthchar(((times / 10) % 10) + '0');
					_putchar((times % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
