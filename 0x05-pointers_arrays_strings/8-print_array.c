#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* print_array - Entry point
*
* @a: What your code does goes here
* @n: second parameter goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (a[i] <= n - 1)
			printf(", ");
	}
	printf("\n");
}
