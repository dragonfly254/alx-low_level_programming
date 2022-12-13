#include "main.h"
/**
 * _strlen - computes the length of the string.
 *
 * @s: input string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
