#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if if successful
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i < 0)
	{
		j = 0;
		while (j < 10)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
