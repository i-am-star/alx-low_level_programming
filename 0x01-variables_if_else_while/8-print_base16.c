#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: A program that prints all the numbers of base 16 in lowercase
*
* Return: 0
*/
int main(void)
{
	int hex_num = 0;

	int num = 0;

	while (hex_num < 16)
	{
		if (hex_num < 10)
		{
			putchar(hex_num + '0');
		}
		hex_num++;
	}

	while (num <= 5)
	{
		if (num <= 5)
		{
			putchar(num + 'a');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
/* this is awesome and fantastic */
