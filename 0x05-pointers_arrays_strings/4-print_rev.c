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
	int iter = 0, len = 0;

	while (*(s + len) != '\0')
		len++;

	for (; iter < len; iter++)
		_putchar(*(s + iter));
	_putchar('\n');
}
