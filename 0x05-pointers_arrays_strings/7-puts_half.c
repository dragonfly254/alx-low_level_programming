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

	for (i = 0; i <= ((len - 1)/2); i++)
		_putchar(*(str + (len - i - 1)));
	_putchar('\n');
}
