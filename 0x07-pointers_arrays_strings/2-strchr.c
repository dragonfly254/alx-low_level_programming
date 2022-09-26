#include "main.h"
/**
 * _strchr - locates a character in a string.
 *
 * @s: input string.
 * @c: character to be searched.
 *
 * Return: first occurrance of the character. Null if 
 * character not found.
 */
char *_strchr(char *s, char c)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == c)
			return (s + counter);
		counter++;
	}
	return (NULL);
}
