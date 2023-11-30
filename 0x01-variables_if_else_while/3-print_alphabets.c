#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
int main(void)
{
	char first_lowercase = 'a';

	char last_lowercase = 'z';

	char first_uppercase = 'A';

	char last_uppercase = 'Z';

	while (first_lowercase <= last_lowercase)
	{
		putchar(first_lowercase);
		first_lowercase++;
	}
	while (first_uppercase <= last_uppercase)
	{
		putchar(first_uppercase);
		first_uppercase++;
	}
	putchar('\n');

	return (0);
}
