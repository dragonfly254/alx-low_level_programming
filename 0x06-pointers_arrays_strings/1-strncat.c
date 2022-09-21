#include "main.h"
/**
 * _strncat - concatenates two strings.but takes utmost
 * n bytes from src
 *
 * @dest: destination location.
 * @src: source file.
 * @n: amount of bytes used from src.
 *
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter1 = 0, counter2 = 0;

	while (*(dest + counter1) != '\0')
		counter1++;
	while (counter2 < n)
	{
		*(dest + counter1) = *(src + counter2);
		if (*(src + counter2) != '\0')
			break;
		counter1++;
		counter2++;
	}
	return (dest);
}
