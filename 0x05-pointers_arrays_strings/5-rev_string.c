#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Entry point
*
* @s: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void rev_string(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
