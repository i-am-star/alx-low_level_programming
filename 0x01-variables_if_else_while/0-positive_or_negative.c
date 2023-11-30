#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Description: assign a random number to the variable n
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is less than zero\n", n);


	return (0);
}
