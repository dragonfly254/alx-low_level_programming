#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area.
 * @b: character to fill the memory area s with.
 * @n: number of bytes to be filled.
 *
 * Return: memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	for (; counter < n; counter++)
	{
		*(s + counter) = b;
	}
	return (s);
}
