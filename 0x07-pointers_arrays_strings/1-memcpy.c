#include "main.h"
/**
 * _memcpy - copies memory area.
 *
 * @dest: destination.
 * @src: source of the content.
 * @n: number of bytes to be copied from source.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	for (; counter < n; counter++)
		*(dest + counter) = *(src + counter);
	return (dest);
}
