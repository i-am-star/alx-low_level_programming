#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "main.h"

/**
* _atoi - Entry point
*
* @s: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

int _atoi(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	printf("%d", len);

	return (0);
}
