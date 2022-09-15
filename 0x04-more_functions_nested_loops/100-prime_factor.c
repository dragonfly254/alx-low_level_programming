#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 *
 * Return: 0 for success.
 */
int main(void)
{
	long int n, m;

	n = 612852475143;
	for (m = 2; m <= n; m++)
	{
		if (n % m == 0)
		{
			n /= m;
			m--;
		}
	}
	printf("%ld\n", m);
	return (0);
}
