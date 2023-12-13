#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Entry point
*
* Description: prints from 98
* @n: parameter
*
* Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");

		}
	}
	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
