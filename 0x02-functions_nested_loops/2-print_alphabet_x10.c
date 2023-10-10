#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabets ten times
*
* Description: What your code does goes here
*
* Return: void
*/

void print_alphabet_x10(void)
{

	int num = 0;

	while (num < 10)
	{
		char alpha_bet = 'a';

		while (alpha_bet <= 'z')
		{
			_putchar(alpha_bet++);
		}
		num++;
		 _putchar('\n');
	}
}
