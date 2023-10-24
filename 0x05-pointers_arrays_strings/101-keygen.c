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
	int password[100];
	int i, sum;

	sum = 0;

	srand(time(0));

	for (i = 0; i <= 100; i++)
	{
		password[i] = rand() % 78;
		/*printf("%d, ", *password);*/

		sum += (password[i] + '0');
		putchar(sum + '0');
	}
	printf("\n");

	return (0);
}
