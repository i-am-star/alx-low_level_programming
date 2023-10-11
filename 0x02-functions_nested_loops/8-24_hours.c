#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
* jack_bauer - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			 _putchar((i % 10) + '0');
			  _putchar(':');
			   _putchar((j / 10) + '0');
			    _putchar((j % 10) + '0');
			    _putchar('\n');
			    j++;

		}
		i++;
	}
	_putchar('\n');
}
