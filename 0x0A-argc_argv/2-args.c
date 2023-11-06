#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/**
* main - Entry point
*
* @argc: What your code does goes here
* @argv: dkfr
*
* Return: Always 0 (Success) - what your code returns goes here returns 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;

	argc = argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
