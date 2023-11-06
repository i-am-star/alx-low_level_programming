#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* @argc: What your code does goes here
* @argv: gg
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
int main(int argc, char *argv[])
{
	int result;
	int tonum1;
	int tonum2;

		if (argc >= 2)
		{
			tonum1 = atoi(argv[1]);

			tonum2 = atoi(argv[2]);

			result = tonum1 * tonum2;

			printf("%d\n", result);
		}

		else
		{
			printf("Error\n");

			return (1);
		}

	return (0);
}
