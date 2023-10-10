#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* _islower - checks for lowercase
*
* @c: parameter
*
* Return: i if c is lower, 0 if it isn't.
*/

int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
