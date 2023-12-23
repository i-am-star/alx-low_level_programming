#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_line - Entry point
*
* Description:  function that draws a straight line in the terminal.
* @n: parameter
*
* Return: void
*/
void print_line(int n)
{
	int  i = 1;

	if (n > 0)
	{
		for (; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
