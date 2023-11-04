#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* _isdigit - Entry point
*
* @c: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
