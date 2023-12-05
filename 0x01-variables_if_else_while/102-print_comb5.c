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

	while (num1 < 10)
	{
		int num2 = 0;

		while (num2 < 9)
		{
			int num3 = 0;

			while (num3 < 10)
			{
				int num4 = 0;

				while (num4 < 10)
				{
					if (num1 + num2 + num3 + num4 != 0)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(' ');
						putchar(num3 + '0');
						putchar(num4 + '0');

						if (num1 + num2 + num3 +
							num4 != 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
