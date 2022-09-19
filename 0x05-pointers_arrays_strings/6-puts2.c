#include "main.h"
/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 *
 * @str: input string.
 *
 * Return: none.
 */
void puts2(char *str)
{
	int iter = 0;

	while (*(str + iter) != '\0')
	{
		if (iter % 2 == 0)
			_putchar(*(str + i));
		iter++;
	}
	_putchar('\n');
}
