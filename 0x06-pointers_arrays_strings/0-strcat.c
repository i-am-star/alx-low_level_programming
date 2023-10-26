#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* _strcat - Entry point
*
* @dest: What your code does goes here
* @src: second parameter
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
