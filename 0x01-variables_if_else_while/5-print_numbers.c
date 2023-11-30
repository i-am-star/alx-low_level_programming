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
	int num1 = 0;

	int num10 = 10;

	while (num1 < num10)
	{
		putchar(num1 + '0');
		num1++;
	}
	putchar('\n');
	return (0);
}
