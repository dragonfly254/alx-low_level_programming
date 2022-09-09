#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	char d;

	d = '0';
	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char c;

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
