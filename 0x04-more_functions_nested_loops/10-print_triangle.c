#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_triangle - Entry point
*
* @size: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		 _putchar('\n');
	}
}
