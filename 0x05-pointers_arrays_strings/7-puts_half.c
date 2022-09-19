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
	int len = 0, nl;

	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		nl = len / 2;
	else
		nl = (len - 1) / 2;
	for (nl++; nl < len; nl++)
		_putchar(*(str + nl));
	_putchar('\n');
}
