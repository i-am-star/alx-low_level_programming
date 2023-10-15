#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* _isupper - Entry point
*
* @c: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
