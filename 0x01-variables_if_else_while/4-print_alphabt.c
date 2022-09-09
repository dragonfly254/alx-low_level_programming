#include <stdio.h>
/**
 * main -> entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
		i++;
	}
	putchar("\n");
	return (0);
}
