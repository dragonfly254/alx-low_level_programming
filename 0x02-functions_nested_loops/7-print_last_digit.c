#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: number
 *
 * Return: value of the last digit.
 */
int print_last_digit(int i)
{
	int m;

	m = i % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
