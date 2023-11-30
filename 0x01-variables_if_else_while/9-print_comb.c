#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: program that prints all possible combinations of
* single-digit numbers
*
* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		if (num != 9)
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
/* fantastic */
