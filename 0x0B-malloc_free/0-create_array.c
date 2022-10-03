#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes with c.
 *
 * @size: size of space to be allocated.
 * @c: character to populate the array with.
 *
 * Return: NULL if size is 0. a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p_array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p_array = (char *)malloc(sizeof(c) * size);

	if (p_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p_array[i] = c;

	return (p_array);
}
