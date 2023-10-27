#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* reverse_array - Entry point
*
* @a: What your code does goes here
* @n: second parameter
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		int container = a[i];

		a[i] = a[j];
		a[j] = container;
		i++;
		j--;
	}
}
