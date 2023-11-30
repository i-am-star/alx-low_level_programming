#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: Prints numbers from 0 - 9
*
* Return: 0
*/
int main(void)
{
	int num1 = 0;

	int num10 = 10;

	while (num1 < num10)
	{
		putchar(num1 + '0');
		num1++;
	}
	putchar('\n');
	return (0);
}
