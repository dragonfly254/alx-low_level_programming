#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *   If size is 0 or less, it prints only a new line
 *
 * @size: the size of the square.
 *
 * Return: None.
 */
void print_square(int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
