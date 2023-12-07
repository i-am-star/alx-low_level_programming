#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <time.h>
/**
* print_alphabet - Entry point
*
* Description: a function that prints the alphabet
*
* Return: 0
*/
void print_alphabet(void)
{
	char first_letter = 'a';
	char last_letter = 'z';

	while (first_letter <= last_letter)
	{
		_putchar(first_letter);
		first_letter++;
	}
	_putchar('\n');
}
