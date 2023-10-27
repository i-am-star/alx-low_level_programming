#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>

/**
* _strcmp - Entry point
*
* Description: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
int _strcmp(char *s1, char *s2)
{
	int res, i;

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	res = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		i++;
	}

	if (res == 0 && len1 != len2)
	{
		res = s2[i] * -1;
	}

	return (res);
}
