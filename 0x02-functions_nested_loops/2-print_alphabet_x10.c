#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* print_alphabet_x10 - Entry point
*
* Description: a function that prints 10 times the alphabet, in lowercase
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
void print_alphabet_x10(void)
{
	int num = 0;

	while (num <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		 _putchar('\n');
		num++;
	}
}
