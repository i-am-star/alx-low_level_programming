#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_times_table - multiplites given number
*
* @n: parameter
*
* Return: void
*/

void print_times_table(int n)
{
	int x = 0;

	if (n > 0 && n < 15)
	{
		while (x < n + 1)
		{
			int j = 0;

			while (j < n + 1)
			{
				int prod = x * j;

				if (prod < 10)
				{
					printf("  ");
				}

				if (prod >= 10 && prod < 100)
				{
					printf(" ");
				}


				printf("%d", prod);

				if (j < n)
				{
					printf(", ");
				}
				j++;
			}
			x++;
			printf("\n");
		}
	}
}
