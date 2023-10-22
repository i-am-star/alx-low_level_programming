#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* swap_int - Entry point
*
* @a: What your code does goes here
* @b: second parameter
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

void swap_int(int *a, int *b)
{
	int container = *a;
	*a = *b;
	*b = container;
}
