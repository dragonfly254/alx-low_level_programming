#include <stdio.h>
/**
 * main - > entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
