#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_square - Entry point
*
* Description: prints a square
* @size: parameter
*
* Return: void
*/
void print_square(int size)
{
	int i = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; i <= size; i++)
		{
			int j = 1;

			for (; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
