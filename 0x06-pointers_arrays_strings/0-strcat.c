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
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[len2] != '\0')
	{
		dest[len] = src[len2];
		len++;
		len2++;
	}
	return (dest);
}

