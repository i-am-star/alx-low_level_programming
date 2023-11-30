#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: prints lowercase letters in reverse
*
* Return: 0
*/
int main(void)
{
	char first_lowercase = 'a';

	char last_lowercase = 'z';

	while (last_lowercase >= first_lowercase)
	{
		putchar(last_lowercase);
		last_lowercase--;
	}
	putchar('\n');
	return (0);
}
