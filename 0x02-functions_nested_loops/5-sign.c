#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_sign - returns sign of a number
*
* @n: parameter
*
* Return: 1 if n > 0, 0 if n = 0, -1 if n is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
