#include <stdio.h>
/**
* main - Entry point
* sum_of_multiples - second function
*
* Description: Prints the sum of multilples of 3 and 5
*
* Return: 0 and sum
*/
void sum_of_multiples(int c, int d);
int main(void)
{
	sum_of_multiples(3, 5);

	return (0);
}
void sum_of_multiples(int c, int d)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % c == 0 || n % d == 0)
		{
			sum = sum + n;
		}
		/**if (n % d == 0)
		{
			sum2 = sum2 + n;
		}**/
	}
	printf("%d\n", sum);
}
