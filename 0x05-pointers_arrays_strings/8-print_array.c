#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line.
 *
 * @a: array input.
 * @n: number of elements to be printed.
 *
 * Return: none.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
