#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* _strncat - Entry point
*
* @dest: What your code does goes here
* @src: second parameter
* @n: third parameter
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 = 0;

	while (dest[len1] != '\0')
		len1++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';

	return (dest);
}
