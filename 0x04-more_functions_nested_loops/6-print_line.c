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

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
