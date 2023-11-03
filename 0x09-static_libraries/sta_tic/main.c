#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>

/**
* main - Entry point
*
* Description: calls two functions
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int sum = add(30, 20);

	int subtraction = sub(30, 20);

	printf("result is: %d\n", sum);
	printf("result is: %d\n", subtraction);

	return (0);
}
