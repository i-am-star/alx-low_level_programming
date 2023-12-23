#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_most_numbers - Entry point
*
* Description: prints numbers from 0 - 9 except 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');
}
