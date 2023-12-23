#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* _isupper - Entry point
*
* Description: a function that checks for uppercase character.
* @c: first parameter
*
* Return: returns 0 or 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
