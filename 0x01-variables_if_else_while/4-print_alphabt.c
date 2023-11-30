#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* Description: Print all the lowercase letters except q and e
*
* Return: 0
*/
int main(void)
{
	char first_lowercase = 'a';

	char last_lowercase = 'z';

	while (first_lowercase <= last_lowercase)
	{
		if (first_lowercase != 'e' && first_lowercase != 'q')
			putchar(first_lowercase);
		first_lowercase++;
	}
	putchar('\n');
	return (0);
}
