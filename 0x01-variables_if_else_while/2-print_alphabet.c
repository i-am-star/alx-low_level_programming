#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/**
* main - Entry point
*
* Description: Prints lowercase alphabets
*
* Return: 0
*/

int main(void)
{
	char first_letter = 'a';

	char last_letter = 'z';

	while (first_letter <= last_letter)
	{
		putchar(first_letter);
		first_letter++;
	}
	putchar('\n');
	return (0);
}
