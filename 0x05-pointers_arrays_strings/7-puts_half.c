#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* puts_half - Entry point
*
* @str: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void puts_half(char *str)
{
	int n, i, len;

	len = strlen(str);

	n = len / 2;

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
