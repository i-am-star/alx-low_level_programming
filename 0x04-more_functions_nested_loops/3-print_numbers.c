#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_numbers - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
