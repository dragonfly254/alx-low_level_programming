#include "main.h"
/**
 * power - return natural root of n.
 *
 * @n: integer input.
 * @c: iterator.
 *
 * Return: root or -1 if does not exists.
 */
int power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input number.
 *
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
