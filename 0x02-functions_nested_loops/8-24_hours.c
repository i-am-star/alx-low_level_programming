#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* jack_bauer - Entry point
*
* Description: a function that prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
*
* Return: Always 0
*/
void jack_bauer(void)
{
	int hrs = 0;

	while (hrs <= 23)
	{
		int mins = 0;

		while (mins <= 59)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}
