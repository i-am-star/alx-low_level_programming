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
	char alpha_bet = 'z';

	while (alpha_bet >= 'a')
	{
		putchar(alpha_bet);
		alpha_bet--;
	}
	putchar('\n');
	return (0);
}
