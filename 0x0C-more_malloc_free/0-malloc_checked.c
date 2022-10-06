#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: number of bytes to be located.
 *
 * Return: allocated memory. return 98 if fails.
 */
void *malloc_checked(unsigned int b)
{
	char *alloc_mem;

	alloc_mem = malloc(b);
	if (alloc_mem == NULL)
		exit(98);
	return (alloc_mem);
}
