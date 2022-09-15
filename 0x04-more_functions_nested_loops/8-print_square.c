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
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
