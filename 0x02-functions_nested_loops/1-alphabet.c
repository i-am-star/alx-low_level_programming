#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_alphabet - Entry point
*
* Description: A function that prints the lowercase alphabets
*
* Return: void
*/

void print_alphabet(void)
{
	char alpha_bet = 'a';

	while (alpha_bet <= 'z')
	{
		_putchar(alpha_bet++);
	}
	_putchar('\n');
}
