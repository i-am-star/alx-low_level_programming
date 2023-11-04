#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
* _abs - prints the absolute value of a number
*
* @n: parameter
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
int _abs(int n)
{
/* the abs() function found in stdlib.h file converts negative to positive*/

	int to_positive = abs(n);

	return (to_positive);
}
