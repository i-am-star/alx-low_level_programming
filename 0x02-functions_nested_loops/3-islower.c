#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* _islower - Entry point
*
* Description: a function that checks for lowercase character
* @c: paramenter.
*
* Return: 0 or 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
