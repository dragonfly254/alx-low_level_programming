#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: string to be reversed.
 *
 * Return: none.
 */
void rev_string(char *s)
{
	char tmp;
	int len = 0, i, j;

	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = tmp;
		}
	}
}
