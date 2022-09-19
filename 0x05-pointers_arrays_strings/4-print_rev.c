#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed.
 *
 * Return: none.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	for (; len > 0; len--)
		_putchar(*(s + (len - 1)));
	_putchar('\n');
}
