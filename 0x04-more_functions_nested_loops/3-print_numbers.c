#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_numbers - Entry point
*
* Description: a function that prints the numbers, from 0 to 9,
* followed by a new line.
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
void print_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
