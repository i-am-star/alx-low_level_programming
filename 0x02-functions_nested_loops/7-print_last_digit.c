#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* @n: parameter
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

int print_last_digit(int n)
{

	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = abs(last_digit);
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
