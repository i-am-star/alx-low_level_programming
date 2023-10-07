#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

int main(void)
{
	char upper_alphabet = 'A';
	char lower_alphabet = 'a';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);
		lower_alphabet++;
	}

	while (upper_alphabet <= 'Z')
	{
		putchar(upper_alphabet);
		upper_alphabet++;
	}
	putchar('\n');
	return (0);
}
