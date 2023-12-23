#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_diagonal - Entry point
*
* Description: prints diagonal lines
* @n: parameter
*
* Return: void
*/
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			int j = 0;

			for (; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
