#include "main.h"
/**
 * _strchr - locates a character in a string.
 *
 * @s: input string.
 * @c: character to be searched
 *
 * Return: first occurrance of the character. Null if
 * character not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
