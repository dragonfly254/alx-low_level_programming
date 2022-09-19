#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: string to be printed.
 *
 * Return: none.
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
