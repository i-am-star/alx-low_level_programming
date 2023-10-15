#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_line - Entry point
*
* @n: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
