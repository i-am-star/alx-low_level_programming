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

	while (i < 3)
	{
		int j = 0;

		while (j < 4)
		{
			int k = 0;

			while (k < 6)
			{
				int l = 0;

				while (l < 10)
				{
					_putchar(i + '0');
					 _putchar(j + '0');
					  _putchar(':');
					   _putchar(k + '0');
					    _putchar(l + '0');
					    l++;
					     _putchar('\n');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	_putchar('\n');
}
