#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* _isalpha - checks for letters, uppercase or lowercase
*
* @c: parameter
*
* Return: 1 if letter, uppercase or lowercase. else 0.
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
