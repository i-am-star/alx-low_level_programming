#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_to_98 - prints given number to 98
*
* @n: parameter
*
* Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n < 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			 printf("%d\n", n);

			 if (n < 98)
			 {
				 printf(", ");
			 }
			 n++;
		}
	}
	printf("\n");
}
