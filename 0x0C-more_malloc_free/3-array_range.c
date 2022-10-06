#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: newly created array. if man > mix or malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*ar) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
