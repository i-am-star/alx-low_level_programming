#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"

/**
* leet - Entry point
*
* @str: parameter
*
* Description: explian what your code does here
*
* Return: Always 0 (success) - what your code returns goes here. 1 or 0
*/

char *leet(char *str)
{
	char *upper = "AEOTL\0";
	char *lower = "aeotl\0";
	int num[5] = {4, 3, 0, 7, 1};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;

		while (upper[j] != '\0')
		{
			if (upper[j] == str[i] || lower[j] == str[i])
			{
				str[i] = num[j] + '0';
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
