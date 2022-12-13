#include "main.h"

/**
 * _abs - absolute value of an intiger
 * @n: the intiger
 * Return: 0
 */

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = -1 * n;
		_putchar(a);
	}
	else
	{
		_putchar(n);
	}

	return (0);
}
