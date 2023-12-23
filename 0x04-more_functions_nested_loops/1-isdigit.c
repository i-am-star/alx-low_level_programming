#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* _isdigit - Entry point
*
* Description: a function that checks for a digit (0 through 9).
* @c: first parameter
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
