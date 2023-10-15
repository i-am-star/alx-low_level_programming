#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_square - Entry point
*
* @size: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
