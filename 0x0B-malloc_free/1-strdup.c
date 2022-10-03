#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated.
 *
 * Return: a pointer to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *s_out;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s_out = (char *)malloc(sizeof(char) * (i + 1));

	if (s_out == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s_out[j] = str[j];

	return (s_out);
}
