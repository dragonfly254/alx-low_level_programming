#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
