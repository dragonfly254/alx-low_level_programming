#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: input array.
 * @size: the size of the integer.
 * @cmp: funtion pointer.
 *
 * Return: returns the index of the first element for which the cmp
 * function does not return 0.If no element matches, return -1 or
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
