#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the sum of multilples of 3 and 5
* @c: first parameter
* @d: second parameter
*
* Return: 0 and sum
*/
void sum_of_multiples(int c, int d);
int main(void)
{
	sum_of_multiples(3, 5);

	return (0);
}
/**
* sum_of_multiples - Entry point
*
* Description: Prints the sum of multilples of 3 and 5
* @c: first parameter
* @d: second parameter
*
* Return: void
*/
void sum_of_multiples(int c, int d)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % c == 0 || n % d == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
}
