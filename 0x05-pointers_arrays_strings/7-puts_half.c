#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string input.
 *
 * return: none.
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (*(str + len) != '\0')
		len++;

	int nl = (len - 1) / 2;

	for (i = nl; i < len; i++)
		_putchar(*(str + (i + 1)));
	_putchar('\n');
}
