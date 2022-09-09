#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
