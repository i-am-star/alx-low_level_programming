#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* main - Entry point
*
* _abs: a function that computes the absolute value of an integer.
* @n: parameter
*
* Return: Always 0
*/
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
