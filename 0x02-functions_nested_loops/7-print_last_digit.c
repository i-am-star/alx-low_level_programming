#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_last_digit - a function that prints the last digit of a number.
*
* @n: parameter
*
* Return: n
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		n = n % 10;
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
