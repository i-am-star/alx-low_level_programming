#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <limits.h>
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
	int last_num = n % 10;

	if (n < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
