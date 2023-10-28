#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>

/**
* cap_string - Entry point
*
* @str: What your code does goes here
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}

			if (str[i - 1] == 32 || str[i - 1] == 9
				|| str[i - 1] == 10 || str[i - 1] == 44
				|| str[i - 1] == 59 || str[i - 1] == 46
				|| str[i - 1] == 33 || str[i - 1] == 63
				|| str[i - 1] == 34 || str[i - 1] == 40
				|| str[i - 1] == 41 || str[i - 1] == 123
				|| str[i - 1] == 124)
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
