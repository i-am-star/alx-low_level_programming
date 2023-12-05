#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: Prints a sequence of numbers
*
* Return: Always 0
*/
int main(void)
{
	int num1 = 0;

	while (num1 < 99)
	{
		int num2 = 0;

		while (num2 <= 99)
		{
			int div_num1 = num1 / 10;
			int mod_num1 = num1 % 10;
			int div_num2 = num2 / 10;
			int mod_num2 = num2 % 10;

			if (num1 != num2 && num2 != 0)
			{
				putchar(div_num1 + '0');
				putchar(mod_num1 + '0');
				putchar(' ');
				putchar(div_num2 + '0');
				putchar(mod_num2 + '0');

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
