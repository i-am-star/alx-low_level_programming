#include <stdio.h>
/**
* main - Entry point
* sum_of_multiples - second function
*
* Description: Prints the sum of multilples of 3 and 5
*
* Return: 0 and sum
*/
int sum_of_multiples(int c, int d);
int main(void)
{
	int result = sum_of_multiples(3, 5);

	printf("%d\n", result);

	return (0);
}
int sum_of_multiples(int c, int d)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % c == 0 || n % d == 0)
		{
			sum = n + n;
		}
	}
	return (sum);
}
