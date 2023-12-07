#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include <time.h>
/**
* _isalpha - Entry point
*
* Description: a function that checks for alphabetic character.
* @c: parameter
*
* Return: 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
