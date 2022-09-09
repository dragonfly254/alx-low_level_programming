#include <stdio.h>
/**
 * main -> entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar("\n");
	return (0);
}
