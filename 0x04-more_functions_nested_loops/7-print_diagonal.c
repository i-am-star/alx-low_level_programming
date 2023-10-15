#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_diagonal - Entry point
*
* @n: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
				_putchar(92);
				_putchar('\n');
		}
	}
}
