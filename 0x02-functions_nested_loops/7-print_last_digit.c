#include "main.h"

/**
 * print_last_digit - prints the last digit of number
 * @n: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int a = n % 10;
	int j;

	if (a < 0)
	{
		a *= -1;
	}

	for  (j = 1; j <= 2; j++)
	{
		_putchar('0' + a);
	}
	return (0);
}
