#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int c, d, e, f;

	f = 0;
	while (f < 10)
	{
		e = 0;
		while (e < 10)
		{
			d = 0;
			while (d < 10)
			{
				c = 0;
				{
					if (!(f == c && e == d))
					{
						putchar('0' + f);
						putchar('0' + e);
						putchar(' ');
						putchar('0' + d);
						putchar('0' + c);
						if (!(f + e == 18 && c + d == 17 && d == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					c++;
				}
				d++;
			}
			e++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
